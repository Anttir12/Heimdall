

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for fsrmreports.idl:
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

#ifndef __fsrmreports_h__
#define __fsrmreports_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFsrmReportManager_FWD_DEFINED__
#define __IFsrmReportManager_FWD_DEFINED__
typedef interface IFsrmReportManager IFsrmReportManager;
#endif 	/* __IFsrmReportManager_FWD_DEFINED__ */


#ifndef __IFsrmReportJob_FWD_DEFINED__
#define __IFsrmReportJob_FWD_DEFINED__
typedef interface IFsrmReportJob IFsrmReportJob;
#endif 	/* __IFsrmReportJob_FWD_DEFINED__ */


#ifndef __IFsrmReport_FWD_DEFINED__
#define __IFsrmReport_FWD_DEFINED__
typedef interface IFsrmReport IFsrmReport;
#endif 	/* __IFsrmReport_FWD_DEFINED__ */


#ifndef __IFsrmReportScheduler_FWD_DEFINED__
#define __IFsrmReportScheduler_FWD_DEFINED__
typedef interface IFsrmReportScheduler IFsrmReportScheduler;
#endif 	/* __IFsrmReportScheduler_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "fsrmenums.h"
#include "fsrm.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_fsrmreports_0000_0000 */
/* [local] */ 




#define	FSRM_DISPID_REPORT_MANAGER	( ( FSRM_DISPID_FEATURE_REPORTS | 0x100000 )  )

#define	FSRM_DISPID_REPORT_JOB	( ( FSRM_DISPID_FEATURE_REPORTS | 0x200000 )  )

#define	FSRM_DISPID_REPORT	( ( FSRM_DISPID_FEATURE_REPORTS | 0x300000 )  )

#define	FSRM_DISPID_REPORT_SCHEDULER	( ( FSRM_DISPID_FEATURE_REPORTS | 0x400000 )  )



extern RPC_IF_HANDLE __MIDL_itf_fsrmreports_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmreports_0000_0000_v0_0_s_ifspec;

#ifndef __IFsrmReportManager_INTERFACE_DEFINED__
#define __IFsrmReportManager_INTERFACE_DEFINED__

/* interface IFsrmReportManager */
/* [object][oleautomation][dual][version][uuid] */ 


