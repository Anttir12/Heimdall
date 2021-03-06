

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for casetup.idl:
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

#ifndef __casetup_h__
#define __casetup_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICertSrvSetupKeyInformation_FWD_DEFINED__
#define __ICertSrvSetupKeyInformation_FWD_DEFINED__
typedef interface ICertSrvSetupKeyInformation ICertSrvSetupKeyInformation;
#endif 	/* __ICertSrvSetupKeyInformation_FWD_DEFINED__ */


#ifndef __ICertSrvSetupKeyInformationCollection_FWD_DEFINED__
#define __ICertSrvSetupKeyInformationCollection_FWD_DEFINED__
typedef interface ICertSrvSetupKeyInformationCollection ICertSrvSetupKeyInformationCollection;
#endif 	/* __ICertSrvSetupKeyInformationCollection_FWD_DEFINED__ */


#ifndef __ICertSrvSetup_FWD_DEFINED__
#define __ICertSrvSetup_FWD_DEFINED__
typedef interface ICertSrvSetup ICertSrvSetup;
#endif 	/* __ICertSrvSetup_FWD_DEFINED__ */


#ifndef __IMSCEPSetup_FWD_DEFINED__
#define __IMSCEPSetup_FWD_DEFINED__
typedef interface IMSCEPSetup IMSCEPSetup;
#endif 	/* __IMSCEPSetup_FWD_DEFINED__ */


#ifndef __CCertSrvSetupKeyInformation_FWD_DEFINED__
#define __CCertSrvSetupKeyInformation_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertSrvSetupKeyInformation CCertSrvSetupKeyInformation;
#else
typedef struct CCertSrvSetupKeyInformation CCertSrvSetupKeyInformation;
#endif /* __cplusplus */

#endif 	/* __CCertSrvSetupKeyInformation_FWD_DEFINED__ */


#ifndef __CCertSrvSetup_FWD_DEFINED__
#define __CCertSrvSetup_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertSrvSetup CCertSrvSetup;
#else
typedef struct CCertSrvSetup CCertSrvSetup;
#endif /* __cplusplus */

#endif 	/* __CCertSrvSetup_FWD_DEFINED__ */


#ifndef __CMSCEPSetup_FWD_DEFINED__
#define __CMSCEPSetup_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMSCEPSetup CMSCEPSetup;
#else
typedef struct CMSCEPSetup CMSCEPSetup;
#endif /* __cplusplus */

#endif 	/* __CMSCEPSetup_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICertSrvSetupKeyInformation_INTERFACE_DEFINED__
#define __ICertSrvSetupKeyInformation_INTERFACE_DEFINED__

