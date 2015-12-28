/*********************************************************************
*
* WTSAPI32.H
*
*   Windows Terminal Server public APIs
*
*   Copyright (c) 1997-2001 Microsoft Corporation
*
**********************************************************************/

#ifndef _INC_WTSAPI
#define _INC_WTSAPI

#if _MSC_VER > 1000
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif


/*===================================================================
==   Defines
=====================================================================*/

/*
 *  Specifies the current server
 */
#define WTS_CURRENT_SERVER         ((HANDLE)NULL)
#define WTS_CURRENT_SERVER_HANDLE  ((HANDLE)NULL)
#define WTS_CURRENT_SERVER_NAME    (NULL)

/*
 *  Specifies the current session (SessionId)
 */
#define WTS_CURRENT_SESSION ((DWORD)-1)

/*
 *  Possible pResponse values from WTSSendMessage()
 */
#ifndef IDTIMEOUT
#define IDTIMEOUT 32000
#endif
#ifndef IDASYNC
#define IDASYNC   32001
#endif

#ifndef __HYDRIX_H__
#define USERNAME_LENGTH          20
#define CLIENTNAME_LENGTH        20
#define CLIENTADDRESS_LENGTH     30
#endif
/*
 *  Shutdown flags
 */
#define WTS_WSD_LOGOFF      0x00000001  // log off all users except
                                        // current user; deletes
                                        // WinStations (a reboot is
                                        // required to recreate the
                                        // WinStations)
#define WTS_WSD_SHUTDOWN    0x00000002  // shutdown system
#define WTS_WSD_REBOOT      0x00000004  // shutdown and reboot
#define WTS_WSD_POWEROFF    0x00000008  // shutdown and power off (on
                                        // machines that support power
                                        // off through software)
#define WTS_WSD_FASTREBOOT  0x00000010  // reboot without logging users
                                        // off or shutting down
#define MAX_ELAPSED_TIME_LENGTH         15
#define MAX_DATE_TIME_LENGTH            56
#define WINSTATIONNAME_LENGTH    32
#define DOMAIN_LENGTH            17

/*===================================================================
==   WTS_CONNECTSTATE_CLASS - Session connect state
=====================================================================*/

typedef enum _WTS_CONNECTSTATE_CLASS {
    WTSActive,              // User logged on to WinStation
    WTSConnected,           // WinStation connected to client
    WTSConnectQuery,        // In the process of connecting to client
    WTSShadow,              // Shadowing another WinStation
    WTSDisconnected,        // WinStation logged on without client
    WTSIdle,                // Waiting for client to connect
    WTSListen,              // WinStation is listening for connection
    WTSReset,               // WinStation is being reset
    WTSDown,                // WinStation is down due to error
    WTSInit,                // WinStation in initialization
} WTS_CONNECTSTATE_CLASS;


/*=====================================================================
==   WTS_SERVER_INFO - returned by WTSEnumerateServers (version 1)
=====================================================================*/

/*
 *  WTSEnumerateServers() returns two variables: pServerInfo and Count.
 *  The latter is the number of WTS_SERVER_INFO structures contained in
 *  the former.  In order to read each server, iterate i from 0 to
 *  Count-1 and reference the server name as
 *  pServerInfo[i].pServerName; for example:
 *
 *  for ( i=0; i < Count; i++ ) {
 *      _tprintf( TEXT("%s "), pServerInfo[i].pServerName );
 *  }
 *
 *  The memory returned looks like the following.  P is a pServerInfo
 *  pointer, and D is the string data for that pServerInfo:
 *
 *  P1 P2 P3 P4 ... Pn D1 D2 D3 D4 ... Dn
 *
 *  This makes it easier to iterate the servers, using code similar to
 *  the above.
 */

typedef struct _WTS_SERVER_INFOW {
    LPWSTR pServerName;    // server name
} WTS_SERVER_INFOW, * PWTS_SERVER_INFOW;

