

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for fsrm.idl:
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

#ifndef __fsrm_h__
#define __fsrm_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFsrmObject_FWD_DEFINED__
#define __IFsrmObject_FWD_DEFINED__
typedef interface IFsrmObject IFsrmObject;
#endif 	/* __IFsrmObject_FWD_DEFINED__ */


#ifndef __IFsrmCollection_FWD_DEFINED__
#define __IFsrmCollection_FWD_DEFINED__
typedef interface IFsrmCollection IFsrmCollection;
#endif 	/* __IFsrmCollection_FWD_DEFINED__ */


#ifndef __IFsrmMutableCollection_FWD_DEFINED__
#define __IFsrmMutableCollection_FWD_DEFINED__
typedef interface IFsrmMutableCollection IFsrmMutableCollection;
#endif 	/* __IFsrmMutableCollection_FWD_DEFINED__ */


#ifndef __IFsrmCommittableCollection_FWD_DEFINED__
#define __IFsrmCommittableCollection_FWD_DEFINED__
typedef interface IFsrmCommittableCollection IFsrmCommittableCollection;
#endif 	/* __IFsrmCommittableCollection_FWD_DEFINED__ */


#ifndef __IFsrmAction_FWD_DEFINED__
#define __IFsrmAction_FWD_DEFINED__
typedef interface IFsrmAction IFsrmAction;
#endif 	/* __IFsrmAction_FWD_DEFINED__ */


#ifndef __IFsrmActionEmail_FWD_DEFINED__
#define __IFsrmActionEmail_FWD_DEFINED__
typedef interface IFsrmActionEmail IFsrmActionEmail;
#endif 	/* __IFsrmActionEmail_FWD_DEFINED__ */


#ifndef __IFsrmActionReport_FWD_DEFINED__
#define __IFsrmActionReport_FWD_DEFINED__
typedef interface IFsrmActionReport IFsrmActionReport;
#endif 	/* __IFsrmActionReport_FWD_DEFINED__ */


#ifndef __IFsrmActionEventLog_FWD_DEFINED__
#define __IFsrmActionEventLog_FWD_DEFINED__
typedef interface IFsrmActionEventLog IFsrmActionEventLog;
#endif 	/* __IFsrmActionEventLog_FWD_DEFINED__ */


#ifndef __IFsrmActionCommand_FWD_DEFINED__
#define __IFsrmActionCommand_FWD_DEFINED__
typedef interface IFsrmActionCommand IFsrmActionCommand;
#endif 	/* __IFsrmActionCommand_FWD_DEFINED__ */


#ifndef __IFsrmSetting_FWD_DEFINED__
#define __IFsrmSetting_FWD_DEFINED__
typedef interface IFsrmSetting IFsrmSetting;
#endif 	/* __IFsrmSetting_FWD_DEFINED__ */


#ifndef __IFsrmPathMapper_FWD_DEFINED__
#define __IFsrmPathMapper_FWD_DEFINED__
typedef interface IFsrmPathMapper IFsrmPathMapper;
#endif 	/* __IFsrmPathMapper_FWD_DEFINED__ */


#ifndef __IFsrmExportImport_FWD_DEFINED__
#define __IFsrmExportImport_FWD_DEFINED__
typedef interface IFsrmExportImport IFsrmExportImport;
#endif 	/* __IFsrmExportImport_FWD_DEFINED__ */


#ifndef __IFsrmDerivedObjectsResult_FWD_DEFINED__
#define __IFsrmDerivedObjectsResult_FWD_DEFINED__
typedef interface IFsrmDerivedObjectsResult IFsrmDerivedObjectsResult;
#endif 	/* __IFsrmDerivedObjectsResult_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "fsrmenums.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_fsrm_0000_0000 */
/* [local] */ 













#define	FSRM_DISPID_FEATURE_MASK	( 0xf000000 )

#define	FSRM_DISPID_INTERFACE_A_MASK	( 0xf00000 )

#define	FSRM_DISPID_INTERFACE_B_MASK	( 0xf0000 )

#define	FSRM_DISPID_INTERFACE_C_MASK	( 0xf000 )

#define	FSRM_DISPID_INTERFACE_D_MASK	( 0xf00 )

#define	FSRM_DISPID_INTERFACE_MASK	( ( ( ( FSRM_DISPID_INTERFACE_A_MASK | FSRM_DISPID_INTERFACE_B_MASK )  | FSRM_DISPID_INTERFACE_C_MASK )  | FSRM_DISPID_INTERFACE_D_MASK )  )

#define	FSRM_DISPID_IS_PROPERTY	( 0x80 )

#define	FSRM_DISPID_METHOD_NUM_MASK	( 0x7f )

#define	FSRM_DISPID_METHOD_MASK	( ( FSRM_DISPID_IS_PROPERTY | FSRM_DISPID_METHOD_NUM_MASK )  )

#define	FSRM_DISPID_FEATURE_GENERAL	( 0x1000000 )

#define	FSRM_DISPID_FEATURE_QUOTA	( 0x2000000 )

#define	FSRM_DISPID_FEATURE_FILESCREEN	( 0x3000000 )

#define	FSRM_DISPID_FEATURE_REPORTS	( 0x4000000 )

#define	FSRM_DISPID_OBJECT	( ( FSRM_DISPID_FEATURE_GENERAL | 0x100000 )  )

#define	FSRM_DISPID_COLLECTION	( ( FSRM_DISPID_FEATURE_GENERAL | 0x200000 )  )

#define	FSRM_DISPID_COLLECTION_MUTABLE	( ( FSRM_DISPID_COLLECTION | 0x10000 )  )

#define	FSRM_DISPID_COLLECTION_COMMITTABLE	( ( FSRM_DISPID_COLLECTION_MUTABLE | 0x1000 )  )

