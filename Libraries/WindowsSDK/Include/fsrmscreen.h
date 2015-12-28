

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for fsrmscreen.idl:
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

#ifndef __fsrmscreen_h__
#define __fsrmscreen_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFsrmFileGroup_FWD_DEFINED__
#define __IFsrmFileGroup_FWD_DEFINED__
typedef interface IFsrmFileGroup IFsrmFileGroup;
#endif 	/* __IFsrmFileGroup_FWD_DEFINED__ */


#ifndef __IFsrmFileGroupImported_FWD_DEFINED__
#define __IFsrmFileGroupImported_FWD_DEFINED__
typedef interface IFsrmFileGroupImported IFsrmFileGroupImported;
#endif 	/* __IFsrmFileGroupImported_FWD_DEFINED__ */


#ifndef __IFsrmFileGroupManager_FWD_DEFINED__
#define __IFsrmFileGroupManager_FWD_DEFINED__
typedef interface IFsrmFileGroupManager IFsrmFileGroupManager;
#endif 	/* __IFsrmFileGroupManager_FWD_DEFINED__ */


#ifndef __IFsrmFileScreenBase_FWD_DEFINED__
#define __IFsrmFileScreenBase_FWD_DEFINED__
typedef interface IFsrmFileScreenBase IFsrmFileScreenBase;
#endif 	/* __IFsrmFileScreenBase_FWD_DEFINED__ */


#ifndef __IFsrmFileScreen_FWD_DEFINED__
#define __IFsrmFileScreen_FWD_DEFINED__
typedef interface IFsrmFileScreen IFsrmFileScreen;
#endif 	/* __IFsrmFileScreen_FWD_DEFINED__ */


#ifndef __IFsrmFileScreenException_FWD_DEFINED__
#define __IFsrmFileScreenException_FWD_DEFINED__
typedef interface IFsrmFileScreenException IFsrmFileScreenException;
#endif 	/* __IFsrmFileScreenException_FWD_DEFINED__ */


#ifndef __IFsrmFileScreenManager_FWD_DEFINED__
#define __IFsrmFileScreenManager_FWD_DEFINED__
typedef interface IFsrmFileScreenManager IFsrmFileScreenManager;
#endif 	/* __IFsrmFileScreenManager_FWD_DEFINED__ */


#ifndef __IFsrmFileScreenTemplate_FWD_DEFINED__
#define __IFsrmFileScreenTemplate_FWD_DEFINED__
typedef interface IFsrmFileScreenTemplate IFsrmFileScreenTemplate;
#endif 	/* __IFsrmFileScreenTemplate_FWD_DEFINED__ */


#ifndef __IFsrmFileScreenTemplateImported_FWD_DEFINED__
#define __IFsrmFileScreenTemplateImported_FWD_DEFINED__
typedef interface IFsrmFileScreenTemplateImported IFsrmFileScreenTemplateImported;
#endif 	/* __IFsrmFileScreenTemplateImported_FWD_DEFINED__ */


#ifndef __IFsrmFileScreenTemplateManager_FWD_DEFINED__
#define __IFsrmFileScreenTemplateManager_FWD_DEFINED__
typedef interface IFsrmFileScreenTemplateManager IFsrmFileScreenTemplateManager;
#endif 	/* __IFsrmFileScreenTemplateManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "fsrmenums.h"
#include "fsrm.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_fsrmscreen_0000_0000 */
/* [local] */ 











#define	FSRM_DISPID_FILEGROUP	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x100000 )  )

#define	FSRM_DISPID_FILEGROUP_IMPORTED	( ( FSRM_DISPID_FILEGROUP | 0x10000 )  )

#define	FSRM_DISPID_FILEGROUP_MANAGER	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x200000 )  )

#define	FSRM_DISPID_FILESCREEN_BASE	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x300000 )  )

#define	FSRM_DISPID_FILESCREEN	( ( FSRM_DISPID_FILESCREEN_BASE | 0x10000 )  )

#define	FSRM_DISPID_FILESCREEN_TEMPLATE	( ( FSRM_DISPID_FILESCREEN_BASE | 0x20000 )  )

#define	FSRM_DISPID_FILESCREEN_TEMPLATE_IMPORTED	( ( FSRM_DISPID_FILESCREEN_TEMPLATE | 0x1000 )  )

#define	FSRM_DISPID_FILESCREEN_EXCEPTION	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x400000 )  )

#define	FSRM_DISPID_FILESCREEN_MANAGER	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x500000 )  )

#define	FSRM_DISPID_FILESCREEN_TEMPLATE_MANAGER	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x600000 )  )



extern RPC_IF_HANDLE __MIDL_itf_fsrmscreen_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmscreen_0000_0000_v0_0_s_ifspec;