typedef struct _WTS_SERVER_INFOA {
    LPSTR pServerName;     // server name
} WTS_SERVER_INFOA, * PWTS_SERVER_INFOA;

#ifdef UNICODE
#define WTS_SERVER_INFO  WTS_SERVER_INFOW
#define PWTS_SERVER_INFO PWTS_SERVER_INFOW
#else
#define WTS_SERVER_INFO  WTS_SERVER_INFOA
#define PWTS_SERVER_INFO PWTS_SERVER_INFOA
#endif


/*=====================================================================
==   WTS_SESSION_INFO - returned by WTSEnumerateSessions (version 1)
=====================================================================*/

/*
 *  WTSEnumerateSessions() returns data in a similar format to the above
 *  WTSEnumerateServers().  It returns two variables: pSessionInfo and
 *  Count.  The latter is the number of WTS_SESSION_INFO structures
 *  contained in the former.  Iteration is similar, except that there
 *  are three parts to each entry, so it would look like this:
 *
 *  for ( i=0; i < Count; i++ ) {
 *      _tprintf( TEXT("%-5u  %-20s  %u\n"),
                  pSessionInfo[i].SessionId,
 *                pSessionInfo[i].pWinStationName,
 *                pSessionInfo[i].State );
 *  }
 *
 *  The memory returned is also segmented as the above, with all the
 *  structures allocated at the start and the string data at the end.
 *  We'll use S for the SessionId, P for the pWinStationName pointer
 *  and D for the string data, and C for the connect State:
 *
 *  S1 P1 C1 S2 P2 C2 S3 P3 C3 S4 P4 C4 ... Sn Pn Cn D1 D2 D3 D4 ... Dn
 *
 *  As above, this makes it easier to iterate the sessions.
 */

typedef struct _WTS_SESSION_INFOW {
    DWORD SessionId;             // session id
    LPWSTR pWinStationName;      // name of WinStation this session is
                                 // connected to
    WTS_CONNECTSTATE_CLASS State; // connection state (see enum)
} WTS_SESSION_INFOW, * PWTS_SESSION_INFOW;

typedef struct _WTS_SESSION_INFOA {
    DWORD SessionId;             // session id
    LPSTR pWinStationName;       // name of WinStation this session is
                                 // connected to
    WTS_CONNECTSTATE_CLASS State; // connection state (see enum)
} WTS_SESSION_INFOA, * PWTS_SESSION_INFOA;


#ifdef UNICODE
#define WTS_SESSION_INFO  WTS_SESSION_INFOW
#define PWTS_SESSION_INFO PWTS_SESSION_INFOW
#else
#define WTS_SESSION_INFO  WTS_SESSION_INFOA
#define PWTS_SESSION_INFO PWTS_SESSION_INFOA
#endif


/*=====================================================================
==   WTS_PROCESS_INFO - returned by WTSEnumerateProcesses (version 1)
=====================================================================*/

/*
 *  WTSEnumerateProcesses() also returns data similar to
 *  WTSEnumerateServers().  It returns two variables: pProcessInfo and
 *  Count.  The latter is the number of WTS_PROCESS_INFO structures
 *  contained in the former.  Iteration is similar, except that there
 *  are four parts to each entry, so it would look like this:
 *
 *  for ( i=0; i < Count; i++ ) {
 *      GetUserNameFromSid( pProcessInfo[i].pUserSid, UserName,
 *                          sizeof(UserName) );
 *      _tprintf( TEXT("%-5u  %-20s  %-5u  %s\n"),
 *              pProcessInfo[i].SessionId,
 *              UserName,
 *              pProcessInfo[i].ProcessId,
 *              pProcessInfo[i].pProcessName );
 *  }
 *
 *  The memory returned is also segmented as the above, with all the
 *  structures allocated at the start and the string data at the end.
 *  We'll use S for the SessionId, R for the ProcessId, P for the
 *  pProcessName pointer and D for the string data, and U for pUserSid:
 *
 *  S1 R1 P1 U1 S2 R2 P2 U2 S3 R3 P3 U3 ... Sn Rn Pn Un D1 D2 D3 ... Dn
 *
 *  As above, this makes it easier to iterate the processes.
 */

