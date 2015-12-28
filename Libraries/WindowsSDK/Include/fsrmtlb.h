

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for fsrmtlb.idl:
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


#ifndef __fsrmtlb_h__
#define __fsrmtlb_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __FsrmSetting_FWD_DEFINED__
#define __FsrmSetting_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmSetting FsrmSetting;
#else
typedef struct FsrmSetting FsrmSetting;
#endif /* __cplusplus */

#endif 	/* __FsrmSetting_FWD_DEFINED__ */


#ifndef __FsrmPathMapper_FWD_DEFINED__
#define __FsrmPathMapper_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmPathMapper FsrmPathMapper;
#else
typedef struct FsrmPathMapper FsrmPathMapper;
#endif /* __cplusplus */

#endif 	/* __FsrmPathMapper_FWD_DEFINED__ */


#ifndef __FsrmExportImport_FWD_DEFINED__
#define __FsrmExportImport_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmExportImport FsrmExportImport;
#else
typedef struct FsrmExportImport FsrmExportImport;
#endif /* __cplusplus */

#endif 	/* __FsrmExportImport_FWD_DEFINED__ */


#ifndef __FsrmQuotaManager_FWD_DEFINED__
#define __FsrmQuotaManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmQuotaManager FsrmQuotaManager;
#else
typedef struct FsrmQuotaManager FsrmQuotaManager;
#endif /* __cplusplus */

#endif 	/* __FsrmQuotaManager_FWD_DEFINED__ */


#ifndef __FsrmQuotaTemplateManager_FWD_DEFINED__
#define __FsrmQuotaTemplateManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmQuotaTemplateManager FsrmQuotaTemplateManager;
#else
typedef struct FsrmQuotaTemplateManager FsrmQuotaTemplateManager;
#endif /* __cplusplus */

#endif 	/* __FsrmQuotaTemplateManager_FWD_DEFINED__ */


#ifndef __FsrmFileGroupManager_FWD_DEFINED__
#define __FsrmFileGroupManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmFileGroupManager FsrmFileGroupManager;
#else
typedef struct FsrmFileGroupManager FsrmFileGroupManager;
#endif /* __cplusplus */

#endif 	/* __FsrmFileGroupManager_FWD_DEFINED__ */


#ifndef __FsrmFileScreenManager_FWD_DEFINED__
#define __FsrmFileScreenManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmFileScreenManager FsrmFileScreenManager;
#else
typedef struct FsrmFileScreenManager FsrmFileScreenManager;
#endif /* __cplusplus */

#endif 	/* __FsrmFileScreenManager_FWD_DEFINED__ */


#ifndef __FsrmFileScreenTemplateManager_FWD_DEFINED__
#define __FsrmFileScreenTemplateManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmFileScreenTemplateManager FsrmFileScreenTemplateManager;
#else
typedef struct FsrmFileScreenTemplateManager FsrmFileScreenTemplateManager;
#endif /* __cplusplus */

#endif 	/* __FsrmFileScreenTemplateManager_FWD_DEFINED__ */


#ifndef __FsrmReportManager_FWD_DEFINED__
#define __FsrmReportManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmReportManager FsrmReportManager;
#else
typedef struct FsrmReportManager FsrmReportManager;
#endif /* __cplusplus */

#endif 	/* __FsrmReportManager_FWD_DEFINED__ */


#ifndef __FsrmReportScheduler_FWD_DEFINED__
#define __FsrmReportScheduler_FWD_DEFINED__

#ifdef __cplusplus
typedef class FsrmReportScheduler FsrmReportScheduler;
#else
typedef struct FsrmReportScheduler FsrmReportScheduler;
#endif /* __cplusplus */

#endif 	/* __FsrmReportScheduler_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "fsrmenums.h"
#include "fsrm.h"
#include "fsrmquota.h"
#include "fsrmscreen.h"
#include "fsrmreports.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __FsrmLib_LIBRARY_DEFINED__
#define __FsrmLib_LIBRARY_DEFINED__

/* library FsrmLib */
/* [helpstring][version][uuid] */ 


































EXTERN_C const IID LIBID_FsrmLib;

EXTERN_C const CLSID CLSID_FsrmSetting;

#ifdef __cplusplus

class DECLSPEC_UUID("f556d708-6d4d-4594-9c61-7dbb0dae2a46")
FsrmSetting;
#endif

EXTERN_C const CLSID CLSID_FsrmPathMapper;

#ifdef __cplusplus

class DECLSPEC_UUID("f3be42bd-8ac2-409e-bbd8-faf9b6b41feb")
FsrmPathMapper;
#endif

EXTERN_C const CLSID CLSID_FsrmExportImport;

#ifdef __cplusplus

class DECLSPEC_UUID("1482dc37-fae9-4787-9025-8ce4e024ab56")
FsrmExportImport;
#endif

EXTERN_C const CLSID CLSID_FsrmQuotaManager;

#ifdef __cplusplus

class DECLSPEC_UUID("90dcab7f-347c-4bfc-b543-540326305fbe")
FsrmQuotaManager;
#endif

EXTERN_C const CLSID CLSID_FsrmQuotaTemplateManager;

#ifdef __cplusplus

class DECLSPEC_UUID("97d3d443-251c-4337-81e7-b32e8f4ee65e")
FsrmQuotaTemplateManager;
#endif

EXTERN_C const CLSID CLSID_FsrmFileGroupManager;

#ifdef __cplusplus

class DECLSPEC_UUID("8f1363f6-656f-4496-9226-13aecbd7718f")
FsrmFileGroupManager;
#endif

EXTERN_C const CLSID CLSID_FsrmFileScreenManager;

#ifdef __cplusplus

class DECLSPEC_UUID("95941183-db53-4c5f-b37b-7d0921cf9dc7")
FsrmFileScreenManager;
#endif

EXTERN_C const CLSID CLSID_FsrmFileScreenTemplateManager;

#ifdef __cplusplus

class DECLSPEC_UUID("243111df-e474-46aa-a054-eaa33edc292a")
FsrmFileScreenTemplateManager;
#endif

EXTERN_C const CLSID CLSID_FsrmReportManager;

#ifdef __cplusplus

class DECLSPEC_UUID("0058ef37-aa66-4c48-bd5b-2fce432ab0c8")
FsrmReportManager;
#endif

EXTERN_C const CLSID CLSID_FsrmReportScheduler;

#ifdef __cplusplus

class DECLSPEC_UUID("ea25f1b8-1b8d-4290-8ee8-e17c12c2fe20")
FsrmReportScheduler;
#endif
#endif /* __FsrmLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