#define	FSRM_DISPID_ACTION	( ( FSRM_DISPID_FEATURE_GENERAL | 0x300000 )  )

#define	FSRM_DISPID_ACTION_EMAIL	( ( FSRM_DISPID_ACTION | 0x10000 )  )

#define	FSRM_DISPID_ACTION_REPORT	( ( FSRM_DISPID_ACTION | 0x20000 )  )

#define	FSRM_DISPID_ACTION_EVENTLOG	( ( FSRM_DISPID_ACTION | 0x30000 )  )

#define	FSRM_DISPID_ACTION_COMMAND	( ( FSRM_DISPID_ACTION | 0x40000 )  )

#define	FSRM_DISPID_SETTING	( ( FSRM_DISPID_FEATURE_GENERAL | 0x400000 )  )

#define	FSRM_DISPID_PATHMAPPER	( ( FSRM_DISPID_FEATURE_GENERAL | 0x500000 )  )

#define	FSRM_DISPID_EXPORTIMPORT	( ( FSRM_DISPID_FEATURE_GENERAL | 0x600000 )  )

#define	FSRM_DISPID_DERIVEDOBJECTSRESULT	( ( FSRM_DISPID_FEATURE_GENERAL | 0x700000 )  )



extern RPC_IF_HANDLE __MIDL_itf_fsrm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrm_0000_0000_v0_0_s_ifspec;

#ifndef __IFsrmObject_INTERFACE_DEFINED__
#define __IFsrmObject_INTERFACE_DEFINED__

/* interface IFsrmObject */
/* [unique][helpstring][nonextensible][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22bcef93-4a3f-4183-89f9-2f8b8a628aee")
    IFsrmObject : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ __RPC__in BSTR description) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmObject * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmObject * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmObject * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmObject * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmObject * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmObject * This);
        
        END_INTERFACE
    } IFsrmObjectVtbl;

    interface IFsrmObject
    {
        CONST_VTBL struct IFsrmObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmObject_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmObject_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmObject_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmObject_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFsrmObject_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmObject_INTERFACE_DEFINED__ */


#ifndef __IFsrmCollection_INTERFACE_DEFINED__
#define __IFsrmCollection_INTERFACE_DEFINED__

/* interface IFsrmCollection */
/* [unique][helpstring][nonextensible][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f76fbf3b-8ddd-4b42-b05a-cb1c3ff1fee8")
    IFsrmCollection : public IDispatch
    {
    public:
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **unknown) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long index,
            /* [retval][out] */ __RPC__out VARIANT *item) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *count) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ __RPC__out FsrmCollectionState *state) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WaitForCompletion( 
            /* [in] */ long waitSeconds,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *completed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ FSRM_OBJECT_ID id,
            /* [retval][out] */ __RPC__out VARIANT *entry) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IFsrmCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **unknown);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IFsrmCollection * This,
            /* [in] */ long index,
            /* [retval][out] */ __RPC__out VARIANT *item);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IFsrmCollection * This,
            /* [retval][out] */ __RPC__out long *count);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IFsrmCollection * This,
            /* [retval][out] */ __RPC__out FsrmCollectionState *state);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IFsrmCollection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )( 
            IFsrmCollection * This,
            /* [in] */ long waitSeconds,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *completed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IFsrmCollection * This,
            /* [in] */ FSRM_OBJECT_ID id,
            /* [retval][out] */ __RPC__out VARIANT *entry);
        
        END_INTERFACE
    } IFsrmCollectionVtbl;

    interface IFsrmCollection
    {
        CONST_VTBL struct IFsrmCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmCollection_get__NewEnum(This,unknown)	\
    ( (This)->lpVtbl -> get__NewEnum(This,unknown) ) 

#define IFsrmCollection_get_Item(This,index,item)	\
    ( (This)->lpVtbl -> get_Item(This,index,item) ) 

#define IFsrmCollection_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define IFsrmCollection_get_State(This,state)	\
    ( (This)->lpVtbl -> get_State(This,state) ) 

#define IFsrmCollection_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IFsrmCollection_WaitForCompletion(This,waitSeconds,completed)	\
    ( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) ) 

#define IFsrmCollection_GetById(This,id,entry)	\
    ( (This)->lpVtbl -> GetById(This,id,entry) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmCollection_INTERFACE_DEFINED__ */


#ifndef __IFsrmMutableCollection_INTERFACE_DEFINED__
#define __IFsrmMutableCollection_INTERFACE_DEFINED__

/* interface IFsrmMutableCollection */
/* [unique][helpstring][nonextensible][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmMutableCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1bb617b8-3886-49dc-af82-a6c90fa35dda")
    IFsrmMutableCollection : public IFsrmCollection
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveById( 
            /* [in] */ FSRM_OBJECT_ID id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **collection) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmMutableCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmMutableCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmMutableCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmMutableCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmMutableCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmMutableCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmMutableCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmMutableCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IFsrmMutableCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **unknown);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IFsrmMutableCollection * This,
            /* [in] */ long index,
            /* [retval][out] */ __RPC__out VARIANT *item);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IFsrmMutableCollection * This,
            /* [retval][out] */ __RPC__out long *count);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IFsrmMutableCollection * This,
            /* [retval][out] */ __RPC__out FsrmCollectionState *state);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IFsrmMutableCollection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )( 
            IFsrmMutableCollection * This,
            /* [in] */ long waitSeconds,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *completed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IFsrmMutableCollection * This,
            /* [in] */ FSRM_OBJECT_ID id,
            /* [retval][out] */ __RPC__out VARIANT *entry);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IFsrmMutableCollection * This,
            /* [in] */ VARIANT item);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IFsrmMutableCollection * This,
            /* [in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveById )( 
            IFsrmMutableCollection * This,
            /* [in] */ FSRM_OBJECT_ID id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IFsrmMutableCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **collection);
        
        END_INTERFACE
    } IFsrmMutableCollectionVtbl;

    interface IFsrmMutableCollection
    {
        CONST_VTBL struct IFsrmMutableCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmMutableCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmMutableCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmMutableCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmMutableCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmMutableCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmMutableCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmMutableCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmMutableCollection_get__NewEnum(This,unknown)	\
    ( (This)->lpVtbl -> get__NewEnum(This,unknown) ) 

#define IFsrmMutableCollection_get_Item(This,index,item)	\
    ( (This)->lpVtbl -> get_Item(This,index,item) ) 

#define IFsrmMutableCollection_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define IFsrmMutableCollection_get_State(This,state)	\
    ( (This)->lpVtbl -> get_State(This,state) ) 

#define IFsrmMutableCollection_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IFsrmMutableCollection_WaitForCompletion(This,waitSeconds,completed)	\
    ( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) ) 

