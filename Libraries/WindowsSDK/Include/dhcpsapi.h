/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    dhcpsapi.h

-*/

#ifndef _DHCPSAPI_
#define _DHCPSAPI_

#pragma once

#if defined(MIDL_PASS)
#define LPWSTR [string] wchar_t *
#endif

#if (_MSC_VER >= 800)
#define DHCP_API_FUNCTION    __stdcall
#else
#define DHCP_API_FUNCTION
#endif

#ifdef __cplusplus
#define DHCP_CONST   const
extern "C" {
#else
#define DHCP_CONST
#endif // __cplusplus

typedef DWORD DHCP_IP_ADDRESS, *PDHCP_IP_ADDRESS, *LPDHCP_IP_ADDRESS;
typedef DWORD DHCP_IP_MASK;
typedef DWORD DHCP_RESUME_HANDLE;

typedef DWORD DHCP_OPTION_ID;

typedef struct _DATE_TIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} DATE_TIME, *LPDATE_TIME;

typedef struct _DWORD_DWORD {
    DWORD DWord1;
    DWORD DWord2;
} DWORD_DWORD, *LPDWORD_DWORD;

typedef struct _DHCP_BINARY_DATA {
    DWORD DataLength;

#if defined(MIDL_PASS)
    [size_is(DataLength)]
#endif // MIDL_PASS
        BYTE *Data;

} DHCP_BINARY_DATA, *LPDHCP_BINARY_DATA;

typedef DHCP_BINARY_DATA DHCP_CLIENT_UID;



#define DHCP_ENDPOINT_FLAG_CANT_MODIFY 0x01

typedef struct _DHCP_BIND_ELEMENT {
    ULONG Flags;
    BOOL fBoundToDHCPServer;
    DHCP_IP_ADDRESS AdapterPrimaryAddress;
    DHCP_IP_ADDRESS AdapterSubnetAddress;
    LPWSTR IfDescription;
    ULONG IfIdSize;
#if defined (MIDL_PASS)
    [size_is(IfIdSize)]
#endif // MIDL_PASS
    LPBYTE IfId;    
} DHCP_BIND_ELEMENT, *LPDHCP_BIND_ELEMENT;

typedef struct _DHCP_BIND_ELEMENT_ARRAY {
    DWORD NumElements;
#if defined (MIDL_PASS)
    [size_is(NumElements)]
#endif // MIDL_PASS
    LPDHCP_BIND_ELEMENT Elements; //array
} DHCP_BIND_ELEMENT_ARRAY, *LPDHCP_BIND_ELEMENT_ARRAY;


typedef enum _DHCP_CLIENT_SEARCH_TYPE {
    DhcpClientIpAddress,
    DhcpClientHardwareAddress,
    DhcpClientName
} DHCP_SEARCH_INFO_TYPE, *LPDHCP_SEARCH_INFO_TYPE;

typedef struct _DHCP_CLIENT_SEARCH_INFO {
    DHCP_SEARCH_INFO_TYPE SearchType;
#if defined(MIDL_PASS)
    [switch_is(SearchType), switch_type(DHCP_SEARCH_INFO_TYPE)]
    union _DHCP_CLIENT_SEARCH_UNION {
        [case(DhcpClientIpAddress)] DHCP_IP_ADDRESS ClientIpAddress;
        [case(DhcpClientHardwareAddress)] DHCP_CLIENT_UID ClientHardwareAddress;
        [case(DhcpClientName)] LPWSTR ClientName;
        [default] ;
    } SearchInfo;
#else
    union _DHCP_CLIENT_SEARCH_UNION {
        DHCP_IP_ADDRESS ClientIpAddress;
        DHCP_CLIENT_UID ClientHardwareAddress;
        LPWSTR ClientName;
    } SearchInfo;
#endif // MIDL_PASS
} DHCP_SEARCH_INFO, *LPDHCP_SEARCH_INFO;


typedef enum _DHCP_OPTION_SCOPE_TYPE {
    DhcpDefaultOptions,
    DhcpGlobalOptions,
    DhcpSubnetOptions,
    DhcpReservedOptions,
    DhcpMScopeOptions
} DHCP_OPTION_SCOPE_TYPE, *LPDHCP_OPTION_SCOPE_TYPE;

typedef struct _DHCP_RESERVED_SCOPE {
    DHCP_IP_ADDRESS ReservedIpAddress;
    DHCP_IP_ADDRESS ReservedIpSubnetAddress;
} DHCP_RESERVED_SCOPE, *LPDHCP_RESERVED_SCOPE;

typedef struct _DHCP_OPTION_SCOPE_INFO {
    DHCP_OPTION_SCOPE_TYPE ScopeType;
#if defined(MIDL_PASS)
    [switch_is(ScopeType), switch_type(DHCP_OPTION_SCOPE_TYPE)]
    union _DHCP_OPTION_SCOPE_UNION {
        [case(DhcpDefaultOptions)] ; // PVOID DefaultScopeInfo;
        [case(DhcpGlobalOptions)] ;  // PVOID GlobalScopeInfo;
        [case(DhcpSubnetOptions)] DHCP_IP_ADDRESS SubnetScopeInfo;
        [case(DhcpReservedOptions)] DHCP_RESERVED_SCOPE ReservedScopeInfo;
        [case(DhcpMScopeOptions)] LPWSTR MScopeInfo;
        [default] ;
    } ScopeInfo;
#else
    union _DHCP_OPTION_SCOPE_UNION {
        PVOID DefaultScopeInfo; // must be NULL
        PVOID GlobalScopeInfo;  // must be NULL
        DHCP_IP_ADDRESS SubnetScopeInfo;
        DHCP_RESERVED_SCOPE ReservedScopeInfo;
        LPWSTR  MScopeInfo;
    } ScopeInfo;
#endif // MIDL_PASS
} DHCP_OPTION_SCOPE_INFO, *LPDHCP_OPTION_SCOPE_INFO;