EXTERN_C const IID IID_IFsrmReportManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27b899fe-6ffa-4481-a184-d3daade8a02b")
    IFsrmReportManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumReportJobs( 
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **reportJobs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateReportJob( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmReportJob **reportJob) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetReportJob( 
            /* [in] */ __RPC__in BSTR taskName,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmReportJob **reportJob) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOutputDirectory( 
            /* [in] */ FsrmReportGenerationContext context,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetOutputDirectory( 
            /* [in] */ FsrmReportGenerationContext context,
            /* [in] */ __RPC__in BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsFilterValidForReportType( 
            /* [in] */ FsrmReportType reportType,
            /* [in] */ FsrmReportFilter filter,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDefaultFilter( 
            /* [in] */ FsrmReportType reportType,
            /* [in] */ FsrmReportFilter filter,
            /* [retval][out] */ __RPC__out VARIANT *filterValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDefaultFilter( 
            /* [in] */ FsrmReportType reportType,
            /* [in] */ FsrmReportFilter filter,
            /* [in] */ VARIANT filterValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetReportSizeLimit( 
            /* [in] */ FsrmReportLimit limit,
            /* [retval][out] */ __RPC__out VARIANT *limitValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetReportSizeLimit( 
            /* [in] */ FsrmReportLimit limit,
            /* [in] */ VARIANT limitValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmReportManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmReportManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmReportManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmReportManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmReportManager * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmReportManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmReportManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmReportManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumReportJobs )( 
            IFsrmReportManager * This,
            /* [defaultvalue][in] */ FsrmEnumOptions options,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **reportJobs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateReportJob )( 
            IFsrmReportManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmReportJob **reportJob);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetReportJob )( 
            IFsrmReportManager * This,
            /* [in] */ __RPC__in BSTR taskName,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmReportJob **reportJob);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOutputDirectory )( 
            IFsrmReportManager * This,
            /* [in] */ FsrmReportGenerationContext context,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetOutputDirectory )( 
            IFsrmReportManager * This,
            /* [in] */ FsrmReportGenerationContext context,
            /* [in] */ __RPC__in BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsFilterValidForReportType )( 
            IFsrmReportManager * This,
            /* [in] */ FsrmReportType reportType,
            /* [in] */ FsrmReportFilter filter,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultFilter )( 
            IFsrmReportManager * This,
            /* [in] */ FsrmReportType reportType,
            /* [in] */ FsrmReportFilter filter,
            /* [retval][out] */ __RPC__out VARIANT *filterValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDefaultFilter )( 
            IFsrmReportManager * This,
            /* [in] */ FsrmReportType reportType,
            /* [in] */ FsrmReportFilter filter,
            /* [in] */ VARIANT filterValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetReportSizeLimit )( 
            IFsrmReportManager * This,
            /* [in] */ FsrmReportLimit limit,
            /* [retval][out] */ __RPC__out VARIANT *limitValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetReportSizeLimit )( 
            IFsrmReportManager * This,
            /* [in] */ FsrmReportLimit limit,
            /* [in] */ VARIANT limitValue);
        
        END_INTERFACE
    } IFsrmReportManagerVtbl;

    interface IFsrmReportManager
    {
        CONST_VTBL struct IFsrmReportManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmReportManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmReportManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmReportManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmReportManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmReportManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmReportManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmReportManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmReportManager_EnumReportJobs(This,options,reportJobs)	\
    ( (This)->lpVtbl -> EnumReportJobs(This,options,reportJobs) ) 

#define IFsrmReportManager_CreateReportJob(This,reportJob)	\
    ( (This)->lpVtbl -> CreateReportJob(This,reportJob) ) 

#define IFsrmReportManager_GetReportJob(This,taskName,reportJob)	\
    ( (This)->lpVtbl -> GetReportJob(This,taskName,reportJob) ) 

#define IFsrmReportManager_GetOutputDirectory(This,context,path)	\
    ( (This)->lpVtbl -> GetOutputDirectory(This,context,path) ) 

#define IFsrmReportManager_SetOutputDirectory(This,context,path)	\
    ( (This)->lpVtbl -> SetOutputDirectory(This,context,path) ) 

#define IFsrmReportManager_IsFilterValidForReportType(This,reportType,filter,valid)	\
    ( (This)->lpVtbl -> IsFilterValidForReportType(This,reportType,filter,valid) ) 

#define IFsrmReportManager_GetDefaultFilter(This,reportType,filter,filterValue)	\
    ( (This)->lpVtbl -> GetDefaultFilter(This,reportType,filter,filterValue) ) 

#define IFsrmReportManager_SetDefaultFilter(This,reportType,filter,filterValue)	\
    ( (This)->lpVtbl -> SetDefaultFilter(This,reportType,filter,filterValue) ) 

#define IFsrmReportManager_GetReportSizeLimit(This,limit,limitValue)	\
    ( (This)->lpVtbl -> GetReportSizeLimit(This,limit,limitValue) ) 

#define IFsrmReportManager_SetReportSizeLimit(This,limit,limitValue)	\
    ( (This)->lpVtbl -> SetReportSizeLimit(This,limit,limitValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmReportManager_INTERFACE_DEFINED__ */


#ifndef __IFsrmReportJob_INTERFACE_DEFINED__
#define __IFsrmReportJob_INTERFACE_DEFINED__

/* interface IFsrmReportJob */
/* [object][oleautomation][dual][version][uuid] */ 


EXTERN_C const IID IID_IFsrmReportJob;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38e87280-715c-4c7d-a280-ea1651a19fef")
    IFsrmReportJob : public IFsrmObject
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Task( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *taskName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Task( 
            /* [in] */ __RPC__in BSTR taskName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NamespaceRoots( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *namespaceRoots) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NamespaceRoots( 
            /* [in] */ __RPC__in SAFEARRAY * namespaceRoots) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Formats( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *formats) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Formats( 
            /* [in] */ __RPC__in SAFEARRAY * formats) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MailTo( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailTo) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MailTo( 
            /* [in] */ __RPC__in BSTR mailTo) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RunningStatus( 
            /* [retval][out] */ __RPC__out FsrmReportRunningStatus *runningStatus) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastRun( 
            /* [retval][out] */ __RPC__out DATE *lastRun) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastError( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *lastError) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastGeneratedInDirectory( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumReports( 
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **reports) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateReport( 
            /* [in] */ FsrmReportType reportType,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmReport **report) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ FsrmReportGenerationContext context) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WaitForCompletion( 
            /* [in] */ long waitSeconds,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *completed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmReportJobVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmReportJob * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmReportJob * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmReportJob * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmReportJob * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmReportJob * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmReportJob * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmReportJob * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__out FSRM_OBJECT_ID *id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmReportJob * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmReportJob * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IFsrmReportJob * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Task )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *taskName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Task )( 
            IFsrmReportJob * This,
            /* [in] */ __RPC__in BSTR taskName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NamespaceRoots )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *namespaceRoots);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NamespaceRoots )( 
            IFsrmReportJob * This,
            /* [in] */ __RPC__in SAFEARRAY * namespaceRoots);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Formats )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *formats);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Formats )( 
            IFsrmReportJob * This,
            /* [in] */ __RPC__in SAFEARRAY * formats);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MailTo )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *mailTo);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MailTo )( 
            IFsrmReportJob * This,
            /* [in] */ __RPC__in BSTR mailTo);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunningStatus )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__out FsrmReportRunningStatus *runningStatus);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastRun )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__out DATE *lastRun);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastError )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *lastError);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastGeneratedInDirectory )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumReports )( 
            IFsrmReportJob * This,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmCollection **reports);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateReport )( 
            IFsrmReportJob * This,
            /* [in] */ FsrmReportType reportType,
            /* [retval][out] */ __RPC__deref_out_opt IFsrmReport **report);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IFsrmReportJob * This,
            /* [in] */ FsrmReportGenerationContext context);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )( 
            IFsrmReportJob * This,
            /* [in] */ long waitSeconds,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *completed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IFsrmReportJob * This);
        
        END_INTERFACE
    } IFsrmReportJobVtbl;

    interface IFsrmReportJob
    {
        CONST_VTBL struct IFsrmReportJobVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmReportJob_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmReportJob_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmReportJob_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmReportJob_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmReportJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmReportJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmReportJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmReportJob_get_Id(This,id)	\
    ( (This)->lpVtbl -> get_Id(This,id) ) 

#define IFsrmReportJob_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmReportJob_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmReportJob_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFsrmReportJob_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 


#define IFsrmReportJob_get_Task(This,taskName)	\
    ( (This)->lpVtbl -> get_Task(This,taskName) ) 

#define IFsrmReportJob_put_Task(This,taskName)	\
    ( (This)->lpVtbl -> put_Task(This,taskName) ) 

#define IFsrmReportJob_get_NamespaceRoots(This,namespaceRoots)	\
    ( (This)->lpVtbl -> get_NamespaceRoots(This,namespaceRoots) ) 

#define IFsrmReportJob_put_NamespaceRoots(This,namespaceRoots)	\
    ( (This)->lpVtbl -> put_NamespaceRoots(This,namespaceRoots) ) 

#define IFsrmReportJob_get_Formats(This,formats)	\
    ( (This)->lpVtbl -> get_Formats(This,formats) ) 

#define IFsrmReportJob_put_Formats(This,formats)	\
    ( (This)->lpVtbl -> put_Formats(This,formats) ) 

#define IFsrmReportJob_get_MailTo(This,mailTo)	\
    ( (This)->lpVtbl -> get_MailTo(This,mailTo) ) 

#define IFsrmReportJob_put_MailTo(This,mailTo)	\
    ( (This)->lpVtbl -> put_MailTo(This,mailTo) ) 

#define IFsrmReportJob_get_RunningStatus(This,runningStatus)	\
    ( (This)->lpVtbl -> get_RunningStatus(This,runningStatus) ) 

#define IFsrmReportJob_get_LastRun(This,lastRun)	\
    ( (This)->lpVtbl -> get_LastRun(This,lastRun) ) 

#define IFsrmReportJob_get_LastError(This,lastError)	\
    ( (This)->lpVtbl -> get_LastError(This,lastError) ) 

#define IFsrmReportJob_get_LastGeneratedInDirectory(This,path)	\
    ( (This)->lpVtbl -> get_LastGeneratedInDirectory(This,path) ) 

#define IFsrmReportJob_EnumReports(This,reports)	\
    ( (This)->lpVtbl -> EnumReports(This,reports) ) 

#define IFsrmReportJob_CreateReport(This,reportType,report)	\
    ( (This)->lpVtbl -> CreateReport(This,reportType,report) ) 

#define IFsrmReportJob_Run(This,context)	\
    ( (This)->lpVtbl -> Run(This,context) ) 

#define IFsrmReportJob_WaitForCompletion(This,waitSeconds,completed)	\
    ( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) ) 