#ifndef __IFsrmFileGroup_INTERFACE_DEFINED__
#define __IFsrmFileGroup_INTERFACE_DEFINED__

/* interface IFsrmFileGroup */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8dd04909-0e34-4d55-afaa-89e1f1a1bbb9")
    IFsrmFileGroup : public IFsrmObject
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Members( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **members) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Members( 
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *members) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NonMembers( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **nonMembers) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NonMembers( 
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *nonMembers) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileGroup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileGroup * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileGroup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileGroup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileGroup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmFileGroup * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmFileGroup * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmFileGroup * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmFileGroup * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmFileGroup * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFsrmFileGroup * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IFsrmFileGroup * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Members )( 
            IFsrmFileGroup * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **members);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Members )( 
            IFsrmFileGroup * This,
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *members);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NonMembers )( 
            IFsrmFileGroup * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **nonMembers);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NonMembers )( 
            IFsrmFileGroup * This,
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *nonMembers);
        
        END_INTERFACE
    } IFsrmFileGroupVtbl;

    interface IFsrmFileGroup
    {
        CONST_VTBL struct IFsrmFileGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileGroup_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileGroup_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmFileGroup_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmFileGroup_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmFileGroup_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFsrmFileGroup_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 


#define IFsrmFileGroup_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define IFsrmFileGroup_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IFsrmFileGroup_get_Members(This,members)	\
    ( (This)->lpVtbl -> get_Members(This,members) ) 

#define IFsrmFileGroup_put_Members(This,members)	\
    ( (This)->lpVtbl -> put_Members(This,members) ) 

#define IFsrmFileGroup_get_NonMembers(This,nonMembers)	\
    ( (This)->lpVtbl -> get_NonMembers(This,nonMembers) ) 

#define IFsrmFileGroup_put_NonMembers(This,nonMembers)	\
    ( (This)->lpVtbl -> put_NonMembers(This,nonMembers) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileGroup_INTERFACE_DEFINED__ */


#ifndef __IFsrmFileGroupImported_INTERFACE_DEFINED__
#define __IFsrmFileGroupImported_INTERFACE_DEFINED__

/* interface IFsrmFileGroupImported */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileGroupImported;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ad55f10b-5f11-4be7-94ef-d9ee2e470ded")
    IFsrmFileGroupImported : public IFsrmFileGroup
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverwriteOnCommit( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *overwrite) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverwriteOnCommit( 
            /* [in] */ VARIANT_BOOL overwrite) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileGroupImportedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileGroupImported * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileGroupImported * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileGroupImported * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileGroupImported * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileGroupImported * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileGroupImported * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileGroupImported * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmFileGroupImported * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmFileGroupImported * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmFileGroupImported * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmFileGroupImported * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmFileGroupImported * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFsrmFileGroupImported * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IFsrmFileGroupImported * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Members )( 
            IFsrmFileGroupImported * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **members);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Members )( 
            IFsrmFileGroupImported * This,
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *members);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NonMembers )( 
            IFsrmFileGroupImported * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **nonMembers);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NonMembers )( 
            IFsrmFileGroupImported * This,
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *nonMembers);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverwriteOnCommit )( 
            IFsrmFileGroupImported * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *overwrite);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverwriteOnCommit )( 
            IFsrmFileGroupImported * This,
            /* [in] */ VARIANT_BOOL overwrite);
        
        END_INTERFACE
    } IFsrmFileGroupImportedVtbl;

    interface IFsrmFileGroupImported
    {
        CONST_VTBL struct IFsrmFileGroupImportedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileGroupImported_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileGroupImported_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileGroupImported_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileGroupImported_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileGroupImported_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileGroupImported_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileGroupImported_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileGroupImported_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmFileGroupImported_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmFileGroupImported_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmFileGroupImported_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFsrmFileGroupImported_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 


#define IFsrmFileGroupImported_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define IFsrmFileGroupImported_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IFsrmFileGroupImported_get_Members(This,members)	\
    ( (This)->lpVtbl -> get_Members(This,members) ) 

#define IFsrmFileGroupImported_put_Members(This,members)	\
    ( (This)->lpVtbl -> put_Members(This,members) ) 

#define IFsrmFileGroupImported_get_NonMembers(This,nonMembers)	\
    ( (This)->lpVtbl -> get_NonMembers(This,nonMembers) ) 

#define IFsrmFileGroupImported_put_NonMembers(This,nonMembers)	\
    ( (This)->lpVtbl -> put_NonMembers(This,nonMembers) ) 


#define IFsrmFileGroupImported_get_OverwriteOnCommit(This,overwrite)	\
    ( (This)->lpVtbl -> get_OverwriteOnCommit(This,overwrite) ) 

#define IFsrmFileGroupImported_put_OverwriteOnCommit(This,overwrite)	\
    ( (This)->lpVtbl -> put_OverwriteOnCommit(This,overwrite) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileGroupImported_INTERFACE_DEFINED__ */


#ifndef __IFsrmFileGroupManager_INTERFACE_DEFINED__
#define __IFsrmFileGroupManager_INTERFACE_DEFINED__

/* interface IFsrmFileGroupManager */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileGroupManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("426677d5-018c-485c-8a51-20b86d00bdc4")
    IFsrmFileGroupManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFileGroup( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileGroup **fileGroup) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFileGroup( 
            /* [in] */ __RPC__in BSTR name,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileGroup **fileGroup) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumFileGroups( 
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileGroups) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportFileGroups( 
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileGroupNamesArray,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *serializedFileGroups) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportFileGroups( 
            /* [in] */ __RPC__in BSTR serializedFileGroups,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileGroupNamesArray,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileGroups) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileGroupManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileGroupManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileGroupManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileGroupManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileGroupManager * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileGroupManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileGroupManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileGroupManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateFileGroup )( 
            IFsrmFileGroupManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileGroup **fileGroup);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileGroup )( 
            IFsrmFileGroupManager * This,
            /* [in] */ __RPC__in BSTR name,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileGroup **fileGroup);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumFileGroups )( 
            IFsrmFileGroupManager * This,
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileGroups);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportFileGroups )( 
            IFsrmFileGroupManager * This,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileGroupNamesArray,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *serializedFileGroups);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportFileGroups )( 
            IFsrmFileGroupManager * This,
            /* [in] */ __RPC__in BSTR serializedFileGroups,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileGroupNamesArray,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileGroups);
        
        END_INTERFACE
    } IFsrmFileGroupManagerVtbl;

    interface IFsrmFileGroupManager
    {
        CONST_VTBL struct IFsrmFileGroupManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileGroupManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileGroupManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileGroupManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileGroupManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileGroupManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileGroupManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileGroupManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileGroupManager_CreateFileGroup(This,fileGroup)	\
    ( (This)->lpVtbl -> CreateFileGroup(This,fileGroup) ) 

#define IFsrmFileGroupManager_GetFileGroup(This,name,fileGroup)	\
    ( (This)->lpVtbl -> GetFileGroup(This,name,fileGroup) ) 

#define IFsrmFileGroupManager_EnumFileGroups(This,options,fileGroups)	\
    ( (This)->lpVtbl -> EnumFileGroups(This,options,fileGroups) ) 

#define IFsrmFileGroupManager_ExportFileGroups(This,fileGroupNamesArray,serializedFileGroups)	\
    ( (This)->lpVtbl -> ExportFileGroups(This,fileGroupNamesArray,serializedFileGroups) ) 

#define IFsrmFileGroupManager_ImportFileGroups(This,serializedFileGroups,fileGroupNamesArray,fileGroups)	\
    ( (This)->lpVtbl -> ImportFileGroups(This,serializedFileGroups,fileGroupNamesArray,fileGroups) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileGroupManager_INTERFACE_DEFINED__ */


#ifndef __IFsrmFileScreenBase_INTERFACE_DEFINED__
#define __IFsrmFileScreenBase_INTERFACE_DEFINED__

/* interface IFsrmFileScreenBase */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileScreenBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f3637e80-5b22-4a2b-a637-bbb642b41cfc")
    IFsrmFileScreenBase : public IFsrmObject
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlockedFileGroups( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **blockList) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlockedFileGroups( 
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *blockList) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FileScreenFlags( 
            /* [retval][out] */ __RPC__out long *fileScreenFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FileScreenFlags( 
            /* [in] */ long fileScreenFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateAction( 
            /* [in] */ FsrmActionType actionType,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmAction **action) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumActions( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **actions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileScreenBaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileScreenBase * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileScreenBase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileScreenBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileScreenBase * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileScreenBase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileScreenBase * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileScreenBase * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmFileScreenBase * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmFileScreenBase * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmFileScreenBase * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmFileScreenBase * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmFileScreenBase * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlockedFileGroups )( 
            IFsrmFileScreenBase * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **blockList);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlockedFileGroups )( 
            IFsrmFileScreenBase * This,
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *blockList);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileScreenFlags )( 
            IFsrmFileScreenBase * This,
            /* [retval][out] */ __RPC__out long *fileScreenFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FileScreenFlags )( 
            IFsrmFileScreenBase * This,
            /* [in] */ long fileScreenFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateAction )( 
            IFsrmFileScreenBase * This,
            /* [in] */ FsrmActionType actionType,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmAction **action);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumActions )( 
            IFsrmFileScreenBase * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **actions);
        
        END_INTERFACE
    } IFsrmFileScreenBaseVtbl;

    interface IFsrmFileScreenBase
    {
        CONST_VTBL struct IFsrmFileScreenBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileScreenBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileScreenBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileScreenBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileScreenBase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileScreenBase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileScreenBase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileScreenBase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileScreenBase_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmFileScreenBase_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmFileScreenBase_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmFileScreenBase_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFsrmFileScreenBase_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 


#define IFsrmFileScreenBase_get_BlockedFileGroups(This,blockList)	\
    ( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) ) 