typedef struct _DHCP_HOST_INFO {
    DHCP_IP_ADDRESS IpAddress;      // minimum information always available
    LPWSTR NetBiosName;             // optional information
    LPWSTR HostName;                // optional information
} DHCP_HOST_INFO, *LPDHCP_HOST_INFO;


typedef struct _DHCP_CLIENT_INFO {
    DHCP_IP_ADDRESS ClientIpAddress;    // currently assigned IP address.
    DHCP_IP_MASK SubnetMask;
    DHCP_CLIENT_UID ClientHardwareAddress;
    LPWSTR ClientName;                  // optional.
    LPWSTR ClientComment;
    DATE_TIME ClientLeaseExpires;       // UTC time in FILE_TIME format.
    DHCP_HOST_INFO OwnerHost;           // host that distributed this IP address.
} DHCP_CLIENT_INFO, *LPDHCP_CLIENT_INFO;

typedef struct _DHCP_CLIENT_INFO_ARRAY {
    DWORD NumElements;
#if defined(MIDL_PASS)
    [size_is(NumElements)]
#endif // MIDL_PASS
        LPDHCP_CLIENT_INFO *Clients; // array of pointers
} DHCP_CLIENT_INFO_ARRAY, *LPDHCP_CLIENT_INFO_ARRAY;


typedef struct _DHCP_IP_ARRAY {
    DWORD NumElements;
#if defined(MIDL_PASS)
    [size_is(NumElements)]
#endif // MIDL_PASS
        LPDHCP_IP_ADDRESS Elements; //array
} DHCP_IP_ARRAY, *LPDHCP_IP_ARRAY;


//
// Subnet State.
//
// Currently a Subnet scope can be Enabled or Disabled.
//
// If the state is Enabled State,
//  The server distributes address to the client, extends leases and
//  accepts releases.
//
// If the state is Disabled State,
//  The server does not distribute address to any new client, and does
//  extent (and sends NACK) old leases, but the servers accepts lease
//  releases.
//
// The idea behind this subnet state is, when the admin wants to stop
//  serving a subnet, he moves the state from Enbaled to Disabled so
//  that the clients from the subnets smoothly move to another servers
//  serving that subnet. When all or most of the clients move to
//  another server, the admin can delete the subnet without any force
//  if no client left in that subnet, otherwise the admin should use
//  full force to delete the subnet.
//

typedef enum _DHCP_SUBNET_STATE {
    DhcpSubnetEnabled = 0,
    DhcpSubnetDisabled,
    DhcpSubnetEnabledSwitched,    
    DhcpSubnetDisabledSwitched,
    DhcpSubnetInvalidState
} DHCP_SUBNET_STATE, *LPDHCP_SUBNET_STATE;

//
// Subnet related data structures.
//

typedef struct _DHCP_SUBNET_INFO {
    DHCP_IP_ADDRESS  SubnetAddress;
    DHCP_IP_MASK SubnetMask;
    LPWSTR SubnetName;
    LPWSTR SubnetComment;
    DHCP_HOST_INFO PrimaryHost;
    DHCP_SUBNET_STATE SubnetState;
} DHCP_SUBNET_INFO, *LPDHCP_SUBNET_INFO;

#define DHCP_SUBNET_INFO_VQ_FLAG_QUARANTINE    (1 << 0)        // Bit 0

typedef struct _DHCP_SUBNET_INFO_VQ{
    DHCP_IP_ADDRESS  SubnetAddress;
    DHCP_IP_MASK SubnetMask;
    LPWSTR SubnetName;
    LPWSTR SubnetComment;
    DHCP_HOST_INFO PrimaryHost;
    DHCP_SUBNET_STATE SubnetState;
    DWORD QuarantineOn;
    DWORD Reserved1;
    DWORD Reserved2;
    INT64 Reserved3;
    INT64 Reserved4;
} DHCP_SUBNET_INFO_VQ, *LPDHCP_SUBNET_INFO_VQ;


//
// DHCP Options related data structures.
//

typedef enum _DHCP_OPTION_DATA_TYPE {
    DhcpByteOption,
    DhcpWordOption,
    DhcpDWordOption,
    DhcpDWordDWordOption,
    DhcpIpAddressOption,
    DhcpStringDataOption,
    DhcpBinaryDataOption,
    DhcpEncapsulatedDataOption,
    DhcpIpv6AddressOption
} DHCP_OPTION_DATA_TYPE, *LPDHCP_OPTION_DATA_TYPE;


