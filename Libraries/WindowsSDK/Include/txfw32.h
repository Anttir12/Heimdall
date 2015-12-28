/*=============================================================================

	Copyright (c) 2002  Microsoft Corporation

	Module Name:

		Txfw32.h

	Abstract:

		Header for the exported API set for the Txf Win32
		API dynamic link library.
	Author:

		Jacob Lacouture [jacobl] May 9, 2002

	Environment:

		User Mode

	Revision History:


=============================================================================*/


#include <clfsw32.h>

#ifndef _TXF_W32_H_INCLUDED_
#define _TXF_W32_H_INCLUDED_


//
//  These are the different types of replication records that may be read from the log.
//

#define TXF_LOG_RECORD_TYPE_WRITE           0x01
#define TXF_LOG_RECORD_TYPE_TRUNCATE        0x02
#define TXF_LOG_RECORD_TYPE_AFFECTED_FILE   0x04

#define TXF_LOG_RECORD_GENERIC_TYPE_COMMIT  0x01
#define TXF_LOG_RECORD_GENERIC_TYPE_ABORT   0x02
#define TXF_LOG_RECORD_GENERIC_TYPE_PREPARE 0x04
#define TXF_LOG_RECORD_GENERIC_TYPE_DATA    0x08

//
//  Define alignment for all replication records.
//

#pragma pack(4)


//
//  The TXF_ID is exposed as a 128 bit structure.  This should NOT be treated as a GUID, in
//  that this is a unique identifier only within the context of the RM.  These may collide
//  between different RMs.
//


typedef struct _TXF_ID {
    struct {
        LONGLONG LowPart;
        LONGLONG HighPart;
    };
} TXF_ID, *PTXF_ID;

typedef GUID *PGUID;


//
//  This is the basic record.  If the entire record cannot be copied into the user's buffer,
//  at least this much may be copied if the buffer is big enough, so that the user can 
//  determine how large a buffer he needs.
//

typedef struct _TXF_LOG_RECORD_BASE {
    
    //
    //  This is a version identifier for the replication record generated by TXF.
    //

	USHORT Version;

    //
    //  Type of record, defined above.
    //
        
	USHORT RecordType;

    //
    //  Length of this record in bytes.
    //

	ULONG RecordLength;

} TXF_LOG_RECORD_BASE, *PTXF_LOG_RECORD_BASE;

//
//  This indicates a write.  If this write goes beyond the end of the file, that implies
//  an extension of the file.
//

typedef struct _TXF_LOG_RECORD_WRITE {

    //
    //  This is a version identifier for the replication record generated by TXF.
    //

	USHORT Version;

    //
    //  Type of record, defined above.
    //
        
	USHORT RecordType;

    //
    //  Length of this record in bytes.
    //

	ULONG RecordLength;

    //
    //  Record flags.  (none currently defined)
    //

	ULONG Flags;

    //
    //  TxfFileId for the file this record refers to.
    //

	TXF_ID TxfFileId;

    //
    //  This is the KTM transaction GUID for this update.
    //

    UUID KtmGuid;

    //
	//  Beginning location of the write, as an offset from the beginning of the file.
    //

	LONGLONG ByteOffsetInFile;

    //
	//  Number of bytes written.
    //

	ULONG NumBytesWritten;

    //
	//  Offset of the redo data (bytes written) from the beginning of this record.
    //
    
    ULONG ByteOffsetInStructure;
    
    //
    //  Length of the file name, in bytes.
    //

    ULONG FileNameLength;

    //
    //  Offset of the file name from the beginning of this record.
    //

    ULONG FileNameByteOffsetInStructure;


} TXF_LOG_RECORD_WRITE, *PTXF_LOG_RECORD_WRITE;

//
//  This is a truncate record.
//

typedef struct _TXF_LOG_RECORD_TRUNCATE {

    //
    //  This is a version identifier for the replication record generated by TXF.
    //

	USHORT Version;

    //
    //  Type of record, defined above.
    //
        
	USHORT RecordType;

    //
    //  Length of this record in bytes.
    //

	ULONG RecordLength;

    //
    //  Record flags.  (none currently defined)
    //

	ULONG Flags;

    //
    //  TxfFileId for the file this record refers to.
    //

	TXF_ID TxfFileId;

    //
    //  This is the KTM transaction GUID for this update.
    //

    UUID KtmGuid;

    //
	//  New size of the file.
    //

	LONGLONG NewFileSize;

    //
    //  Length of the file name, in bytes.
    //

    ULONG FileNameLength;

    //
    //  Offset of the file name from the beginning of this record.
    //

    ULONG FileNameByteOffsetInStructure;

} TXF_LOG_RECORD_TRUNCATE, *PTXF_LOG_RECORD_TRUNCATE;