#define IFsrmMutableCollection_GetById(This,id,entry)	\
    ( (This)->lpVtbl -> GetById(This,id,entry) ) 


#define IFsrmMutableCollection_Add(This,item)	\
    ( (This)->lpVtbl -> Add(This,item) ) 

#define IFsrmMutableCollection_Remove(This,index)	\
    ( (This)->lpVtbl -> Remove(This,index) ) 

#define IFsrmMutableCollection_RemoveById(This,id)	\
    ( (This)->lpVtbl -> RemoveById(This,id) ) 

#define IFsrmMutableCollection_Clone(This,collection)	\
    ( (This)->lpVtbl -> Clone(This,collection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmMutableCollection_INTERFACE_DEFINED__ */


#ifndef __IFsrmCommittableCollection_INTERFACE_DEFINED__
#define __IFsrmCommittableCollection_INTERFACE_DEFINED__

/* interface IFsrmCommittableCollection */
/* [unique][helpstring][nonextensible][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmCommittableCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96deb3b5-8b91-4a2a-9d93-80a35d8aa847")
    IFsrmCommittableCollection : public IFsrmMutableCollection
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Commit( 
            /* [in] */ FsrmCommitOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **results) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmCommittableCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmCommittableCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmCommittableCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmCommittableCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmCommittableCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmCommittableCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmCommittableCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmCommittableCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IFsrmCommittableCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **unknown);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IFsrmCommittableCollection * This,
            /* [in] */ long index,
            /* [retval][out] */ __RPC__out VARIANT *item);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IFsrmCommittableCollection * This,
            /* [retval][out] */ __RPC__out long *count);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IFsrmCommittableCollection * This,
            /* [retval][out] */ __RPC__out FsrmCollectionState *state);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IFsrmCommittableCollection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )( 
            IFsrmCommittableCollection * This,
            /* [in] */ long waitSeconds,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *completed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IFsrmCommittableCollection * This,
            /* [in] */ FSRM_OBJECT_ID id,
            /* [retval][out] */ __RPC__out VARIANT *entry);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IFsrmCommittableCollection * This,
            /* [in] */ VARIANT item);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IFsrmCommittableCollection * This,
            /* [in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveById )( 
            IFsrmCommittableCollection * This,
            /* [in] */ FSRM_OBJECT_ID id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IFsrmCommittableCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **collection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmCommittableCollection * This,
            /* [in] */ FsrmCommitOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **results);
        
        END_INTERFACE
    } IFsrmCommittableCollectionVtbl;

    interface IFsrmCommittableCollection
    {
        CONST_VTBL struct IFsrmCommittableCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmCommittableCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmCommittableCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmCommittableCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmCommittableCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmCommittableCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmCommittableCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmCommittableCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmCommittableCollection_get__NewEnum(This,unknown)	\
    ( (This)->lpVtbl -> get__NewEnum(This,unknown) ) 

#define IFsrmCommittableCollection_get_Item(This,index,item)	\
    ( (This)->lpVtbl -> get_Item(This,index,item) ) 

#define IFsrmCommittableCollection_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define IFsrmCommittableCollection_get_State(This,state)	\
    ( (This)->lpVtbl -> get_State(This,state) ) 

#define IFsrmCommittableCollection_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IFsrmCommittableCollection_WaitForCompletion(This,waitSeconds,completed)	\
    ( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) ) 

#define IFsrmCommittableCollection_GetById(This,id,entry)	\
    ( (This)->lpVtbl -> GetById(This,id,entry) ) 


#define IFsrmCommittableCollection_Add(This,item)	\
    ( (This)->lpVtbl -> Add(This,item) ) 

#define IFsrmCommittableCollection_Remove(This,index)	\
    ( (This)->lpVtbl -> Remove(This,index) ) 

#define IFsrmCommittableCollection_RemoveById(This,id)	\
    ( (This)->lpVtbl -> RemoveById(This,id) ) 

#define IFsrmCommittableCollection_Clone(This,collection)	\
    ( (This)->lpVtbl -> Clone(This,collection) ) 