typedef struct _DHCP_OPTION_DATA_ELEMENT {
    DHCP_OPTION_DATA_TYPE    OptionType;
#if defined(MIDL_PASS)
    [switch_is(OptionType), switch_type(DHCP_OPTION_DATA_TYPE)]
    union _DHCP_OPTION_ELEMENT_UNION {
        [case(DhcpByteOption)] BYTE ByteOption;
        [case(DhcpWordOption)] WORD WordOption;
        [case(DhcpDWordOption)] DWORD DWordOption;
        [case(DhcpDWordDWordOption)] DWORD_DWORD DWordDWordOption;
        [case(DhcpIpAddressOption)] DHCP_IP_ADDRESS IpAddressOption;
        [case(DhcpStringDataOption)] LPWSTR StringDataOption;
        [case(DhcpBinaryDataOption)] DHCP_BINARY_DATA BinaryDataOption;
        [case(DhcpEncapsulatedDataOption)] DHCP_BINARY_DATA EncapsulatedDataOption;
        [case(DhcpIpv6AddressOption)] LPWSTR Ipv6AddressDataOption;		
        [default] ;
    } Element;
#else
    union _DHCP_OPTION_ELEMENT_UNION {
        BYTE ByteOption;
        WORD WordOption;
        DWORD DWordOption;
        DWORD_DWORD DWordDWordOption;
        DHCP_IP_ADDRESS IpAddressOption;
        LPWSTR StringDataOption;
        DHCP_BINARY_DATA BinaryDataOption;
        DHCP_BINARY_DATA EncapsulatedDataOption;
	 LPWSTR Ipv6AddressDataOption;	
                // for vendor specific information option.
    } Element;
#endif // MIDL_PASS
} DHCP_OPTION_DATA_ELEMENT, *LPDHCP_OPTION_DATA_ELEMENT;

typedef struct _DHCP_OPTION_DATA {
    DWORD NumElements; // number of option elements in the pointed array
#if defined(MIDL_PASS)
    [size_is(NumElements)]
#endif // MIDL_PASS
        LPDHCP_OPTION_DATA_ELEMENT Elements; //array
} DHCP_OPTION_DATA, *LPDHCP_OPTION_DATA;


typedef struct _DHCP_OPTION_VALUE {
    DHCP_OPTION_ID OptionID;
    DHCP_OPTION_DATA Value;
} DHCP_OPTION_VALUE, *LPDHCP_OPTION_VALUE;

typedef enum _DHCP_SUBNET_ELEMENT_TYPE_V5
{
	DhcpIpRanges, // The subnet element contains the range of DHCP-served IP addresses.
	DhcpSecondaryHosts, // The subnet element contains the IP addresses of secondary DHCP hosts available in the subnet.
	DhcpReservedIps, // The subnet element contains the individual reserved IP addresses for the subnet.,
	DhcpExcludedIpRanges, // The subnet element contains the IP addresses excluded from the range of DHCP-served addresses.,
	DhcpIpRangesDhcpOnly, // The subnet element contains the IP addresses served by DHCP to the subnet (as opposed to those served by other dynamic address services, such as BOOTP).,
	DhcpIpRangesDhcpBootp, // The subnet element contains the IP addresses served by both DHCP and BOOTP to the subnet.,
	DhcpIpRangesBootpOnly // The subnet element contains the IP addresses served by BOOTP to the subnet (specifically excluding DHCP-served addresses).
} DHCP_SUBNET_ELEMENT_TYPE,  *LPDHCP_SUBNET_ELEMENT_TYPE;

typedef struct _DHCP_BOOTP_IP_RANGE
{  
	DHCP_IP_ADDRESS StartAddress;
	DHCP_IP_ADDRESS EndAddress;
	ULONG BootpAllocated;
	ULONG MaxBootpAllowed;
} DHCP_BOOTP_IP_RANGE,  *LPDHCP_BOOT_IP_RANGE;

typedef struct _DHCP_IP_RESERVATION_V4
{
	DHCP_IP_ADDRESS ReservedIpAddress;
	DHCP_CLIENT_UID* ReservedForClient;
	BYTE bAllowedClientTypes;
} DHCP_IP_RESERVATION_V4,  *LPDHCP_IP_RESERVATION_V4;

typedef struct _DHCP_IP_RANGE
{
	DHCP_IP_ADDRESS StartAddress;
	DHCP_IP_ADDRESS EndAddress;
} DHCP_IP_RANGE,  *LPDHCP_IP_RANGE;

typedef struct _DHCP_SUBNET_ELEMENT_DATA_V5
{  
	DHCP_SUBNET_ELEMENT_TYPE ElementType;
	union
	{
		DHCP_BOOTP_IP_RANGE* IpRange;
		DHCP_HOST_INFO* SecondaryHost;
		DHCP_IP_RESERVATION_V4* ReservedIp;
		DHCP_IP_RANGE* ExcludeIpRange;
	} Element;
} DHCP_SUBNET_ELEMENT_DATA_V5,  *LPDHCP_SUBNET_ELEMENT_DATA_V5;

typedef enum _DHCP_FORCE_FLAG
{
  DhcpFullForce, // The operation deletes all client records affected by the element, and then deletes the element.,
  DhcpNoForce // The operation only deletes the subnet element, leaving intact any client records impacted by the change.
}DHCP_FORCE_FLAG,  *LPDHCP_FORCE_FLAG;

typedef struct _DHCP_IP_CLUSTER {
    DHCP_IP_ADDRESS ClusterAddress;
    DWORD ClusterMask;
} DHCP_IP_CLUSTER, *LPDHCP_IP_CLUSTER;

typedef DWORD DHCP_OPTION_ID;