#define IFsrmFileScreenBase_put_BlockedFileGroups(This,blockList)	\
    ( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) ) 

#define IFsrmFileScreenBase_get_FileScreenFlags(This,fileScreenFlags)	\
    ( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) ) 

#define IFsrmFileScreenBase_put_FileScreenFlags(This,fileScreenFlags)	\
    ( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) ) 

#define IFsrmFileScreenBase_CreateAction(This,actionType,action)	\
    ( (This)->lpVtbl -> CreateAction(This,actionType,action) ) 

#define IFsrmFileScreenBase_EnumActions(This,actions)	\
    ( (This)->lpVtbl -> EnumActions(This,actions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileScreenBase_INTERFACE_DEFINED__ */


#ifndef __IFsrmFileScreen_INTERFACE_DEFINED__
#define __IFsrmFileScreen_INTERFACE_DEFINED__

/* interface IFsrmFileScreen */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileScreen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5f6325d3-ce88-4733-84c1-2d6aefc5ea07")
    IFsrmFileScreen : public IFsrmFileScreenBase
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *path) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceTemplateName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *fileScreenTemplateName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MatchesSourceTemplate( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *matches) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserSid( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *userSid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserAccount( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *userAccount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyTemplate( 
            /* [in] */ __RPC__in BSTR fileScreenTemplateName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileScreenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileScreen * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileScreen * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileScreen * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileScreen * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileScreen * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileScreen * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileScreen * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmFileScreen * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmFileScreen * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmFileScreen * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlockedFileGroups )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **blockList);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlockedFileGroups )( 
            IFsrmFileScreen * This,
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *blockList);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileScreenFlags )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__out long *fileScreenFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FileScreenFlags )( 
            IFsrmFileScreen * This,
            /* [in] */ long fileScreenFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateAction )( 
            IFsrmFileScreen * This,
            /* [in] */ FsrmActionType actionType,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmAction **action);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumActions )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **actions);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *path);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceTemplateName )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *fileScreenTemplateName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MatchesSourceTemplate )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *matches);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSid )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *userSid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserAccount )( 
            IFsrmFileScreen * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *userAccount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ApplyTemplate )( 
            IFsrmFileScreen * This,
            /* [in] */ __RPC__in BSTR fileScreenTemplateName);
        
        END_INTERFACE
    } IFsrmFileScreenVtbl;

    interface IFsrmFileScreen
    {
        CONST_VTBL struct IFsrmFileScreenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileScreen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileScreen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileScreen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileScreen_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileScreen_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileScreen_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileScreen_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileScreen_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmFileScreen_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmFileScreen_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmFileScreen_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFsrmFileScreen_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 


#define IFsrmFileScreen_get_BlockedFileGroups(This,blockList)	\
    ( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) ) 