#define IFsrmCommittableCollection_Commit(This,options,results)	\
    ( (This)->lpVtbl -> Commit(This,options,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmCommittableCollection_INTERFACE_DEFINED__ */


#ifndef __IFsrmAction_INTERFACE_DEFINED__
#define __IFsrmAction_INTERFACE_DEFINED__

/* interface IFsrmAction */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmAction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6cd6408a-ae60-463b-9ef1-e117534d69dc")
    IFsrmAction : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActionType( 
            /* [retval][out] */ __RPC__out FsrmActionType *actionType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RunLimitInterval( 
            /* [retval][out] */ __RPC__out long *minutes) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RunLimitInterval( 
            /* [in] */ long minutes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmActionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmAction * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmAction * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmAction * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmAction * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmAction * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmAction * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmAction * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmAction * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionType )( 
            IFsrmAction * This,
            /* [retval][out] */ __RPC__out FsrmActionType *actionType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )( 
            IFsrmAction * This,
            /* [retval][out] */ __RPC__out long *minutes);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )( 
            IFsrmAction * This,
            /* [in] */ long minutes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmAction * This);
        
        END_INTERFACE
    } IFsrmActionVtbl;

    interface IFsrmAction
    {
        CONST_VTBL struct IFsrmActionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmAction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmAction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmAction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmAction_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmAction_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmAction_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmAction_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmAction_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmAction_get_ActionType(This,actionType)	\
    ( (This)->lpVtbl -> get_ActionType(This,actionType) ) 

#define IFsrmAction_get_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) ) 

#define IFsrmAction_put_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) ) 

#define IFsrmAction_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmAction_INTERFACE_DEFINED__ */


#ifndef __IFsrmActionEmail_INTERFACE_DEFINED__
#define __IFsrmActionEmail_INTERFACE_DEFINED__

/* interface IFsrmActionEmail */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmActionEmail;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d646567d-26ae-4caa-9f84-4e0aad207fca")
    IFsrmActionEmail : public IFsrmAction
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MailFrom( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailFrom) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MailFrom( 
            /* [in] */ __RPC__in BSTR mailFrom) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MailReplyTo( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailReplyTo) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MailReplyTo( 
            /* [in] */ __RPC__in BSTR mailReplyTo) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MailTo( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailTo) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MailTo( 
            /* [in] */ __RPC__in BSTR mailTo) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MailCc( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailCc) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MailCc( 
            /* [in] */ __RPC__in BSTR mailCc) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MailBcc( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailBcc) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MailBcc( 
            /* [in] */ __RPC__in BSTR mailBcc) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MailSubject( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailSubject) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MailSubject( 
            /* [in] */ __RPC__in BSTR mailSubject) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageText( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *messageText) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageText( 
            /* [in] */ __RPC__in BSTR messageText) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmActionEmailVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmActionEmail * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmActionEmail * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmActionEmail * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmActionEmail * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmActionEmail * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmActionEmail * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmActionEmail * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionType )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__out FsrmActionType *actionType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__out long *minutes);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )( 
            IFsrmActionEmail * This,
            /* [in] */ long minutes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmActionEmail * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailFrom )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailFrom);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailFrom )( 
            IFsrmActionEmail * This,
            /* [in] */ __RPC__in BSTR mailFrom);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailReplyTo )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailReplyTo);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailReplyTo )( 
            IFsrmActionEmail * This,
            /* [in] */ __RPC__in BSTR mailReplyTo);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailTo )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailTo);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailTo )( 
            IFsrmActionEmail * This,
            /* [in] */ __RPC__in BSTR mailTo);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailCc )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailCc);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailCc )( 
            IFsrmActionEmail * This,
            /* [in] */ __RPC__in BSTR mailCc);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailBcc )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailBcc);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailBcc )( 
            IFsrmActionEmail * This,
            /* [in] */ __RPC__in BSTR mailBcc);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailSubject )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailSubject);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailSubject )( 
            IFsrmActionEmail * This,
            /* [in] */ __RPC__in BSTR mailSubject);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageText )( 
            IFsrmActionEmail * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *messageText);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageText )( 
            IFsrmActionEmail * This,
            /* [in] */ __RPC__in BSTR messageText);
        
        END_INTERFACE
    } IFsrmActionEmailVtbl;

    interface IFsrmActionEmail
    {
        CONST_VTBL struct IFsrmActionEmailVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmActionEmail_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmActionEmail_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmActionEmail_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmActionEmail_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmActionEmail_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmActionEmail_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmActionEmail_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmActionEmail_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmActionEmail_get_ActionType(This,actionType)	\
    ( (This)->lpVtbl -> get_ActionType(This,actionType) ) 

#define IFsrmActionEmail_get_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) ) 

#define IFsrmActionEmail_put_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) ) 

#define IFsrmActionEmail_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 


#define IFsrmActionEmail_get_MailFrom(This,mailFrom)	\
    ( (This)->lpVtbl -> get_MailFrom(This,mailFrom) ) 

#define IFsrmActionEmail_put_MailFrom(This,mailFrom)	\
    ( (This)->lpVtbl -> put_MailFrom(This,mailFrom) ) 

#define IFsrmActionEmail_get_MailReplyTo(This,mailReplyTo)	\
    ( (This)->lpVtbl -> get_MailReplyTo(This,mailReplyTo) ) 

#define IFsrmActionEmail_put_MailReplyTo(This,mailReplyTo)	\
    ( (This)->lpVtbl -> put_MailReplyTo(This,mailReplyTo) ) 

#define IFsrmActionEmail_get_MailTo(This,mailTo)	\
    ( (This)->lpVtbl -> get_MailTo(This,mailTo) ) 

#define IFsrmActionEmail_put_MailTo(This,mailTo)	\
    ( (This)->lpVtbl -> put_MailTo(This,mailTo) ) 

#define IFsrmActionEmail_get_MailCc(This,mailCc)	\
    ( (This)->lpVtbl -> get_MailCc(This,mailCc) ) 

#define IFsrmActionEmail_put_MailCc(This,mailCc)	\
    ( (This)->lpVtbl -> put_MailCc(This,mailCc) ) 

#define IFsrmActionEmail_get_MailBcc(This,mailBcc)	\
    ( (This)->lpVtbl -> get_MailBcc(This,mailBcc) ) 

#define IFsrmActionEmail_put_MailBcc(This,mailBcc)	\
    ( (This)->lpVtbl -> put_MailBcc(This,mailBcc) ) 

#define IFsrmActionEmail_get_MailSubject(This,mailSubject)	\
    ( (This)->lpVtbl -> get_MailSubject(This,mailSubject) ) 

#define IFsrmActionEmail_put_MailSubject(This,mailSubject)	\
    ( (This)->lpVtbl -> put_MailSubject(This,mailSubject) ) 

#define IFsrmActionEmail_get_MessageText(This,messageText)	\
    ( (This)->lpVtbl -> get_MessageText(This,messageText) ) 

#define IFsrmActionEmail_put_MessageText(This,messageText)	\
    ( (This)->lpVtbl -> put_MessageText(This,messageText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmActionEmail_INTERFACE_DEFINED__ */


#ifndef __IFsrmActionReport_INTERFACE_DEFINED__
#define __IFsrmActionReport_INTERFACE_DEFINED__

/* interface IFsrmActionReport */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmActionReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2dbe63c4-b340-48a0-a5b0-158e07fc567e")
    IFsrmActionReport : public IFsrmAction
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReportTypes( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *reportTypes) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReportTypes( 
            /* [in] */ __RPC__in SAFEARRAY * reportTypes) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MailTo( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailTo) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MailTo( 
            /* [in] */ __RPC__in BSTR mailTo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmActionReportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmActionReport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmActionReport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmActionReport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmActionReport * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmActionReport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmActionReport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmActionReport * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmActionReport * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionType )( 
            IFsrmActionReport * This,
            /* [retval][out] */ __RPC__out FsrmActionType *actionType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )( 
            IFsrmActionReport * This,
            /* [retval][out] */ __RPC__out long *minutes);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )( 
            IFsrmActionReport * This,
            /* [in] */ long minutes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmActionReport * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReportTypes )( 
            IFsrmActionReport * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *reportTypes);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReportTypes )( 
            IFsrmActionReport * This,
            /* [in] */ __RPC__in SAFEARRAY * reportTypes);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailTo )( 
            IFsrmActionReport * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailTo);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailTo )( 
            IFsrmActionReport * This,
            /* [in] */ __RPC__in BSTR mailTo);
        
        END_INTERFACE
    } IFsrmActionReportVtbl;

    interface IFsrmActionReport
    {
        CONST_VTBL struct IFsrmActionReportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmActionReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmActionReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmActionReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmActionReport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmActionReport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmActionReport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmActionReport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmActionReport_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmActionReport_get_ActionType(This,actionType)	\
    ( (This)->lpVtbl -> get_ActionType(This,actionType) ) 

#define IFsrmActionReport_get_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) ) 

#define IFsrmActionReport_put_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) ) 

#define IFsrmActionReport_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 


#define IFsrmActionReport_get_ReportTypes(This,reportTypes)	\
    ( (This)->lpVtbl -> get_ReportTypes(This,reportTypes) ) 

#define IFsrmActionReport_put_ReportTypes(This,reportTypes)	\
    ( (This)->lpVtbl -> put_ReportTypes(This,reportTypes) ) 

#define IFsrmActionReport_get_MailTo(This,mailTo)	\
    ( (This)->lpVtbl -> get_MailTo(This,mailTo) ) 

#define IFsrmActionReport_put_MailTo(This,mailTo)	\
    ( (This)->lpVtbl -> put_MailTo(This,mailTo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmActionReport_INTERFACE_DEFINED__ */


#ifndef __IFsrmActionEventLog_INTERFACE_DEFINED__
#define __IFsrmActionEventLog_INTERFACE_DEFINED__

/* interface IFsrmActionEventLog */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmActionEventLog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4c8f96c3-5d94-4f37-a4f4-f56ab463546f")
    IFsrmActionEventLog : public IFsrmAction
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EventType( 
            /* [retval][out] */ __RPC__out FsrmEventType *eventType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EventType( 
            /* [in] */ FsrmEventType eventType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MessageText( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *messageText) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MessageText( 
            /* [in] */ __RPC__in BSTR messageText) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmActionEventLogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmActionEventLog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmActionEventLog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmActionEventLog * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmActionEventLog * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmActionEventLog * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmActionEventLog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmActionEventLog * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmActionEventLog * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionType )( 
            IFsrmActionEventLog * This,
            /* [retval][out] */ __RPC__out FsrmActionType *actionType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )( 
            IFsrmActionEventLog * This,
            /* [retval][out] */ __RPC__out long *minutes);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )( 
            IFsrmActionEventLog * This,
            /* [in] */ long minutes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmActionEventLog * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EventType )( 
            IFsrmActionEventLog * This,
            /* [retval][out] */ __RPC__out FsrmEventType *eventType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EventType )( 
            IFsrmActionEventLog * This,
            /* [in] */ FsrmEventType eventType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MessageText )( 
            IFsrmActionEventLog * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *messageText);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MessageText )( 
            IFsrmActionEventLog * This,
            /* [in] */ __RPC__in BSTR messageText);
        
        END_INTERFACE
    } IFsrmActionEventLogVtbl;

    interface IFsrmActionEventLog
    {
        CONST_VTBL struct IFsrmActionEventLogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmActionEventLog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmActionEventLog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmActionEventLog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmActionEventLog_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmActionEventLog_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmActionEventLog_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmActionEventLog_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmActionEventLog_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmActionEventLog_get_ActionType(This,actionType)	\
    ( (This)->lpVtbl -> get_ActionType(This,actionType) ) 

#define IFsrmActionEventLog_get_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) ) 

#define IFsrmActionEventLog_put_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) ) 

#define IFsrmActionEventLog_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 


#define IFsrmActionEventLog_get_EventType(This,eventType)	\
    ( (This)->lpVtbl -> get_EventType(This,eventType) ) 

#define IFsrmActionEventLog_put_EventType(This,eventType)	\
    ( (This)->lpVtbl -> put_EventType(This,eventType) ) 

#define IFsrmActionEventLog_get_MessageText(This,messageText)	\
    ( (This)->lpVtbl -> get_MessageText(This,messageText) ) 

#define IFsrmActionEventLog_put_MessageText(This,messageText)	\
    ( (This)->lpVtbl -> put_MessageText(This,messageText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmActionEventLog_INTERFACE_DEFINED__ */


#ifndef __IFsrmActionCommand_INTERFACE_DEFINED__
#define __IFsrmActionCommand_INTERFACE_DEFINED__

/* interface IFsrmActionCommand */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmActionCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12937789-e247-4917-9c20-f3ee9c7ee783")
    IFsrmActionCommand : public IFsrmAction
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExecutablePath( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *executablePath) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExecutablePath( 
            /* [in] */ __RPC__in BSTR executablePath) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Arguments( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *arguments) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Arguments( 
            /* [in] */ __RPC__in BSTR arguments) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Account( 
            /* [retval][out] */ __RPC__out FsrmAccountType *account) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Account( 
            /* [in] */ FsrmAccountType account) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkingDirectory( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *workingDirectory) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WorkingDirectory( 
            /* [in] */ __RPC__in BSTR workingDirectory) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MonitorCommand( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *monitorCommand) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MonitorCommand( 
            /* [in] */ VARIANT_BOOL monitorCommand) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KillTimeOut( 
            /* [retval][out] */ __RPC__out long *minutes) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_KillTimeOut( 
            /* [in] */ long minutes) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LogResult( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *logResults) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogResult( 
            /* [in] */ VARIANT_BOOL logResults) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmActionCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmActionCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmActionCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmActionCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmActionCommand * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmActionCommand * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmActionCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmActionCommand * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionType )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__out FsrmActionType *actionType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__out long *minutes);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )( 
            IFsrmActionCommand * This,
            /* [in] */ long minutes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmActionCommand * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExecutablePath )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *executablePath);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExecutablePath )( 
            IFsrmActionCommand * This,
            /* [in] */ __RPC__in BSTR executablePath);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arguments )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *arguments);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Arguments )( 
            IFsrmActionCommand * This,
            /* [in] */ __RPC__in BSTR arguments);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Account )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__out FsrmAccountType *account);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Account )( 
            IFsrmActionCommand * This,
            /* [in] */ FsrmAccountType account);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *workingDirectory);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )( 
            IFsrmActionCommand * This,
            /* [in] */ __RPC__in BSTR workingDirectory);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MonitorCommand )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *monitorCommand);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MonitorCommand )( 
            IFsrmActionCommand * This,
            /* [in] */ VARIANT_BOOL monitorCommand);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KillTimeOut )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__out long *minutes);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KillTimeOut )( 
            IFsrmActionCommand * This,
            /* [in] */ long minutes);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogResult )( 
            IFsrmActionCommand * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *logResults);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogResult )( 
            IFsrmActionCommand * This,
            /* [in] */ VARIANT_BOOL logResults);
        
        END_INTERFACE
    } IFsrmActionCommandVtbl;

    interface IFsrmActionCommand
    {
        CONST_VTBL struct IFsrmActionCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmActionCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmActionCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmActionCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmActionCommand_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmActionCommand_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmActionCommand_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmActionCommand_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmActionCommand_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmActionCommand_get_ActionType(This,actionType)	\
    ( (This)->lpVtbl -> get_ActionType(This,actionType) ) 

#define IFsrmActionCommand_get_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) ) 

#define IFsrmActionCommand_put_RunLimitInterval(This,minutes)	\
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) ) 