typedef     struct                 _DHCPDS_SERVER {
    DWORD                          Version;       // version of this structure -- currently zero
    LPWSTR                         ServerName;    // [DNS?] unique name for server
    DWORD                          ServerAddress; // ip address of server
    DWORD                          Flags;         // additional info -- state
    DWORD                          State;         // not used ...
    LPWSTR                         DsLocation;    // ADsPath to server object
    DWORD                          DsLocType;     // path relative? absolute? diff srvr?
}   DHCPDS_SERVER, *LPDHCPDS_SERVER, *PDHCPDS_SERVER;
typedef     DHCPDS_SERVER          DHCP_SERVER_INFO;
typedef     PDHCPDS_SERVER         PDHCP_SERVER_INFO;
typedef     LPDHCPDS_SERVER        LPDHCP_SERVER_INFO;

typedef     struct                 _DHCPDS_SERVERS {
    DWORD                          Flags;         // not used currently.
    DWORD                          NumElements;   // # of elements in array
    LPDHCPDS_SERVER                Servers;       // array of server info
}   DHCPDS_SERVERS, *LPDHCPDS_SERVERS, *PDHCPDS_SERVERS;
typedef     DHCPDS_SERVERS         DHCP_SERVER_INFO_ARRAY;
typedef     PDHCPDS_SERVERS        PDHCP_SERVER_INFO_ARRAY;
typedef     LPDHCPDS_SERVERS       LPDHCP_SERVER_INFO_ARRAY;

typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY_V5 {
    DWORD NumElements;
    LPDHCP_SUBNET_ELEMENT_DATA_V5 Elements; //array
} DHCP_SUBNET_ELEMENT_INFO_ARRAY_V5, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V5;

//################ Start of Structures specific to IPV6 ##########################

#if (WINVER >= 0x600)


typedef enum _DHCP_OPTION_TYPE {
    DhcpUnaryElementTypeOption,
    DhcpArrayTypeOption
} DHCP_OPTION_TYPE;

typedef struct _DHCP_OPTION {
    DHCP_OPTION_ID OptionID;
    LPWSTR OptionName;
    LPWSTR OptionComment;
    DHCP_OPTION_DATA DefaultValue;
    DHCP_OPTION_TYPE OptionType;
} DHCP_OPTION, *LPDHCP_OPTION;

typedef struct _DHCP_OPTION_ARRAY {
    DWORD NumElements; // number of options in the pointed array
#if defined(MIDL_PASS)
    [size_is(NumElements)]
#endif // MIDL_PASS
        LPDHCP_OPTION Options;  // array
} DHCP_OPTION_ARRAY, *LPDHCP_OPTION_ARRAY;

//--

typedef     struct _DHCP_ALL_OPTIONS {
    DWORD Flags;         // must be zero -- not used..
    LPDHCP_OPTION_ARRAY NonVendorOptions;
    DWORD NumVendorOptions;

#if defined(MIDL_PASS)
    [size_is(NumVendorOptions)]
#endif
    struct                         /* anonymous */ {
        DHCP_OPTION Option;
        LPWSTR VendorName;
        LPWSTR ClassName;     // currently unused.
    }   *VendorOptions;
} DHCP_ALL_OPTIONS, *LPDHCP_ALL_OPTIONS;

typedef struct _DHCP_IPV6_ADDRESS {
	ULONGLONG HighOrderBits;
	ULONGLONG LowOrderBits;
} DHCP_IPV6_ADDRESS, *LPDHCP_IPV6_ADDRESS;

typedef struct _DHCP_RESERVED_SCOPE6 {
    DHCP_IPV6_ADDRESS ReservedIpAddress;
    DHCP_IPV6_ADDRESS ReservedIpSubnetAddress;
} DHCP_RESERVED_SCOPE6;

typedef enum _DHCP_OPTION_SCOPE_TYPE6 {
    DhcpDefaultOptions6,
    DhcpScopeOptions6,
    DhcpReservedOptions6,
    DhcpGlobalOptions6
} DHCP_OPTION_SCOPE_TYPE6;

typedef struct _DHCP_OPTION_SCOPE_INFO6 {
    DHCP_OPTION_SCOPE_TYPE6 ScopeType;
#if defined(MIDL_PASS)
    [switch_is(ScopeType), switch_type(DHCP_OPTION_SCOPE_TYPE6)]
    union _DHCP_OPTION_SCOPE_UNION6 {
        [case(DhcpDefaultOptions6)] ; // PVOID DefaultScopeInfo;
        [case(DhcpScopeOptions6)] DHCP_IPV6_ADDRESS SubnetScopeInfo;
        [case(DhcpReservedOptions6)] DHCP_RESERVED_SCOPE6 ReservedScopeInfo;
        [default] ;
    } ScopeInfo;
#else
    union _DHCP_OPTION_SCOPE_UNION6 {
        PVOID DefaultScopeInfo; // must be NULL
        DHCP_IPV6_ADDRESS SubnetScopeInfo;
        DHCP_RESERVED_SCOPE6 ReservedScopeInfo;
    } ScopeInfo;
#endif // MIDL_PASS
} DHCP_OPTION_SCOPE_INFO6, *LPDHCP_OPTION_SCOPE_INFO6;


typedef struct _DHCP_OPTION_VALUE_ARRAY {
    DWORD NumElements; // number of options in the pointed array
#if defined(MIDL_PASS)
    [size_is(NumElements)]
#endif // MIDL_PASS
        LPDHCP_OPTION_VALUE Values;  // array
} DHCP_OPTION_VALUE_ARRAY, *LPDHCP_OPTION_VALUE_ARRAY;