#define IFsrmFileScreen_put_BlockedFileGroups(This,blockList)	\
    ( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) ) 

#define IFsrmFileScreen_get_FileScreenFlags(This,fileScreenFlags)	\
    ( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) ) 

#define IFsrmFileScreen_put_FileScreenFlags(This,fileScreenFlags)	\
    ( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) ) 

#define IFsrmFileScreen_CreateAction(This,actionType,action)	\
    ( (This)->lpVtbl -> CreateAction(This,actionType,action) ) 

#define IFsrmFileScreen_EnumActions(This,actions)	\
    ( (This)->lpVtbl -> EnumActions(This,actions) ) 


#define IFsrmFileScreen_get_Path(This,path)	\
    ( (This)->lpVtbl -> get_Path(This,path) ) 

#define IFsrmFileScreen_get_SourceTemplateName(This,fileScreenTemplateName)	\
    ( (This)->lpVtbl -> get_SourceTemplateName(This,fileScreenTemplateName) ) 

#define IFsrmFileScreen_get_MatchesSourceTemplate(This,matches)	\
    ( (This)->lpVtbl -> get_MatchesSourceTemplate(This,matches) ) 

#define IFsrmFileScreen_get_UserSid(This,userSid)	\
    ( (This)->lpVtbl -> get_UserSid(This,userSid) ) 