#define IFsrmActionCommand_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 


#define IFsrmActionCommand_get_ExecutablePath(This,executablePath)	\
    ( (This)->lpVtbl -> get_ExecutablePath(This,executablePath) ) 

#define IFsrmActionCommand_put_ExecutablePath(This,executablePath)	\
    ( (This)->lpVtbl -> put_ExecutablePath(This,executablePath) ) 

#define IFsrmActionCommand_get_Arguments(This,arguments)	\
    ( (This)->lpVtbl -> get_Arguments(This,arguments) ) 

#define IFsrmActionCommand_put_Arguments(This,arguments)	\
    ( (This)->lpVtbl -> put_Arguments(This,arguments) ) 

#define IFsrmActionCommand_get_Account(This,account)	\
    ( (This)->lpVtbl -> get_Account(This,account) ) 

#define IFsrmActionCommand_put_Account(This,account)	\
    ( (This)->lpVtbl -> put_Account(This,account) ) 

#define IFsrmActionCommand_get_WorkingDirectory(This,workingDirectory)	\
    ( (This)->lpVtbl -> get_WorkingDirectory(This,workingDirectory) ) 

#define IFsrmActionCommand_put_WorkingDirectory(This,workingDirectory)	\
    ( (This)->lpVtbl -> put_WorkingDirectory(This,workingDirectory) ) 