typedef     struct _DHCP_ALL_OPTION_VALUES {
    DWORD Flags;         // must be zero -- not used
    DWORD  NumElements;   // the # of elements in array of Options below..
#if     defined(MIDL_PASS)
    [size_is(NumElements)]
#endif  MIDL_PASS
    struct                         /* anonymous */ {
        LPWSTR ClassName;     // for each user class (NULL if none exists)
        LPWSTR  VendorName;    // for each vendor class (NULL if none exists)
        BOOL IsVendor;      // is this set of options vendor specific?
        LPDHCP_OPTION_VALUE_ARRAY  OptionsArray;  // list of options for the above pair: (vendor,user)
    }   *Options;       // for each vendor/user class pair, one element in this array..
} DHCP_ALL_OPTION_VALUES, *LPDHCP_ALL_OPTION_VALUES;

//--

typedef struct _DHCP_SUBNET_INFO_V6
{
    DHCP_IPV6_ADDRESS	SubnetAddress;
    ULONG	Prefix;
    USHORT	Preference;	
    LPWSTR	SubnetName;
    LPWSTR	SubnetComment;
    DWORD	State;
    DWORD	ScopeId;
} DHCP_SUBNET_INFO_V6,*LPDHCP_SUBNET_INFO_V6;

typedef struct _DHCPV6_IP_ARRAY {
    DWORD NumElements;
#if defined(MIDL_PASS)
    [size_is(NumElements)]
#endif // MIDL_PASS
        LPDHCP_IPV6_ADDRESS Elements; //array
} DHCPV6_IP_ARRAY, *LPDHCPV6_IP_ARRAY;

//--

typedef enum _DHCP_SUBNET_ELEMENT_TYPE_V6 {
    Dhcpv6IpRanges,
    Dhcpv6ReservedIps,
    Dhcpv6ExcludedIpRanges
} DHCP_SUBNET_ELEMENT_TYPE_V6;

typedef struct _DHCP_IP_RANGE_V6 {
    DHCP_IPV6_ADDRESS StartAddress;
    DHCP_IPV6_ADDRESS EndAddress;
} DHCP_IP_RANGE_V6, *LPDHCP_IP_RANGE_V6;

typedef struct _DHCP_IP_RESERVATION_V6 {
    DHCP_IPV6_ADDRESS  ReservedIpAddress;
    DHCP_CLIENT_UID *ReservedForClient;
    DWORD InterfaceId;
} DHCP_IP_RESERVATION_V6, *LPDHCP_IP_RESERVATION_V6;

typedef struct _DHCP_SUBNET_ELEMENT_DATA_V6 {
    DHCP_SUBNET_ELEMENT_TYPE_V6 ElementType;
#if defined(MIDL_PASS)
    [switch_is(ELEMENT_MASK(ElementType)), switch_type(DHCP_SUBNET_ELEMENT_TYPE_V6)]
    union _DHCP_SUBNET_ELEMENT_UNION_V6 {
        [case(Dhcpv6IpRanges)] DHCP_IP_RANGE_V6 *IpRange;
        [case(Dhcpv6ReservedIps)] DHCP_IP_RESERVATION_V6 *ReservedIp;
        [case(Dhcpv6ExcludedIpRanges)] DHCP_IP_RANGE_V6 *ExcludeIpRange;
        [default] ;
    } Element;
#else
    union _DHCP_SUBNET_ELEMENT_UNION_V6 {
	DHCP_IP_RANGE_V6 *IpRange;
        DHCP_IP_RESERVATION_V6 *ReservedIp;
        DHCP_IP_RANGE_V6 *ExcludeIpRange;
    } Element;
#endif // MIDL_PASS
} DHCP_SUBNET_ELEMENT_DATA_V6, *LPDHCP_SUBNET_ELEMENT_DATA_V6;
    

typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY_V6 {
    DWORD NumElements;
#if defined(MIDL_PASS)
    [size_is(NumElements)]
#endif // MIDL_PASS
    LPDHCP_SUBNET_ELEMENT_DATA_V6 Elements; //array
} DHCP_SUBNET_ELEMENT_INFO_ARRAY_V6, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V6;

//--

typedef DHCP_IPV6_ADDRESS DHCP_RESUME_IPV6_HANDLE;

typedef struct _DHCP_HOST_INFO_V6 {
    DHCP_IPV6_ADDRESS IpAddress;      // minimum information always available
    LPWSTR NetBiosName;             // optional information
    LPWSTR HostName;                // optional information
} DHCP_HOST_INFO_V6, *LPDHCP_HOST_INFO_V6;

typedef struct _DHCP_CLIENT_INFO_V6 {
    DHCP_IPV6_ADDRESS ClientIpAddress;    // currently assigned IP address.
    DHCP_CLIENT_UID ClientDUID; 
    DWORD AddressType;			// IANA or IATA
    DWORD IAID;				// IAID Associated with the address.
    LPWSTR ClientName;                  // optional.
    LPWSTR ClientComment;
    DATE_TIME ClientValidLeaseExpires;    // UTC time in FILE_TIME format.
    DATE_TIME ClientPrefLeaseExpires;     // UTC time in FILE_TIME format.
    DHCP_HOST_INFO_V6 OwnerHost;          // host that distributed this IP address.
} DHCP_CLIENT_INFO_V6, *LPDHCP_CLIENT_INFO_V6;