typedef struct _WTS_PROCESS_INFOW {
    DWORD SessionId;     // session id
    DWORD ProcessId;     // process id
    LPWSTR pProcessName; // name of process
    PSID pUserSid;       // user's SID
} WTS_PROCESS_INFOW, * PWTS_PROCESS_INFOW;

typedef struct _WTS_PROCESS_INFOA {
    DWORD SessionId;     // session id
    DWORD ProcessId;     // process id
    LPSTR pProcessName;  // name of process
    PSID pUserSid;       // user's SID
} WTS_PROCESS_INFOA, * PWTS_PROCESS_INFOA;

#ifdef UNICODE
#define WTS_PROCESS_INFO  WTS_PROCESS_INFOW
#define PWTS_PROCESS_INFO PWTS_PROCESS_INFOW
#else
#define WTS_PROCESS_INFO  WTS_PROCESS_INFOA
#define PWTS_PROCESS_INFO PWTS_PROCESS_INFOA
#endif


/*=====================================================================
==   WTS_INFO_CLASS - WTSQuerySessionInformation
==    (See additional typedefs for more info on structures)
=====================================================================*/

#define WTS_PROTOCOL_TYPE_CONSOLE         0    // Console
#define WTS_PROTOCOL_TYPE_ICA             1    // ICA Protocol
#define WTS_PROTOCOL_TYPE_RDP             2    // RDP Protocol

typedef enum _WTS_INFO_CLASS {
    WTSInitialProgram,
    WTSApplicationName,
    WTSWorkingDirectory,
    WTSOEMId,
    WTSSessionId,
    WTSUserName,
    WTSWinStationName,
    WTSDomainName,
    WTSConnectState,
    WTSClientBuildNumber,
    WTSClientName,
    WTSClientDirectory,
    WTSClientProductId,
    WTSClientHardwareId,
    WTSClientAddress,
    WTSClientDisplay,
    WTSClientProtocolType,
    WTSIdleTime,
    WTSLogonTime,
    WTSIncomingBytes,
    WTSOutgoingBytes,
    WTSIncomingFrames,
    WTSOutgoingFrames,
    WTSClientInfo,
    WTSSessionInfo 
} WTS_INFO_CLASS;



/*=====================================================================
==   WTS Session Information
=====================================================================*/
typedef struct _WTSINFOW {    
    WTS_CONNECTSTATE_CLASS State; // connection state (see enum)
    DWORD SessionId;             // session id
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBytes;
    WCHAR WinStationName[WINSTATIONNAME_LENGTH]; 
    WCHAR Domain[DOMAIN_LENGTH];
    WCHAR UserName[USERNAME_LENGTH+1];// name of WinStation this session is
                                 // connected to    
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER CurrentTime;

        
} WTSINFOW, * PWTSINFOW;


/*=====================================================================
==   WTS Session Information
=====================================================================*/
typedef struct _WTSINFOA {    
    WTS_CONNECTSTATE_CLASS State; // connection state (see enum)
    DWORD SessionId;             // session id
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBy;
    CHAR WinStationName[WINSTATIONNAME_LENGTH]; 
    CHAR Domain[DOMAIN_LENGTH];
    CHAR UserName[USERNAME_LENGTH+1];// name of WinStation this session is
                                 // connected to    
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER CurrentTime;
        
} WTSINFOA, * PWTSINFOA;