#define IFsrmFileScreen_get_UserAccount(This,userAccount)	\
    ( (This)->lpVtbl -> get_UserAccount(This,userAccount) ) 

#define IFsrmFileScreen_ApplyTemplate(This,fileScreenTemplateName)	\
    ( (This)->lpVtbl -> ApplyTemplate(This,fileScreenTemplateName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileScreen_INTERFACE_DEFINED__ */


#ifndef __IFsrmFileScreenException_INTERFACE_DEFINED__
#define __IFsrmFileScreenException_INTERFACE_DEFINED__

/* interface IFsrmFileScreenException */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileScreenException;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bee7ce02-df77-4515-9389-78f01c5afc1a")
    IFsrmFileScreenException : public IFsrmObject
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *path) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowedFileGroups( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **allowList) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowedFileGroups( 
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *allowList) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileScreenExceptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileScreenException * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileScreenException * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileScreenException * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileScreenException * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileScreenException * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileScreenException * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileScreenException * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmFileScreenException * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmFileScreenException * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmFileScreenException * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmFileScreenException * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmFileScreenException * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IFsrmFileScreenException * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *path);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowedFileGroups )( 
            IFsrmFileScreenException * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **allowList);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowedFileGroups )( 
            IFsrmFileScreenException * This,
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *allowList);
        
        END_INTERFACE
    } IFsrmFileScreenExceptionVtbl;

    interface IFsrmFileScreenException
    {
        CONST_VTBL struct IFsrmFileScreenExceptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileScreenException_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileScreenException_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileScreenException_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileScreenException_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileScreenException_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileScreenException_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileScreenException_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileScreenException_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmFileScreenException_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmFileScreenException_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmFileScreenException_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFsrmFileScreenException_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 


#define IFsrmFileScreenException_get_Path(This,path)	\
    ( (This)->lpVtbl -> get_Path(This,path) ) 

#define IFsrmFileScreenException_get_AllowedFileGroups(This,allowList)	\
    ( (This)->lpVtbl -> get_AllowedFileGroups(This,allowList) ) 

#define IFsrmFileScreenException_put_AllowedFileGroups(This,allowList)	\
    ( (This)->lpVtbl -> put_AllowedFileGroups(This,allowList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileScreenException_INTERFACE_DEFINED__ */


#ifndef __IFsrmFileScreenManager_INTERFACE_DEFINED__
#define __IFsrmFileScreenManager_INTERFACE_DEFINED__

/* interface IFsrmFileScreenManager */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileScreenManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff4fa04e-5a94-4bda-a3a0-d5b4d3c52eba")
    IFsrmFileScreenManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActionVariables( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *variables) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActionVariableDescriptions( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *descriptions) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFileScreen( 
            /* [in] */ __RPC__in BSTR path,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreen **fileScreen) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFileScreen( 
            /* [in] */ __RPC__in BSTR path,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreen **fileScreen) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumFileScreens( 
            /* [defaultvalue][in] */ __RPC__in BSTR path,
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileScreens) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFileScreenException( 
            /* [in] */ __RPC__in BSTR path,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreenException **fileScreenException) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFileScreenException( 
            /* [in] */ __RPC__in BSTR path,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreenException **fileScreenException) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumFileScreenExceptions( 
            /* [defaultvalue][in] */ __RPC__in BSTR path,
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileScreenExceptions) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFileScreenCollection( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **collection) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileScreenManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileScreenManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileScreenManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileScreenManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileScreenManager * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileScreenManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileScreenManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileScreenManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionVariables )( 
            IFsrmFileScreenManager * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *variables);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionVariableDescriptions )( 
            IFsrmFileScreenManager * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *descriptions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateFileScreen )( 
            IFsrmFileScreenManager * This,
            /* [in] */ __RPC__in BSTR path,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreen **fileScreen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileScreen )( 
            IFsrmFileScreenManager * This,
            /* [in] */ __RPC__in BSTR path,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreen **fileScreen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumFileScreens )( 
            IFsrmFileScreenManager * This,
            /* [defaultvalue][in] */ __RPC__in BSTR path,
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileScreens);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateFileScreenException )( 
            IFsrmFileScreenManager * This,
            /* [in] */ __RPC__in BSTR path,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreenException **fileScreenException);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileScreenException )( 
            IFsrmFileScreenManager * This,
            /* [in] */ __RPC__in BSTR path,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreenException **fileScreenException);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumFileScreenExceptions )( 
            IFsrmFileScreenManager * This,
            /* [defaultvalue][in] */ __RPC__in BSTR path,
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileScreenExceptions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateFileScreenCollection )( 
            IFsrmFileScreenManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **collection);
        
        END_INTERFACE
    } IFsrmFileScreenManagerVtbl;

    interface IFsrmFileScreenManager
    {
        CONST_VTBL struct IFsrmFileScreenManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileScreenManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileScreenManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileScreenManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileScreenManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileScreenManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileScreenManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileScreenManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileScreenManager_get_ActionVariables(This,variables)	\
    ( (This)->lpVtbl -> get_ActionVariables(This,variables) ) 

#define IFsrmFileScreenManager_get_ActionVariableDescriptions(This,descriptions)	\
    ( (This)->lpVtbl -> get_ActionVariableDescriptions(This,descriptions) ) 

#define IFsrmFileScreenManager_CreateFileScreen(This,path,fileScreen)	\
    ( (This)->lpVtbl -> CreateFileScreen(This,path,fileScreen) ) 

#define IFsrmFileScreenManager_GetFileScreen(This,path,fileScreen)	\
    ( (This)->lpVtbl -> GetFileScreen(This,path,fileScreen) ) 

#define IFsrmFileScreenManager_EnumFileScreens(This,path,options,fileScreens)	\
    ( (This)->lpVtbl -> EnumFileScreens(This,path,options,fileScreens) ) 

#define IFsrmFileScreenManager_CreateFileScreenException(This,path,fileScreenException)	\
    ( (This)->lpVtbl -> CreateFileScreenException(This,path,fileScreenException) ) 

#define IFsrmFileScreenManager_GetFileScreenException(This,path,fileScreenException)	\
    ( (This)->lpVtbl -> GetFileScreenException(This,path,fileScreenException) ) 

#define IFsrmFileScreenManager_EnumFileScreenExceptions(This,path,options,fileScreenExceptions)	\
    ( (This)->lpVtbl -> EnumFileScreenExceptions(This,path,options,fileScreenExceptions) ) 

#define IFsrmFileScreenManager_CreateFileScreenCollection(This,collection)	\
    ( (This)->lpVtbl -> CreateFileScreenCollection(This,collection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileScreenManager_INTERFACE_DEFINED__ */


#ifndef __IFsrmFileScreenTemplate_INTERFACE_DEFINED__
#define __IFsrmFileScreenTemplate_INTERFACE_DEFINED__

/* interface IFsrmFileScreenTemplate */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileScreenTemplate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("205bebf8-dd93-452a-95a6-32b566b35828")
    IFsrmFileScreenTemplate : public IFsrmFileScreenBase
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyTemplate( 
            /* [in] */ __RPC__in BSTR fileScreenTemplateName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CommitAndUpdateDerived( 
            /* [in] */ FsrmCommitOptions commitOptions,
            /* [in] */ FsrmTemplateApplyOptions applyOptions,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmDerivedObjectsResult **derivedObjectsResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileScreenTemplateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileScreenTemplate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileScreenTemplate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileScreenTemplate * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmFileScreenTemplate * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmFileScreenTemplate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmFileScreenTemplate * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmFileScreenTemplate * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlockedFileGroups )( 
            IFsrmFileScreenTemplate * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **blockList);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlockedFileGroups )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *blockList);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileScreenFlags )( 
            IFsrmFileScreenTemplate * This,
            /* [retval][out] */ __RPC__out long *fileScreenFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FileScreenFlags )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ long fileScreenFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateAction )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ FsrmActionType actionType,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmAction **action);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumActions )( 
            IFsrmFileScreenTemplate * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **actions);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFsrmFileScreenTemplate * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyTemplate )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ __RPC__in BSTR fileScreenTemplateName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitAndUpdateDerived )( 
            IFsrmFileScreenTemplate * This,
            /* [in] */ FsrmCommitOptions commitOptions,
            /* [in] */ FsrmTemplateApplyOptions applyOptions,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmDerivedObjectsResult **derivedObjectsResult);
        
        END_INTERFACE
    } IFsrmFileScreenTemplateVtbl;

    interface IFsrmFileScreenTemplate
    {
        CONST_VTBL struct IFsrmFileScreenTemplateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileScreenTemplate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileScreenTemplate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileScreenTemplate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileScreenTemplate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileScreenTemplate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileScreenTemplate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileScreenTemplate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileScreenTemplate_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmFileScreenTemplate_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmFileScreenTemplate_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmFileScreenTemplate_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFsrmFileScreenTemplate_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 


#define IFsrmFileScreenTemplate_get_BlockedFileGroups(This,blockList)	\
    ( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) ) 

