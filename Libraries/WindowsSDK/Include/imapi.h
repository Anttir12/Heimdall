

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for imapi.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __imapi_h__
#define __imapi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDiscRecorder_FWD_DEFINED__
#define __IDiscRecorder_FWD_DEFINED__
typedef interface IDiscRecorder IDiscRecorder;
#endif 	/* __IDiscRecorder_FWD_DEFINED__ */


#ifndef __IEnumDiscRecorders_FWD_DEFINED__
#define __IEnumDiscRecorders_FWD_DEFINED__
typedef interface IEnumDiscRecorders IEnumDiscRecorders;
#endif 	/* __IEnumDiscRecorders_FWD_DEFINED__ */


#ifndef __IEnumDiscMasterFormats_FWD_DEFINED__
#define __IEnumDiscMasterFormats_FWD_DEFINED__
typedef interface IEnumDiscMasterFormats IEnumDiscMasterFormats;
#endif 	/* __IEnumDiscMasterFormats_FWD_DEFINED__ */


#ifndef __IRedbookDiscMaster_FWD_DEFINED__
#define __IRedbookDiscMaster_FWD_DEFINED__
typedef interface IRedbookDiscMaster IRedbookDiscMaster;
#endif 	/* __IRedbookDiscMaster_FWD_DEFINED__ */


#ifndef __IJolietDiscMaster_FWD_DEFINED__
#define __IJolietDiscMaster_FWD_DEFINED__
typedef interface IJolietDiscMaster IJolietDiscMaster;
#endif 	/* __IJolietDiscMaster_FWD_DEFINED__ */


#ifndef __IDiscMasterProgressEvents_FWD_DEFINED__
#define __IDiscMasterProgressEvents_FWD_DEFINED__
typedef interface IDiscMasterProgressEvents IDiscMasterProgressEvents;
#endif 	/* __IDiscMasterProgressEvents_FWD_DEFINED__ */


#ifndef __IDiscMaster_FWD_DEFINED__
#define __IDiscMaster_FWD_DEFINED__
typedef interface IDiscMaster IDiscMaster;
#endif 	/* __IDiscMaster_FWD_DEFINED__ */


#ifndef __MSDiscRecorderObj_FWD_DEFINED__
#define __MSDiscRecorderObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSDiscRecorderObj MSDiscRecorderObj;
#else
typedef struct MSDiscRecorderObj MSDiscRecorderObj;
#endif /* __cplusplus */

#endif 	/* __MSDiscRecorderObj_FWD_DEFINED__ */


#ifndef __MSDiscMasterObj_FWD_DEFINED__
#define __MSDiscMasterObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSDiscMasterObj MSDiscMasterObj;
#else
typedef struct MSDiscMasterObj MSDiscMasterObj;
#endif /* __cplusplus */

#endif 	/* __MSDiscMasterObj_FWD_DEFINED__ */


#ifndef __MSEnumDiscRecordersObj_FWD_DEFINED__
#define __MSEnumDiscRecordersObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSEnumDiscRecordersObj MSEnumDiscRecordersObj;
#else
typedef struct MSEnumDiscRecordersObj MSEnumDiscRecordersObj;
#endif /* __cplusplus */

#endif 	/* __MSEnumDiscRecordersObj_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_imapi_0000_0000 */
/* [local] */ 

// this assert will cause compilation breaks in clients whose code would cause stack corruption
// when writing to our boolean pointer
C_ASSERT(sizeof(boolean) == 1);


extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_0000_v0_0_s_ifspec;

#ifndef __IDiscRecorder_INTERFACE_DEFINED__
#define __IDiscRecorder_INTERFACE_DEFINED__

/* interface IDiscRecorder */
/* [unique][helpstring][uuid][object] */ 


enum MEDIA_TYPES
    {	MEDIA_CDDA_CDROM	= 1,
	MEDIA_CD_ROM_XA	= ( MEDIA_CDDA_CDROM + 1 ) ,
	MEDIA_CD_I	= ( MEDIA_CD_ROM_XA + 1 ) ,
	MEDIA_CD_EXTRA	= ( MEDIA_CD_I + 1 ) ,
	MEDIA_CD_OTHER	= ( MEDIA_CD_EXTRA + 1 ) ,
	MEDIA_SPECIAL	= ( MEDIA_CD_OTHER + 1 ) 
    } ;

