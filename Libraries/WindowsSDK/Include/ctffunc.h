

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for ctffunc.idl:
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

#ifndef __ctffunc_h__
#define __ctffunc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITfCandidateString_FWD_DEFINED__
#define __ITfCandidateString_FWD_DEFINED__
typedef interface ITfCandidateString ITfCandidateString;
#endif 	/* __ITfCandidateString_FWD_DEFINED__ */


#ifndef __IEnumTfCandidates_FWD_DEFINED__
#define __IEnumTfCandidates_FWD_DEFINED__
typedef interface IEnumTfCandidates IEnumTfCandidates;
#endif 	/* __IEnumTfCandidates_FWD_DEFINED__ */


#ifndef __ITfCandidateList_FWD_DEFINED__
#define __ITfCandidateList_FWD_DEFINED__
typedef interface ITfCandidateList ITfCandidateList;
#endif 	/* __ITfCandidateList_FWD_DEFINED__ */


#ifndef __ITfFnReconversion_FWD_DEFINED__
#define __ITfFnReconversion_FWD_DEFINED__
typedef interface ITfFnReconversion ITfFnReconversion;
#endif 	/* __ITfFnReconversion_FWD_DEFINED__ */


#ifndef __ITfFnPlayBack_FWD_DEFINED__
#define __ITfFnPlayBack_FWD_DEFINED__
typedef interface ITfFnPlayBack ITfFnPlayBack;
#endif 	/* __ITfFnPlayBack_FWD_DEFINED__ */


#ifndef __ITfFnLangProfileUtil_FWD_DEFINED__
#define __ITfFnLangProfileUtil_FWD_DEFINED__
typedef interface ITfFnLangProfileUtil ITfFnLangProfileUtil;
#endif 	/* __ITfFnLangProfileUtil_FWD_DEFINED__ */


#ifndef __ITfFnConfigure_FWD_DEFINED__
#define __ITfFnConfigure_FWD_DEFINED__
typedef interface ITfFnConfigure ITfFnConfigure;
#endif 	/* __ITfFnConfigure_FWD_DEFINED__ */


#ifndef __ITfFnConfigureRegisterWord_FWD_DEFINED__
#define __ITfFnConfigureRegisterWord_FWD_DEFINED__
typedef interface ITfFnConfigureRegisterWord ITfFnConfigureRegisterWord;
#endif 	/* __ITfFnConfigureRegisterWord_FWD_DEFINED__ */


#ifndef __ITfFnConfigureRegisterEudc_FWD_DEFINED__
#define __ITfFnConfigureRegisterEudc_FWD_DEFINED__
typedef interface ITfFnConfigureRegisterEudc ITfFnConfigureRegisterEudc;
#endif 	/* __ITfFnConfigureRegisterEudc_FWD_DEFINED__ */


#ifndef __ITfFnShowHelp_FWD_DEFINED__
#define __ITfFnShowHelp_FWD_DEFINED__
typedef interface ITfFnShowHelp ITfFnShowHelp;
#endif 	/* __ITfFnShowHelp_FWD_DEFINED__ */


#ifndef __ITfFnBalloon_FWD_DEFINED__
#define __ITfFnBalloon_FWD_DEFINED__
typedef interface ITfFnBalloon ITfFnBalloon;
#endif 	/* __ITfFnBalloon_FWD_DEFINED__ */


#ifndef __ITfFnGetSAPIObject_FWD_DEFINED__
#define __ITfFnGetSAPIObject_FWD_DEFINED__
typedef interface ITfFnGetSAPIObject ITfFnGetSAPIObject;
#endif 	/* __ITfFnGetSAPIObject_FWD_DEFINED__ */


#ifndef __ITfFnPropertyUIStatus_FWD_DEFINED__
#define __ITfFnPropertyUIStatus_FWD_DEFINED__
typedef interface ITfFnPropertyUIStatus ITfFnPropertyUIStatus;
#endif 	/* __ITfFnPropertyUIStatus_FWD_DEFINED__ */


#ifndef __IEnumSpeechCommands_FWD_DEFINED__
#define __IEnumSpeechCommands_FWD_DEFINED__
typedef interface IEnumSpeechCommands IEnumSpeechCommands;
#endif 	/* __IEnumSpeechCommands_FWD_DEFINED__ */


#ifndef __ISpeechCommandProvider_FWD_DEFINED__
#define __ISpeechCommandProvider_FWD_DEFINED__
typedef interface ISpeechCommandProvider ISpeechCommandProvider;
#endif 	/* __ISpeechCommandProvider_FWD_DEFINED__ */


#ifndef __ITfFnCustomSpeechCommand_FWD_DEFINED__
#define __ITfFnCustomSpeechCommand_FWD_DEFINED__
typedef interface ITfFnCustomSpeechCommand ITfFnCustomSpeechCommand;
#endif 	/* __ITfFnCustomSpeechCommand_FWD_DEFINED__ */


#ifndef __ITfFnLMProcessor_FWD_DEFINED__
#define __ITfFnLMProcessor_FWD_DEFINED__
typedef interface ITfFnLMProcessor ITfFnLMProcessor;
#endif 	/* __ITfFnLMProcessor_FWD_DEFINED__ */


#ifndef __ITfFnLMInternal_FWD_DEFINED__
#define __ITfFnLMInternal_FWD_DEFINED__
typedef interface ITfFnLMInternal ITfFnLMInternal;
#endif 	/* __ITfFnLMInternal_FWD_DEFINED__ */


#ifndef __IEnumTfLatticeElements_FWD_DEFINED__
#define __IEnumTfLatticeElements_FWD_DEFINED__
typedef interface IEnumTfLatticeElements IEnumTfLatticeElements;
#endif 	/* __IEnumTfLatticeElements_FWD_DEFINED__ */


#ifndef __ITfLMLattice_FWD_DEFINED__
#define __ITfLMLattice_FWD_DEFINED__
typedef interface ITfLMLattice ITfLMLattice;
#endif 	/* __ITfLMLattice_FWD_DEFINED__ */