#define IFsrmFileScreenTemplate_put_BlockedFileGroups(This,blockList)	\
    ( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) ) 

#define IFsrmFileScreenTemplate_get_FileScreenFlags(This,fileScreenFlags)	\
    ( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) ) 

#define IFsrmFileScreenTemplate_put_FileScreenFlags(This,fileScreenFlags)	\
    ( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) ) 

#define IFsrmFileScreenTemplate_CreateAction(This,actionType,action)	\
    ( (This)->lpVtbl -> CreateAction(This,actionType,action) ) 

#define IFsrmFileScreenTemplate_EnumActions(This,actions)	\
    ( (This)->lpVtbl -> EnumActions(This,actions) ) 


#define IFsrmFileScreenTemplate_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define IFsrmFileScreenTemplate_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IFsrmFileScreenTemplate_CopyTemplate(This,fileScreenTemplateName)	\
    ( (This)->lpVtbl -> CopyTemplate(This,fileScreenTemplateName) ) 

#define IFsrmFileScreenTemplate_CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult)	\
    ( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileScreenTemplate_INTERFACE_DEFINED__ */


#ifndef __IFsrmFileScreenTemplateImported_INTERFACE_DEFINED__
#define __IFsrmFileScreenTemplateImported_INTERFACE_DEFINED__

/* interface IFsrmFileScreenTemplateImported */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileScreenTemplateImported;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e1010359-3e5d-4ecd-9fe4-ef48622fdf30")
    IFsrmFileScreenTemplateImported : public IFsrmFileScreenTemplate
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OverwriteOnCommit( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *overwrite) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OverwriteOnCommit( 
            /* [in] */ VARIANT_BOOL overwrite) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileScreenTemplateImportedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileScreenTemplateImported * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileScreenTemplateImported * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileScreenTemplateImported * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmFileScreenTemplateImported * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmFileScreenTemplateImported * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmFileScreenTemplateImported * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmFileScreenTemplateImported * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlockedFileGroups )( 
            IFsrmFileScreenTemplateImported * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmMutableCollection **blockList);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlockedFileGroups )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ __RPC__in_opt IFsrmMutableCollection *blockList);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileScreenFlags )( 
            IFsrmFileScreenTemplateImported * This,
            /* [retval][out] */ __RPC__out long *fileScreenFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FileScreenFlags )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ long fileScreenFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateAction )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ FsrmActionType actionType,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmAction **action);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumActions )( 
            IFsrmFileScreenTemplateImported * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **actions);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFsrmFileScreenTemplateImported * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyTemplate )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ __RPC__in BSTR fileScreenTemplateName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CommitAndUpdateDerived )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ FsrmCommitOptions commitOptions,
            /* [in] */ FsrmTemplateApplyOptions applyOptions,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmDerivedObjectsResult **derivedObjectsResult);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverwriteOnCommit )( 
            IFsrmFileScreenTemplateImported * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *overwrite);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverwriteOnCommit )( 
            IFsrmFileScreenTemplateImported * This,
            /* [in] */ VARIANT_BOOL overwrite);
        
        END_INTERFACE
    } IFsrmFileScreenTemplateImportedVtbl;

    interface IFsrmFileScreenTemplateImported
    {
        CONST_VTBL struct IFsrmFileScreenTemplateImportedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileScreenTemplateImported_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileScreenTemplateImported_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileScreenTemplateImported_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileScreenTemplateImported_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileScreenTemplateImported_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileScreenTemplateImported_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileScreenTemplateImported_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileScreenTemplateImported_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmFileScreenTemplateImported_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmFileScreenTemplateImported_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmFileScreenTemplateImported_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFsrmFileScreenTemplateImported_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 


#define IFsrmFileScreenTemplateImported_get_BlockedFileGroups(This,blockList)	\
    ( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) ) 