typedef struct _DHCP_CLIENT_INFO_ARRAY_V6 {
    DWORD NumElements;
#if defined(MIDL_PASS)
    [size_is(NumElements)]
#endif // MIDL_PASS
    LPDHCP_CLIENT_INFO_V6 *Clients; // array of pointers
} DHCP_CLIENT_INFO_ARRAY_V6, *LPDHCP_CLIENT_INFO_ARRAY_V6;

#endif
//################ End of Structures specific to IPV6   ##########################

#define ERROR_DHCP_OPTION_NOT_PRESENT         20010
#define ERROR_DHCP_SUBNET_EXISTS              20052
#define ERROR_DDS_SERVER_ALREADY_EXISTS       20079
#define ERROR_DDS_SERVER_DOES_NOT_EXIST       20080



DWORD DHCP_API_FUNCTION
DhcpGetVersion(
    LPWSTR ServerIpAddress,
    LPDWORD MajorVersion,
    LPDWORD MinorVersion
    );

DWORD DHCP_API_FUNCTION
DhcpSetServerBindingInfo(
    DHCP_CONST WCHAR *ServerIpAddress,
    ULONG Flags,
    LPDHCP_BIND_ELEMENT_ARRAY BindElementInfo
);

DWORD DHCP_API_FUNCTION
DhcpGetServerBindingInfo(
    DHCP_CONST WCHAR *ServerIpAddress,
    ULONG Flags,
    LPDHCP_BIND_ELEMENT_ARRAY *BindElementsInfo
);

DWORD DHCP_API_FUNCTION
DhcpCreateClientInfo(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_CLIENT_INFO *ClientInfo
    );

DWORD DHCP_API_FUNCTION
DhcpSetClientInfo(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_CLIENT_INFO *ClientInfo
    );

DWORD DHCP_API_FUNCTION
DhcpGetClientInfo(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_SEARCH_INFO *SearchInfo,
    LPDHCP_CLIENT_INFO *ClientInfo
    );

DWORD DHCP_API_FUNCTION
DhcpDeleteClientInfo(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_CONST DHCP_SEARCH_INFO *ClientInfo
    );

DWORD DHCP_API_FUNCTION
DhcpEnumSubnetClients(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    DHCP_RESUME_HANDLE *ResumeHandle,
    DWORD PreferredMaximum,
    LPDHCP_CLIENT_INFO_ARRAY *ClientInfo,
    DWORD *ClientsRead,
    DWORD *ClientsTotal
    );


DWORD DHCP_API_FUNCTION
DhcpEnumSubnets(
    DHCP_CONST WCHAR    *ServerIpAddress,
    DHCP_RESUME_HANDLE  *ResumeHandle,
    DWORD                PreferredMaximum,
    LPDHCP_IP_ARRAY     *EnumInfo,
    DWORD               *ElementsRead,
    DWORD               *ElementsTotal
    );

DWORD DHCP_API_FUNCTION
DhcpGetSubnetInfo(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    LPDHCP_SUBNET_INFO * SubnetInfo
    );


DWORD DHCP_API_FUNCTION
DhcpGetOptionValue(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_OPTION_ID OptionID,
    DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo,
    LPDHCP_OPTION_VALUE *OptionValue
    );

VOID DHCP_API_FUNCTION
DhcpRpcFreeMemory(
    PVOID BufferPointer
    );

DWORD DHCP_API_FUNCTION
DhcpCreateSubnet(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_INFO * SubnetInfo
    );


DWORD DHCP_API_FUNCTION
DhcpDeleteSubnet(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    DHCP_FORCE_FLAG ForceFlag
    );

DWORD DHCP_API_FUNCTION
DhcpSetSubnetInfo(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_INFO * SubnetInfo
    );

DWORD DHCP_API_FUNCTION
DhcpAddSubnetElementV5(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V5 * AddElementInfo
    );

DWORD DHCP_API_FUNCTION
DhcpEnumSubnetElementsV5(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    DHCP_SUBNET_ELEMENT_TYPE EnumElementType,
    DHCP_RESUME_HANDLE *ResumeHandle,
    DWORD PreferredMaximum,
    LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V5 *EnumElementInfo,
    DWORD *ElementsRead,
    DWORD *ElementsTotal
    );

DWORD DHCP_API_FUNCTION
DhcpRemoveSubnetElementV5(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V5 * RemoveElementInfo,
    DHCP_FORCE_FLAG ForceFlag
    );

//DOC DhcpDsInit must be called exactly once per process.. this initializes the
//DOC memory and other structures for this process.  This initializes some DS
//DOC object handles (memory), and hence is slow as this has to read from DS.
DWORD DHCP_API_FUNCTION
DhcpDsInit(
    VOID
);

//DOC DhcpDsCleanup undoes the effect of any DhcpDsInit.  This function should be
//DOC called exactly once for each process, and only at termination.  Note that
//DOC it is safe to call this function even if DhcpDsInit does not succeed.
VOID DHCP_API_FUNCTION
DhcpDsCleanup(
    VOID
);