#ifndef __ITfFnAdviseText_FWD_DEFINED__
#define __ITfFnAdviseText_FWD_DEFINED__
typedef interface ITfFnAdviseText ITfFnAdviseText;
#endif 	/* __ITfFnAdviseText_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "msctf.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ctffunc_0000_0000 */
/* [local] */ 

//=--------------------------------------------------------------------------=
// ctffunc.h


// Text Framework function interfaces.

//=--------------------------------------------------------------------------=
// (C) Copyright 1995-2001 Microsoft Corporation.  All Rights Reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//=--------------------------------------------------------------------------=

#ifndef CTFFUNC_DEFINED
#define CTFFUNC_DEFINED

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#define TF_E_NOCONVERSION     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0600)
EXTERN_C const CLSID CLSID_SapiLayr;


extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0000_v0_0_s_ifspec;

#ifndef __ITfCandidateString_INTERFACE_DEFINED__
#define __ITfCandidateString_INTERFACE_DEFINED__

/* interface ITfCandidateString */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfCandidateString;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("581f317e-fd9d-443f-b972-ed00467c5d40")
    ITfCandidateString : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIndex( 
            /* [out] */ __RPC__out ULONG *pnIndex) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateStringVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateString * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateString * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateString * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            ITfCandidateString * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstr);
        
        HRESULT ( STDMETHODCALLTYPE *GetIndex )( 
            ITfCandidateString * This,
            /* [out] */ __RPC__out ULONG *pnIndex);
        
        END_INTERFACE
    } ITfCandidateStringVtbl;

    interface ITfCandidateString
    {
        CONST_VTBL struct ITfCandidateStringVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateString_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfCandidateString_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfCandidateString_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfCandidateString_GetString(This,pbstr)	\
    ( (This)->lpVtbl -> GetString(This,pbstr) ) 

#define ITfCandidateString_GetIndex(This,pnIndex)	\
    ( (This)->lpVtbl -> GetIndex(This,pnIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandidateString_INTERFACE_DEFINED__ */


#ifndef __IEnumTfCandidates_INTERFACE_DEFINED__
#define __IEnumTfCandidates_INTERFACE_DEFINED__

/* interface IEnumTfCandidates */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumTfCandidates;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("defb1926-6c80-4ce8-87d4-d6b72b812bde")
    IEnumTfCandidates : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumTfCandidates **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG ulCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ulCount, *pcFetched) ITfCandidateString **ppCand,
            /* [out] */ __RPC__out ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG ulCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumTfCandidatesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumTfCandidates * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumTfCandidates * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumTfCandidates * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumTfCandidates * This,
            /* [out] */ __RPC__deref_out_opt IEnumTfCandidates **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumTfCandidates * This,
            /* [in] */ ULONG ulCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ulCount, *pcFetched) ITfCandidateString **ppCand,
            /* [out] */ __RPC__out ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumTfCandidates * This);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumTfCandidates * This,
            /* [in] */ ULONG ulCount);
        
        END_INTERFACE
    } IEnumTfCandidatesVtbl;

    interface IEnumTfCandidates
    {
        CONST_VTBL struct IEnumTfCandidatesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumTfCandidates_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumTfCandidates_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumTfCandidates_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumTfCandidates_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumTfCandidates_Next(This,ulCount,ppCand,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,ulCount,ppCand,pcFetched) ) 

