

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for tipautocomplete.idl:
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

#ifndef __tipautocomplete_h__
#define __tipautocomplete_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITipAutoCompleteProvider_FWD_DEFINED__
#define __ITipAutoCompleteProvider_FWD_DEFINED__
typedef interface ITipAutoCompleteProvider ITipAutoCompleteProvider;
#endif 	/* __ITipAutoCompleteProvider_FWD_DEFINED__ */


#ifndef __ITipAutoCompleteClient_FWD_DEFINED__
#define __ITipAutoCompleteClient_FWD_DEFINED__
typedef interface ITipAutoCompleteClient ITipAutoCompleteClient;
#endif 	/* __ITipAutoCompleteClient_FWD_DEFINED__ */


#ifndef __TipAutoCompleteClient_FWD_DEFINED__
#define __TipAutoCompleteClient_FWD_DEFINED__

#ifdef __cplusplus
typedef class TipAutoCompleteClient TipAutoCompleteClient;
#else
typedef struct TipAutoCompleteClient TipAutoCompleteClient;
#endif /* __cplusplus */

#endif 	/* __TipAutoCompleteClient_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITipAutoCompleteProvider_INTERFACE_DEFINED__
#define __ITipAutoCompleteProvider_INTERFACE_DEFINED__

/* interface ITipAutoCompleteProvider */
/* [helpstring][unique][uuid][object] */ 


EXTERN_C const IID IID_ITipAutoCompleteProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7C6CF46D-8404-46b9-AD33-F5B6036D4007")
    ITipAutoCompleteProvider : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdatePendingText( 
            /* [in] */ __RPC__in BSTR bstrPendingText) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ BOOL fShow) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITipAutoCompleteProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITipAutoCompleteProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITipAutoCompleteProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITipAutoCompleteProvider * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdatePendingText )( 
            ITipAutoCompleteProvider * This,
            /* [in] */ __RPC__in BSTR bstrPendingText);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITipAutoCompleteProvider * This,
            /* [in] */ BOOL fShow);
        
        END_INTERFACE
    } ITipAutoCompleteProviderVtbl;

    interface ITipAutoCompleteProvider
    {
        CONST_VTBL struct ITipAutoCompleteProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITipAutoCompleteProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITipAutoCompleteProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITipAutoCompleteProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITipAutoCompleteProvider_UpdatePendingText(This,bstrPendingText)	\
    ( (This)->lpVtbl -> UpdatePendingText(This,bstrPendingText) ) 

#define ITipAutoCompleteProvider_Show(This,fShow)	\
    ( (This)->lpVtbl -> Show(This,fShow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITipAutoCompleteProvider_INTERFACE_DEFINED__ */


#ifndef __ITipAutoCompleteClient_INTERFACE_DEFINED__
#define __ITipAutoCompleteClient_INTERFACE_DEFINED__

/* interface ITipAutoCompleteClient */
/* [helpstring][unique][uuid][object] */ 


EXTERN_C const IID IID_ITipAutoCompleteClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E078E03-8265-4bbe-9487-D242EDBEF910")
    ITipAutoCompleteClient : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AdviseProvider( 
            /* [in] */ __RPC__in HWND hWndField,
            /* [in] */ __RPC__in_opt ITipAutoCompleteProvider *pIProvider) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnadviseProvider( 
            /* [in] */ __RPC__in HWND hWndField,
            /* [in] */ __RPC__in_opt ITipAutoCompleteProvider *pIProvider) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UserSelection( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreferredRects( 
            /* [in] */ __RPC__in RECT *prcACList,
            /* [in] */ __RPC__in RECT *prcField,
            /* [out] */ __RPC__out RECT *prcModifiedACList,
            /* [out] */ __RPC__out BOOL *pfShownAboveTip) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RequestShowUI( 
            /* [in] */ __RPC__in HWND hWndList,
            /* [out] */ __RPC__out BOOL *pfAllowShowing) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITipAutoCompleteClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITipAutoCompleteClient * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITipAutoCompleteClient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITipAutoCompleteClient * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AdviseProvider )( 
            ITipAutoCompleteClient * This,
            /* [in] */ __RPC__in HWND hWndField,
            /* [in] */ __RPC__in_opt ITipAutoCompleteProvider *pIProvider);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnadviseProvider )( 
            ITipAutoCompleteClient * This,
            /* [in] */ __RPC__in HWND hWndField,
            /* [in] */ __RPC__in_opt ITipAutoCompleteProvider *pIProvider);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UserSelection )( 
            ITipAutoCompleteClient * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PreferredRects )( 
            ITipAutoCompleteClient * This,
            /* [in] */ __RPC__in RECT *prcACList,
            /* [in] */ __RPC__in RECT *prcField,
            /* [out] */ __RPC__out RECT *prcModifiedACList,
            /* [out] */ __RPC__out BOOL *pfShownAboveTip);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RequestShowUI )( 
            ITipAutoCompleteClient * This,
            /* [in] */ __RPC__in HWND hWndList,
            /* [out] */ __RPC__out BOOL *pfAllowShowing);
        
        END_INTERFACE
    } ITipAutoCompleteClientVtbl;

    interface ITipAutoCompleteClient
    {
        CONST_VTBL struct ITipAutoCompleteClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITipAutoCompleteClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITipAutoCompleteClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITipAutoCompleteClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITipAutoCompleteClient_AdviseProvider(This,hWndField,pIProvider)	\
    ( (This)->lpVtbl -> AdviseProvider(This,hWndField,pIProvider) ) 

#define ITipAutoCompleteClient_UnadviseProvider(This,hWndField,pIProvider)	\
    ( (This)->lpVtbl -> UnadviseProvider(This,hWndField,pIProvider) ) 

#define ITipAutoCompleteClient_UserSelection(This)	\
    ( (This)->lpVtbl -> UserSelection(This) ) 

#define ITipAutoCompleteClient_PreferredRects(This,prcACList,prcField,prcModifiedACList,pfShownAboveTip)	\
    ( (This)->lpVtbl -> PreferredRects(This,prcACList,prcField,prcModifiedACList,pfShownAboveTip) ) 

#define ITipAutoCompleteClient_RequestShowUI(This,hWndList,pfAllowShowing)	\
    ( (This)->lpVtbl -> RequestShowUI(This,hWndList,pfAllowShowing) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITipAutoCompleteClient_INTERFACE_DEFINED__ */



#ifndef __TipAutoCompleteClientLib_LIBRARY_DEFINED__
#define __TipAutoCompleteClientLib_LIBRARY_DEFINED__

/* library TipAutoCompleteClientLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TipAutoCompleteClientLib;

EXTERN_C const CLSID CLSID_TipAutoCompleteClient;

#ifdef __cplusplus

class DECLSPEC_UUID("807C1E6C-1D00-453f-B920-B61BB7CDD997")
TipAutoCompleteClient;
#endif
#endif /* __TipAutoCompleteClientLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