/*=====================================================================
==   WTS Client Information
=====================================================================*/
typedef struct _WTSCLIENTW {    
    WCHAR ClientName[ CLIENTNAME_LENGTH + 1 ];
    WCHAR Domain[ DOMAIN_LENGTH + 1 ];
    WCHAR UserName[ USERNAME_LENGTH + 1 ];
    WCHAR WorkDirectory[ MAX_PATH + 1];
    WCHAR InitialProgram[ MAX_PATH + 1];
    BYTE EncryptionLevel;       // security level of encryption pd
    ULONG ClientAddressFamily;
    USHORT ClientAddress[ CLIENTADDRESS_LENGTH + 1 ];
    USHORT HRes;
    USHORT VRes;
    USHORT ColorDepth;
    WCHAR ClientDirectory[ MAX_PATH + 1 ];
    ULONG ClientBuildNumber;
    ULONG ClientHardwareId;    // client software serial number
    USHORT ClientProductId;     // client software product id
    USHORT OutBufCountHost;     // number of outbufs on host
    USHORT OutBufCountClient;   // number of outbufs on client
    USHORT OutBufLength;        // length of outbufs in bytes
    WCHAR  DeviceId[ MAX_PATH + 1];
} WTSCLIENTW, * PWTSCLIENTW;


/*=====================================================================
==   WTS Client Information
=====================================================================*/
typedef struct _WTSCLIENTA {    
    CHAR ClientName[ CLIENTNAME_LENGTH + 1 ];
    CHAR Domain[ DOMAIN_LENGTH + 1 ];
    CHAR UserName[ USERNAME_LENGTH + 1 ];
    CHAR WorkDirectory[ MAX_PATH + 1];
    CHAR InitialProgram[ MAX_PATH + 1 ];
    BYTE EncryptionLevel;       // security level of encryption pd
    ULONG ClientAddressFamily;
    USHORT ClientAddress[ CLIENTADDRESS_LENGTH + 1 ];
    USHORT HRes;
    USHORT VRes;
    USHORT ColorDepth;
    CHAR ClientDirectory[ MAX_PATH + 1 ];
    ULONG ClientBuildNumber;
    ULONG ClientHardwareId;    // client software serial number
    USHORT ClientProductId;     // client software product id
    USHORT OutBufCountHost;     // number of outbufs on host
    USHORT OutBufCountClient;   // number of outbufs on client
    USHORT OutBufLength;        // length of outbufs in bytes
    CHAR  DeviceId[ MAX_PATH + 1];
} WTSCLIENTA, * PWTSCLIENTA;
	

#ifdef UNICODE
#define WTSINFO  WTSINFOW
#define PWTSINFO PWTSINFOW
#define WTSCLIENT WTSCLIENTW
#define PWTSCLIENT PWTSCLIENTW
#else
#define WTSINFO  WTSINFOA
#define PWTSINFO PWTSINFOA
#define WTSCLIENT WTSCLIENTA
#define PWTSCLIENT PWTSCLIENTA

#endif


/*=====================================================================
==   WTSQuerySessionInformation - (WTSClientAddress)
=====================================================================*/

typedef struct _WTS_CLIENT_ADDRESS {
    DWORD AddressFamily;  // AF_INET, AF_INET6, AF_IPX, AF_NETBIOS, AF_UNSPEC
    BYTE  Address[20];    // client network address
} WTS_CLIENT_ADDRESS, * PWTS_CLIENT_ADDRESS;


/*=====================================================================
==   WTSQuerySessionInformation - (WTSClientDisplay)
=====================================================================*/

typedef struct _WTS_CLIENT_DISPLAY {
    DWORD HorizontalResolution; // horizontal dimensions, in pixels
    DWORD VerticalResolution;   // vertical dimensions, in pixels
    DWORD ColorDepth;           // 1=16, 2=256, 4=64K, 8=16M
} WTS_CLIENT_DISPLAY, * PWTS_CLIENT_DISPLAY;


/*=====================================================================
==   WTS_CONFIG_CLASS - WTSQueryUserConfig/WTSSetUserConfig
=====================================================================*/


