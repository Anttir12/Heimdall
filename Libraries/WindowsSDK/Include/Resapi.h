/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    resapi.h

Abstract:

    This module defines the interface exported by Windows Clusters resources.

Revision History:

--*/

#ifndef _RESAPI_DEFINES_
#define _RESAPI_DEFINES_

#if _MSC_VER > 1000
#pragma once
#endif

#include <windows.h>
#include <winsvc.h>
#include <clusapi.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#define IN
#define OUT

//
// Definitions for entrypoints exported by a resource DLL.
//
#define STARTUP_ROUTINE "Startup"

#define CLRES_V1_FUNCTION_SIZE   sizeof(CLRES_V1_FUNCTIONS)
#define CLRES_VERSION_V1_00    0x100

#define CLRES_V1_FUNCTION_TABLE( _Name,                     \
                                 _Version,                  \
                                 _Prefix,                   \
                                 _Arbitrate,                \
                                 _Release,                  \
                                 _ResControl,               \
                                 _ResTypeControl            \
                                 )                          \
CLRES_FUNCTION_TABLE _Name = { CLRES_V1_FUNCTION_SIZE,      \
                               _Version,                    \
                               _Prefix##Open,               \
                               _Prefix##Close,              \
                               _Prefix##Online,             \
                               _Prefix##Offline,            \
                               _Prefix##Terminate,          \
                               _Prefix##LooksAlive,         \
                               _Prefix##IsAlive,            \
                               _Arbitrate,                  \
                               _Release,                    \
                               _ResControl,                 \
                               _ResTypeControl }

#endif // ifndef _RESAPI_DEFINES_

#ifndef _RESAPI_
#define _RESAPI_

//
// Define a RESID
//

typedef PVOID RESID;

//
// Define a RESOURCE_HANDLE
//

typedef HANDLE   RESOURCE_HANDLE;

//
// Define the Resource Status structure.
//

#define ClusterResourceCannotComeOnlineOnThisNode ( CLUSTER_RESOURCE_STATE ) ( ClusterResourcePending - 1 )
#define ClusterResourceCannotComeOnlineOnAnyNode  ( CLUSTER_RESOURCE_STATE ) ( ClusterResourcePending - 2 )

typedef struct RESOURCE_STATUS {
    CLUSTER_RESOURCE_STATE  ResourceState;
    DWORD           CheckPoint;
    DWORD           WaitHint;
    HANDLE          EventHandle;
} RESOURCE_STATUS, *PRESOURCE_STATUS;


#define ResUtilInitializeResourceStatus( _resource_status_ ) \
    ZeroMemory( _resource_status_, sizeof(RESOURCE_STATUS) )

//
// Define Resource DLL callback method for updating the state of a resource.
//

typedef
DWORD
(_stdcall *PSET_RESOURCE_STATUS_ROUTINE) (
    IN RESOURCE_HANDLE ResourceHandle,
    IN PRESOURCE_STATUS ResourceStatus
    );

//
// Define Resource DLL callback method for notifying that a quorum
// resource DLL failed to hold the quorum resource.
//
typedef
VOID
(_stdcall *PQUORUM_RESOURCE_LOST) (
    IN RESOURCE_HANDLE Resource
    );

//
// Define Resource DLL callback method for logging events.
//
typedef enum LOG_LEVEL {
    LOG_INFORMATION,
    LOG_WARNING,
    LOG_ERROR,
    LOG_SEVERE
} LOG_LEVEL, *PLOG_LEVEL;

typedef
VOID
(_stdcall *PLOG_EVENT_ROUTINE) (
    IN RESOURCE_HANDLE ResourceHandle,
    IN LOG_LEVEL LogLevel,
    IN LPCWSTR FormatString,
    ...
    );

typedef
RESID
(_stdcall *POPEN_ROUTINE) (
    IN LPCWSTR ResourceName,
    IN HKEY ResourceKey,
    IN RESOURCE_HANDLE ResourceHandle
    );

typedef
VOID
(_stdcall *PCLOSE_ROUTINE) (
    IN RESID Resource
    );

typedef
DWORD
(_stdcall *PONLINE_ROUTINE) (
    IN RESID Resource,
    IN OUT LPHANDLE EventHandle
    );

typedef
DWORD
(_stdcall *POFFLINE_ROUTINE) (
    IN RESID Resource
    );

typedef
VOID
(_stdcall *PTERMINATE_ROUTINE) (
    IN RESID Resource
    );

typedef
BOOL
(_stdcall *PIS_ALIVE_ROUTINE) (
    IN RESID Resource
    );

typedef
BOOL
(_stdcall *PLOOKS_ALIVE_ROUTINE) (
    IN RESID Resource
    );

typedef
DWORD
(_stdcall *PARBITRATE_ROUTINE) (
    IN RESID Resource,
    IN PQUORUM_RESOURCE_LOST LostQuorumResource
    );

typedef
DWORD
(_stdcall *PRELEASE_ROUTINE) (
    IN RESID Resource
    );

typedef
DWORD
(_stdcall *PRESOURCE_CONTROL_ROUTINE) (
    IN RESID Resource,
    IN DWORD ControlCode,
    IN PVOID InBuffer,
    IN DWORD InBufferSize,
    OUT PVOID OutBuffer,
    IN DWORD OutBufferSize,
    OUT LPDWORD BytesReturned
    );

typedef
DWORD
(_stdcall *PRESOURCE_TYPE_CONTROL_ROUTINE) (
    IN LPCWSTR ResourceTypeName,
    IN DWORD ControlCode,
    IN PVOID InBuffer,
    IN DWORD InBufferSize,
    OUT PVOID OutBuffer,
    IN DWORD OutBufferSize,
    OUT LPDWORD BytesReturned
    );

typedef enum _RESOURCE_EXIT_STATE {
    ResourceExitStateContinue,
    ResourceExitStateTerminate,
    ResourceExitStateMax
} RESOURCE_EXIT_STATE;


//***************************************************************
//
// Define the Function Table Format
//
//***************************************************************