enum MEDIA_FLAGS
    {	MEDIA_BLANK	= 0x1,
	MEDIA_RW	= 0x2,
	MEDIA_WRITABLE	= 0x4,
	MEDIA_FORMAT_UNUSABLE_BY_IMAPI	= 0x8
    } ;

enum RECORDER_TYPES
    {	RECORDER_CDR	= 0x1,
	RECORDER_CDRW	= 0x2
    } ;
#define	RECORDER_DOING_NOTHING	( 0 )

#define	RECORDER_OPENED	( 0x1 )

#define	RECORDER_BURNING	( 0x2 )


EXTERN_C const IID IID_IDiscRecorder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85AC9776-CA88-4cf2-894E-09598C078A41")
    IDiscRecorder : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [size_is][in] */ __RPC__in_ecount_full(nulIDSize) byte *pbyUniqueID,
            /* [in] */ ULONG nulIDSize,
            /* [in] */ ULONG nulDriveNumber) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecorderGUID( 
            /* [size_is][unique][out][in] */ __RPC__inout_ecount_full_opt(ulBufferSize) byte *pbyUniqueID,
            /* [in] */ ULONG ulBufferSize,
            /* [out] */ __RPC__out ULONG *pulReturnSizeRequired) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecorderType( 
            /* [out] */ __RPC__out long *fTypeCode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDisplayNames( 
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt BSTR *pbstrVendorID,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt BSTR *pbstrProductID,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt BSTR *pbstrRevision) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBasePnPID( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrBasePnPID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPath( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrPath) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecorderProperties( 
            /* [out] */ __RPC__deref_out_opt IPropertyStorage **ppPropStg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRecorderProperties( 
            /* [in] */ __RPC__in_opt IPropertyStorage *pPropStg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecorderState( 
            /* [out] */ __RPC__out ULONG *pulDevStateFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenExclusive( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryMediaType( 
            /* [out] */ __RPC__out long *fMediaType,
            /* [out] */ __RPC__out long *fMediaFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryMediaInfo( 
            /* [out] */ __RPC__out byte *pbSessions,
            /* [out] */ __RPC__out byte *pbLastTrack,
            /* [out] */ __RPC__out ULONG *ulStartAddress,
            /* [out] */ __RPC__out ULONG *ulNextWritable,
            /* [out] */ __RPC__out ULONG *ulFreeBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Eject( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Erase( 
            /* [in] */ boolean bFullErase) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDiscRecorderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiscRecorder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiscRecorder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiscRecorder * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IDiscRecorder * This,
            /* [size_is][in] */ __RPC__in_ecount_full(nulIDSize) byte *pbyUniqueID,
            /* [in] */ ULONG nulIDSize,
            /* [in] */ ULONG nulDriveNumber);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecorderGUID )( 
            IDiscRecorder * This,
            /* [size_is][unique][out][in] */ __RPC__inout_ecount_full_opt(ulBufferSize) byte *pbyUniqueID,
            /* [in] */ ULONG ulBufferSize,
            /* [out] */ __RPC__out ULONG *pulReturnSizeRequired);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecorderType )( 
            IDiscRecorder * This,
            /* [out] */ __RPC__out long *fTypeCode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDisplayNames )( 
            IDiscRecorder * This,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt BSTR *pbstrVendorID,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt BSTR *pbstrProductID,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt BSTR *pbstrRevision);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBasePnPID )( 
            IDiscRecorder * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrBasePnPID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            IDiscRecorder * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrPath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecorderProperties )( 
            IDiscRecorder * This,
            /* [out] */ __RPC__deref_out_opt IPropertyStorage **ppPropStg);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRecorderProperties )( 
            IDiscRecorder * This,
            /* [in] */ __RPC__in_opt IPropertyStorage *pPropStg);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecorderState )( 
            IDiscRecorder * This,
            /* [out] */ __RPC__out ULONG *pulDevStateFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenExclusive )( 
            IDiscRecorder * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryMediaType )( 
            IDiscRecorder * This,
            /* [out] */ __RPC__out long *fMediaType,
            /* [out] */ __RPC__out long *fMediaFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryMediaInfo )( 
            IDiscRecorder * This,
            /* [out] */ __RPC__out byte *pbSessions,
            /* [out] */ __RPC__out byte *pbLastTrack,
            /* [out] */ __RPC__out ULONG *ulStartAddress,
            /* [out] */ __RPC__out ULONG *ulNextWritable,
            /* [out] */ __RPC__out ULONG *ulFreeBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Eject )( 
            IDiscRecorder * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Erase )( 
            IDiscRecorder * This,
            /* [in] */ boolean bFullErase);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IDiscRecorder * This);
        
        END_INTERFACE
    } IDiscRecorderVtbl;

    interface IDiscRecorder
    {
        CONST_VTBL struct IDiscRecorderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiscRecorder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiscRecorder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiscRecorder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiscRecorder_Init(This,pbyUniqueID,nulIDSize,nulDriveNumber)	\
    ( (This)->lpVtbl -> Init(This,pbyUniqueID,nulIDSize,nulDriveNumber) ) 

#define IDiscRecorder_GetRecorderGUID(This,pbyUniqueID,ulBufferSize,pulReturnSizeRequired)	\
    ( (This)->lpVtbl -> GetRecorderGUID(This,pbyUniqueID,ulBufferSize,pulReturnSizeRequired) ) 

#define IDiscRecorder_GetRecorderType(This,fTypeCode)	\
    ( (This)->lpVtbl -> GetRecorderType(This,fTypeCode) ) 

#define IDiscRecorder_GetDisplayNames(This,pbstrVendorID,pbstrProductID,pbstrRevision)	\
    ( (This)->lpVtbl -> GetDisplayNames(This,pbstrVendorID,pbstrProductID,pbstrRevision) ) 

#define IDiscRecorder_GetBasePnPID(This,pbstrBasePnPID)	\
    ( (This)->lpVtbl -> GetBasePnPID(This,pbstrBasePnPID) ) 

#define IDiscRecorder_GetPath(This,pbstrPath)	\
    ( (This)->lpVtbl -> GetPath(This,pbstrPath) ) 

#define IDiscRecorder_GetRecorderProperties(This,ppPropStg)	\
    ( (This)->lpVtbl -> GetRecorderProperties(This,ppPropStg) ) 

#define IDiscRecorder_SetRecorderProperties(This,pPropStg)	\
    ( (This)->lpVtbl -> SetRecorderProperties(This,pPropStg) ) 

#define IDiscRecorder_GetRecorderState(This,pulDevStateFlags)	\
    ( (This)->lpVtbl -> GetRecorderState(This,pulDevStateFlags) ) 

#define IDiscRecorder_OpenExclusive(This)	\
    ( (This)->lpVtbl -> OpenExclusive(This) ) 

#define IDiscRecorder_QueryMediaType(This,fMediaType,fMediaFlags)	\
    ( (This)->lpVtbl -> QueryMediaType(This,fMediaType,fMediaFlags) ) 

#define IDiscRecorder_QueryMediaInfo(This,pbSessions,pbLastTrack,ulStartAddress,ulNextWritable,ulFreeBlocks)	\
    ( (This)->lpVtbl -> QueryMediaInfo(This,pbSessions,pbLastTrack,ulStartAddress,ulNextWritable,ulFreeBlocks) ) 

#define IDiscRecorder_Eject(This)	\
    ( (This)->lpVtbl -> Eject(This) ) 

#define IDiscRecorder_Erase(This,bFullErase)	\
    ( (This)->lpVtbl -> Erase(This,bFullErase) ) 

#define IDiscRecorder_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiscRecorder_INTERFACE_DEFINED__ */


#ifndef __IEnumDiscRecorders_INTERFACE_DEFINED__
#define __IEnumDiscRecorders_INTERFACE_DEFINED__

/* interface IEnumDiscRecorders */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IEnumDiscRecorders;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B1921E1-54AC-11d3-9144-00104BA11C5E")
    IEnumDiscRecorders : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cRecorders,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(cRecorders, *pcFetched) IDiscRecorder **ppRecorder,
            /* [out] */ __RPC__out ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cRecorders) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumDiscRecorders **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDiscRecordersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDiscRecorders * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDiscRecorders * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDiscRecorders * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDiscRecorders * This,
            /* [in] */ ULONG cRecorders,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(cRecorders, *pcFetched) IDiscRecorder **ppRecorder,
            /* [out] */ __RPC__out ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDiscRecorders * This,
            /* [in] */ ULONG cRecorders);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDiscRecorders * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDiscRecorders * This,
            /* [out] */ __RPC__deref_out_opt IEnumDiscRecorders **ppEnum);
        
        END_INTERFACE
    } IEnumDiscRecordersVtbl;

    interface IEnumDiscRecorders
    {
        CONST_VTBL struct IEnumDiscRecordersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDiscRecorders_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumDiscRecorders_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumDiscRecorders_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumDiscRecorders_Next(This,cRecorders,ppRecorder,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,cRecorders,ppRecorder,pcFetched) ) 