#define IEnumTfCandidates_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumTfCandidates_Skip(This,ulCount)	\
    ( (This)->lpVtbl -> Skip(This,ulCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumTfCandidates_INTERFACE_DEFINED__ */


#ifndef __ITfCandidateList_INTERFACE_DEFINED__
#define __ITfCandidateList_INTERFACE_DEFINED__

/* interface ITfCandidateList */
/* [unique][uuid][object] */ 

typedef /* [public][public][uuid] */  DECLSPEC_UUID("baa898f2-0207-4643-92ca-f3f7b0cf6f80") 
enum __MIDL_ITfCandidateList_0001
    {	CAND_FINALIZED	= 0,
	CAND_SELECTED	= 0x1,
	CAND_CANCELED	= 0x2
    } 	TfCandidateResult;


EXTERN_C const IID IID_ITfCandidateList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a3ad50fb-9bdb-49e3-a843-6c76520fbf5d")
    ITfCandidateList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumCandidates( 
            /* [out] */ __RPC__deref_out_opt IEnumTfCandidates **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidate( 
            /* [in] */ ULONG nIndex,
            /* [out] */ __RPC__deref_out_opt ITfCandidateString **ppCand) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCandidateNum( 
            /* [out] */ __RPC__out ULONG *pnCnt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetResult( 
            /* [in] */ ULONG nIndex,
            /* [in] */ TfCandidateResult imcr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfCandidateListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfCandidateList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfCandidateList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfCandidateList * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCandidates )( 
            ITfCandidateList * This,
            /* [out] */ __RPC__deref_out_opt IEnumTfCandidates **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidate )( 
            ITfCandidateList * This,
            /* [in] */ ULONG nIndex,
            /* [out] */ __RPC__deref_out_opt ITfCandidateString **ppCand);
        
        HRESULT ( STDMETHODCALLTYPE *GetCandidateNum )( 
            ITfCandidateList * This,
            /* [out] */ __RPC__out ULONG *pnCnt);
        
        HRESULT ( STDMETHODCALLTYPE *SetResult )( 
            ITfCandidateList * This,
            /* [in] */ ULONG nIndex,
            /* [in] */ TfCandidateResult imcr);
        
        END_INTERFACE
    } ITfCandidateListVtbl;

    interface ITfCandidateList
    {
        CONST_VTBL struct ITfCandidateListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfCandidateList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfCandidateList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfCandidateList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfCandidateList_EnumCandidates(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumCandidates(This,ppEnum) ) 

#define ITfCandidateList_GetCandidate(This,nIndex,ppCand)	\
    ( (This)->lpVtbl -> GetCandidate(This,nIndex,ppCand) ) 

#define ITfCandidateList_GetCandidateNum(This,pnCnt)	\
    ( (This)->lpVtbl -> GetCandidateNum(This,pnCnt) ) 

#define ITfCandidateList_SetResult(This,nIndex,imcr)	\
    ( (This)->lpVtbl -> SetResult(This,nIndex,imcr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfCandidateList_INTERFACE_DEFINED__ */


#ifndef __ITfFnReconversion_INTERFACE_DEFINED__
#define __ITfFnReconversion_INTERFACE_DEFINED__

/* interface ITfFnReconversion */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnReconversion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4cea93c0-0a58-11d3-8df0-00105a2799b5")
    ITfFnReconversion : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryRange( 
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt ITfRange **ppNewRange,
            /* [out] */ __RPC__out BOOL *pfConvertable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReconversion( 
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfCandidateList **ppCandList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reconvert( 
            /* [in] */ __RPC__in_opt ITfRange *pRange) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnReconversionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnReconversion * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnReconversion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnReconversion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnReconversion * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *QueryRange )( 
            ITfFnReconversion * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt ITfRange **ppNewRange,
            /* [out] */ __RPC__out BOOL *pfConvertable);
        
        HRESULT ( STDMETHODCALLTYPE *GetReconversion )( 
            ITfFnReconversion * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfCandidateList **ppCandList);
        
        HRESULT ( STDMETHODCALLTYPE *Reconvert )( 
            ITfFnReconversion * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange);
        
        END_INTERFACE
    } ITfFnReconversionVtbl;

    interface ITfFnReconversion
    {
        CONST_VTBL struct ITfFnReconversionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnReconversion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnReconversion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnReconversion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnReconversion_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnReconversion_QueryRange(This,pRange,ppNewRange,pfConvertable)	\
    ( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfConvertable) ) 

#define ITfFnReconversion_GetReconversion(This,pRange,ppCandList)	\
    ( (This)->lpVtbl -> GetReconversion(This,pRange,ppCandList) ) 

#define ITfFnReconversion_Reconvert(This,pRange)	\
    ( (This)->lpVtbl -> Reconvert(This,pRange) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnReconversion_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ctffunc_0000_0004 */
/* [local] */ 

EXTERN_C const GUID GUID_COMPARTMENT_SAPI_AUDIO;
EXTERN_C const GUID GUID_COMPARTMENT_SPEECH_DICTATIONSTAT;
#define TF_DICTATION_ON          0x00000001
#define TF_DICTATION_ENABLED     0x00000002
#define TF_COMMANDING_ENABLED    0x00000004
#define TF_COMMANDING_ON         0x00000008
#define TF_SPEECHUI_SHOWN        0x00000010

EXTERN_C const GUID GUID_COMPARTMENT_SPEECH_UI_STATUS;
#define TF_SHOW_BALLOON          0x00000001
#define TF_DISABLE_BALLOON       0x00000002
EXTERN_C const GUID GUID_COMPARTMENT_SPEECH_CFGMENU;
#define TF_MENUREADY          0x00000001
EXTERN_C const GUID GUID_LBI_SAPILAYR_CFGMENUBUTTON;



extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0004_v0_0_s_ifspec;

#ifndef __ITfFnPlayBack_INTERFACE_DEFINED__
#define __ITfFnPlayBack_INTERFACE_DEFINED__

/* interface ITfFnPlayBack */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnPlayBack;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a3a416a4-0f64-11d3-b5b7-00c04fc324a1")
    ITfFnPlayBack : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryRange( 
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfRange **ppNewRange,
            /* [out] */ __RPC__out BOOL *pfPlayable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Play( 
            /* [in] */ __RPC__in_opt ITfRange *pRange) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnPlayBackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnPlayBack * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnPlayBack * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnPlayBack * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnPlayBack * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *QueryRange )( 
            ITfFnPlayBack * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfRange **ppNewRange,
            /* [out] */ __RPC__out BOOL *pfPlayable);
        
        HRESULT ( STDMETHODCALLTYPE *Play )( 
            ITfFnPlayBack * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange);
        
        END_INTERFACE
    } ITfFnPlayBackVtbl;

    interface ITfFnPlayBack
    {
        CONST_VTBL struct ITfFnPlayBackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnPlayBack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnPlayBack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnPlayBack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnPlayBack_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnPlayBack_QueryRange(This,pRange,ppNewRange,pfPlayable)	\
    ( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfPlayable) ) 

#define ITfFnPlayBack_Play(This,pRange)	\
    ( (This)->lpVtbl -> Play(This,pRange) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnPlayBack_INTERFACE_DEFINED__ */


#ifndef __ITfFnLangProfileUtil_INTERFACE_DEFINED__
#define __ITfFnLangProfileUtil_INTERFACE_DEFINED__

/* interface ITfFnLangProfileUtil */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnLangProfileUtil;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A87A8574-A6C1-4E15-99F0-3D3965F548EB")
    ITfFnLangProfileUtil : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterActiveProfiles( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsProfileAvailableForLang( 
            /* [in] */ LANGID langid,
            /* [out] */ __RPC__out BOOL *pfAvailable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnLangProfileUtilVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnLangProfileUtil * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnLangProfileUtil * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnLangProfileUtil * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnLangProfileUtil * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterActiveProfiles )( 
            ITfFnLangProfileUtil * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsProfileAvailableForLang )( 
            ITfFnLangProfileUtil * This,
            /* [in] */ LANGID langid,
            /* [out] */ __RPC__out BOOL *pfAvailable);
        
        END_INTERFACE
    } ITfFnLangProfileUtilVtbl;

    interface ITfFnLangProfileUtil
    {
        CONST_VTBL struct ITfFnLangProfileUtilVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnLangProfileUtil_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnLangProfileUtil_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnLangProfileUtil_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnLangProfileUtil_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnLangProfileUtil_RegisterActiveProfiles(This)	\
    ( (This)->lpVtbl -> RegisterActiveProfiles(This) ) 

#define ITfFnLangProfileUtil_IsProfileAvailableForLang(This,langid,pfAvailable)	\
    ( (This)->lpVtbl -> IsProfileAvailableForLang(This,langid,pfAvailable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnLangProfileUtil_INTERFACE_DEFINED__ */


#ifndef __ITfFnConfigure_INTERFACE_DEFINED__
#define __ITfFnConfigure_INTERFACE_DEFINED__

/* interface ITfFnConfigure */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnConfigure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88f567c6-1757-49f8-a1b2-89234c1eeff9")
    ITfFnConfigure : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ __RPC__in HWND hwndParent,
            /* [in] */ LANGID langid,
            /* [in] */ __RPC__in REFGUID rguidProfile) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnConfigureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnConfigure * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnConfigure * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnConfigure * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnConfigure * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfFnConfigure * This,
            /* [in] */ __RPC__in HWND hwndParent,
            /* [in] */ LANGID langid,
            /* [in] */ __RPC__in REFGUID rguidProfile);
        
        END_INTERFACE
    } ITfFnConfigureVtbl;

    interface ITfFnConfigure
    {
        CONST_VTBL struct ITfFnConfigureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnConfigure_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnConfigure_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnConfigure_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnConfigure_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnConfigure_Show(This,hwndParent,langid,rguidProfile)	\
    ( (This)->lpVtbl -> Show(This,hwndParent,langid,rguidProfile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnConfigure_INTERFACE_DEFINED__ */


#ifndef __ITfFnConfigureRegisterWord_INTERFACE_DEFINED__
#define __ITfFnConfigureRegisterWord_INTERFACE_DEFINED__

/* interface ITfFnConfigureRegisterWord */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnConfigureRegisterWord;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bb95808a-6d8f-4bca-8400-5390b586aedf")
    ITfFnConfigureRegisterWord : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ __RPC__in HWND hwndParent,
            /* [in] */ LANGID langid,
            /* [in] */ __RPC__in REFGUID rguidProfile,
            /* [unique][in] */ __RPC__in_opt BSTR bstrRegistered) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnConfigureRegisterWordVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnConfigureRegisterWord * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnConfigureRegisterWord * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnConfigureRegisterWord * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnConfigureRegisterWord * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfFnConfigureRegisterWord * This,
            /* [in] */ __RPC__in HWND hwndParent,
            /* [in] */ LANGID langid,
            /* [in] */ __RPC__in REFGUID rguidProfile,
            /* [unique][in] */ __RPC__in_opt BSTR bstrRegistered);
        
        END_INTERFACE
    } ITfFnConfigureRegisterWordVtbl;

    interface ITfFnConfigureRegisterWord
    {
        CONST_VTBL struct ITfFnConfigureRegisterWordVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnConfigureRegisterWord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnConfigureRegisterWord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnConfigureRegisterWord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnConfigureRegisterWord_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnConfigureRegisterWord_Show(This,hwndParent,langid,rguidProfile,bstrRegistered)	\
    ( (This)->lpVtbl -> Show(This,hwndParent,langid,rguidProfile,bstrRegistered) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnConfigureRegisterWord_INTERFACE_DEFINED__ */


#ifndef __ITfFnConfigureRegisterEudc_INTERFACE_DEFINED__
#define __ITfFnConfigureRegisterEudc_INTERFACE_DEFINED__

/* interface ITfFnConfigureRegisterEudc */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnConfigureRegisterEudc;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b5e26ff5-d7ad-4304-913f-21a2ed95a1b0")
    ITfFnConfigureRegisterEudc : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ __RPC__in HWND hwndParent,
            /* [in] */ LANGID langid,
            /* [in] */ __RPC__in REFGUID rguidProfile,
            /* [unique][in] */ __RPC__in_opt BSTR bstrRegistered) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnConfigureRegisterEudcVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnConfigureRegisterEudc * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnConfigureRegisterEudc * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnConfigureRegisterEudc * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnConfigureRegisterEudc * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfFnConfigureRegisterEudc * This,
            /* [in] */ __RPC__in HWND hwndParent,
            /* [in] */ LANGID langid,
            /* [in] */ __RPC__in REFGUID rguidProfile,
            /* [unique][in] */ __RPC__in_opt BSTR bstrRegistered);
        
        END_INTERFACE
    } ITfFnConfigureRegisterEudcVtbl;

    interface ITfFnConfigureRegisterEudc
    {
        CONST_VTBL struct ITfFnConfigureRegisterEudcVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnConfigureRegisterEudc_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnConfigureRegisterEudc_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnConfigureRegisterEudc_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnConfigureRegisterEudc_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnConfigureRegisterEudc_Show(This,hwndParent,langid,rguidProfile,bstrRegistered)	\
    ( (This)->lpVtbl -> Show(This,hwndParent,langid,rguidProfile,bstrRegistered) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnConfigureRegisterEudc_INTERFACE_DEFINED__ */


#ifndef __ITfFnShowHelp_INTERFACE_DEFINED__
#define __ITfFnShowHelp_INTERFACE_DEFINED__

/* interface ITfFnShowHelp */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnShowHelp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AB1D30C-094D-4C29-8EA5-0BF59BE87BF3")
    ITfFnShowHelp : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ __RPC__in HWND hwndParent) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnShowHelpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnShowHelp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnShowHelp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnShowHelp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnShowHelp * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            ITfFnShowHelp * This,
            /* [in] */ __RPC__in HWND hwndParent);
        
        END_INTERFACE
    } ITfFnShowHelpVtbl;

    interface ITfFnShowHelp
    {
        CONST_VTBL struct ITfFnShowHelpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnShowHelp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnShowHelp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnShowHelp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnShowHelp_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnShowHelp_Show(This,hwndParent)	\
    ( (This)->lpVtbl -> Show(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnShowHelp_INTERFACE_DEFINED__ */


#ifndef __ITfFnBalloon_INTERFACE_DEFINED__
#define __ITfFnBalloon_INTERFACE_DEFINED__

/* interface ITfFnBalloon */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnBalloon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3BAB89E4-5FBE-45F4-A5BC-DCA36AD225A8")
    ITfFnBalloon : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateBalloon( 
            /* [in] */ TfLBBalloonStyle style,
            /* [size_is][in] */ __RPC__in_ecount_full(cch) const WCHAR *pch,
            /* [in] */ ULONG cch) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnBalloonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnBalloon * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnBalloon * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnBalloon * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateBalloon )( 
            ITfFnBalloon * This,
            /* [in] */ TfLBBalloonStyle style,
            /* [size_is][in] */ __RPC__in_ecount_full(cch) const WCHAR *pch,
            /* [in] */ ULONG cch);
        
        END_INTERFACE
    } ITfFnBalloonVtbl;

    interface ITfFnBalloon
    {
        CONST_VTBL struct ITfFnBalloonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnBalloon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnBalloon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnBalloon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnBalloon_UpdateBalloon(This,style,pch,cch)	\
    ( (This)->lpVtbl -> UpdateBalloon(This,style,pch,cch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnBalloon_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ctffunc_0000_0011 */
/* [local] */ 

typedef /* [public][public][uuid] */  DECLSPEC_UUID("36adb6d9-da1f-45d8-a499-86167e0f936b") 
enum __MIDL___MIDL_itf_ctffunc_0000_0011_0001
    {	GETIF_RESMGR	= 0,
	GETIF_RECOCONTEXT	= 0x1,
	GETIF_RECOGNIZER	= 0x2,
	GETIF_VOICE	= 0x3,
	GETIF_DICTGRAM	= 0x4,
	GETIF_RECOGNIZERNOINIT	= 0x5
    } 	TfSapiObject;



extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0011_v0_0_s_ifspec;

#ifndef __ITfFnGetSAPIObject_INTERFACE_DEFINED__
#define __ITfFnGetSAPIObject_INTERFACE_DEFINED__

/* interface ITfFnGetSAPIObject */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnGetSAPIObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5c0ab7ea-167d-4f59-bfb5-4693755e90ca")
    ITfFnGetSAPIObject : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ TfSapiObject sObj,
            /* [out] */ __RPC__deref_out_opt IUnknown **ppunk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnGetSAPIObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnGetSAPIObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnGetSAPIObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnGetSAPIObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnGetSAPIObject * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *Get )( 
            ITfFnGetSAPIObject * This,
            /* [in] */ TfSapiObject sObj,
            /* [out] */ __RPC__deref_out_opt IUnknown **ppunk);
        
        END_INTERFACE
    } ITfFnGetSAPIObjectVtbl;

    interface ITfFnGetSAPIObject
    {
        CONST_VTBL struct ITfFnGetSAPIObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnGetSAPIObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnGetSAPIObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnGetSAPIObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnGetSAPIObject_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnGetSAPIObject_Get(This,sObj,ppunk)	\
    ( (This)->lpVtbl -> Get(This,sObj,ppunk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnGetSAPIObject_INTERFACE_DEFINED__ */


#ifndef __ITfFnPropertyUIStatus_INTERFACE_DEFINED__
#define __ITfFnPropertyUIStatus_INTERFACE_DEFINED__

/* interface ITfFnPropertyUIStatus */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnPropertyUIStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2338AC6E-2B9D-44C0-A75E-EE64F256B3BD")
    ITfFnPropertyUIStatus : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [in] */ __RPC__in REFGUID refguidProp,
            /* [out] */ __RPC__out DWORD *pdw) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatus( 
            /* [in] */ __RPC__in REFGUID refguidProp,
            /* [in] */ DWORD dw) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnPropertyUIStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnPropertyUIStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnPropertyUIStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnPropertyUIStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnPropertyUIStatus * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ITfFnPropertyUIStatus * This,
            /* [in] */ __RPC__in REFGUID refguidProp,
            /* [out] */ __RPC__out DWORD *pdw);
        
        HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            ITfFnPropertyUIStatus * This,
            /* [in] */ __RPC__in REFGUID refguidProp,
            /* [in] */ DWORD dw);
        
        END_INTERFACE
    } ITfFnPropertyUIStatusVtbl;

    interface ITfFnPropertyUIStatus
    {
        CONST_VTBL struct ITfFnPropertyUIStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnPropertyUIStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnPropertyUIStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnPropertyUIStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnPropertyUIStatus_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnPropertyUIStatus_GetStatus(This,refguidProp,pdw)	\
    ( (This)->lpVtbl -> GetStatus(This,refguidProp,pdw) ) 

#define ITfFnPropertyUIStatus_SetStatus(This,refguidProp,dw)	\
    ( (This)->lpVtbl -> SetStatus(This,refguidProp,dw) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnPropertyUIStatus_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ctffunc_0000_0013 */
/* [local] */ 


#define TF_PROPUI_STATUS_SAVETOFILE  0x00000001



extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0013_v0_0_s_ifspec;

#ifndef __IEnumSpeechCommands_INTERFACE_DEFINED__
#define __IEnumSpeechCommands_INTERFACE_DEFINED__

/* interface IEnumSpeechCommands */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSpeechCommands;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8c5dac4f-083c-4b85-a4c9-71746048adca")
    IEnumSpeechCommands : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumSpeechCommands **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG ulCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ulCount, *pcFetched) WCHAR **pSpCmds,
            /* [out] */ __RPC__out ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG ulCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumSpeechCommandsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSpeechCommands * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSpeechCommands * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSpeechCommands * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSpeechCommands * This,
            /* [out] */ __RPC__deref_out_opt IEnumSpeechCommands **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSpeechCommands * This,
            /* [in] */ ULONG ulCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ulCount, *pcFetched) WCHAR **pSpCmds,
            /* [out] */ __RPC__out ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSpeechCommands * This);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSpeechCommands * This,
            /* [in] */ ULONG ulCount);
        
        END_INTERFACE
    } IEnumSpeechCommandsVtbl;

    interface IEnumSpeechCommands
    {
        CONST_VTBL struct IEnumSpeechCommandsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSpeechCommands_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSpeechCommands_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSpeechCommands_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSpeechCommands_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumSpeechCommands_Next(This,ulCount,pSpCmds,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,ulCount,pSpCmds,pcFetched) ) 

#define IEnumSpeechCommands_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSpeechCommands_Skip(This,ulCount)	\
    ( (This)->lpVtbl -> Skip(This,ulCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSpeechCommands_INTERFACE_DEFINED__ */


#ifndef __ISpeechCommandProvider_INTERFACE_DEFINED__
#define __ISpeechCommandProvider_INTERFACE_DEFINED__

/* interface ISpeechCommandProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISpeechCommandProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38e09d4c-586d-435a-b592-c8a86691dec6")
    ISpeechCommandProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumSpeechCommands( 
            /* [in] */ LANGID langid,
            /* [out] */ __RPC__deref_out_opt IEnumSpeechCommands **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessCommand( 
            /* [size_is][in] */ __RPC__in_ecount_full(cch) const WCHAR *pszCommand,
            /* [in] */ ULONG cch,
            /* [in] */ LANGID langid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISpeechCommandProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpeechCommandProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpeechCommandProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpeechCommandProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSpeechCommands )( 
            ISpeechCommandProvider * This,
            /* [in] */ LANGID langid,
            /* [out] */ __RPC__deref_out_opt IEnumSpeechCommands **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessCommand )( 
            ISpeechCommandProvider * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cch) const WCHAR *pszCommand,
            /* [in] */ ULONG cch,
            /* [in] */ LANGID langid);
        
        END_INTERFACE
    } ISpeechCommandProviderVtbl;

    interface ISpeechCommandProvider
    {
        CONST_VTBL struct ISpeechCommandProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpeechCommandProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpeechCommandProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpeechCommandProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpeechCommandProvider_EnumSpeechCommands(This,langid,ppEnum)	\
    ( (This)->lpVtbl -> EnumSpeechCommands(This,langid,ppEnum) ) 

#define ISpeechCommandProvider_ProcessCommand(This,pszCommand,cch,langid)	\
    ( (This)->lpVtbl -> ProcessCommand(This,pszCommand,cch,langid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpeechCommandProvider_INTERFACE_DEFINED__ */


#ifndef __ITfFnCustomSpeechCommand_INTERFACE_DEFINED__
#define __ITfFnCustomSpeechCommand_INTERFACE_DEFINED__

/* interface ITfFnCustomSpeechCommand */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnCustomSpeechCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fca6c349-a12f-43a3-8dd6-5a5a4282577b")
    ITfFnCustomSpeechCommand : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSpeechCommandProvider( 
            /* [in] */ __RPC__in_opt IUnknown *pspcmdProvider) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnCustomSpeechCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnCustomSpeechCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnCustomSpeechCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnCustomSpeechCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnCustomSpeechCommand * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *SetSpeechCommandProvider )( 
            ITfFnCustomSpeechCommand * This,
            /* [in] */ __RPC__in_opt IUnknown *pspcmdProvider);
        
        END_INTERFACE
    } ITfFnCustomSpeechCommandVtbl;

    interface ITfFnCustomSpeechCommand
    {
        CONST_VTBL struct ITfFnCustomSpeechCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnCustomSpeechCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnCustomSpeechCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnCustomSpeechCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnCustomSpeechCommand_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnCustomSpeechCommand_SetSpeechCommandProvider(This,pspcmdProvider)	\
    ( (This)->lpVtbl -> SetSpeechCommandProvider(This,pspcmdProvider) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnCustomSpeechCommand_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ctffunc_0000_0016 */
/* [local] */ 

EXTERN_C const GUID GUID_TFCAT_TIP_MASTERLM;
EXTERN_C const GUID GUID_MASTERLM_FUNCTIONPROVIDER;
EXTERN_C const GUID GUID_LMLATTICE_VER1_0;
EXTERN_C const GUID GUID_PROP_LMLATTICE;


extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0016_v0_0_s_ifspec;

#ifndef __ITfFnLMProcessor_INTERFACE_DEFINED__
#define __ITfFnLMProcessor_INTERFACE_DEFINED__

/* interface ITfFnLMProcessor */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnLMProcessor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AFBF8E7-AC4B-4082-B058-890899D3A010")
    ITfFnLMProcessor : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryRange( 
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfRange **ppNewRange,
            /* [out] */ __RPC__out BOOL *pfAccepted) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryLangID( 
            /* [in] */ LANGID langid,
            /* [out] */ __RPC__out BOOL *pfAccepted) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReconversion( 
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfCandidateList **ppCandList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reconvert( 
            /* [in] */ __RPC__in_opt ITfRange *pRange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryKey( 
            /* [in] */ BOOL fUp,
            /* [in] */ WPARAM vKey,
            /* [in] */ LPARAM lparamKeydata,
            /* [out] */ __RPC__out BOOL *pfInterested) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvokeKey( 
            /* [in] */ BOOL fUp,
            /* [in] */ WPARAM vKey,
            /* [in] */ LPARAM lparamKeyData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvokeFunc( 
            /* [in] */ __RPC__in_opt ITfContext *pic,
            /* [in] */ __RPC__in REFGUID refguidFunc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnLMProcessorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnLMProcessor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnLMProcessor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnLMProcessor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnLMProcessor * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *QueryRange )( 
            ITfFnLMProcessor * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfRange **ppNewRange,
            /* [out] */ __RPC__out BOOL *pfAccepted);
        
        HRESULT ( STDMETHODCALLTYPE *QueryLangID )( 
            ITfFnLMProcessor * This,
            /* [in] */ LANGID langid,
            /* [out] */ __RPC__out BOOL *pfAccepted);
        
        HRESULT ( STDMETHODCALLTYPE *GetReconversion )( 
            ITfFnLMProcessor * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfCandidateList **ppCandList);
        
        HRESULT ( STDMETHODCALLTYPE *Reconvert )( 
            ITfFnLMProcessor * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange);
        
        HRESULT ( STDMETHODCALLTYPE *QueryKey )( 
            ITfFnLMProcessor * This,
            /* [in] */ BOOL fUp,
            /* [in] */ WPARAM vKey,
            /* [in] */ LPARAM lparamKeydata,
            /* [out] */ __RPC__out BOOL *pfInterested);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeKey )( 
            ITfFnLMProcessor * This,
            /* [in] */ BOOL fUp,
            /* [in] */ WPARAM vKey,
            /* [in] */ LPARAM lparamKeyData);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeFunc )( 
            ITfFnLMProcessor * This,
            /* [in] */ __RPC__in_opt ITfContext *pic,
            /* [in] */ __RPC__in REFGUID refguidFunc);
        
        END_INTERFACE
    } ITfFnLMProcessorVtbl;

    interface ITfFnLMProcessor
    {
        CONST_VTBL struct ITfFnLMProcessorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnLMProcessor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnLMProcessor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnLMProcessor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnLMProcessor_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnLMProcessor_QueryRange(This,pRange,ppNewRange,pfAccepted)	\
    ( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfAccepted) ) 

#define ITfFnLMProcessor_QueryLangID(This,langid,pfAccepted)	\
    ( (This)->lpVtbl -> QueryLangID(This,langid,pfAccepted) ) 

#define ITfFnLMProcessor_GetReconversion(This,pRange,ppCandList)	\
    ( (This)->lpVtbl -> GetReconversion(This,pRange,ppCandList) ) 

#define ITfFnLMProcessor_Reconvert(This,pRange)	\
    ( (This)->lpVtbl -> Reconvert(This,pRange) ) 

#define ITfFnLMProcessor_QueryKey(This,fUp,vKey,lparamKeydata,pfInterested)	\
    ( (This)->lpVtbl -> QueryKey(This,fUp,vKey,lparamKeydata,pfInterested) ) 

#define ITfFnLMProcessor_InvokeKey(This,fUp,vKey,lparamKeyData)	\
    ( (This)->lpVtbl -> InvokeKey(This,fUp,vKey,lparamKeyData) ) 

#define ITfFnLMProcessor_InvokeFunc(This,pic,refguidFunc)	\
    ( (This)->lpVtbl -> InvokeFunc(This,pic,refguidFunc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnLMProcessor_INTERFACE_DEFINED__ */


#ifndef __ITfFnLMInternal_INTERFACE_DEFINED__
#define __ITfFnLMInternal_INTERFACE_DEFINED__

/* interface ITfFnLMInternal */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnLMInternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04B825B1-AC9A-4F7B-B5AD-C7168F1EE445")
    ITfFnLMInternal : public ITfFnLMProcessor
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProcessLattice( 
            /* [in] */ __RPC__in_opt ITfRange *pRange) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnLMInternalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnLMInternal * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnLMInternal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnLMInternal * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnLMInternal * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *QueryRange )( 
            ITfFnLMInternal * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfRange **ppNewRange,
            /* [out] */ __RPC__out BOOL *pfAccepted);
        
        HRESULT ( STDMETHODCALLTYPE *QueryLangID )( 
            ITfFnLMInternal * This,
            /* [in] */ LANGID langid,
            /* [out] */ __RPC__out BOOL *pfAccepted);
        
        HRESULT ( STDMETHODCALLTYPE *GetReconversion )( 
            ITfFnLMInternal * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [out] */ __RPC__deref_out_opt ITfCandidateList **ppCandList);
        
        HRESULT ( STDMETHODCALLTYPE *Reconvert )( 
            ITfFnLMInternal * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange);
        
        HRESULT ( STDMETHODCALLTYPE *QueryKey )( 
            ITfFnLMInternal * This,
            /* [in] */ BOOL fUp,
            /* [in] */ WPARAM vKey,
            /* [in] */ LPARAM lparamKeydata,
            /* [out] */ __RPC__out BOOL *pfInterested);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeKey )( 
            ITfFnLMInternal * This,
            /* [in] */ BOOL fUp,
            /* [in] */ WPARAM vKey,
            /* [in] */ LPARAM lparamKeyData);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeFunc )( 
            ITfFnLMInternal * This,
            /* [in] */ __RPC__in_opt ITfContext *pic,
            /* [in] */ __RPC__in REFGUID refguidFunc);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessLattice )( 
            ITfFnLMInternal * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange);
        
        END_INTERFACE
    } ITfFnLMInternalVtbl;

    interface ITfFnLMInternal
    {
        CONST_VTBL struct ITfFnLMInternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnLMInternal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnLMInternal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnLMInternal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnLMInternal_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnLMInternal_QueryRange(This,pRange,ppNewRange,pfAccepted)	\
    ( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfAccepted) ) 

#define ITfFnLMInternal_QueryLangID(This,langid,pfAccepted)	\
    ( (This)->lpVtbl -> QueryLangID(This,langid,pfAccepted) ) 

#define ITfFnLMInternal_GetReconversion(This,pRange,ppCandList)	\
    ( (This)->lpVtbl -> GetReconversion(This,pRange,ppCandList) ) 

#define ITfFnLMInternal_Reconvert(This,pRange)	\
    ( (This)->lpVtbl -> Reconvert(This,pRange) ) 

#define ITfFnLMInternal_QueryKey(This,fUp,vKey,lparamKeydata,pfInterested)	\
    ( (This)->lpVtbl -> QueryKey(This,fUp,vKey,lparamKeydata,pfInterested) ) 

#define ITfFnLMInternal_InvokeKey(This,fUp,vKey,lparamKeyData)	\
    ( (This)->lpVtbl -> InvokeKey(This,fUp,vKey,lparamKeyData) ) 

#define ITfFnLMInternal_InvokeFunc(This,pic,refguidFunc)	\
    ( (This)->lpVtbl -> InvokeFunc(This,pic,refguidFunc) ) 


#define ITfFnLMInternal_ProcessLattice(This,pRange)	\
    ( (This)->lpVtbl -> ProcessLattice(This,pRange) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnLMInternal_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ctffunc_0000_0018 */
/* [local] */ 

typedef /* [uuid] */  DECLSPEC_UUID("1b646efe-3ce3-4ce2-b41f-35b93fe5552f") struct TF_LMLATTELEMENT
    {
    DWORD dwFrameStart;
    DWORD dwFrameLen;
    DWORD dwFlags;
    union 
        {
        INT iCost;
        } 	;
    BSTR bstrText;
    } 	TF_LMLATTELEMENT;



extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0018_v0_0_s_ifspec;

#ifndef __IEnumTfLatticeElements_INTERFACE_DEFINED__
#define __IEnumTfLatticeElements_INTERFACE_DEFINED__

/* interface IEnumTfLatticeElements */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumTfLatticeElements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56988052-47DA-4A05-911A-E3D941F17145")
    IEnumTfLatticeElements : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumTfLatticeElements **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG ulCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ulCount, *pcFetched) TF_LMLATTELEMENT *rgsElements,
            /* [out] */ __RPC__out ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG ulCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumTfLatticeElementsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumTfLatticeElements * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumTfLatticeElements * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumTfLatticeElements * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumTfLatticeElements * This,
            /* [out] */ __RPC__deref_out_opt IEnumTfLatticeElements **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumTfLatticeElements * This,
            /* [in] */ ULONG ulCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ulCount, *pcFetched) TF_LMLATTELEMENT *rgsElements,
            /* [out] */ __RPC__out ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumTfLatticeElements * This);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumTfLatticeElements * This,
            /* [in] */ ULONG ulCount);
        
        END_INTERFACE
    } IEnumTfLatticeElementsVtbl;

    interface IEnumTfLatticeElements
    {
        CONST_VTBL struct IEnumTfLatticeElementsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumTfLatticeElements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumTfLatticeElements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumTfLatticeElements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumTfLatticeElements_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumTfLatticeElements_Next(This,ulCount,rgsElements,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,ulCount,rgsElements,pcFetched) ) 