//DOC DhcpAddServer tries to add a new server to the existing list of servers in
//DOC the DS. The function returns error if the Server already exists in the DS.
//DOC The function tries to upload the server configuration to the DS..
//DOC This is a SLOW call.  Currently, the DsLocation and DsLocType are not valid
//DOC fields in the NewServer and they'd be ignored. Version must be zero.
DWORD DHCP_API_FUNCTION
DhcpAddServer(
    IN      DWORD                  Flags,         // must be zero
    IN      LPVOID                 IdInfo,        // must be NULL
    IN      LPDHCP_SERVER_INFO     NewServer,     // input server information
    IN      LPVOID                 CallbackFn,    // must be NULL
    IN      LPVOID                 CallbackData   // must be NULL
);

//DOC DhcpDeleteServer tries to delete the server from DS. It is an error if the
//DOC server does not already exist.  This also deletes any objects related to
//DOC this server in the DS (like subnet, reservations etc.).
DWORD DHCP_API_FUNCTION
DhcpDeleteServer(
    IN      DWORD                  Flags,         // must be zero
    IN      LPVOID                 IdInfo,        // must be NULL
    IN      LPDHCP_SERVER_INFO     NewServer,     // input server information
    IN      LPVOID                 CallbackFn,    // must be NULL
    IN      LPVOID                 CallbackData   // must be NULL
);

//DOC DhcpEnumServers enumerates the list of servers found in the DS.  If the DS
//DOC is not accessible, it returns an error. The only currently used parameter
//DOC is the out parameter Servers.  This is a SLOW call.
DWORD DHCP_API_FUNCTION
DhcpEnumServers(
    IN      DWORD                  Flags,         // must be zero
    IN      LPVOID                 IdInfo,        // must be NULL
    OUT     LPDHCP_SERVER_INFO_ARRAY *Servers,    // output servers list
    IN      LPVOID                 CallbackFn,    // must be NULL
    IN      LPVOID                 CallbackData   // must be NULL
);

DWORD DHCP_API_FUNCTION                           // Status code
DhcpServerRedoAuthorization(                      // retry the rogue server stuff
    IN      LPWSTR                 ServerIpAddr,  // String form of server IP
    IN      ULONG                  dwReserved     // reserved for future
);

DWORD DHCP_API_FUNCTION
DhcpRemoveOptionValueV5(
    IN      LPWSTR                 ServerIpAddress,
    IN      DWORD                  Flags,
    IN      DHCP_OPTION_ID         OptionID,
    IN      LPWSTR                 ClassName,
    IN      LPWSTR                 VendorName,
    IN      LPDHCP_OPTION_SCOPE_INFO ScopeInfo
) ;

DWORD DHCP_API_FUNCTION                           // OPTION_NOT_PRESENT if option is not defined
DhcpSetOptionValueV5(                             // replace or add a new option value
    IN      LPWSTR                 ServerIpAddress,
    IN      DWORD                  Flags,
    IN      DHCP_OPTION_ID         OptionId,
    IN      LPWSTR                 ClassName,
    IN      LPWSTR                 VendorName,
    IN      LPDHCP_OPTION_SCOPE_INFO ScopeInfo,
    IN      LPDHCP_OPTION_DATA     OptionValue
) ;

DWORD DHCP_API_FUNCTION
DhcpGetSubnetInfoVQ(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    LPDHCP_SUBNET_INFO_VQ * SubnetInfo
    );


DWORD DHCP_API_FUNCTION
DhcpCreateSubnetVQ(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_INFO_VQ * SubnetInfo
    );


DWORD DHCP_API_FUNCTION
DhcpSetSubnetInfoVQ(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IP_ADDRESS SubnetAddress,
    DHCP_CONST DHCP_SUBNET_INFO_VQ * SubnetInfo
    );

//################ Start of Functions specific to IPV6 ##########################

#if (WINVER >= 0x600)

// Option Functions

DWORD DHCP_API_FUNCTION
DhcpCreateOptionV6(
    IN	LPWSTR ServerIpAddress,
    IN	DWORD Flags,
    IN	DHCP_OPTION_ID OptionId,      // must be between 0-255 or 256-511 (for vendor stuff)
    IN	LPWSTR ClassName,
    IN	LPWSTR VendorName,
    IN	LPDHCP_OPTION OptionInfo
    );

DWORD DHCP_API_FUNCTION
DhcpEnumOptionsV6(                                
    IN      LPWSTR ServerIpAddress,
    IN      DWORD Flags,
    IN      LPWSTR ClassName,
    IN      LPWSTR VendorName,
    IN OUT  DHCP_RESUME_HANDLE *ResumeHandle,   // must be zero intially and then never touched
    IN      DWORD PreferredMaximum, 		// max # of bytes of info to pass along
    OUT     LPDHCP_OPTION_ARRAY *Options,       // fill this option array
    OUT     DWORD *OptionsRead,   		// fill in the # of options read
    OUT     DWORD *OptionsTotal   		// fill in the total # here
);

DWORD DHCP_API_FUNCTION
DhcpRemoveOptionV6(                               
    IN	LPWSTR ServerIpAddress,
    IN	DWORD Flags,
    IN	DHCP_OPTION_ID OptionID,
    IN	LPWSTR ClassName,
    IN	LPWSTR VendorName
);


// All Option Functions 

DWORD DHCP_API_FUNCTION
DhcpGetAllOptionsV6(
    IN	LPWSTR ServerIpAddress,
    IN	DWORD Flags,         // what do we care about vendor/classid stuff?
    OUT	LPDHCP_ALL_OPTIONS *OptionStruct   // fill the fields of this structure
);