#define IFsrmFileScreenTemplateImported_put_BlockedFileGroups(This,blockList)	\
    ( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) ) 

#define IFsrmFileScreenTemplateImported_get_FileScreenFlags(This,fileScreenFlags)	\
    ( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) ) 

#define IFsrmFileScreenTemplateImported_put_FileScreenFlags(This,fileScreenFlags)	\
    ( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) ) 

#define IFsrmFileScreenTemplateImported_CreateAction(This,actionType,action)	\
    ( (This)->lpVtbl -> CreateAction(This,actionType,action) ) 

#define IFsrmFileScreenTemplateImported_EnumActions(This,actions)	\
    ( (This)->lpVtbl -> EnumActions(This,actions) ) 


#define IFsrmFileScreenTemplateImported_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define IFsrmFileScreenTemplateImported_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IFsrmFileScreenTemplateImported_CopyTemplate(This,fileScreenTemplateName)	\
    ( (This)->lpVtbl -> CopyTemplate(This,fileScreenTemplateName) ) 

#define IFsrmFileScreenTemplateImported_CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult)	\
    ( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) ) 


#define IFsrmFileScreenTemplateImported_get_OverwriteOnCommit(This,overwrite)	\
    ( (This)->lpVtbl -> get_OverwriteOnCommit(This,overwrite) ) 

