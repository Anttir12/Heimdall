/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    DavClnt.h

Abstract:

    This module defines the DAV specific functions that are exposed to the user

Revision History:

--*/

#ifndef _DAV_CLNT_H_
#define _DAV_CLNT_H_

#ifdef __cplusplus
extern "C" {
#endif

DWORD
WINAPI
DavAddConnection(
    __inout HANDLE *ConnectionHandle,
    __in LPCWSTR RemoteName,
    __in_opt LPCWSTR UserName,
    __in_opt LPCWSTR Password,
    __in_bcount(CertSize) PBYTE ClientCert,
    __in DWORD CertSize
    );

DWORD
WINAPI
DavDeleteConnection(
    __in HANDLE ConnectionHandle
    );

DWORD
WINAPI
DavGetUNCFromHTTPPath (
    __in LPCWSTR  HttpPath,
    __out_ecount(*lpSize) LPWSTR UncPath,
    IN OUT  LPDWORD lpSize
    );

DWORD
WINAPI
DavGetHTTPFromUNCPath (
    __in LPCWSTR  UncPath,
    __out_ecount(*lpSize) LPWSTR HttpPath,
    IN OUT  LPDWORD lpSize
    );

DWORD
WINAPI
DavGetTheLockOwnerOfTheFile(
    __in LPCWSTR FileName,
    __out_bcount_opt(*LockOwnerNameLengthInBytes) PWSTR LockOwnerName,
    __inout PULONG LockOwnerNameLengthInBytes
    );

DWORD
WINAPI
DavGetExtendedError(
    __in HANDLE hFile,
    __out DWORD *ExtError,
    __out_ecount(*cChSize) LPWSTR ExtErrorString,
    __inout DWORD *cChSize
    );

DWORD
WINAPI
DavFlushFile(
    __in HANDLE hFile
    );
	
DWORD
WINAPI
DavInvalidateCache(
	__in LPWSTR URLName
	);
        
DWORD
APIENTRY
DavCancelConnectionsToServer(
    __in LPWSTR lpName,
    BOOL fForce
    );

#ifdef __cplusplus
}
#endif

#endif