#define IEnumDiscRecorders_Skip(This,cRecorders)	\
    ( (This)->lpVtbl -> Skip(This,cRecorders) ) 

#define IEnumDiscRecorders_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumDiscRecorders_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumDiscRecorders_INTERFACE_DEFINED__ */


#ifndef __IEnumDiscMasterFormats_INTERFACE_DEFINED__
#define __IEnumDiscMasterFormats_INTERFACE_DEFINED__

/* interface IEnumDiscMasterFormats */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IEnumDiscMasterFormats;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DDF445E1-54BA-11d3-9144-00104BA11C5E")
    IEnumDiscMasterFormats : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cFormats,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(cFormats, *pcFetched) LPIID lpiidFormatID,
            /* [out] */ __RPC__out ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cFormats) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumDiscMasterFormats **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDiscMasterFormatsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDiscMasterFormats * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDiscMasterFormats * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDiscMasterFormats * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDiscMasterFormats * This,
            /* [in] */ ULONG cFormats,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(cFormats, *pcFetched) LPIID lpiidFormatID,
            /* [out] */ __RPC__out ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDiscMasterFormats * This,
            /* [in] */ ULONG cFormats);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDiscMasterFormats * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDiscMasterFormats * This,
            /* [out] */ __RPC__deref_out_opt IEnumDiscMasterFormats **ppEnum);
        
        END_INTERFACE
    } IEnumDiscMasterFormatsVtbl;

    interface IEnumDiscMasterFormats
    {
        CONST_VTBL struct IEnumDiscMasterFormatsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDiscMasterFormats_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumDiscMasterFormats_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumDiscMasterFormats_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumDiscMasterFormats_Next(This,cFormats,lpiidFormatID,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,cFormats,lpiidFormatID,pcFetched) ) 