typedef enum _WTS_CONFIG_CLASS {
    //Initial program settings
    WTSUserConfigInitialProgram,            // string returned/expected
    WTSUserConfigWorkingDirectory,          // string returned/expected
    WTSUserConfigfInheritInitialProgram,    // DWORD returned/expected
    //
    WTSUserConfigfAllowLogonTerminalServer,     //DWORD returned/expected
    //Timeout settings
    WTSUserConfigTimeoutSettingsConnections,    //DWORD returned/expected
    WTSUserConfigTimeoutSettingsDisconnections, //DWORD returned/expected
    WTSUserConfigTimeoutSettingsIdle,           //DWORD returned/expected
    //Client device settings
    WTSUserConfigfDeviceClientDrives,       //DWORD returned/expected
    WTSUserConfigfDeviceClientPrinters,         //DWORD returned/expected
    WTSUserConfigfDeviceClientDefaultPrinter,   //DWORD returned/expected
    //Connection settings
    WTSUserConfigBrokenTimeoutSettings,         //DWORD returned/expected
    WTSUserConfigReconnectSettings,             //DWORD returned/expected
    //Modem settings
    WTSUserConfigModemCallbackSettings,         //DWORD returned/expected
    WTSUserConfigModemCallbackPhoneNumber,      // string returned/expected
    //Shadow settings
    WTSUserConfigShadowingSettings,             //DWORD returned/expected
    //User Profile settings
    WTSUserConfigTerminalServerProfilePath,     // string returned/expected
    //Terminal Server home directory
    WTSUserConfigTerminalServerHomeDir,       // string returned/expected
    WTSUserConfigTerminalServerHomeDirDrive,    // string returned/expected
    WTSUserConfigfTerminalServerRemoteHomeDir,  // DWORD 0:LOCAL 1:REMOTE

} WTS_CONFIG_CLASS;


/*=====================================================================
==   WTS_EVENT - Event flags for WTSWaitSystemEvent
=====================================================================*/

#define WTS_EVENT_NONE         0x00000000 // return no event
#define WTS_EVENT_CREATE       0x00000001 // new WinStation created
#define WTS_EVENT_DELETE       0x00000002 // existing WinStation deleted
#define WTS_EVENT_RENAME       0x00000004 // existing WinStation renamed
#define WTS_EVENT_CONNECT      0x00000008 // WinStation connect to client
#define WTS_EVENT_DISCONNECT   0x00000010 // WinStation logged on without
                                          //     client
#define WTS_EVENT_LOGON        0x00000020 // user logged on to existing
                                          //     WinStation
#define WTS_EVENT_LOGOFF       0x00000040 // user logged off from
                                          //     existing WinStation
#define WTS_EVENT_STATECHANGE  0x00000080 // WinStation state change
#define WTS_EVENT_LICENSE      0x00000100 // license state change
#define WTS_EVENT_ALL          0x7fffffff // wait for all event types
#define WTS_EVENT_FLUSH        0x80000000 // unblock all waiters

/*=====================================================================
==   Flags for HotkeyModifiers in WTSStartRemoteControlSession
=====================================================================*/

#define REMOTECONTROL_KBDSHIFT_HOTKEY              0x1    // Shift key
#define REMOTECONTROL_KBDCTRL_HOTKEY               0x2    // Ctrl key
#define REMOTECONTROL_KBDALT_HOTKEY                0x4    // Alt key

/*=====================================================================
==   WTS_VIRTUAL_CLASS - WTSVirtualChannelQuery
=====================================================================*/
typedef enum _WTS_VIRTUAL_CLASS {
    WTSVirtualClientData,  // Virtual channel client module data
                           //     (C2H data)
    WTSVirtualFileHandle
} WTS_VIRTUAL_CLASS;


/*=====================================================================
==   Windows Terminal Server public APIs
=====================================================================*/

BOOL WINAPI
WTSStopRemoteControlSession(
    IN ULONG   LogonId
    );