#define IFsrmActionCommand_get_MonitorCommand(This,monitorCommand)	\
    ( (This)->lpVtbl -> get_MonitorCommand(This,monitorCommand) ) 

#define IFsrmActionCommand_put_MonitorCommand(This,monitorCommand)	\
    ( (This)->lpVtbl -> put_MonitorCommand(This,monitorCommand) ) 

#define IFsrmActionCommand_get_KillTimeOut(This,minutes)	\
    ( (This)->lpVtbl -> get_KillTimeOut(This,minutes) ) 

#define IFsrmActionCommand_put_KillTimeOut(This,minutes)	\
    ( (This)->lpVtbl -> put_KillTimeOut(This,minutes) ) 

#define IFsrmActionCommand_get_LogResult(This,logResults)	\
    ( (This)->lpVtbl -> get_LogResult(This,logResults) ) 

#define IFsrmActionCommand_put_LogResult(This,logResults)	\
    ( (This)->lpVtbl -> put_LogResult(This,logResults) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmActionCommand_INTERFACE_DEFINED__ */


#ifndef __IFsrmSetting_INTERFACE_DEFINED__
#define __IFsrmSetting_INTERFACE_DEFINED__

/* interface IFsrmSetting */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmSetting;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f411d4fd-14be-4260-8c40-03b7c95e608a")
    IFsrmSetting : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmtpServer( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *smtpServer) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmtpServer( 
            /* [in] */ __RPC__in BSTR smtpServer) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MailFrom( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailFrom) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MailFrom( 
            /* [in] */ __RPC__in BSTR mailFrom) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AdminEmail( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *adminEmail) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AdminEmail( 
            /* [in] */ __RPC__in BSTR adminEmail) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisableCommandLine( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *disableCommandLine) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisableCommandLine( 
            /* [in] */ VARIANT_BOOL disableCommandLine) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableScreeningAudit( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *enableScreeningAudit) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableScreeningAudit( 
            /* [in] */ VARIANT_BOOL enableScreeningAudit) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EmailTest( 
            /* [in] */ __RPC__in BSTR mailTo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetActionRunLimitInterval( 
            /* [in] */ FsrmActionType actionType,
            /* [in] */ long delayTimeMinutes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetActionRunLimitInterval( 
            /* [in] */ FsrmActionType actionType,
            /* [retval][out] */ __RPC__out long *delayTimeMinutes) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmSettingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmSetting * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmSetting * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmSetting * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmSetting * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmSetting * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmSetting * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmSetting * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmtpServer )( 
            IFsrmSetting * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *smtpServer);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmtpServer )( 
            IFsrmSetting * This,
            /* [in] */ __RPC__in BSTR smtpServer);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailFrom )( 
            IFsrmSetting * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailFrom);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailFrom )( 
            IFsrmSetting * This,
            /* [in] */ __RPC__in BSTR mailFrom);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdminEmail )( 
            IFsrmSetting * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *adminEmail);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AdminEmail )( 
            IFsrmSetting * This,
            /* [in] */ __RPC__in BSTR adminEmail);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCommandLine )( 
            IFsrmSetting * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *disableCommandLine);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCommandLine )( 
            IFsrmSetting * This,
            /* [in] */ VARIANT_BOOL disableCommandLine);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableScreeningAudit )( 
            IFsrmSetting * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *enableScreeningAudit);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableScreeningAudit )( 
            IFsrmSetting * This,
            /* [in] */ VARIANT_BOOL enableScreeningAudit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EmailTest )( 
            IFsrmSetting * This,
            /* [in] */ __RPC__in BSTR mailTo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetActionRunLimitInterval )( 
            IFsrmSetting * This,
            /* [in] */ FsrmActionType actionType,
            /* [in] */ long delayTimeMinutes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActionRunLimitInterval )( 
            IFsrmSetting * This,
            /* [in] */ FsrmActionType actionType,
            /* [retval][out] */ __RPC__out long *delayTimeMinutes);
        
        END_INTERFACE
    } IFsrmSettingVtbl;

    interface IFsrmSetting
    {
        CONST_VTBL struct IFsrmSettingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmSetting_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmSetting_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmSetting_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmSetting_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmSetting_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmSetting_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmSetting_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmSetting_get_SmtpServer(This,smtpServer)	\
    ( (This)->lpVtbl -> get_SmtpServer(This,smtpServer) ) 

#define IFsrmSetting_put_SmtpServer(This,smtpServer)	\
    ( (This)->lpVtbl -> put_SmtpServer(This,smtpServer) ) 

#define IFsrmSetting_get_MailFrom(This,mailFrom)	\
    ( (This)->lpVtbl -> get_MailFrom(This,mailFrom) ) 

#define IFsrmSetting_put_MailFrom(This,mailFrom)	\
    ( (This)->lpVtbl -> put_MailFrom(This,mailFrom) ) 

#define IFsrmSetting_get_AdminEmail(This,adminEmail)	\
    ( (This)->lpVtbl -> get_AdminEmail(This,adminEmail) ) 

#define IFsrmSetting_put_AdminEmail(This,adminEmail)	\
    ( (This)->lpVtbl -> put_AdminEmail(This,adminEmail) ) 

#define IFsrmSetting_get_DisableCommandLine(This,disableCommandLine)	\
    ( (This)->lpVtbl -> get_DisableCommandLine(This,disableCommandLine) ) 

#define IFsrmSetting_put_DisableCommandLine(This,disableCommandLine)	\
    ( (This)->lpVtbl -> put_DisableCommandLine(This,disableCommandLine) ) 

#define IFsrmSetting_get_EnableScreeningAudit(This,enableScreeningAudit)	\
    ( (This)->lpVtbl -> get_EnableScreeningAudit(This,enableScreeningAudit) ) 

#define IFsrmSetting_put_EnableScreeningAudit(This,enableScreeningAudit)	\
    ( (This)->lpVtbl -> put_EnableScreeningAudit(This,enableScreeningAudit) ) 

#define IFsrmSetting_EmailTest(This,mailTo)	\
    ( (This)->lpVtbl -> EmailTest(This,mailTo) ) 

#define IFsrmSetting_SetActionRunLimitInterval(This,actionType,delayTimeMinutes)	\
    ( (This)->lpVtbl -> SetActionRunLimitInterval(This,actionType,delayTimeMinutes) ) 

#define IFsrmSetting_GetActionRunLimitInterval(This,actionType,delayTimeMinutes)	\
    ( (This)->lpVtbl -> GetActionRunLimitInterval(This,actionType,delayTimeMinutes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmSetting_INTERFACE_DEFINED__ */


#ifndef __IFsrmPathMapper_INTERFACE_DEFINED__
#define __IFsrmPathMapper_INTERFACE_DEFINED__

/* interface IFsrmPathMapper */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmPathMapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6f4dbfff-6920-4821-a6c3-b7e94c1fd60c")
    IFsrmPathMapper : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSharePathsForLocalPath( 
            /* [in] */ __RPC__in BSTR localPath,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *sharePaths) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmPathMapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmPathMapper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmPathMapper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmPathMapper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmPathMapper * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmPathMapper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmPathMapper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmPathMapper * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSharePathsForLocalPath )( 
            IFsrmPathMapper * This,
            /* [in] */ __RPC__in BSTR localPath,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *sharePaths);
        
        END_INTERFACE
    } IFsrmPathMapperVtbl;

    interface IFsrmPathMapper
    {
        CONST_VTBL struct IFsrmPathMapperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmPathMapper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmPathMapper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmPathMapper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmPathMapper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmPathMapper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmPathMapper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmPathMapper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmPathMapper_GetSharePathsForLocalPath(This,localPath,sharePaths)	\
    ( (This)->lpVtbl -> GetSharePathsForLocalPath(This,localPath,sharePaths) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmPathMapper_INTERFACE_DEFINED__ */


#ifndef __IFsrmExportImport_INTERFACE_DEFINED__
#define __IFsrmExportImport_INTERFACE_DEFINED__

/* interface IFsrmExportImport */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmExportImport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("efcb0ab1-16c4-4a79-812c-725614c3306b")
    IFsrmExportImport : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportFileGroups( 
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileGroupNamesSafeArray = 0,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFileGroups( 
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileGroupNamesSafeArray,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileGroups) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportFileScreenTemplates( 
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *templateNamesSafeArray = 0,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFileScreenTemplates( 
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *templateNamesSafeArray,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **templates) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportQuotaTemplates( 
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *templateNamesSafeArray = 0,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportQuotaTemplates( 
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *templateNamesSafeArray,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **templates) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmExportImportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmExportImport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmExportImport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmExportImport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmExportImport * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmExportImport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmExportImport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmExportImport * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportFileGroups )( 
            IFsrmExportImport * This,
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileGroupNamesSafeArray,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportFileGroups )( 
            IFsrmExportImport * This,
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileGroupNamesSafeArray,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileGroups);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportFileScreenTemplates )( 
            IFsrmExportImport * This,
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *templateNamesSafeArray,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportFileScreenTemplates )( 
            IFsrmExportImport * This,
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *templateNamesSafeArray,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **templates);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportQuotaTemplates )( 
            IFsrmExportImport * This,
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *templateNamesSafeArray,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportQuotaTemplates )( 
            IFsrmExportImport * This,
            /* [in] */ __RPC__in BSTR filePath,
            /* [defaultvalue][in] */ __RPC__in VARIANT *templateNamesSafeArray,
            /* [defaultvalue][in] */ __RPC__in BSTR remoteHost,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **templates);
        
        END_INTERFACE
    } IFsrmExportImportVtbl;

    interface IFsrmExportImport
    {
        CONST_VTBL struct IFsrmExportImportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmExportImport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmExportImport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmExportImport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmExportImport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmExportImport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmExportImport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmExportImport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmExportImport_ExportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost)	\
    ( (This)->lpVtbl -> ExportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost) ) 

#define IFsrmExportImport_ImportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost,fileGroups)	\
    ( (This)->lpVtbl -> ImportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost,fileGroups) ) 