#define IEnumDiscMasterFormats_Skip(This,cFormats)	\
    ( (This)->lpVtbl -> Skip(This,cFormats) ) 

#define IEnumDiscMasterFormats_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumDiscMasterFormats_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumDiscMasterFormats_INTERFACE_DEFINED__ */


#ifndef __IRedbookDiscMaster_INTERFACE_DEFINED__
#define __IRedbookDiscMaster_INTERFACE_DEFINED__

/* interface IRedbookDiscMaster */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRedbookDiscMaster;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3BC42CD-4E5C-11D3-9144-00104BA11C5E")
    IRedbookDiscMaster : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTotalAudioTracks( 
            /* [retval][out] */ __RPC__out long *pnTracks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTotalAudioBlocks( 
            /* [retval][out] */ __RPC__out long *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUsedAudioBlocks( 
            /* [retval][out] */ __RPC__out long *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAvailableAudioTrackBlocks( 
            /* [retval][out] */ __RPC__out long *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAudioBlockSize( 
            /* [retval][out] */ __RPC__out long *pnBlockBytes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateAudioTrack( 
            /* [in] */ long nBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddAudioTrackBlocks( 
            /* [size_is][in] */ __RPC__in_ecount_full(cb) byte *pby,
            /* [in] */ long cb) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseAudioTrack( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRedbookDiscMasterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRedbookDiscMaster * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRedbookDiscMaster * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRedbookDiscMaster * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTotalAudioTracks )( 
            IRedbookDiscMaster * This,
            /* [retval][out] */ __RPC__out long *pnTracks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTotalAudioBlocks )( 
            IRedbookDiscMaster * This,
            /* [retval][out] */ __RPC__out long *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUsedAudioBlocks )( 
            IRedbookDiscMaster * This,
            /* [retval][out] */ __RPC__out long *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAvailableAudioTrackBlocks )( 
            IRedbookDiscMaster * This,
            /* [retval][out] */ __RPC__out long *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAudioBlockSize )( 
            IRedbookDiscMaster * This,
            /* [retval][out] */ __RPC__out long *pnBlockBytes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateAudioTrack )( 
            IRedbookDiscMaster * This,
            /* [in] */ long nBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAudioTrackBlocks )( 
            IRedbookDiscMaster * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cb) byte *pby,
            /* [in] */ long cb);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloseAudioTrack )( 
            IRedbookDiscMaster * This);
        
        END_INTERFACE
    } IRedbookDiscMasterVtbl;

    interface IRedbookDiscMaster
    {
        CONST_VTBL struct IRedbookDiscMasterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRedbookDiscMaster_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRedbookDiscMaster_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRedbookDiscMaster_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRedbookDiscMaster_GetTotalAudioTracks(This,pnTracks)	\
    ( (This)->lpVtbl -> GetTotalAudioTracks(This,pnTracks) ) 

#define IRedbookDiscMaster_GetTotalAudioBlocks(This,pnBlocks)	\
    ( (This)->lpVtbl -> GetTotalAudioBlocks(This,pnBlocks) ) 

#define IRedbookDiscMaster_GetUsedAudioBlocks(This,pnBlocks)	\
    ( (This)->lpVtbl -> GetUsedAudioBlocks(This,pnBlocks) ) 

#define IRedbookDiscMaster_GetAvailableAudioTrackBlocks(This,pnBlocks)	\
    ( (This)->lpVtbl -> GetAvailableAudioTrackBlocks(This,pnBlocks) ) 

#define IRedbookDiscMaster_GetAudioBlockSize(This,pnBlockBytes)	\
    ( (This)->lpVtbl -> GetAudioBlockSize(This,pnBlockBytes) ) 

#define IRedbookDiscMaster_CreateAudioTrack(This,nBlocks)	\
    ( (This)->lpVtbl -> CreateAudioTrack(This,nBlocks) ) 

#define IRedbookDiscMaster_AddAudioTrackBlocks(This,pby,cb)	\
    ( (This)->lpVtbl -> AddAudioTrackBlocks(This,pby,cb) ) 

#define IRedbookDiscMaster_CloseAudioTrack(This)	\
    ( (This)->lpVtbl -> CloseAudioTrack(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRedbookDiscMaster_INTERFACE_DEFINED__ */


#ifndef __IJolietDiscMaster_INTERFACE_DEFINED__
#define __IJolietDiscMaster_INTERFACE_DEFINED__

/* interface IJolietDiscMaster */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IJolietDiscMaster;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3BC42CE-4E5C-11D3-9144-00104BA11C5E")
    IJolietDiscMaster : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTotalDataBlocks( 
            /* [retval][out] */ __RPC__out long *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUsedDataBlocks( 
            /* [retval][out] */ __RPC__out long *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDataBlockSize( 
            /* [retval][out] */ __RPC__out long *pnBlockBytes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddData( 
            /* [in] */ __RPC__in_opt IStorage *pStorage,
            long lFileOverwrite) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetJolietProperties( 
            /* [out] */ __RPC__deref_out_opt IPropertyStorage **ppPropStg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetJolietProperties( 
            /* [in] */ __RPC__in_opt IPropertyStorage *pPropStg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IJolietDiscMasterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IJolietDiscMaster * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IJolietDiscMaster * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IJolietDiscMaster * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTotalDataBlocks )( 
            IJolietDiscMaster * This,
            /* [retval][out] */ __RPC__out long *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUsedDataBlocks )( 
            IJolietDiscMaster * This,
            /* [retval][out] */ __RPC__out long *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDataBlockSize )( 
            IJolietDiscMaster * This,
            /* [retval][out] */ __RPC__out long *pnBlockBytes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddData )( 
            IJolietDiscMaster * This,
            /* [in] */ __RPC__in_opt IStorage *pStorage,
            long lFileOverwrite);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetJolietProperties )( 
            IJolietDiscMaster * This,
            /* [out] */ __RPC__deref_out_opt IPropertyStorage **ppPropStg);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetJolietProperties )( 
            IJolietDiscMaster * This,
            /* [in] */ __RPC__in_opt IPropertyStorage *pPropStg);
        
        END_INTERFACE
    } IJolietDiscMasterVtbl;

    interface IJolietDiscMaster
    {
        CONST_VTBL struct IJolietDiscMasterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJolietDiscMaster_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IJolietDiscMaster_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IJolietDiscMaster_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IJolietDiscMaster_GetTotalDataBlocks(This,pnBlocks)	\
    ( (This)->lpVtbl -> GetTotalDataBlocks(This,pnBlocks) ) 

#define IJolietDiscMaster_GetUsedDataBlocks(This,pnBlocks)	\
    ( (This)->lpVtbl -> GetUsedDataBlocks(This,pnBlocks) ) 

#define IJolietDiscMaster_GetDataBlockSize(This,pnBlockBytes)	\
    ( (This)->lpVtbl -> GetDataBlockSize(This,pnBlockBytes) ) 

#define IJolietDiscMaster_AddData(This,pStorage,lFileOverwrite)	\
    ( (This)->lpVtbl -> AddData(This,pStorage,lFileOverwrite) ) 

#define IJolietDiscMaster_GetJolietProperties(This,ppPropStg)	\
    ( (This)->lpVtbl -> GetJolietProperties(This,ppPropStg) ) 

#define IJolietDiscMaster_SetJolietProperties(This,pPropStg)	\
    ( (This)->lpVtbl -> SetJolietProperties(This,pPropStg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IJolietDiscMaster_INTERFACE_DEFINED__ */


#ifndef __IDiscMasterProgressEvents_INTERFACE_DEFINED__
#define __IDiscMasterProgressEvents_INTERFACE_DEFINED__

/* interface IDiscMasterProgressEvents */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDiscMasterProgressEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC9E51C1-4E5D-11D3-9144-00104BA11C5E")
    IDiscMasterProgressEvents : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryCancel( 
            /* [retval][out] */ __RPC__out boolean *pbCancel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyPnPActivity( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyAddProgress( 
            /* [in] */ long nCompletedSteps,
            /* [in] */ long nTotalSteps) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyBlockProgress( 
            /* [in] */ long nCompleted,
            /* [in] */ long nTotal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyTrackProgress( 
            /* [in] */ long nCurrentTrack,
            /* [in] */ long nTotalTracks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyPreparingBurn( 
            /* [in] */ long nEstimatedSeconds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyClosingDisc( 
            /* [in] */ long nEstimatedSeconds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyBurnComplete( 
            /* [in] */ HRESULT status) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyEraseComplete( 
            /* [in] */ HRESULT status) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDiscMasterProgressEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiscMasterProgressEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiscMasterProgressEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiscMasterProgressEvents * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryCancel )( 
            IDiscMasterProgressEvents * This,
            /* [retval][out] */ __RPC__out boolean *pbCancel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyPnPActivity )( 
            IDiscMasterProgressEvents * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyAddProgress )( 
            IDiscMasterProgressEvents * This,
            /* [in] */ long nCompletedSteps,
            /* [in] */ long nTotalSteps);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyBlockProgress )( 
            IDiscMasterProgressEvents * This,
            /* [in] */ long nCompleted,
            /* [in] */ long nTotal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyTrackProgress )( 
            IDiscMasterProgressEvents * This,
            /* [in] */ long nCurrentTrack,
            /* [in] */ long nTotalTracks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyPreparingBurn )( 
            IDiscMasterProgressEvents * This,
            /* [in] */ long nEstimatedSeconds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyClosingDisc )( 
            IDiscMasterProgressEvents * This,
            /* [in] */ long nEstimatedSeconds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyBurnComplete )( 
            IDiscMasterProgressEvents * This,
            /* [in] */ HRESULT status);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyEraseComplete )( 
            IDiscMasterProgressEvents * This,
            /* [in] */ HRESULT status);
        
        END_INTERFACE
    } IDiscMasterProgressEventsVtbl;

    interface IDiscMasterProgressEvents
    {
        CONST_VTBL struct IDiscMasterProgressEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiscMasterProgressEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiscMasterProgressEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiscMasterProgressEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiscMasterProgressEvents_QueryCancel(This,pbCancel)	\
    ( (This)->lpVtbl -> QueryCancel(This,pbCancel) ) 

#define IDiscMasterProgressEvents_NotifyPnPActivity(This)	\
    ( (This)->lpVtbl -> NotifyPnPActivity(This) ) 

#define IDiscMasterProgressEvents_NotifyAddProgress(This,nCompletedSteps,nTotalSteps)	\
    ( (This)->lpVtbl -> NotifyAddProgress(This,nCompletedSteps,nTotalSteps) ) 

#define IDiscMasterProgressEvents_NotifyBlockProgress(This,nCompleted,nTotal)	\
    ( (This)->lpVtbl -> NotifyBlockProgress(This,nCompleted,nTotal) ) 

#define IDiscMasterProgressEvents_NotifyTrackProgress(This,nCurrentTrack,nTotalTracks)	\
    ( (This)->lpVtbl -> NotifyTrackProgress(This,nCurrentTrack,nTotalTracks) ) 

#define IDiscMasterProgressEvents_NotifyPreparingBurn(This,nEstimatedSeconds)	\
    ( (This)->lpVtbl -> NotifyPreparingBurn(This,nEstimatedSeconds) ) 

#define IDiscMasterProgressEvents_NotifyClosingDisc(This,nEstimatedSeconds)	\
    ( (This)->lpVtbl -> NotifyClosingDisc(This,nEstimatedSeconds) ) 

#define IDiscMasterProgressEvents_NotifyBurnComplete(This,status)	\
    ( (This)->lpVtbl -> NotifyBurnComplete(This,status) ) 

#define IDiscMasterProgressEvents_NotifyEraseComplete(This,status)	\
    ( (This)->lpVtbl -> NotifyEraseComplete(This,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiscMasterProgressEvents_INTERFACE_DEFINED__ */


#ifndef __IDiscMaster_INTERFACE_DEFINED__
#define __IDiscMaster_INTERFACE_DEFINED__

/* interface IDiscMaster */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDiscMaster;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("520CCA62-51A5-11D3-9144-00104BA11C5E")
    IDiscMaster : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Open( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumDiscMasterFormats( 
            /* [out] */ __RPC__deref_out_opt IEnumDiscMasterFormats **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetActiveDiscMasterFormat( 
            /* [out] */ __RPC__out LPIID lpiid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetActiveDiscMasterFormat( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppUnk) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumDiscRecorders( 
            /* [out] */ __RPC__deref_out_opt IEnumDiscRecorders **ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetActiveDiscRecorder( 
            /* [out] */ __RPC__deref_out_opt IDiscRecorder **ppRecorder) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetActiveDiscRecorder( 
            /* [in] */ __RPC__in_opt IDiscRecorder *pRecorder) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearFormatContent( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ProgressAdvise( 
            /* [in] */ __RPC__in_opt IDiscMasterProgressEvents *pEvents,
            /* [retval][out] */ __RPC__out UINT_PTR *pvCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ProgressUnadvise( 
            /* [in] */ UINT_PTR vCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RecordDisc( 
            /* [in] */ boolean bSimulate,
            /* [in] */ boolean bEjectAfterBurn) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDiscMasterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiscMaster * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiscMaster * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiscMaster * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IDiscMaster * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnumDiscMasterFormats )( 
            IDiscMaster * This,
            /* [out] */ __RPC__deref_out_opt IEnumDiscMasterFormats **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetActiveDiscMasterFormat )( 
            IDiscMaster * This,
            /* [out] */ __RPC__out LPIID lpiid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetActiveDiscMasterFormat )( 
            IDiscMaster * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppUnk);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnumDiscRecorders )( 
            IDiscMaster * This,
            /* [out] */ __RPC__deref_out_opt IEnumDiscRecorders **ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetActiveDiscRecorder )( 
            IDiscMaster * This,
            /* [out] */ __RPC__deref_out_opt IDiscRecorder **ppRecorder);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetActiveDiscRecorder )( 
            IDiscMaster * This,
            /* [in] */ __RPC__in_opt IDiscRecorder *pRecorder);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearFormatContent )( 
            IDiscMaster * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ProgressAdvise )( 
            IDiscMaster * This,
            /* [in] */ __RPC__in_opt IDiscMasterProgressEvents *pEvents,
            /* [retval][out] */ __RPC__out UINT_PTR *pvCookie);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ProgressUnadvise )( 
            IDiscMaster * This,
            /* [in] */ UINT_PTR vCookie);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RecordDisc )( 
            IDiscMaster * This,
            /* [in] */ boolean bSimulate,
            /* [in] */ boolean bEjectAfterBurn);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IDiscMaster * This);
        
        END_INTERFACE
    } IDiscMasterVtbl;

    interface IDiscMaster
    {
        CONST_VTBL struct IDiscMasterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiscMaster_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiscMaster_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiscMaster_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiscMaster_Open(This)	\
    ( (This)->lpVtbl -> Open(This) ) 

#define IDiscMaster_EnumDiscMasterFormats(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumDiscMasterFormats(This,ppEnum) ) 

#define IDiscMaster_GetActiveDiscMasterFormat(This,lpiid)	\
    ( (This)->lpVtbl -> GetActiveDiscMasterFormat(This,lpiid) ) 

#define IDiscMaster_SetActiveDiscMasterFormat(This,riid,ppUnk)	\
    ( (This)->lpVtbl -> SetActiveDiscMasterFormat(This,riid,ppUnk) ) 

#define IDiscMaster_EnumDiscRecorders(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumDiscRecorders(This,ppEnum) ) 

#define IDiscMaster_GetActiveDiscRecorder(This,ppRecorder)	\
    ( (This)->lpVtbl -> GetActiveDiscRecorder(This,ppRecorder) ) 

#define IDiscMaster_SetActiveDiscRecorder(This,pRecorder)	\
    ( (This)->lpVtbl -> SetActiveDiscRecorder(This,pRecorder) ) 

#define IDiscMaster_ClearFormatContent(This)	\
    ( (This)->lpVtbl -> ClearFormatContent(This) ) 

#define IDiscMaster_ProgressAdvise(This,pEvents,pvCookie)	\
    ( (This)->lpVtbl -> ProgressAdvise(This,pEvents,pvCookie) ) 

#define IDiscMaster_ProgressUnadvise(This,vCookie)	\
    ( (This)->lpVtbl -> ProgressUnadvise(This,vCookie) ) 

#define IDiscMaster_RecordDisc(This,bSimulate,bEjectAfterBurn)	\
    ( (This)->lpVtbl -> RecordDisc(This,bSimulate,bEjectAfterBurn) ) 

#define IDiscMaster_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiscMaster_INTERFACE_DEFINED__ */



#ifndef __IMAPILib_LIBRARY_DEFINED__
#define __IMAPILib_LIBRARY_DEFINED__

/* library IMAPILib */
/* [helpstring][version][uuid] */ 





EXTERN_C const IID LIBID_IMAPILib;

EXTERN_C const CLSID CLSID_MSDiscRecorderObj;

#ifdef __cplusplus

class DECLSPEC_UUID("520CCA61-51A5-11D3-9144-00104BA11C5E")
MSDiscRecorderObj;
#endif

EXTERN_C const CLSID CLSID_MSDiscMasterObj;

#ifdef __cplusplus

class DECLSPEC_UUID("520CCA63-51A5-11D3-9144-00104BA11C5E")
MSDiscMasterObj;
#endif

EXTERN_C const CLSID CLSID_MSEnumDiscRecordersObj;

#ifdef __cplusplus

class DECLSPEC_UUID("8A03567A-63CB-4BA8-BAF6-52119816D1EF")
MSEnumDiscRecordersObj;
#endif
#endif /* __IMAPILib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