DWORD DHCP_API_FUNCTION
DhcpGetAllOptionValuesV6(
    LPWSTR ServerIpAddress,
    IN DWORD Flags,
    IN LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo,
    OUT LPDHCP_ALL_OPTION_VALUES *Values
);

//Option Info Functions

DWORD DHCP_API_FUNCTION
DhcpGetOptionInfoV6(
    LPWSTR ServerIpAddress,
    IN DWORD Flags,
    IN DHCP_OPTION_ID OptionID,
    LPWSTR ClassName,
    LPWSTR  VendorName,
    OUT LPDHCP_OPTION *OptionInfo     // allocate memory using MIDL functions
);

DWORD DHCP_API_FUNCTION
DhcpSetOptionInfoV6(
    LPWSTR ServerIpAddress,
    DWORD Flags,
    DHCP_OPTION_ID OptionID,
    LPWSTR ClassName,
    LPWSTR VendorName,
    IN LPDHCP_OPTION OptionInfo
);

//Option Value Functions

DWORD DHCP_API_FUNCTION
DhcpSetOptionValueV6(                             
    LPWSTR ServerIpAddress,
    IN DWORD Flags,
    IN DHCP_OPTION_ID OptionId,
    LPWSTR ClassName,
    LPWSTR VendorName,
    IN LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo,
    IN LPDHCP_OPTION_DATA OptionValue
);    

DWORD DHCP_API_FUNCTION
DhcpEnumOptionValuesV6(
    DHCP_CONST WCHAR *ServerIpAddress,
    DWORD Flags,
    LPWSTR ClassName,
    LPWSTR VendorName,
    LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo,
    DHCP_RESUME_HANDLE *ResumeHandle,
    DWORD PreferredMaximum,
    LPDHCP_OPTION_VALUE_ARRAY *OptionValues,
    DWORD *OptionsRead,
    DWORD *OptionsTotal
    );

DWORD DHCP_API_FUNCTION
DhcpRemoveOptionValueV6(
    LPWSTR ServerIpAddress,
    IN DWORD Flags,
    IN  DHCP_OPTION_ID OptionID,
    LPWSTR ClassName,
    LPWSTR  VendorName,
    IN LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo
);

//Subnet Functions

DWORD DHCP_API_FUNCTION 
DhcpCreateSubnetV6(
    LPWSTR ServerIpAddress,
    DHCP_IPV6_ADDRESS SubnetAddress,
    LPDHCP_SUBNET_INFO_V6 SubnetInfo
    );

DWORD DHCP_API_FUNCTION 
DhcpDeleteSubnetV6(
    LPWSTR ServerIpAddress,
    DHCP_IPV6_ADDRESS SubnetAddress,
    DHCP_FORCE_FLAG ForceFlag
);

DWORD DHCP_API_FUNCTION 
DhcpEnumSubnetsV6(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_RESUME_HANDLE *ResumeHandle,
    DWORD PreferredMaximum,
    LPDHCPV6_IP_ARRAY *EnumInfo,
    DWORD *ElementsRead,
    DWORD *ElementsTotal
    );


//Subnet Element Functions

DWORD DHCP_API_FUNCTION 
DhcpAddSubnetElementV6(
    LPWSTR ServerIpAddress,
    DHCP_IPV6_ADDRESS SubnetAddress,
    LPDHCP_SUBNET_ELEMENT_DATA_V6 AddElementInfo
    );

DWORD DHCP_API_FUNCTION 
DhcpRemoveSubnetElementV6(
    LPWSTR ServerIpAddress,
    DHCP_IPV6_ADDRESS SubnetAddress,
    LPDHCP_SUBNET_ELEMENT_DATA_V6 RemoveElementInfo,
    DHCP_FORCE_FLAG ForceFlag
    );
    
DWORD DHCP_API_FUNCTION 
DhcpEnumSubnetElementsV6(
    LPWSTR ServerIpAddress,
    DHCP_IPV6_ADDRESS SubnetAddress,
    DHCP_SUBNET_ELEMENT_TYPE_V6 EnumElementType,
    DHCP_RESUME_HANDLE *ResumeHandle,
    DWORD PreferredMaximum,
    LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V6 *EnumElementInfo,
    DWORD *ElementsRead,
    DWORD *ElementsTotal
    );

//Subnet Info Function

DWORD DHCP_API_FUNCTION
DhcpGetSubnetInfoV6(
    LPWSTR ServerIpAddress,
    DHCP_IPV6_ADDRESS SubnetAddress,
    LPDHCP_SUBNET_INFO_V6 *SubnetInfo
    );


#define SCOPE_STATE_ENABLED     DhcpSubnetEnabled
#define SCOPE_STATE_DISABLED    DhcpSubnetDisabled

//Subnet Client Function

DWORD DHCP_API_FUNCTION
DhcpEnumSubnetClientsV6(
    DHCP_CONST WCHAR *ServerIpAddress,
    DHCP_IPV6_ADDRESS SubnetAddress,
    DHCP_RESUME_IPV6_HANDLE *ResumeHandle,
    DWORD PreferredMaximum,
    LPDHCP_CLIENT_INFO_ARRAY_V6 *ClientInfo,
    DWORD *ClientsRead,
    DWORD *ClientsTotal
    );

#endif
//################ End of Functions specific to IPV6 ############################

#ifdef __cplusplus
}
#endif

#endif // _DHCPSAPI_