BOOL WINAPI
WTSStartRemoteControlSessionW(
    __in LPWSTR  pTargetServerName,
    IN ULONG   TargetLogonId,
    IN BYTE    HotkeyVk,
    IN USHORT  HotkeyModifiers
    );

BOOL WINAPI
WTSStartRemoteControlSessionA(
    __in LPSTR  pTargetServerName,
    IN ULONG   TargetLogonId,
    IN BYTE    HotkeyVk,
    IN USHORT  HotkeyModifiers
    );

#ifdef UNICODE
#define WTSStartRemoteControlSession WTSStartRemoteControlSessionW
#else
#define WTSStartRemoteControlSession WTSStartRemoteControlSessionA
#endif /* UNICODE */

BOOL
WINAPI
WTSConnectSessionA(
    IN ULONG LogonId,
    IN ULONG TargetLogonId,
    __in PSTR pPassword,
    IN BOOL bWait
    );

BOOL
WINAPI
WTSConnectSessionW(
    IN ULONG LogonId,
    IN ULONG TargetLogonId,
    __in PWSTR pPassword,
    IN BOOL bWait
    );

#ifdef UNICODE
#define WTSConnectSession WTSConnectSessionW
#else
#define WTSConnectSession WTSConnectSessionA
#endif

BOOL
WINAPI
WTSEnumerateServersW(
    __in LPWSTR pDomainName,
    IN DWORD Reserved,
    IN DWORD Version,
    __deref_out_ecount(*pCount) PWTS_SERVER_INFOW * ppServerInfo,
    __out DWORD * pCount
    );

BOOL
WINAPI
WTSEnumerateServersA(
    __in LPSTR pDomainName,
    IN DWORD Reserved,
    IN DWORD Version,
    __deref_out_ecount(*pCount)  PWTS_SERVER_INFOA * ppServerInfo,
    __out DWORD * pCount
    );

#ifdef UNICODE
#define WTSEnumerateServers WTSEnumerateServersW
#else
#define WTSEnumerateServers WTSEnumerateServersA
#endif

/*------------------------------------------------*/

HANDLE
WINAPI
WTSOpenServerW(
    __in LPWSTR pServerName
    );

HANDLE
WINAPI
WTSOpenServerA(
    __in LPSTR pServerName
    );

#ifdef UNICODE
#define WTSOpenServer WTSOpenServerW
#else
#define WTSOpenServer WTSOpenServerA
#endif

/*------------------------------------------------*/

VOID
WINAPI
WTSCloseServer(
    IN HANDLE hServer
    );

/*------------------------------------------------*/

BOOL
WINAPI
WTSEnumerateSessionsW(
    IN HANDLE hServer,
    IN DWORD Reserved,
    IN DWORD Version,
    __deref_out_ecount(*pCount) PWTS_SESSION_INFOW * ppSessionInfo,
    __out DWORD * pCount
    );

BOOL
WINAPI
WTSEnumerateSessionsA(
    IN HANDLE hServer,
    IN DWORD Reserved,
    IN DWORD Version,
    __deref_out_ecount(*pCount)  PWTS_SESSION_INFOA * ppSessionInfo,
    __out DWORD * pCount
    );

#ifdef UNICODE
#define WTSEnumerateSessions WTSEnumerateSessionsW
#else
#define WTSEnumerateSessions WTSEnumerateSessionsA
#endif

/*------------------------------------------------*/

BOOL
WINAPI
WTSEnumerateProcessesW(
    IN HANDLE hServer,
    IN DWORD Reserved,
    IN DWORD Version,
    OUT PWTS_PROCESS_INFOW * ppProcessInfo,
    OUT DWORD * pCount
    );

BOOL
WINAPI
WTSEnumerateProcessesA(
    IN HANDLE hServer,
    IN DWORD Reserved,
    IN DWORD Version,
    OUT PWTS_PROCESS_INFOA * ppProcessInfo,
    OUT DWORD * pCount
    );

#ifdef UNICODE
#define WTSEnumerateProcesses WTSEnumerateProcessesW
#else
#define WTSEnumerateProcesses WTSEnumerateProcessesA
#endif