//
//  This structure describes a file that was affected by
//  a transaction in a given virtual clock range.
//

typedef struct _TXF_LOG_RECORD_AFFECTED_FILE {

    //
    //  This is a version identifier for the replication record generated by TXF.
    //

	USHORT Version;

    //
    //  Length of this record in bytes.
    //

	ULONG RecordLength;

    //
    //  Record flags.  (none currently defined)
    //

	ULONG Flags;

    //
    //  TxfFileId for the file this record refers to.
    //

	TXF_ID TxfFileId;

    //
    //  This is the KTM transaction GUID for this update.
    //

    UUID KtmGuid;

    //
    //  Length of the file name, in bytes.
    //

    ULONG FileNameLength;

    //
    //  Offset of the file name from the beginning of this record.
    //

    ULONG FileNameByteOffsetInStructure;

} TXF_LOG_RECORD_AFFECTED_FILE, *PTXF_LOG_RECORD_AFFECTED_FILE;

#pragma pack()


//
//  The following are implemented in the TxfW32.dll module
//
#ifdef __cplusplus
extern "C" {
#endif

BOOL 
TxfLogCreateFileReadContext (
    IN LPCWSTR LogPath,
	IN CLFS_LSN BeginningLsn,
    IN CLFS_LSN EndingLsn,
	IN PTXF_ID TxfFileId,
    OUT PVOID *TxfLogContext
    );
/*

  Description:

    This context will be required to read any replication records.  In order to recover 
    resources, the context must later be closed by calling TxfLogDestroyReadContext.  
    Since the resources are allocated by a user-mode process, if that routine is not called, 
    the resources will be recovered automatically when the process hosting the DLL terminates.

  Parameter Definition:

    LogPath               - Location of the RM's CLFS BLF.

    BeginningLsn          - Start of LSN range to search. (inclusive)

    EndingLsn             - End of LSN range to search. (inclusive)

    TxfFileId             - TxfId to scan the log for.

    TxfLogContext - Pointer to new TxfLogContext

*/


BOOL 
TxfLogCreateRangeReadContext (
    IN LPCWSTR LogPath,
	IN CLFS_LSN BeginningLsn,
    IN CLFS_LSN EndingLsn,
    IN PLARGE_INTEGER BeginningVirtualClock,
    IN PLARGE_INTEGER EndingVirtualClock,
    IN ULONG RecordTypeMask,
    OUT PVOID *TxfLogContext
    );
/*

  Description:

    This context will be required to read any replication records.  In order to recover 
    resources, the context must later be closed by calling TxfLogDestroyReadContext.  
    Since the resources are allocated by a user-mode process, if that routine is not called, 
    the resources will be recovered automatically when the process hosting the DLL terminates.

  Parameter Definition:

    LogPath               - Location of the RM's CLFS BLF.

    BeginningLsn          - Start of LSN range to search. (inclusive)

    EndingLsn             - End of LSN range to search. (inclusive)

    TxfFileId             - TxfId to scan the log for.

    TxfLogContext - Pointer to new TxfLogContext

*/

BOOL 
TxfLogDestroyReadContext (
    IN PVOID TxfLogContext
    );
/*

  Description:

    See comments for TxfLogCreateReadContext

  Parameter Definition:

    TxfLogContext - Pointer to TxfLogContext to destroy.
  
*/


BOOL
TxfLogReadRecords (
    IN PVOID TxfLogContext,
    IN ULONG BufferLength,
    OUT PVOID Buffer,
    OUT PULONG BytesUsed,
    OUT PULONG RecordCount
    );
/*
  Description:

    If all of the available records were copied into the buffer, TRUE will be returned.  
    Otherwise, the return value will be FALSE.  If FALSE is returned, LastError should 
    be checked.

    Possible values for LastError are:

        ERROR_INVALID_HANDLE - The replication context is invalid.

        ERROR_MORE_DATA - Some records were copied into the buffer. 
            This routine should be called again to retrieve the rest.

        ERROR_INSUFFICIENT_BUFFER - There wasn't sufficient buffer 
            space to even copy one record.  If this is set, check the
            value of BytesUsed.  If this is nonzero, then there was 
            enough space to copy the TXF_LOG_RECORD_BASE
            record, which indicates how large a buffer is needed to
            read the next complete record.  Call back with a buffer 
            at least that size.  If BytesUsed is zero, the buffer
            provided to this routine was far too small.  Try again
            with a larger buffer.

        ERROR_FILE_CORRUPT - The format of the log file being 
            processed is unrecognized.

        Other error codes may be returned by CLFS.

    --------------------------------------------------------------------------------------
    NOTE: This routine will return all redo records in the log except for CLRs.  This 
          means that the replication client must be intelligent enough to discard records
          for transactions that will ultimately abort.  We provide the KTM GUID in each
          replication record to assist in this filtering.  Alternatively, the replication
          client could query the last LSN after each abort and commit are complete.  The
          scan could then be done only for ranges in which all the records are for 
          committed transactions.
    --------------------------------------------------------------------------------------

  Parameter Definition:

    TxfLogContext - Pointer to TxfLogContext

    BufferLength          - Length of buffer passed to this routine (in bytes)

    Buffer                - Address of buffer to copy records into.

    BytesUsed             - Amount of buffer actually used.

    RecordCount           - Number of records copied into the buffer.

*/


BOOL
TxfReadMetadataInfo (
    IN HANDLE FileHandle,
    OUT PTXF_ID TxfFileId,
    OUT PCLFS_LSN LastLsn,
    OUT PULONG TransactionState,
    OUT PGUID LockingTransaction
    );
/*
  Description:

    This routine will retrieve the TxfFileId, most recent LSN, and locking transaction (if
    applicable) for the specified file.  If the file has not had any transacted work done on
    it, it will have none of these properties and this call will return failure.

  Parameter Definition:

    FileHandle  - File to read the information for.

    TxfFileId   - Returned TxfId of the file.

    LastLsn     - Returned LastLsn for the file.

    TransactionState    - The state of the transaction locking this file.

    LockingTransaction  - If TransactionState != TXFS_TRANSACTION_STATE_NONE, the GUID of
                          the transaction locking the file.  Otherwise, this value has no
                          meaning.

*/


BOOL
TxfLogRecordGetFileName (
    __in_bcount(RecordBufferLengthInBytes) PVOID RecordBuffer,
    __in ULONG RecordBufferLengthInBytes,
    __out_bcount(NameBufferLengthInBytes) PWSTR NameBuffer,
    __inout PULONG NameBufferLengthInBytes,
    __out_opt PTXF_ID TxfId 
    );
/*
  Description:

    This routine will decode a TXF log record and copy the name of
    the file referred to by the record and optionally the TXF ID 
    for it.    

  Parameter Definition:

    RecordBuffer - The TXF log record.

    RecordBufferLengthInBytes - Length of RecordBuffer.

    NameBuffer - Returned name of the file referred to by RecordBuffer.

    NameBuffer - Supplied length of NameBuffer and returned length or
                 required length if buffer is too short.

    TxfFileId   - Returned TxfId of the file.

*/
    

BOOL
TxfLogRecordGetGenericType (
    IN     PVOID RecordBuffer,
    IN     ULONG RecordBufferLengthInBytes,
    OUT    PULONG GenericType,
    OUT    PLARGE_INTEGER VirtualClock OPTIONAL
    );
/*
  Description:

    This routine will decode a TXF log record and determine what type
    of record it is (commit, undo, etc.).  If the type has a virtual
    clock associated with it, then that is returned as well.
    
  Parameter Definition:

    RecordBuffer - The TXF log record.

    RecordBufferLengthInBytes - Length of RecordBuffer.

    GenericType - Returned type of record.

    VirtualClock - Virtual clock if the type has one (0 if not present).

*/


VOID
TxfSetThreadMiniVersionForCreate (
    IN USHORT MiniVersion
    );
/*
  Description:

    This routine is used to set the MiniVersion that a subsequent create should open.
    It should be returned to its previous state after calling create.  Therefore, prior
    to calling this routine, the caller should invoke TxfGetThreadMiniVersionForCreate.

  Parameter Definition:

    MiniVersion - A USHORT identifying which version should be opened by create.

*/

VOID
TxfGetThreadMiniVersionForCreate (
    OUT PUSHORT MiniVersion
    );
/*
  Description:

    This routine returns what MiniVersion a subsequent create is set to open.

  Parameter Definition:

    MiniVersion - Pointer to a USHORT which will receive the result.

*/


//
//  Either of these constants may be used to identify the miniversion to open.
//

#define TXFS_MINIVERSION_COMMITTED_VIEW                  (0x0000)
#define TXFS_MINIVERSION_DIRTY_VIEW                      (0xFFFF)
#define TXFS_MINIVERSION_DEFAULT_VIEW                    (0xFFFE)



#ifdef __cplusplus
//
//  extern "C"
//
}
#endif



//_TXF_W32_H_INCLUDED_
#endif