#define IFsrmReportJob_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmReportJob_INTERFACE_DEFINED__ */


#ifndef __IFsrmReport_INTERFACE_DEFINED__
#define __IFsrmReport_INTERFACE_DEFINED__

/* interface IFsrmReport */
/* [object][oleautomation][dual][version][uuid] */ 


EXTERN_C const IID IID_IFsrmReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d8cc81d9-46b8-4fa4-bfa5-4aa9dec9b638")
    IFsrmReport : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out FsrmReportType *reportType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ __RPC__in BSTR description) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastGeneratedFileNamePrefix( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *prefix) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilter( 
            /* [in] */ FsrmReportFilter filter,
            /* [retval][out] */ __RPC__out VARIANT *filterValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetFilter( 
            /* [in] */ FsrmReportFilter filter,
            /* [in] */ VARIANT filterValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmReportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmReport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmReport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmReport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmReport * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmReport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmReport * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmReport * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IFsrmReport * This,
            /* [retval][out] */ __RPC__out FsrmReportType *reportType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFsrmReport * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *name);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IFsrmReport * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IFsrmReport * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *description);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IFsrmReport * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastGeneratedFileNamePrefix )( 
            IFsrmReport * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *prefix);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilter )( 
            IFsrmReport * This,
            /* [in] */ FsrmReportFilter filter,
            /* [retval][out] */ __RPC__out VARIANT *filterValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetFilter )( 
            IFsrmReport * This,
            /* [in] */ FsrmReportFilter filter,
            /* [in] */ VARIANT filterValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFsrmReport * This);
        
        END_INTERFACE
    } IFsrmReportVtbl;

    interface IFsrmReport
    {
        CONST_VTBL struct IFsrmReportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmReport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmReport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmReport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmReport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmReport_get_Type(This,reportType)	\
    ( (This)->lpVtbl -> get_Type(This,reportType) ) 

#define IFsrmReport_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define IFsrmReport_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IFsrmReport_get_Description(This,description)	\
    ( (This)->lpVtbl -> get_Description(This,description) ) 

#define IFsrmReport_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IFsrmReport_get_LastGeneratedFileNamePrefix(This,prefix)	\
    ( (This)->lpVtbl -> get_LastGeneratedFileNamePrefix(This,prefix) ) 

#define IFsrmReport_GetFilter(This,filter,filterValue)	\
    ( (This)->lpVtbl -> GetFilter(This,filter,filterValue) ) 

#define IFsrmReport_SetFilter(This,filter,filterValue)	\
    ( (This)->lpVtbl -> SetFilter(This,filter,filterValue) ) 

#define IFsrmReport_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmReport_INTERFACE_DEFINED__ */


#ifndef __IFsrmReportScheduler_INTERFACE_DEFINED__
#define __IFsrmReportScheduler_INTERFACE_DEFINED__

/* interface IFsrmReportScheduler */
/* [object][oleautomation][dual][version][uuid] */ 


EXTERN_C const IID IID_IFsrmReportScheduler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6879caf9-6617-4484-8719-71c3d8645f94")
    IFsrmReportScheduler : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE VerifyNamespaces( 
            /* [in] */ __RPC__in VARIANT *namespacesSafeArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateScheduleTask( 
            /* [in] */ __RPC__in BSTR taskName,
            /* [in] */ __RPC__in VARIANT *namespacesSafeArray,
            /* [in] */ __RPC__in BSTR serializedTask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ModifyScheduleTask( 
            /* [in] */ __RPC__in BSTR taskName,
            /* [in] */ __RPC__in VARIANT *namespacesSafeArray,
            /* [in] */ __RPC__in BSTR serializedTask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteScheduleTask( 
            /* [in] */ __RPC__in BSTR taskName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFsrmReportSchedulerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFsrmReportScheduler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFsrmReportScheduler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFsrmReportScheduler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFsrmReportScheduler * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFsrmReportScheduler * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFsrmReportScheduler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFsrmReportScheduler * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VerifyNamespaces )( 
            IFsrmReportScheduler * This,
            /* [in] */ __RPC__in VARIANT *namespacesSafeArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateScheduleTask )( 
            IFsrmReportScheduler * This,
            /* [in] */ __RPC__in BSTR taskName,
            /* [in] */ __RPC__in VARIANT *namespacesSafeArray,
            /* [in] */ __RPC__in BSTR serializedTask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ModifyScheduleTask )( 
            IFsrmReportScheduler * This,
            /* [in] */ __RPC__in BSTR taskName,
            /* [in] */ __RPC__in VARIANT *namespacesSafeArray,
            /* [in] */ __RPC__in BSTR serializedTask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteScheduleTask )( 
            IFsrmReportScheduler * This,
            /* [in] */ __RPC__in BSTR taskName);
        
        END_INTERFACE
    } IFsrmReportSchedulerVtbl;

    interface IFsrmReportScheduler
    {
        CONST_VTBL struct IFsrmReportSchedulerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFsrmReportScheduler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFsrmReportScheduler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFsrmReportScheduler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFsrmReportScheduler_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFsrmReportScheduler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFsrmReportScheduler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFsrmReportScheduler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFsrmReportScheduler_VerifyNamespaces(This,namespacesSafeArray)	\
    ( (This)->lpVtbl -> VerifyNamespaces(This,namespacesSafeArray) ) 

#define IFsrmReportScheduler_CreateScheduleTask(This,taskName,namespacesSafeArray,serializedTask)	\
    ( (This)->lpVtbl -> CreateScheduleTask(This,taskName,namespacesSafeArray,serializedTask) ) 

#define IFsrmReportScheduler_ModifyScheduleTask(This,taskName,namespacesSafeArray,serializedTask)	\
    ( (This)->lpVtbl -> ModifyScheduleTask(This,taskName,namespacesSafeArray,serializedTask) ) 

#define IFsrmReportScheduler_DeleteScheduleTask(This,taskName)	\
    ( (This)->lpVtbl -> DeleteScheduleTask(This,taskName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFsrmReportScheduler_INTERFACE_DEFINED__ */


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