/*------------------------------------------------*/

BOOL
WINAPI
WTSTerminateProcess(
    IN HANDLE hServer,
    IN DWORD ProcessId,
    IN DWORD ExitCode
    );


/*------------------------------------------------*/

BOOL
WINAPI
WTSQuerySessionInformationW(
    IN HANDLE hServer,
    IN DWORD SessionId,
    IN WTS_INFO_CLASS WTSInfoClass,
    __deref_out_bcount(*pBytesReturned) LPWSTR * ppBuffer,
    __out DWORD * pBytesReturned
    );

BOOL
WINAPI
WTSQuerySessionInformationA(
    IN HANDLE hServer,
    IN DWORD SessionId,
    IN WTS_INFO_CLASS WTSInfoClass,
    __deref_out_bcount(*pBytesReturned) LPSTR * ppBuffer,
    __out DWORD * pBytesReturned
    );

#ifdef UNICODE
#define WTSQuerySessionInformation WTSQuerySessionInformationW
#else
#define WTSQuerySessionInformation WTSQuerySessionInformationA
#endif

/*------------------------------------------------*/

BOOL
WINAPI
WTSQueryUserConfigW(
    __in LPWSTR pServerName,
    __in LPWSTR pUserName,
    IN WTS_CONFIG_CLASS WTSConfigClass,
    __deref_out_bcount(*pBytesReturned) LPWSTR * ppBuffer,
    __out DWORD * pBytesReturned
    );

BOOL
WINAPI
WTSQueryUserConfigA(
    __in LPSTR pServerName,
    __in LPSTR pUserName,
    IN WTS_CONFIG_CLASS WTSConfigClass,
    __deref_out_bcount(*pBytesReturned) LPSTR * ppBuffer,
    __out DWORD * pBytesReturned
    );

#ifdef UNICODE
#define WTSQueryUserConfig WTSQueryUserConfigW
#else
#define WTSQueryUserConfig WTSQueryUserConfigA
#endif

/*------------------------------------------------*/

BOOL
WINAPI
WTSSetUserConfigW(
    __in LPWSTR pServerName,
    __in LPWSTR pUserName,
    IN WTS_CONFIG_CLASS WTSConfigClass,
    __in_bcount(DataLength) LPWSTR pBuffer,
    IN DWORD DataLength
    );

BOOL
WINAPI
WTSSetUserConfigA(
    __in LPSTR pServerName,
    __in LPSTR pUserName,
    IN WTS_CONFIG_CLASS WTSConfigClass,
    __in_bcount(DataLength) LPSTR pBuffer,
    IN DWORD DataLength
    );

#ifdef UNICODE
#define WTSSetUserConfig WTSSetUserConfigW
#else
#define WTSSetUserConfig WTSSetUserConfigA
#endif

/*------------------------------------------------*/

BOOL
WINAPI
WTSSendMessageW(
    IN HANDLE hServer,
    IN DWORD SessionId,
    __in_bcount(TitleLength) LPWSTR pTitle,
    IN DWORD TitleLength,
    __in_bcount(MessageLength) LPWSTR pMessage,
    IN DWORD MessageLength,
    IN DWORD Style,
    IN DWORD Timeout,
    __out DWORD * pResponse,
    IN BOOL bWait
    );

BOOL
WINAPI
WTSSendMessageA(
    IN HANDLE hServer,
    IN DWORD SessionId,
    __in_bcount(TitleLength) LPSTR pTitle,
    IN DWORD TitleLength,
    __in_bcount(MessageLength) LPSTR pMessage,
    IN DWORD MessageLength,
    IN DWORD Style,
    IN DWORD Timeout,
    __out DWORD * pResponse,
    IN BOOL bWait
    );

#ifdef UNICODE
#define WTSSendMessage WTSSendMessageW
#else
#define WTSSendMessage WTSSendMessageA
#endif