//
// Version 1 Resource DLL Interface definition
//
typedef struct CLRES_V1_FUNCTIONS {
    POPEN_ROUTINE Open;
    PCLOSE_ROUTINE Close;
    PONLINE_ROUTINE Online;
    POFFLINE_ROUTINE Offline;
    PTERMINATE_ROUTINE Terminate;
    PLOOKS_ALIVE_ROUTINE LooksAlive;
    PIS_ALIVE_ROUTINE IsAlive;
    PARBITRATE_ROUTINE Arbitrate;
    PRELEASE_ROUTINE Release;
    PRESOURCE_CONTROL_ROUTINE ResourceControl;
    PRESOURCE_TYPE_CONTROL_ROUTINE ResourceTypeControl;
} CLRES_V1_FUNCTIONS, *PCLRES_V1_FUNCTIONS;

//
// Resource DLL Function Table definition
//
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning( disable : 4201 ) // nonstandard extension used : nameless struct/union
typedef struct CLRES_FUNCTION_TABLE {
    DWORD   TableSize;
    DWORD   Version;
    union {
        CLRES_V1_FUNCTIONS V1Functions;
    } DUMMYUNIONNAME;
} CLRES_FUNCTION_TABLE, *PCLRES_FUNCTION_TABLE;
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 ) // nonstandard extension used : nameless struct/union
#endif

//
// Define the Resource DLL Startup routine. This is the only routine
// that should be exported from a resource DLL.
//

//
// Calculate the byte offset of a field in a structure of type type.
//

#ifndef FIELD_OFFSET
#define FIELD_OFFSET(type, field)    ((LONG)&(((type *)0)->field))
#endif

//
// large ints need more space than what was originally allocated.
//
typedef struct RESUTIL_LARGEINT_DATA {
    LARGE_INTEGER   Default;
    LARGE_INTEGER   Minimum;
    LARGE_INTEGER   Maximum;
} RESUTIL_LARGEINT_DATA, *PRESUTIL_LARGEINT_DATA;

typedef struct RESUTIL_ULARGEINT_DATA {
    ULARGE_INTEGER  Default;
    ULARGE_INTEGER  Minimum;
    ULARGE_INTEGER  Maximum;
} RESUTIL_ULARGEINT_DATA, *PRESUTIL_ULARGEINT_DATA;

typedef struct RESUTIL_FILETIME_DATA {
    FILETIME  Default;
    FILETIME  Minimum;
    FILETIME  Maximum;
} RESUTIL_FILETIME_DATA, *PRESUTIL_FILETIME_DATA;

//
// Property list structures and functions
//
typedef struct RESUTIL_PROPERTY_ITEM {
    LPWSTR  Name;               // Property name
    LPWSTR  KeyName;            // Name of value in cluster database
    DWORD   Format;             // Format: REG_SZ, REG_DWORD, etc.
    union {
        DWORD_PTR               DefaultPtr;
        DWORD                   Default;     // Default value
        LPVOID                  lpDefault;
        PRESUTIL_LARGEINT_DATA  LargeIntData;
        PRESUTIL_ULARGEINT_DATA ULargeIntData;
        PRESUTIL_FILETIME_DATA  FileTimeData;
    } DUMMYUNIONNAME;
    DWORD   Minimum;            // Minimum value
    DWORD   Maximum;            // Maximum value
    DWORD   Flags;              // Flags for this item
#define RESUTIL_PROPITEM_READ_ONLY  0x00000001  // Property is read-only
#define RESUTIL_PROPITEM_REQUIRED   0x00000002  // Property is required
#define RESUTIL_PROPITEM_SIGNED     0x00000004  // Numeric property is signed (defaults to unsigned)

    DWORD   Offset;             // Byte offset to value in parameter block
                                //   Assumes MULTI_SZ and BINARY parameters
                                //   are LPWSTRs followed by DWORDs for length
} RESUTIL_PROPERTY_ITEM, *PRESUTIL_PROPERTY_ITEM;


typedef
DWORD
(_stdcall *PSTARTUP_ROUTINE) (
    IN LPCWSTR ResourceType,
    IN DWORD MinVersionSupported,
    IN DWORD MaxVersionSupported,
    IN PSET_RESOURCE_STATUS_ROUTINE SetResourceStatus,
    IN PLOG_EVENT_ROUTINE LogEvent,
    OUT PCLRES_FUNCTION_TABLE *FunctionTable
    );

//
// Define layout of shared memory used for tracking Resource Monitor state.
//
typedef enum RESOURCE_MONITOR_STATE {
    RmonInitializing,
    RmonIdle,
    RmonStartingResource,
    RmonInitializingResource,
    RmonOnlineResource,
    RmonOfflineResource,
    RmonShutdownResource,
    RmonDeletingResource,
    RmonIsAlivePoll,
    RmonLooksAlivePoll,
    RmonArbitrateResource,
    RmonReleaseResource,
    RmonResourceControl,
    RmonResourceTypeControl,
    RmonTerminateResource,
    RmonDeadlocked
} RESOURCE_MONITOR_STATE;

typedef struct MONITOR_STATE {
    LARGE_INTEGER LastUpdate;
    RESOURCE_MONITOR_STATE State;
    HANDLE ActiveResource;
    BOOL   ResmonStop;
} MONITOR_STATE, *PMONITOR_STATE;


//
// Resource Utility Routines
//

DWORD
WINAPI
ResUtilStartResourceService(
    IN LPCWSTR pszServiceName,
    OUT LPSC_HANDLE phServiceHandle
    );

typedef DWORD
(WINAPI * PRESUTIL_START_RESOURCE_SERVICE)(
    IN LPCWSTR pszServiceName,
    OUT LPSC_HANDLE phServiceHandle
    );

DWORD
WINAPI
ResUtilVerifyResourceService(
    IN LPCWSTR pszServiceName
    );

typedef DWORD
(WINAPI * PRESUTIL_VERIFY_RESOURCE_SERVICE)(
    IN LPCWSTR pszServiceName
    );

DWORD
WINAPI
ResUtilStopResourceService(
    IN LPCWSTR pszServiceName
    );