#define IEnumTfLatticeElements_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumTfLatticeElements_Skip(This,ulCount)	\
    ( (This)->lpVtbl -> Skip(This,ulCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumTfLatticeElements_INTERFACE_DEFINED__ */


#ifndef __ITfLMLattice_INTERFACE_DEFINED__
#define __ITfLMLattice_INTERFACE_DEFINED__

/* interface ITfLMLattice */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfLMLattice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4236675-A5BF-4570-9D42-5D6D7B02D59B")
    ITfLMLattice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryType( 
            /* [in] */ __RPC__in REFGUID rguidType,
            /* [out] */ __RPC__out BOOL *pfSupported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumLatticeElements( 
            /* [in] */ DWORD dwFrameStart,
            /* [in] */ __RPC__in REFGUID rguidType,
            /* [out] */ __RPC__deref_out_opt IEnumTfLatticeElements **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfLMLatticeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfLMLattice * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfLMLattice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfLMLattice * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryType )( 
            ITfLMLattice * This,
            /* [in] */ __RPC__in REFGUID rguidType,
            /* [out] */ __RPC__out BOOL *pfSupported);
        
        HRESULT ( STDMETHODCALLTYPE *EnumLatticeElements )( 
            ITfLMLattice * This,
            /* [in] */ DWORD dwFrameStart,
            /* [in] */ __RPC__in REFGUID rguidType,
            /* [out] */ __RPC__deref_out_opt IEnumTfLatticeElements **ppEnum);
        
        END_INTERFACE
    } ITfLMLatticeVtbl;

    interface ITfLMLattice
    {
        CONST_VTBL struct ITfLMLatticeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfLMLattice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfLMLattice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfLMLattice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfLMLattice_QueryType(This,rguidType,pfSupported)	\
    ( (This)->lpVtbl -> QueryType(This,rguidType,pfSupported) ) 

#define ITfLMLattice_EnumLatticeElements(This,dwFrameStart,rguidType,ppEnum)	\
    ( (This)->lpVtbl -> EnumLatticeElements(This,dwFrameStart,rguidType,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfLMLattice_INTERFACE_DEFINED__ */


#ifndef __ITfFnAdviseText_INTERFACE_DEFINED__
#define __ITfFnAdviseText_INTERFACE_DEFINED__

/* interface ITfFnAdviseText */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITfFnAdviseText;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3527268B-7D53-4DD9-92B7-7296AE461249")
    ITfFnAdviseText : public ITfFunction
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnTextUpdate( 
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [size_is][in] */ __RPC__in_ecount_full(cch) const WCHAR *pchText,
            /* [in] */ LONG cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnLatticeUpdate( 
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [in] */ __RPC__in_opt ITfLMLattice *pLattice) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITfFnAdviseTextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITfFnAdviseText * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITfFnAdviseText * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITfFnAdviseText * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            ITfFnAdviseText * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *OnTextUpdate )( 
            ITfFnAdviseText * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [size_is][in] */ __RPC__in_ecount_full(cch) const WCHAR *pchText,
            /* [in] */ LONG cch);
        
        HRESULT ( STDMETHODCALLTYPE *OnLatticeUpdate )( 
            ITfFnAdviseText * This,
            /* [in] */ __RPC__in_opt ITfRange *pRange,
            /* [in] */ __RPC__in_opt ITfLMLattice *pLattice);
        
        END_INTERFACE
    } ITfFnAdviseTextVtbl;

    interface ITfFnAdviseText
    {
        CONST_VTBL struct ITfFnAdviseTextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITfFnAdviseText_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITfFnAdviseText_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITfFnAdviseText_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITfFnAdviseText_GetDisplayName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) ) 


#define ITfFnAdviseText_OnTextUpdate(This,pRange,pchText,cch)	\
    ( (This)->lpVtbl -> OnTextUpdate(This,pRange,pchText,cch) ) 

#define ITfFnAdviseText_OnLatticeUpdate(This,pRange,pLattice)	\
    ( (This)->lpVtbl -> OnLatticeUpdate(This,pRange,pLattice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITfFnAdviseText_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ctffunc_0000_0021 */
/* [local] */ 

#endif // CTFFUNC_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0021_v0_0_s_ifspec;

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