#define IFsrmFileScreenTemplateImported_put_OverwriteOnCommit(This,overwrite)	\
    ( (This)->lpVtbl -> put_OverwriteOnCommit(This,overwrite) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileScreenTemplateImported_INTERFACE_DEFINED__ */


#ifndef __IFsrmFileScreenTemplateManager_INTERFACE_DEFINED__
#define __IFsrmFileScreenTemplateManager_INTERFACE_DEFINED__

/* interface IFsrmFileScreenTemplateManager */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFsrmFileScreenTemplateManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cfe36cba-1949-4e74-a14f-f1d580ceaf13")
    IFsrmFileScreenTemplateManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateTemplate( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreenTemplate **fileScreenTemplate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTemplate( 
            /* [in] */ __RPC__in BSTR name,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreenTemplate **fileScreenTemplate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumTemplates( 
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileScreenTemplates) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportTemplates( 
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileScreenTemplateNamesArray,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *serializedFileScreenTemplates) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportTemplates( 
            /* [in] */ __RPC__in BSTR serializedFileScreenTemplates,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileScreenTemplateNamesArray,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileScreenTemplates) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmFileScreenTemplateManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmFileScreenTemplateManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmFileScreenTemplateManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmFileScreenTemplateManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmFileScreenTemplateManager * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmFileScreenTemplateManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmFileScreenTemplateManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmFileScreenTemplateManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateTemplate )( 
            IFsrmFileScreenTemplateManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreenTemplate **fileScreenTemplate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTemplate )( 
            IFsrmFileScreenTemplateManager * This,
            /* [in] */ __RPC__in BSTR name,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmFileScreenTemplate **fileScreenTemplate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumTemplates )( 
            IFsrmFileScreenTemplateManager * This,
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileScreenTemplates);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportTemplates )( 
            IFsrmFileScreenTemplateManager * This,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileScreenTemplateNamesArray,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *serializedFileScreenTemplates);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportTemplates )( 
            IFsrmFileScreenTemplateManager * This,
            /* [in] */ __RPC__in BSTR serializedFileScreenTemplates,
            /* [defaultvalue][in] */ __RPC__in VARIANT *fileScreenTemplateNamesArray,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCommittableCollection **fileScreenTemplates);
        
        END_INTERFACE
    } IFsrmFileScreenTemplateManagerVtbl;

    interface IFsrmFileScreenTemplateManager
    {
        CONST_VTBL struct IFsrmFileScreenTemplateManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmFileScreenTemplateManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmFileScreenTemplateManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmFileScreenTemplateManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmFileScreenTemplateManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmFileScreenTemplateManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmFileScreenTemplateManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmFileScreenTemplateManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmFileScreenTemplateManager_CreateTemplate(This,fileScreenTemplate)	\
    ( (This)->lpVtbl -> CreateTemplate(This,fileScreenTemplate) ) 

#define IFsrmFileScreenTemplateManager_GetTemplate(This,name,fileScreenTemplate)	\
    ( (This)->lpVtbl -> GetTemplate(This,name,fileScreenTemplate) ) 

#define IFsrmFileScreenTemplateManager_EnumTemplates(This,options,fileScreenTemplates)	\
    ( (This)->lpVtbl -> EnumTemplates(This,options,fileScreenTemplates) ) 

#define IFsrmFileScreenTemplateManager_ExportTemplates(This,fileScreenTemplateNamesArray,serializedFileScreenTemplates)	\
    ( (This)->lpVtbl -> ExportTemplates(This,fileScreenTemplateNamesArray,serializedFileScreenTemplates) ) 

#define IFsrmFileScreenTemplateManager_ImportTemplates(This,serializedFileScreenTemplates,fileScreenTemplateNamesArray,fileScreenTemplates)	\
    ( (This)->lpVtbl -> ImportTemplates(This,serializedFileScreenTemplates,fileScreenTemplateNamesArray,fileScreenTemplates) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmFileScreenTemplateManager_INTERFACE_DEFINED__ */


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