typedef DWORD
(WINAPI * PRESUTIL_STOP_RESOURCE_SERVICE)(
    IN LPCWSTR pszServiceName
    );

DWORD
WINAPI
ResUtilVerifyService(
    IN SC_HANDLE hServiceHandle
    );

typedef DWORD
(WINAPI * PRESUTIL_VERIFY_SERVICE)(
    IN SC_HANDLE hServiceHandle
    );

DWORD
WINAPI
ResUtilStopService(
    IN SC_HANDLE hServiceHandle
    );

typedef DWORD
(WINAPI * PRESUTIL_STOP_SERVICE)(
    IN SC_HANDLE hServiceHandle
    );

DWORD
WINAPI
ResUtilCreateDirectoryTree(
    IN LPCWSTR pszPath
    );

typedef DWORD
(WINAPI * PRESUTIL_CREATE_DIRECTORY_TREE)(
    IN LPCWSTR pszPath
    );

BOOL
WINAPI
ResUtilIsPathValid(
    IN LPCWSTR pszPath
    );

typedef BOOL
(WINAPI * PRESUTIL_IS_PATH_VALID)(
    IN LPCWSTR pszPath
    );

DWORD
WINAPI
ResUtilEnumProperties(
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part(cbOutPropertiesSize, *pcbBytesReturned) LPWSTR pszOutProperties,
    __in DWORD cbOutPropertiesSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

typedef DWORD
(WINAPI * PRESUTIL_ENUM_PROPERTIES)(
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part(cbOutPropertiesSize, *pcbBytesReturned) LPWSTR pszOutProperties,
    __in DWORD cbOutPropertiesSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

DWORD
WINAPI
ResUtilEnumPrivateProperties(
    __in HKEY hkeyClusterKey,
    __out_bcount_part(cbOutPropertiesSize, *pcbBytesReturned) LPWSTR pszOutProperties,
    __in DWORD cbOutPropertiesSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

typedef DWORD
(WINAPI * PRESUTIL_ENUM_PRIVATE_PROPERTIES)(
    __in HKEY hkeyClusterKey,
    __out_bcount_part(cbOutPropertiesSize, *pcbBytesReturned) LPWSTR pszOutProperties,
    __in DWORD cbOutPropertiesSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

DWORD
WINAPI
ResUtilGetProperties(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    __in DWORD cbOutPropertyListSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTIES)(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    __in DWORD cbOutPropertyListSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

DWORD
WINAPI
ResUtilGetAllProperties(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    __in DWORD cbOutPropertyListSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_ALL_PROPERTIES)(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    __in DWORD cbOutPropertyListSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

DWORD
WINAPI
ResUtilGetPrivateProperties(
    __in HKEY hkeyClusterKey,
    __out_bcount_part(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    __in DWORD cbOutPropertyListSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_PRIVATE_PROPERTIES)(
    __in HKEY hkeyClusterKey,
    __out_bcount_part(cbOutPropertyListSize, *pcbBytesReturned) PVOID pOutPropertyList,
    __in DWORD cbOutPropertyListSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

DWORD
WINAPI
ResUtilGetPropertySize(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    IN OUT LPDWORD pcbOutPropertyListSize,
    IN OUT LPDWORD pnPropertyCount
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTY_SIZE)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    IN OUT LPDWORD pcbOutPropertyListSize,
    IN OUT LPDWORD pnPropertyCount
    );

__success( return == ERROR_SUCCESS )
DWORD
WINAPI
ResUtilGetProperty(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    __deref_inout_bcount_part(*pcbOutPropertyItemSize, *pcbOutPropertyItemSize) PVOID *pOutPropertyItem,
    __inout LPDWORD pcbOutPropertyItemSize
    );

typedef
__success( return == ERROR_SUCCESS )
DWORD
(WINAPI * PRESUTIL_GET_PROPERTY)(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    __deref_inout_bcount_part(*pcbOutPropertyItemSize, *pcbOutPropertyItemSize) PVOID *pOutPropertyItem,
    __inout LPDWORD pcbOutPropertyItemSize
    );

DWORD
WINAPI
ResUtilVerifyPropertyTable(
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __reserved PVOID Reserved,
    __in BOOL bAllowUnknownProperties,
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize,
    __out_opt LPBYTE pOutParams
    );

typedef DWORD
(WINAPI * PRESUTIL_VERIFY_PROPERTY_TABLE)(
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __reserved PVOID Reserved,
    __in BOOL bAllowUnknownProperties,
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize,
    __out_opt LPBYTE pOutParams
    );

DWORD
WINAPI
ResUtilSetPropertyTable(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __reserved PVOID Reserved,
    __in BOOL bAllowUnknownProperties,
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize,
    __out_opt LPBYTE pOutParams
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_PROPERTY_TABLE)(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __reserved PVOID Reserved,
    __in BOOL bAllowUnknownProperties,
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize,
    __out_opt LPBYTE pOutParams
    );

DWORD
WINAPI
ResUtilSetPropertyTableEx(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN BOOL bAllowUnknownProperties,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    IN BOOL bForceWrite,
    OUT OPTIONAL LPBYTE pOutParams
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_PROPERTY_TABLE_EX)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN BOOL bAllowUnknownProperties,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    IN BOOL bForceWrite,
    OUT OPTIONAL LPBYTE pOutParams
    );

DWORD
WINAPI
ResUtilSetPropertyParameterBlock(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN const LPBYTE pInParams,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    OUT OPTIONAL LPBYTE pOutParams
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_PROPERTY_PARAMETER_BLOCK)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN const LPBYTE pInParams,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    OUT OPTIONAL LPBYTE pOutParams
    );

DWORD
WINAPI
ResUtilSetPropertyParameterBlockEx(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN const LPBYTE pInParams,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    IN BOOL bForceWrite,
    OUT OPTIONAL LPBYTE pOutParams
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_PROPERTY_PARAMETER_BLOCK_EX)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN PVOID Reserved,
    IN const LPBYTE pInParams,
    IN const PVOID pInPropertyList,
    IN DWORD cbInPropertyListSize,
    IN BOOL bForceWrite,
    OUT OPTIONAL LPBYTE pOutParams
    );

DWORD
WINAPI
ResUtilSetUnknownProperties(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_UNKNOWN_PROPERTIES)(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize
    );

DWORD
WINAPI
ResUtilGetPropertiesToParameterBlock(
    __in HKEY hkeyClusterKey,
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out LPBYTE pOutParams,
    __in BOOL bCheckForRequiredProperties,
    __deref_out_opt LPWSTR * pszNameOfPropInError
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTIES_TO_PARAMETER_BLOCK)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    OUT LPBYTE pOutParams,
    IN BOOL bCheckForRequiredProperties,
    OUT OPTIONAL LPWSTR * pszNameOfPropInError
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTIES_TO_PARAMETER_BLOCK)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    OUT LPBYTE pOutParams,
    IN BOOL bCheckForRequiredProperties,
    OUT OPTIONAL LPWSTR * pszNameOfPropInError
    );

DWORD
WINAPI
ResUtilPropertyListFromParameterBlock(
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part_opt(*pcbOutPropertyListSize, *pcbBytesReturned ) PVOID  pOutPropertyList,
    __inout LPDWORD pcbOutPropertyListSize,
    __in const LPBYTE pInParams,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

typedef DWORD
(WINAPI * PRESUTIL_PROPERTY_LIST_FROM_PARAMETER_BLOCK)(
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part_opt(*pcbOutPropertyListSize, *pcbBytesReturned ) PVOID  pOutPropertyList,
    __inout LPDWORD pcbOutPropertyListSize,
    __in const LPBYTE pInParams,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

DWORD
WINAPI
ResUtilDupParameterBlock(
    OUT LPBYTE pOutParams,
    IN const LPBYTE pInParams,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable
    );

typedef DWORD
(WINAPI * PRESUTIL_DUP_PARAMETER_BLOCK)(
    OUT LPBYTE pOutParams,
    IN const LPBYTE pInParams,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable
    );

void
WINAPI
ResUtilFreeParameterBlock(
    IN OUT LPBYTE pOutParams,
    IN const LPBYTE pInParams,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable
    );

typedef void
(WINAPI * PRESUTIL_FREE_PARAMETER_BLOCK)(
    IN OUT LPBYTE pOutParams,
    IN const LPBYTE pInParams,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable
    );

DWORD
WINAPI
ResUtilAddUnknownProperties(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN OUT PVOID pOutPropertyList,
    IN DWORD pcbOutPropertyListSize,
    IN OUT LPDWORD pcbBytesReturned,
    IN OUT LPDWORD pcbRequired
    );

typedef DWORD
(WINAPI * PRESUTIL_ADD_UNKNOWN_PROPERTIES)(
    IN HKEY hkeyClusterKey,
    IN const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    IN OUT PVOID pOutPropertyList,
    IN DWORD pcbOutPropertyListSize,
    IN OUT LPDWORD pcbBytesReturned,
    IN OUT LPDWORD pcbRequired
    );

DWORD
WINAPI
ResUtilSetPrivatePropertyList(
    __in HKEY hkeyClusterKey,
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_PRIVATE_PROPERTY_LIST)(
    __in HKEY hkeyClusterKey,
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize
    );

DWORD
WINAPI
ResUtilVerifyPrivatePropertyList(
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize
    );

typedef DWORD
(WINAPI * PRESUTIL_VERIFY_PRIVATE_PROPERTY_LIST)(
    __in_bcount(cbInPropertyListSize) const PVOID pInPropertyList,
    __in DWORD cbInPropertyListSize
    );

PWSTR
WINAPI
ResUtilDupString(
    IN LPCWSTR pszInString
    );

typedef PWSTR
(WINAPI * PRESUTIL_DUP_STRING)(
    IN LPCWSTR pszInString
    );

DWORD
WINAPI
ResUtilGetBinaryValue(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __deref_out_bcount_full_opt(*pcbOutValueSize) LPBYTE *ppbOutValue,
    __out LPDWORD pcbOutValueSize
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_BINARY_VALUE)(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __deref_out_bcount_full_opt(*pcbOutValueSize) LPBYTE *ppbOutValue,
    __out LPDWORD pcbOutValueSize
    );

LPWSTR
WINAPI
ResUtilGetSzValue(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName
    );

typedef LPWSTR
(WINAPI * PRESUTIL_GET_SZ_VALUE)(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName
    );

LPWSTR
WINAPI
ResUtilGetExpandSzValue(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName,
    IN BOOL bExpand
    );

typedef LPWSTR
(WINAPI * PRESUTIL_GET_EXPAND_SZ_VALUE)(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName,
    IN BOOL bExpand
    );

FORCEINLINE
DWORD
WINAPI_INLINE
ResUtilGetMultiSzValue(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __deref_out_bcount_full_opt(*pcbOutValueSize) LPWSTR *ppszOutValue,
    __out LPDWORD pcbOutValueSize
    )
{
    return ResUtilGetBinaryValue( hkeyClusterKey, pszValueName, (LPBYTE *) ppszOutValue, pcbOutValueSize );
}

DWORD
WINAPI
ResUtilGetDwordValue(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __out LPDWORD pdwOutValue,
    __in DWORD dwDefaultValue
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_DWORD_VALUE)(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __out LPDWORD pdwOutValue,
    __in DWORD dwDefaultValue
    );

DWORD
WINAPI
ResUtilGetQwordValue(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __out PULONGLONG pqwOutValue,
    __in ULONGLONG qwDefaultValue
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_QWORD_VALUE)(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __out PULONGLONG pqwOutValue,
    __in ULONGLONG qwDefaultValue
    );

DWORD
WINAPI
ResUtilSetBinaryValue(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in_bcount(cbNewValueSize) const LPBYTE pbNewValue,
    __in DWORD cbNewValueSize,
    __deref_opt_inout_bcount_full(*pcbOutValueSize) LPBYTE *ppbOutValue,
    __inout LPDWORD pcbOutValueSize
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_BINARY_VALUE)(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in_bcount(cbNewValueSize) const LPBYTE pbNewValue,
    __in DWORD cbNewValueSize,
    __deref_opt_inout_bcount_full(*pcbOutValueSize) LPBYTE *ppbOutValue,
    __inout LPDWORD pcbOutValueSize
    );

DWORD
WINAPI
ResUtilSetSzValue(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in LPCWSTR pszNewValue,
    __deref_opt_inout LPWSTR *ppszOutString
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_SZ_VALUE)(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in LPCWSTR pszNewValue,
    __deref_opt_inout LPWSTR *ppszOutString
    );

DWORD
WINAPI
ResUtilSetExpandSzValue(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in LPCWSTR pszNewValue,
    __inout_opt LPWSTR *ppszOutString
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_EXPAND_SZ_VALUE)(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in LPCWSTR pszNewValue,
    __inout_opt LPWSTR *ppszOutString
    );

DWORD
WINAPI
ResUtilSetMultiSzValue(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in_bcount(cbNewValueSize) LPCWSTR pszNewValue,
    __in DWORD cbNewValueSize,
    __deref_opt_out_bcount_full(*pcbOutValueSize) LPWSTR *ppszOutValue,
    __inout_opt LPDWORD pcbOutValueSize
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_MULTI_SZ_VALUE)(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in_bcount(cbNewValueSize) LPCWSTR pszNewValue,
    __in DWORD cbNewValueSize,
    __deref_opt_out_bcount_full(*pcbOutValueSize) LPWSTR *ppszOutValue,
    __inout_opt LPDWORD pcbOutValueSize
    );

DWORD
WINAPI
ResUtilSetDwordValue(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName,
    IN DWORD dwNewValue,
    IN OUT LPDWORD pdwOutValue
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_DWORD_VALUE)(
    IN HKEY hkeyClusterKey,
    IN LPCWSTR pszValueName,
    IN DWORD dwNewValue,
    IN OUT LPDWORD pdwOutValue
    );

DWORD
WINAPI
ResUtilSetQwordValue(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in ULONGLONG qwNewValue,
    __inout_opt PULONGLONG pqwOutValue
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_QWORD_VALUE)(
    __in HKEY hkeyClusterKey,
    __in LPCWSTR pszValueName,
    __in ULONGLONG qwNewValue,
    __inout_opt PULONGLONG pqwOutValue
    );

DWORD
WINAPI
ResUtilGetBinaryProperty(
    __deref_out_bcount(*pcbOutValueSize) LPBYTE *ppbOutValue,
    __out LPDWORD pcbOutValueSize,
    __in const PCLUSPROP_BINARY pValueStruct,
    __in_bcount_opt( cbOldValueSize ) const LPBYTE pbOldValue,
    __in DWORD cbOldValueSize,
    __deref_inout_bcount(*pcbPropertyListSize) LPBYTE *ppPropertyList,
    __inout LPDWORD pcbPropertyListSize
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_BINARY_PROPERTY)(
    __deref_out_bcount(*pcbOutValueSize) LPBYTE *ppbOutValue,
    __out LPDWORD pcbOutValueSize,
    __in const PCLUSPROP_BINARY pValueStruct,
    __in_bcount_opt( cbOldValueSize ) const LPBYTE pbOldValue,
    __in DWORD cbOldValueSize,
    __deref_inout_bcount(*pcbPropertyListSize) LPBYTE *ppPropertyList,
    __inout LPDWORD pcbPropertyListSize
    );

DWORD
WINAPI
ResUtilGetSzProperty(
    __deref_out LPWSTR *ppszOutValue,
    __in const PCLUSPROP_SZ pValueStruct,
    __in_opt LPCWSTR pszOldValue,
    __deref_inout_bcount(*pcbPropertyListSize) LPBYTE *ppPropertyList,
    __inout LPDWORD pcbPropertyListSize
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_SZ_PROPERTY)(
    __deref_out LPWSTR *ppszOutValue,
    __in const PCLUSPROP_SZ pValueStruct,
    __in_opt LPCWSTR pszOldValue,
    __deref_inout_bcount(*pcbPropertyListSize) LPBYTE *ppPropertyList,
    __inout LPDWORD pcbPropertyListSize
    );

DWORD
WINAPI
ResUtilGetMultiSzProperty(
    __deref_out_bcount(*pcbOutValueSize) LPWSTR *ppszOutValue,
    __out LPDWORD pcbOutValueSize,
    __in const PCLUSPROP_SZ pValueStruct,
    __in_bcount_opt(cbOldValueSize) LPCWSTR pszOldValue,
    __in DWORD cbOldValueSize,
    __deref_inout_bcount(*pcbPropertyListSize) LPBYTE *ppPropertyList,
    __inout LPDWORD pcbPropertyListSize
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_MULTI_SZ_PROPERTY)(
    __deref_out_bcount(*pcbOutValueSize) LPWSTR *ppszOutValue,
    __out LPDWORD pcbOutValueSize,
    __in const PCLUSPROP_SZ pValueStruct,
    __in_bcount_opt(cbOldValueSize) LPCWSTR pszOldValue,
    __in DWORD cbOldValueSize,
    __deref_inout_bcount(*pcbPropertyListSize) LPBYTE *ppPropertyList,
    __inout LPDWORD pcbPropertyListSize
    );

DWORD
WINAPI
ResUtilGetDwordProperty(
    OUT LPDWORD pdwOutValue,
    IN const PCLUSPROP_DWORD pValueStruct,
    IN DWORD dwOldValue,
    IN DWORD dwMinimum,
    IN DWORD dwMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_DWORD_PROPERTY)(
    OUT LPDWORD pdwOutValue,
    IN const PCLUSPROP_DWORD pValueStruct,
    IN DWORD dwOldValue,
    IN DWORD dwMinimum,
    IN DWORD dwMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );

DWORD
WINAPI
ResUtilGetLongProperty(
    OUT LPLONG plOutValue,
    IN const PCLUSPROP_LONG pValueStruct,
    IN LONG lOldValue,
    IN LONG lMinimum,
    IN LONG lMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_LONG_PROPERTY)(
    OUT LPLONG plOutValue,
    IN const PCLUSPROP_LONG pValueStruct,
    IN LONG lOldValue,
    IN LONG lMinimum,
    IN LONG lMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );

DWORD
WINAPI
ResUtilGetFileTimeProperty(
    OUT LPFILETIME pftOutValue,
    IN const PCLUSPROP_FILETIME pValueStruct,
    IN FILETIME ftOldValue,
    IN FILETIME ftMinimum,
    IN FILETIME ftMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_FILETIME_PROPERTY)(
    OUT LPFILETIME pftOutValue,
    IN const PCLUSPROP_FILETIME pValueStruct,
    IN FILETIME ftOldValue,
    IN FILETIME ftMinimum,
    IN FILETIME ftMaximum,
    OUT LPBYTE * ppPropertyList,
    OUT LPDWORD pcbPropertyListSize
    );

LPVOID
WINAPI
ResUtilGetEnvironmentWithNetName(
    __in HRESOURCE hResource
    );

typedef LPVOID
(WINAPI * PRESUTIL_GET_ENVIRONMENT_WITH_NET_NAME)(
    __in HRESOURCE hResource
    );

DWORD
WINAPI
ResUtilFreeEnvironment(
    IN LPVOID lpEnvironment
    );

typedef DWORD
(WINAPI * PRESUTIL_FREE_ENVIRONMENT)(
    IN LPVOID lpEnvironment
    );

LPWSTR
WINAPI
ResUtilExpandEnvironmentStrings(
    IN LPCWSTR pszSrc
    );

typedef LPWSTR
(WINAPI * PRESUTIL_EXPAND_ENVIRONMENT_STRINGS)(
    IN LPCWSTR pszSrc
    );

DWORD
WINAPI
ResUtilSetResourceServiceEnvironment(
    IN LPCWSTR pszServiceName,
    IN HRESOURCE hResource,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_RESOURCE_SERVICE_ENVIRONMENT)(
    IN LPCWSTR pszServiceName,
    IN HRESOURCE hResource,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );

DWORD
WINAPI
ResUtilRemoveResourceServiceEnvironment(
    IN  LPCWSTR             pszServiceName,
    IN  PLOG_EVENT_ROUTINE  pfnLogEvent,
    IN  RESOURCE_HANDLE     hResourceHandle
    );

typedef DWORD
(WINAPI * PRESUTIL_REMOVE_RESOURCE_SERVICE_ENVIRONMENT)(
    IN  LPCWSTR             pszServiceName,
    IN  PLOG_EVENT_ROUTINE  pfnLogEvent,
    IN  RESOURCE_HANDLE     hResourceHandle
    );

DWORD
WINAPI
ResUtilSetResourceServiceStartParameters(
    IN LPCWSTR pszServiceName,
    IN SC_HANDLE schSCMHandle,
    IN OUT LPSC_HANDLE phService,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );

typedef DWORD
(WINAPI * PRESUTIL_SET_RESOURCE_SERVICE_START_PARAMETERS)(
    IN LPCWSTR pszServiceName,
    IN SC_HANDLE schSCMHandle,
    IN OUT LPSC_HANDLE phService,
    IN PLOG_EVENT_ROUTINE pfnLogEvent,
    IN RESOURCE_HANDLE hResourceHandle
    );

DWORD
WINAPI
ResUtilFindSzProperty(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_opt_out LPWSTR *pszPropertyValue
    );

typedef DWORD
(WINAPI * PRESUTIL_FIND_SZ_PROPERTY)(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_opt_out LPWSTR *pszPropertyValue
    );

DWORD
WINAPI
ResUtilFindExpandSzProperty(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_opt_out LPWSTR *pszPropertyValue
    );

typedef DWORD
(WINAPI * PRESUTIL_FIND_EXPAND_SZ_PROPERTY)(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_opt_out LPWSTR *pszPropertyValue
    );

DWORD
WINAPI
ResUtilFindExpandedSzProperty(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_opt_out LPWSTR *pszPropertyValue
    );

typedef DWORD
(WINAPI * PRESUTIL_FIND_EXPANDED_SZ_PROPERTY)(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_opt_out LPWSTR *pszPropertyValue
    );

DWORD
WINAPI
ResUtilFindDwordProperty(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __out LPDWORD pdwPropertyValue
    );

typedef DWORD
(WINAPI * PRESUTIL_FIND_DWORD_PROPERTY)(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __out LPDWORD pdwPropertyValue
    );

DWORD
WINAPI
ResUtilFindBinaryProperty(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_opt_out_bcount_full(*pcbPropertyValueSize) LPBYTE *pbPropertyValue,
    __out_opt LPDWORD pcbPropertyValueSize
    );

typedef DWORD
(WINAPI * PRESUTIL_FIND_BINARY_PROPERTY)(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_opt_out_bcount_full(*pcbPropertyValueSize) LPBYTE *pbPropertyValue,
    __out_opt LPDWORD pcbPropertyValueSize
    );

DWORD
WINAPI
ResUtilFindMultiSzProperty(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_out_bcount_full(*pcbPropertyValueSize) LPWSTR *pszPropertyValue,
    __out LPDWORD pcbPropertyValueSize
    );

typedef DWORD
(WINAPI * PRESUTIL_FIND_MULTI_SZ_PROPERTY)(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __deref_out_bcount_full(*pcbPropertyValueSize) LPWSTR *pszPropertyValue,
    __out LPDWORD pcbPropertyValueSize
    );

DWORD
WINAPI
ResUtilFindLongProperty(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __out LPLONG plPropertyValue
    );

typedef DWORD
(WINAPI * PRESUTIL_FIND_LONG_PROPERTY)(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __out LPLONG plPropertyValue
    );

DWORD
WINAPI
ResUtilFindFileTimeProperty(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __out LPFILETIME pftPropertyValue
    );

typedef DWORD
(WINAPI * PRESUTIL_FIND_FILETIME_PROPERTY)(
    __in_bcount(cbPropertyListSize) const PVOID pPropertyList,
    __in DWORD cbPropertyListSize,
    __in LPCWSTR pszPropertyName,
    __out LPFILETIME pftPropertyValue
    );


//
// Common worker thread routines that allow a pending operation to
// be cancelled with CORRECT synchronization.
//
typedef struct CLUS_WORKER {
    HANDLE hThread;
    BOOL Terminate;
} CLUS_WORKER, *PCLUS_WORKER;

typedef DWORD (WINAPI *PWORKER_START_ROUTINE)(
    PCLUS_WORKER pWorker,
    LPVOID lpThreadParameter
    );

DWORD
WINAPI
ClusWorkerCreate(
    OUT PCLUS_WORKER lpWorker,
    IN PWORKER_START_ROUTINE lpStartAddress,
    IN PVOID lpParameter
    );

typedef	DWORD
(WINAPI * PCLUSAPI_CLUS_WORKER_CREATE)(
    OUT PCLUS_WORKER lpWorker,
    IN PWORKER_START_ROUTINE lpStartAddress,
    IN PVOID lpParameter
    );

BOOL
WINAPI
ClusWorkerCheckTerminate(
    IN PCLUS_WORKER lpWorker
    );

typedef BOOL
(WINAPI * PCLUSAPIClusWorkerCheckTerminate)(
    IN PCLUS_WORKER lpWorker
    );

VOID
WINAPI
ClusWorkerTerminate(
    __in PCLUS_WORKER lpWorker
    );

typedef VOID
(WINAPI * PCLUSAPI_CLUS_WORKER_TERMINATE)(
    __in PCLUS_WORKER lpWorker
    );


//Define enumerate resource callback function. This gets called for each resource enumerated
//by ResUtilEnumResources
typedef   DWORD (*LPRESOURCE_CALLBACK)( HRESOURCE, HRESOURCE , PVOID );
typedef   DWORD (*LPRESOURCE_CALLBACK_EX)( HCLUSTER, HRESOURCE, HRESOURCE , PVOID );


BOOL
WINAPI
ResUtilResourcesEqual(
    IN HRESOURCE    hSelf,
    IN HRESOURCE    hResource
    );


typedef BOOL
(WINAPI * PRESUTIL_RESOURCES_EQUAL)(
    IN HRESOURCE    hSelf,
    IN HRESOURCE    hResource
    );


BOOL
WINAPI
ResUtilResourceTypesEqual(
    IN LPCWSTR      lpszResourceTypeName,
    IN HRESOURCE    hResource
    );


typedef BOOL
(WINAPI * PRESUTIL_RESOURCE_TYPES_EQUAL)(
    IN LPCWSTR      lpszResourceTypeName,
    IN HRESOURCE    hResource
    );

BOOL
WINAPI
ResUtilIsResourceClassEqual(
    IN PCLUS_RESOURCE_CLASS_INFO    prci,
    IN HRESOURCE                    hResource
    );

typedef BOOL
(WINAPI * PRESUTIL_IS_RESOURCE_CLASS_EQUAL)(
    IN PCLUS_RESOURCE_CLASS_INFO    prci,
    IN HRESOURCE                    hResource
    );

DWORD
WINAPI
ResUtilEnumResources(
    IN HRESOURCE            hSelf,
    IN LPCWSTR              lpszResTypeName,
    IN LPRESOURCE_CALLBACK  pResCallBack,
    IN PVOID                pParameter
    );

typedef DWORD
(WINAPI * PRESUTIL_ENUM_RESOURCES)(
    IN HRESOURCE            hSelf,
    IN LPCWSTR              lpszResTypeName,
    IN LPRESOURCE_CALLBACK  pResCallBack,
    IN PVOID                pParameter
    );

DWORD
WINAPI
ResUtilEnumResourcesEx(
    IN HCLUSTER                 hCluster,
    IN HRESOURCE                hSelf,
    IN LPCWSTR                  lpszResTypeName,
    IN LPRESOURCE_CALLBACK_EX   pResCallBack,
    IN PVOID                    pParameter
    );

typedef DWORD
(WINAPI * PRESUTIL_ENUM_RESOURCES_EX)(
    IN HCLUSTER                 hCluster,
    IN HRESOURCE                hSelf,
    IN LPCWSTR                  lpszResTypeName,
    IN LPRESOURCE_CALLBACK_EX   pResCallBack,
    IN PVOID                    pParameter
    );

HRESOURCE
WINAPI
ResUtilGetResourceDependency(
    IN HANDLE       hSelf,
    IN LPCWSTR      lpszResourceType
    );

typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENCY)(
    IN HANDLE       hSelf,
    IN LPCWSTR      lpszResourceType
    );

HRESOURCE
WINAPI
ResUtilGetResourceDependencyByName(
    IN HCLUSTER hCluster,
    IN HANDLE   hSelf,
    IN LPCWSTR  lpszResourceType,
    IN BOOL     bRecurse
    );

typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_NAME)(
    IN HCLUSTER hCluster,
    IN HANDLE   hSelf,
    IN LPCWSTR  lpszResourceType,
    IN BOOL     bRecurse
    );

HRESOURCE
WINAPI
ResUtilGetResourceDependencyByClass(
    IN HCLUSTER                     hCluster,
    IN HANDLE                       hSelf,
    IN PCLUS_RESOURCE_CLASS_INFO    prci,
    IN BOOL                         bRecurse
    );

typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_CLASS)(
    IN HCLUSTER                     hCluster,
    IN HANDLE                       hSelf,
    IN PCLUS_RESOURCE_CLASS_INFO    prci,
    IN BOOL                         bRecurse
    );

HRESOURCE
WINAPI
ResUtilGetResourceNameDependency(
    IN LPCWSTR      lpszResourceName,
    IN LPCWSTR      lpszResourceType
    );

typedef HRESOURCE
(WINAPI * PRESUTIL_GET_RESOURCE_NAME_DEPENDENCY)(
    IN LPCWSTR      lpszResourceName,
    IN LPCWSTR      lpszResourceType
    );

__success( return == ERROR_SUCCESS )
DWORD
WINAPI
ResUtilGetResourceDependentIPAddressProps(
    __in HRESOURCE hResource,
    __out_ecount_part(*pcchAddress, *pcchAddress) LPWSTR pszAddress,
    __inout DWORD *pcchAddress,
    __out_ecount_part(*pcchSubnetMask, *pcchSubnetMask) LPWSTR pszSubnetMask,
    __inout DWORD *pcchSubnetMask,
    __out_ecount_part(*pcchNetwork, *pcchNetwork) LPWSTR pszNetwork,
    __inout DWORD *pcch_Network
    );

typedef
__success( return == ERROR_SUCCESS )
DWORD
(WINAPI * PRESUTIL_GET_RESOURCE_DEPENDENTIP_ADDRESS_PROPS)(
    __in HRESOURCE hResource,
    __out_ecount_part(*pcchAddress, *pcchAddress) LPWSTR pszAddress,
    __inout DWORD *pcchAddress,
    __out_ecount_part(*pcchSubnetMask, *pcchSubnetMask) LPWSTR pszSubnetMask,
    __inout DWORD *pcchSubnetMask,
    __out_ecount_part(*pcchNetwork, *pcchNetwork) LPWSTR pszNetwork,
    __inout DWORD *pcchNetwork
    );

__success( return == ERROR_SUCCESS )
DWORD
WINAPI
ResUtilFindDependentDiskResourceDriveLetter(
    __in HCLUSTER hCluster,              // handle to cluster
    __in HRESOURCE hResource,            // handle to resource to query for dependencies
    __out_ecount_part(*pcchDriveLetter, *pcchDriveLetter) LPWSTR pszDriveLetter,       // buffer to store drive letter (ex. "X:\0")
    __inout DWORD * pcchDriveLetter      // IN size of the pszDriveLetter buffer, OUT size of buffer required
    );

typedef
__success( return == ERROR_SUCCESS ) DWORD
(WINAPI * PRESUTIL_FIND_DEPENDENT_DISK_RESOURCE_DRIVE_LETTER)(
    __in HCLUSTER hCluster,              // handle to cluster
    __in HRESOURCE hResource,            // handle to resource to query for dependencies
    __out_ecount_part(*pcchDriveLetter, *pcchDriveLetter) LPWSTR pszDriveLetter,       // buffer to store drive letter (ex. "X:\0")
    __inout DWORD *pcchDriveLetter       // IN size of the pszDriveLetter buffer, OUT size of buffer required
    );

DWORD
WINAPI
ResUtilTerminateServiceProcessFromResDll(
    __in DWORD dwServicePid,
    __in BOOL bOffline,
    __out PDWORD pdwResourceState,
    __in PLOG_EVENT_ROUTINE pfnLogEvent,
    __in RESOURCE_HANDLE hResourceHandle
    );

typedef DWORD
(WINAPI * PRESUTIL_TERMINATE_SERVICE_PROCESS_FROM_RES_DLL)(
    __in DWORD dwServicePid,
    __in BOOL bOffline,
    __out PDWORD pdwResourceState,
    __in PLOG_EVENT_ROUTINE pfnLogEvent,
    __in RESOURCE_HANDLE hResourceHandle
    );

DWORD
WINAPI
ResUtilGetPropertyFormats(
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part(cbPropertyFormatListSize, *pcbBytesReturned) PVOID pOutPropertyFormatList,
    __in DWORD cbPropertyFormatListSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_PROPERTY_FORMATS)(
    __in const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    __out_bcount_part(cbPropertyFormatListSize, *pcbBytesReturned) PVOID pOutPropertyFormatList,
    __in DWORD cbPropertyFormatListSize,
    __out LPDWORD pcbBytesReturned,
    __out LPDWORD pcbRequired
    );


DWORD
WINAPI
ResUtilGetCoreClusterResources(
    __in HCLUSTER hCluster,
    __out HRESOURCE *phClusterNameResource,
    __out HRESOURCE *phClusterIPAddressResource,
    __out HRESOURCE *phClusterQuorumResource
    );


typedef DWORD
(WINAPI * PRESUTIL_GET_CORE_CLUSTER_RESOURCES)(
    __in HCLUSTER hCluster,
    __out HRESOURCE *phClusterNameResource,
    __out HRESOURCE *phClusterIPAddressResource,
    __out HRESOURCE *phClusterQuorumResource
    );

DWORD
WINAPI
ResUtilGetResourceName(
    __in HRESOURCE hResource,
    __out_ecount_part(*pcchResourceNameInOut, *pcchResourceNameInOut) PWSTR pszResourceName,
    __inout DWORD *pcchResourceNameInOut
    );

typedef DWORD
(WINAPI * PRESUTIL_GET_RESOURCE_NAME)(
    __in HRESOURCE hResource,
    __out_ecount_part(*pcchResourceNameInOut, *pcchResourceNameInOut) PWSTR pszResourceName,
    __inout DWORD *pcchResourceNameInOut
    );

typedef enum _CLUSTER_ROLE {
    ClusterRoleDHCP,
    ClusterRoleDTC,
    ClusterRoleFileServer,
    ClusterRoleGenericApplication,
    ClusterRoleGenericScript,
    ClusterRoleGenericService,
    ClusterRoleISCSINameServer,
    ClusterRoleMSMQ,
    ClusterRoleNFS,
    ClusterRolePrintServer,
    ClusterRoleStandAloneNamespaceServer,
    ClusterRoleVolumeShadowCopyServiceTask,
    ClusterRoleWINS,
} CLUSTER_ROLE;

typedef enum _CLUSTER_ROLE_STATE {
    ClusterRoleUnknown = -1,
    ClusterRoleClustered,
    ClusterRoleUnclustered
} CLUSTER_ROLE_STATE;

__success(return >= 0) // != ClusterRoleUnknown
CLUSTER_ROLE_STATE
WINAPI
ResUtilGetClusterRoleState(
    __in HCLUSTER       hCluster,
    __in CLUSTER_ROLE   eClusterRole
    );

#ifdef __cplusplus
}
#endif


#endif // ifdef _RESAPI_DEFINES_