#define IFsrmExportImport_ExportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost)	\
    ( (This)->lpVtbl -> ExportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost) ) 

#define IFsrmExportImport_ImportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates)	\
    ( (This)->lpVtbl -> ImportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates) ) 

#define IFsrmExportImport_ExportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost)	\
    ( (This)->lpVtbl -> ExportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost) ) 

#define IFsrmExportImport_ImportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates)	\
    ( (This)->lpVtbl -> ImportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmExportImport_INTERFACE_DEFINED__ */


#ifndef __IFsrmDerivedObjectsResult_INTERFACE_DEFINED__
#define __IFsrmDerivedObjectsResult_INTERFACE_DEFINED__

/* interface IFsrmDerivedObjectsResult */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmDerivedObjectsResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("39322a2d-38ee-4d0d-8095-421a80849a82")
    IFsrmDerivedObjectsResult : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DerivedObjects( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **derivedObjects) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Results( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **results) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmDerivedObjectsResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmDerivedObjectsResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmDerivedObjectsResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmDerivedObjectsResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmDerivedObjectsResult * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmDerivedObjectsResult * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmDerivedObjectsResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmDerivedObjectsResult * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedObjects )( 
            IFsrmDerivedObjectsResult * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **derivedObjects);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Results )( 
            IFsrmDerivedObjectsResult * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **results);
        
        END_INTERFACE
    } IFsrmDerivedObjectsResultVtbl;

    interface IFsrmDerivedObjectsResult
    {
        CONST_VTBL struct IFsrmDerivedObjectsResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmDerivedObjectsResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmDerivedObjectsResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmDerivedObjectsResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmDerivedObjectsResult_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmDerivedObjectsResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmDerivedObjectsResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmDerivedObjectsResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmDerivedObjectsResult_get_DerivedObjects(This,derivedObjects)	\
    ( (This)->lpVtbl -> get_DerivedObjects(This,derivedObjects) ) 

#define IFsrmDerivedObjectsResult_get_Results(This,results)	\
    ( (This)->lpVtbl -> get_Results(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmDerivedObjectsResult_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