/*------------------------------------------------*/

BOOL
WINAPI
WTSDisconnectSession(
    IN HANDLE hServer,
    IN DWORD SessionId,
    IN BOOL bWait
    );

/*------------------------------------------------*/

BOOL
WINAPI
WTSLogoffSession(
    IN HANDLE hServer,
    IN DWORD SessionId,
    IN BOOL bWait
    );

/*------------------------------------------------*/

BOOL
WINAPI
WTSShutdownSystem(
    IN HANDLE hServer,
    IN DWORD ShutdownFlag
    );

/*------------------------------------------------*/

BOOL
WINAPI
WTSWaitSystemEvent(
    IN HANDLE hServer,
    IN DWORD EventMask,
    OUT DWORD * pEventFlags
    );

/*------------------------------------------------*/

HANDLE
WINAPI
WTSVirtualChannelOpen(
    IN HANDLE hServer,
    IN DWORD SessionId,
    __in LPSTR pVirtualName   /* ascii name */
    );

#define WTS_CHANNEL_OPTION_DYNAMIC          0x00000001       // dynamic channel
#define WTS_CHANNEL_OPTION_DYNAMIC_PRI_LOW  0x00000000   // priorities
#define WTS_CHANNEL_OPTION_DYNAMIC_PRI_MED  0x00000002
#define WTS_CHANNEL_OPTION_DYNAMIC_PRI_HIGH 0x00000004
#define WTS_CHANNEL_OPTION_DYNAMIC_PRI_REAL 0x00000006

HANDLE
WINAPI
WTSVirtualChannelOpenEx(
                     IN DWORD SessionId,
                     __in LPSTR pVirtualName,   /* ascii name */
                     IN DWORD flags
                     );

BOOL
WINAPI
WTSVirtualChannelClose(
    IN HANDLE hChannelHandle
    );

BOOL
WINAPI
WTSVirtualChannelRead(
    IN HANDLE hChannelHandle,
    IN ULONG TimeOut,
    __out_bcount_part(BufferSize, *pBytesRead) PCHAR Buffer,
    IN ULONG BufferSize,
    __out PULONG pBytesRead
    );

BOOL
WINAPI
WTSVirtualChannelWrite(
    IN HANDLE hChannelHandle,
    __in_bcount(Length) PCHAR Buffer,
    IN ULONG Length,
    __out PULONG pBytesWritten
    );

BOOL
WINAPI
WTSVirtualChannelPurgeInput(
    IN HANDLE hChannelHandle
    );

BOOL
WINAPI
WTSVirtualChannelPurgeOutput(
    IN HANDLE hChannelHandle
    );


BOOL
WINAPI
WTSVirtualChannelQuery(
    IN HANDLE hChannelHandle,
    IN WTS_VIRTUAL_CLASS,
    OUT PVOID *ppBuffer,
    OUT DWORD *pBytesReturned
    );

/*------------------------------------------------*/


VOID
WINAPI
WTSFreeMemory(
    IN PVOID pMemory
    );

/* Flags for Console Notification */

#define NOTIFY_FOR_ALL_SESSIONS     1
#define NOTIFY_FOR_THIS_SESSION     0


BOOL
WINAPI
WTSRegisterSessionNotification(
    HWND hWnd,
    DWORD dwFlags
    );

BOOL
WINAPI
WTSUnRegisterSessionNotification(
    HWND hWnd
    );


BOOL
WINAPI
WTSRegisterSessionNotificationEx(
    IN HANDLE hServer,
    IN HWND hWnd,
    IN DWORD dwFlags
    );

BOOL
WINAPI
WTSUnRegisterSessionNotificationEx(
    IN HANDLE hServer,
    IN HWND hWnd
    );

BOOL
WINAPI
WTSQueryUserToken(
    ULONG SessionId,
    PHANDLE phToken
    );



#ifdef __cplusplus
}
#endif

#endif  /* !_INC_WTSAPI */