/* interface ICertSrvSetupKeyInformation */
/* [unique][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ICertSrvSetupKeyInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6ba73778-36da-4c39-8a85-bcfa7d000793")
    ICertSrvSetupKeyInformation : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProviderName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProviderName( 
            /* [in] */ __RPC__in const BSTR bstrVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ __RPC__out LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Length( 
            /* [in] */ LONG lVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Existing( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Existing( 
            /* [in] */ VARIANT_BOOL bVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ContainerName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ContainerName( 
            /* [in] */ __RPC__in const BSTR bstrVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HashAlgorithm( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HashAlgorithm( 
            /* [in] */ __RPC__in const BSTR bstrVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExistingCACertificate( 
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExistingCACertificate( 
            /* [in] */ VARIANT varVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICertSrvSetupKeyInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertSrvSetupKeyInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertSrvSetupKeyInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertSrvSetupKeyInformation * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderName )( 
            ICertSrvSetupKeyInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProviderName )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ __RPC__in const BSTR bstrVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            ICertSrvSetupKeyInformation * This,
            /* [retval][out] */ __RPC__out LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Length )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ LONG lVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Existing )( 
            ICertSrvSetupKeyInformation * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Existing )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ VARIANT_BOOL bVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerName )( 
            ICertSrvSetupKeyInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerName )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ __RPC__in const BSTR bstrVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            ICertSrvSetupKeyInformation * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ __RPC__in const BSTR bstrVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExistingCACertificate )( 
            ICertSrvSetupKeyInformation * This,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExistingCACertificate )( 
            ICertSrvSetupKeyInformation * This,
            /* [in] */ VARIANT varVal);
        
        END_INTERFACE
    } ICertSrvSetupKeyInformationVtbl;

    interface ICertSrvSetupKeyInformation
    {
        CONST_VTBL struct ICertSrvSetupKeyInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertSrvSetupKeyInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertSrvSetupKeyInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertSrvSetupKeyInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertSrvSetupKeyInformation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertSrvSetupKeyInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertSrvSetupKeyInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertSrvSetupKeyInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertSrvSetupKeyInformation_get_ProviderName(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderName(This,pVal) ) 

#define ICertSrvSetupKeyInformation_put_ProviderName(This,bstrVal)	\
    ( (This)->lpVtbl -> put_ProviderName(This,bstrVal) ) 

#define ICertSrvSetupKeyInformation_get_Length(This,pVal)	\
    ( (This)->lpVtbl -> get_Length(This,pVal) ) 

#define ICertSrvSetupKeyInformation_put_Length(This,lVal)	\
    ( (This)->lpVtbl -> put_Length(This,lVal) ) 

#define ICertSrvSetupKeyInformation_get_Existing(This,pVal)	\
    ( (This)->lpVtbl -> get_Existing(This,pVal) ) 

#define ICertSrvSetupKeyInformation_put_Existing(This,bVal)	\
    ( (This)->lpVtbl -> put_Existing(This,bVal) ) 

#define ICertSrvSetupKeyInformation_get_ContainerName(This,pVal)	\
    ( (This)->lpVtbl -> get_ContainerName(This,pVal) ) 

#define ICertSrvSetupKeyInformation_put_ContainerName(This,bstrVal)	\
    ( (This)->lpVtbl -> put_ContainerName(This,bstrVal) ) 

#define ICertSrvSetupKeyInformation_get_HashAlgorithm(This,pVal)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,pVal) ) 

#define ICertSrvSetupKeyInformation_put_HashAlgorithm(This,bstrVal)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,bstrVal) ) 

#define ICertSrvSetupKeyInformation_get_ExistingCACertificate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExistingCACertificate(This,pVal) ) 

#define ICertSrvSetupKeyInformation_put_ExistingCACertificate(This,varVal)	\
    ( (This)->lpVtbl -> put_ExistingCACertificate(This,varVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertSrvSetupKeyInformation_INTERFACE_DEFINED__ */


#ifndef __ICertSrvSetupKeyInformationCollection_INTERFACE_DEFINED__
#define __ICertSrvSetupKeyInformationCollection_INTERFACE_DEFINED__

/* interface ICertSrvSetupKeyInformationCollection */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertSrvSetupKeyInformationCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e65c8b00-e58f-41f9-a9ec-a28d7427c844")
    ICertSrvSetupKeyInformationCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out LONG *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt ICertSrvSetupKeyInformation *pIKeyInformation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICertSrvSetupKeyInformationCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertSrvSetupKeyInformationCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertSrvSetupKeyInformationCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertSrvSetupKeyInformationCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertSrvSetupKeyInformationCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertSrvSetupKeyInformationCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertSrvSetupKeyInformationCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertSrvSetupKeyInformationCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICertSrvSetupKeyInformationCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICertSrvSetupKeyInformationCollection * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICertSrvSetupKeyInformationCollection * This,
            /* [retval][out] */ __RPC__out LONG *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICertSrvSetupKeyInformationCollection * This,
            /* [in] */ __RPC__in_opt ICertSrvSetupKeyInformation *pIKeyInformation);
        
        END_INTERFACE
    } ICertSrvSetupKeyInformationCollectionVtbl;

    interface ICertSrvSetupKeyInformationCollection
    {
        CONST_VTBL struct ICertSrvSetupKeyInformationCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertSrvSetupKeyInformationCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertSrvSetupKeyInformationCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertSrvSetupKeyInformationCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertSrvSetupKeyInformationCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertSrvSetupKeyInformationCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertSrvSetupKeyInformationCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertSrvSetupKeyInformationCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertSrvSetupKeyInformationCollection_get__NewEnum(This,ppVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppVal) ) 

#define ICertSrvSetupKeyInformationCollection_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define ICertSrvSetupKeyInformationCollection_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICertSrvSetupKeyInformationCollection_Add(This,pIKeyInformation)	\
    ( (This)->lpVtbl -> Add(This,pIKeyInformation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertSrvSetupKeyInformationCollection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_casetup_0000_0002 */
/* [local] */ 

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_casetup_0000_0002_0001
    {	ENUM_SETUPPROP_INVALID	= -1,
	ENUM_SETUPPROP_CATYPE	= 0,
	ENUM_SETUPPROP_CAKEYINFORMATION	= 1,
	ENUM_SETUPPROP_INTERACTIVE	= 2,
	ENUM_SETUPPROP_CANAME	= 3,
	ENUM_SETUPPROP_CADSSUFFIX	= 4,
	ENUM_SETUPPROP_VALIDITYPERIOD	= 5,
	ENUM_SETUPPROP_VALIDITYPERIODUNIT	= 6,
	ENUM_SETUPPROP_EXPIRATIONDATE	= 7,
	ENUM_SETUPPROP_PRESERVEDATABASE	= 8,
	ENUM_SETUPPROP_DATABASEDIRECTORY	= 9,
	ENUM_SETUPPROP_LOGDIRECTORY	= 10,
	ENUM_SETUPPROP_SHAREDFOLDER	= 11,
	ENUM_SETUPPROP_PARENTCAMACHINE	= 12,
	ENUM_SETUPPROP_PARENTCANAME	= 13,
	ENUM_SETUPPROP_REQUESTFILE	= 14,
	ENUM_SETUPPROP_WEBCAMACHINE	= 15,
	ENUM_SETUPPROP_WEBCANAME	= 16
    } 	CASetupProperty;



extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0002_v0_0_s_ifspec;

#ifndef __ICertSrvSetup_INTERFACE_DEFINED__
#define __ICertSrvSetup_INTERFACE_DEFINED__

/* interface ICertSrvSetup */
/* [unique][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ICertSrvSetup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b760a1bb-4784-44c0-8f12-555f0780ff25")
    ICertSrvSetup : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CAErrorId( 
            /* [retval][out] */ __RPC__out LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CAErrorString( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDefaults( 
            /* [in] */ VARIANT_BOOL bServer,
            /* [in] */ VARIANT_BOOL bClient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCASetupProperty( 
            /* [in] */ CASetupProperty propertyId,
            /* [retval][out] */ __RPC__out VARIANT *pPropertyValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCASetupProperty( 
            /* [in] */ CASetupProperty propertyId,
            /* [in] */ __RPC__in VARIANT *pPropertyValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsPropertyEditable( 
            /* [in] */ CASetupProperty propertyId,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbEditable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSupportedCATypes( 
            /* [retval][out] */ __RPC__out VARIANT *pCATypes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProviderNameList( 
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKeyLengthList( 
            /* [in] */ __RPC__in const BSTR bstrProviderName,
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHashAlgorithmList( 
            /* [in] */ __RPC__in const BSTR bstrProviderName,
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPrivateKeyContainerList( 
            /* [in] */ __RPC__in const BSTR bstrProviderName,
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExistingCACertificates( 
            /* [retval][out] */ __RPC__deref_out_opt ICertSrvSetupKeyInformationCollection **ppVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CAImportPFX( 
            /* [in] */ __RPC__in const BSTR bstrFileName,
            /* [in] */ __RPC__in const BSTR bstrPasswd,
            /* [in] */ VARIANT_BOOL bOverwriteExistingKey,
            /* [retval][out] */ __RPC__deref_out_opt ICertSrvSetupKeyInformation **ppVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCADistinguishedName( 
            /* [in] */ __RPC__in const BSTR bstrCADN,
            /* [in] */ VARIANT_BOOL bIgnoreUnicode,
            /* [in] */ VARIANT_BOOL bOverwriteExistingKey,
            /* [in] */ VARIANT_BOOL bOverwriteExistingCAInDS) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDatabaseInformation( 
            /* [in] */ __RPC__in const BSTR bstrDBDirectory,
            /* [in] */ __RPC__in const BSTR bstrLogDirectory,
            /* [in] */ __RPC__in const BSTR bstrSharedFolder,
            /* [in] */ VARIANT_BOOL bForceOverwrite) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetParentCAInformation( 
            /* [in] */ __RPC__in const BSTR bstrCAConfiguration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWebCAInformation( 
            /* [in] */ __RPC__in const BSTR bstrCAConfiguration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Install( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreUnInstall( 
            /* [in] */ VARIANT_BOOL bClientOnly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostUnInstall( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICertSrvSetupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertSrvSetup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertSrvSetup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertSrvSetup * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertSrvSetup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertSrvSetup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CAErrorId )( 
            ICertSrvSetup * This,
            /* [retval][out] */ __RPC__out LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CAErrorString )( 
            ICertSrvSetup * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDefaults )( 
            ICertSrvSetup * This,
            /* [in] */ VARIANT_BOOL bServer,
            /* [in] */ VARIANT_BOOL bClient);
        
        HRESULT ( STDMETHODCALLTYPE *GetCASetupProperty )( 
            ICertSrvSetup * This,
            /* [in] */ CASetupProperty propertyId,
            /* [retval][out] */ __RPC__out VARIANT *pPropertyValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetCASetupProperty )( 
            ICertSrvSetup * This,
            /* [in] */ CASetupProperty propertyId,
            /* [in] */ __RPC__in VARIANT *pPropertyValue);
        
        HRESULT ( STDMETHODCALLTYPE *IsPropertyEditable )( 
            ICertSrvSetup * This,
            /* [in] */ CASetupProperty propertyId,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbEditable);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupportedCATypes )( 
            ICertSrvSetup * This,
            /* [retval][out] */ __RPC__out VARIANT *pCATypes);
        
        HRESULT ( STDMETHODCALLTYPE *GetProviderNameList )( 
            ICertSrvSetup * This,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetKeyLengthList )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in const BSTR bstrProviderName,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetHashAlgorithmList )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in const BSTR bstrProviderName,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrivateKeyContainerList )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in const BSTR bstrProviderName,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetExistingCACertificates )( 
            ICertSrvSetup * This,
            /* [retval][out] */ __RPC__deref_out_opt ICertSrvSetupKeyInformationCollection **ppVal);
        
        HRESULT ( STDMETHODCALLTYPE *CAImportPFX )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in const BSTR bstrFileName,
            /* [in] */ __RPC__in const BSTR bstrPasswd,
            /* [in] */ VARIANT_BOOL bOverwriteExistingKey,
            /* [retval][out] */ __RPC__deref_out_opt ICertSrvSetupKeyInformation **ppVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetCADistinguishedName )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in const BSTR bstrCADN,
            /* [in] */ VARIANT_BOOL bIgnoreUnicode,
            /* [in] */ VARIANT_BOOL bOverwriteExistingKey,
            /* [in] */ VARIANT_BOOL bOverwriteExistingCAInDS);
        
        HRESULT ( STDMETHODCALLTYPE *SetDatabaseInformation )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in const BSTR bstrDBDirectory,
            /* [in] */ __RPC__in const BSTR bstrLogDirectory,
            /* [in] */ __RPC__in const BSTR bstrSharedFolder,
            /* [in] */ VARIANT_BOOL bForceOverwrite);
        
        HRESULT ( STDMETHODCALLTYPE *SetParentCAInformation )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in const BSTR bstrCAConfiguration);
        
        HRESULT ( STDMETHODCALLTYPE *SetWebCAInformation )( 
            ICertSrvSetup * This,
            /* [in] */ __RPC__in const BSTR bstrCAConfiguration);
        
        HRESULT ( STDMETHODCALLTYPE *Install )( 
            ICertSrvSetup * This);
        
        HRESULT ( STDMETHODCALLTYPE *PreUnInstall )( 
            ICertSrvSetup * This,
            /* [in] */ VARIANT_BOOL bClientOnly);
        
        HRESULT ( STDMETHODCALLTYPE *PostUnInstall )( 
            ICertSrvSetup * This);
        
        END_INTERFACE
    } ICertSrvSetupVtbl;

    interface ICertSrvSetup
    {
        CONST_VTBL struct ICertSrvSetupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertSrvSetup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertSrvSetup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertSrvSetup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertSrvSetup_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertSrvSetup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertSrvSetup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertSrvSetup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertSrvSetup_get_CAErrorId(This,pVal)	\
    ( (This)->lpVtbl -> get_CAErrorId(This,pVal) ) 

#define ICertSrvSetup_get_CAErrorString(This,pVal)	\
    ( (This)->lpVtbl -> get_CAErrorString(This,pVal) ) 

#define ICertSrvSetup_InitializeDefaults(This,bServer,bClient)	\
    ( (This)->lpVtbl -> InitializeDefaults(This,bServer,bClient) ) 

#define ICertSrvSetup_GetCASetupProperty(This,propertyId,pPropertyValue)	\
    ( (This)->lpVtbl -> GetCASetupProperty(This,propertyId,pPropertyValue) ) 

#define ICertSrvSetup_SetCASetupProperty(This,propertyId,pPropertyValue)	\
    ( (This)->lpVtbl -> SetCASetupProperty(This,propertyId,pPropertyValue) ) 

#define ICertSrvSetup_IsPropertyEditable(This,propertyId,pbEditable)	\
    ( (This)->lpVtbl -> IsPropertyEditable(This,propertyId,pbEditable) ) 

#define ICertSrvSetup_GetSupportedCATypes(This,pCATypes)	\
    ( (This)->lpVtbl -> GetSupportedCATypes(This,pCATypes) ) 

#define ICertSrvSetup_GetProviderNameList(This,pVal)	\
    ( (This)->lpVtbl -> GetProviderNameList(This,pVal) ) 

#define ICertSrvSetup_GetKeyLengthList(This,bstrProviderName,pVal)	\
    ( (This)->lpVtbl -> GetKeyLengthList(This,bstrProviderName,pVal) ) 

#define ICertSrvSetup_GetHashAlgorithmList(This,bstrProviderName,pVal)	\
    ( (This)->lpVtbl -> GetHashAlgorithmList(This,bstrProviderName,pVal) ) 

#define ICertSrvSetup_GetPrivateKeyContainerList(This,bstrProviderName,pVal)	\
    ( (This)->lpVtbl -> GetPrivateKeyContainerList(This,bstrProviderName,pVal) ) 

#define ICertSrvSetup_GetExistingCACertificates(This,ppVal)	\
    ( (This)->lpVtbl -> GetExistingCACertificates(This,ppVal) ) 

#define ICertSrvSetup_CAImportPFX(This,bstrFileName,bstrPasswd,bOverwriteExistingKey,ppVal)	\
    ( (This)->lpVtbl -> CAImportPFX(This,bstrFileName,bstrPasswd,bOverwriteExistingKey,ppVal) ) 

#define ICertSrvSetup_SetCADistinguishedName(This,bstrCADN,bIgnoreUnicode,bOverwriteExistingKey,bOverwriteExistingCAInDS)	\
    ( (This)->lpVtbl -> SetCADistinguishedName(This,bstrCADN,bIgnoreUnicode,bOverwriteExistingKey,bOverwriteExistingCAInDS) ) 

#define ICertSrvSetup_SetDatabaseInformation(This,bstrDBDirectory,bstrLogDirectory,bstrSharedFolder,bForceOverwrite)	\
    ( (This)->lpVtbl -> SetDatabaseInformation(This,bstrDBDirectory,bstrLogDirectory,bstrSharedFolder,bForceOverwrite) ) 

#define ICertSrvSetup_SetParentCAInformation(This,bstrCAConfiguration)	\
    ( (This)->lpVtbl -> SetParentCAInformation(This,bstrCAConfiguration) ) 

#define ICertSrvSetup_SetWebCAInformation(This,bstrCAConfiguration)	\
    ( (This)->lpVtbl -> SetWebCAInformation(This,bstrCAConfiguration) ) 

#define ICertSrvSetup_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define ICertSrvSetup_PreUnInstall(This,bClientOnly)	\
    ( (This)->lpVtbl -> PreUnInstall(This,bClientOnly) ) 

#define ICertSrvSetup_PostUnInstall(This)	\
    ( (This)->lpVtbl -> PostUnInstall(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertSrvSetup_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_casetup_0000_0003 */
/* [local] */ 

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_casetup_0000_0003_0001
    {	ENUM_CEPSETUPPROP_USELOCALSYSTEM	= 0,
	ENUM_CEPSETUPPROP_USECHALLENGE	= 1,
	ENUM_CEPSETUPPROP_RANAME_CN	= 2,
	ENUM_CEPSETUPPROP_RANAME_EMAIL	= 3,
	ENUM_CEPSETUPPROP_RANAME_COMPANY	= 4,
	ENUM_CEPSETUPPROP_RANAME_DEPT	= 5,
	ENUM_CEPSETUPPROP_RANAME_CITY	= 6,
	ENUM_CEPSETUPPROP_RANAME_STATE	= 7,
	ENUM_CEPSETUPPROP_RANAME_COUNTRY	= 8,
	ENUM_CEPSETUPPROP_SIGNINGKEYINFORMATION	= 9,
	ENUM_CEPSETUPPROP_EXCHANGEKEYINFORMATION	= 10,
	ENUM_CEPSETUPPROP_CAINFORMATION	= 11,
	ENUM_CEPSETUPPROP_MSCEPURL	= 12,
	ENUM_CEPSETUPPROP_CHALLENGEURL	= 13
    } 	MSCEPSetupProperty;



extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0003_v0_0_s_ifspec;

#ifndef __IMSCEPSetup_INTERFACE_DEFINED__
#define __IMSCEPSetup_INTERFACE_DEFINED__

/* interface IMSCEPSetup */
/* [unique][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMSCEPSetup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4f7761bb-9f3b-4592-9ee0-9a73259c313e")
    IMSCEPSetup : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MSCEPErrorId( 
            /* [retval][out] */ __RPC__out LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MSCEPErrorString( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDefaults( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMSCEPSetupProperty( 
            /* [in] */ MSCEPSetupProperty propertyId,
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMSCEPSetupProperty( 
            /* [in] */ MSCEPSetupProperty propertyId,
            /* [in] */ __RPC__in VARIANT *pPropertyValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAccountInformation( 
            /* [in] */ __RPC__in const BSTR bstrUserName,
            /* [in] */ __RPC__in const BSTR bstrPassword) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsMSCEPStoreEmpty( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbEmpty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProviderNameList( 
            /* [in] */ VARIANT_BOOL bExchange,
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKeyLengthList( 
            /* [in] */ VARIANT_BOOL bExchange,
            /* [in] */ __RPC__in const BSTR bstrProviderName,
            /* [retval][out] */ __RPC__out VARIANT *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Install( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreUnInstall( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostUnInstall( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMSCEPSetupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMSCEPSetup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMSCEPSetup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMSCEPSetup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMSCEPSetup * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMSCEPSetup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMSCEPSetup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMSCEPSetup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MSCEPErrorId )( 
            IMSCEPSetup * This,
            /* [retval][out] */ __RPC__out LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MSCEPErrorString )( 
            IMSCEPSetup * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDefaults )( 
            IMSCEPSetup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMSCEPSetupProperty )( 
            IMSCEPSetup * This,
            /* [in] */ MSCEPSetupProperty propertyId,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetMSCEPSetupProperty )( 
            IMSCEPSetup * This,
            /* [in] */ MSCEPSetupProperty propertyId,
            /* [in] */ __RPC__in VARIANT *pPropertyValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetAccountInformation )( 
            IMSCEPSetup * This,
            /* [in] */ __RPC__in const BSTR bstrUserName,
            /* [in] */ __RPC__in const BSTR bstrPassword);
        
        HRESULT ( STDMETHODCALLTYPE *IsMSCEPStoreEmpty )( 
            IMSCEPSetup * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbEmpty);
        
        HRESULT ( STDMETHODCALLTYPE *GetProviderNameList )( 
            IMSCEPSetup * This,
            /* [in] */ VARIANT_BOOL bExchange,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetKeyLengthList )( 
            IMSCEPSetup * This,
            /* [in] */ VARIANT_BOOL bExchange,
            /* [in] */ __RPC__in const BSTR bstrProviderName,
            /* [retval][out] */ __RPC__out VARIANT *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *Install )( 
            IMSCEPSetup * This);
        
        HRESULT ( STDMETHODCALLTYPE *PreUnInstall )( 
            IMSCEPSetup * This);
        
        HRESULT ( STDMETHODCALLTYPE *PostUnInstall )( 
            IMSCEPSetup * This);
        
        END_INTERFACE
    } IMSCEPSetupVtbl;

    interface IMSCEPSetup
    {
        CONST_VTBL struct IMSCEPSetupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMSCEPSetup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMSCEPSetup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMSCEPSetup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMSCEPSetup_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMSCEPSetup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMSCEPSetup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMSCEPSetup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMSCEPSetup_get_MSCEPErrorId(This,pVal)	\
    ( (This)->lpVtbl -> get_MSCEPErrorId(This,pVal) ) 

#define IMSCEPSetup_get_MSCEPErrorString(This,pVal)	\
    ( (This)->lpVtbl -> get_MSCEPErrorString(This,pVal) ) 

#define IMSCEPSetup_InitializeDefaults(This)	\
    ( (This)->lpVtbl -> InitializeDefaults(This) ) 

#define IMSCEPSetup_GetMSCEPSetupProperty(This,propertyId,pVal)	\
    ( (This)->lpVtbl -> GetMSCEPSetupProperty(This,propertyId,pVal) ) 

#define IMSCEPSetup_SetMSCEPSetupProperty(This,propertyId,pPropertyValue)	\
    ( (This)->lpVtbl -> SetMSCEPSetupProperty(This,propertyId,pPropertyValue) ) 

#define IMSCEPSetup_SetAccountInformation(This,bstrUserName,bstrPassword)	\
    ( (This)->lpVtbl -> SetAccountInformation(This,bstrUserName,bstrPassword) ) 

#define IMSCEPSetup_IsMSCEPStoreEmpty(This,pbEmpty)	\
    ( (This)->lpVtbl -> IsMSCEPStoreEmpty(This,pbEmpty) ) 

#define IMSCEPSetup_GetProviderNameList(This,bExchange,pVal)	\
    ( (This)->lpVtbl -> GetProviderNameList(This,bExchange,pVal) ) 

#define IMSCEPSetup_GetKeyLengthList(This,bExchange,bstrProviderName,pVal)	\
    ( (This)->lpVtbl -> GetKeyLengthList(This,bExchange,bstrProviderName,pVal) ) 

#define IMSCEPSetup_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IMSCEPSetup_PreUnInstall(This)	\
    ( (This)->lpVtbl -> PreUnInstall(This) ) 

#define IMSCEPSetup_PostUnInstall(This)	\
    ( (This)->lpVtbl -> PostUnInstall(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMSCEPSetup_INTERFACE_DEFINED__ */



#ifndef __CertSrvSetupLib_LIBRARY_DEFINED__
#define __CertSrvSetupLib_LIBRARY_DEFINED__

/* library CertSrvSetupLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CertSrvSetupLib;

EXTERN_C const CLSID CLSID_CCertSrvSetupKeyInformation;

#ifdef __cplusplus

class DECLSPEC_UUID("38373906-5433-4633-b0fb-29b7e78262e1")
CCertSrvSetupKeyInformation;
#endif

EXTERN_C const CLSID CLSID_CCertSrvSetup;

#ifdef __cplusplus

class DECLSPEC_UUID("961f180f-f55c-413d-a9b3-7d2af4d8e42f")
CCertSrvSetup;
#endif

EXTERN_C const CLSID CLSID_CMSCEPSetup;

#ifdef __cplusplus

class DECLSPEC_UUID("aa4f5c02-8e7c-49c4-94fa-67a5cc5eadb4")
CMSCEPSetup;
#endif
#endif /* __CertSrvSetupLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



