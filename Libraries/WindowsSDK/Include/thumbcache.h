

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for thumbcache.idl:
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

#ifndef __thumbcache_h__
#define __thumbcache_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISharedBitmap_FWD_DEFINED__
#define __ISharedBitmap_FWD_DEFINED__
typedef interface ISharedBitmap ISharedBitmap;
#endif 	/* __ISharedBitmap_FWD_DEFINED__ */


#ifndef __IThumbnailCache_FWD_DEFINED__
#define __IThumbnailCache_FWD_DEFINED__
typedef interface IThumbnailCache IThumbnailCache;
#endif 	/* __IThumbnailCache_FWD_DEFINED__ */


#ifndef __IThumbnailProvider_FWD_DEFINED__
#define __IThumbnailProvider_FWD_DEFINED__
typedef interface IThumbnailProvider IThumbnailProvider;
#endif 	/* __IThumbnailProvider_FWD_DEFINED__ */


#ifndef __LocalThumbnailCache_FWD_DEFINED__
#define __LocalThumbnailCache_FWD_DEFINED__

#ifdef __cplusplus
typedef class LocalThumbnailCache LocalThumbnailCache;
#else
typedef struct LocalThumbnailCache LocalThumbnailCache;
#endif /* __cplusplus */

#endif 	/* __LocalThumbnailCache_FWD_DEFINED__ */


#ifndef __SharedBitmap_FWD_DEFINED__
#define __SharedBitmap_FWD_DEFINED__

#ifdef __cplusplus
typedef class SharedBitmap SharedBitmap;
#else
typedef struct SharedBitmap SharedBitmap;
#endif /* __cplusplus */

#endif 	/* __SharedBitmap_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "shtypes.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_thumbcache_0000_0000 */
/* [local] */ 


enum __MIDL___MIDL_itf_thumbcache_0000_0000_0001
    {	WTS_EXTRACT	= 0,
	WTS_INCACHEONLY	= 0x1,
	WTS_FASTEXTRACT	= 0x2,
	WTS_FORCEEXTRACTION	= 0x4,
	WTS_SLOWRECLAIM	= 0x8,
	WTS_EXTRACTDONOTCACHE	= 0x20
    } ;
typedef DWORD WTS_FLAGS;


enum __MIDL___MIDL_itf_thumbcache_0000_0000_0002
    {	WTS_LOWQUALITY	= 0x1,
	WTS_CACHED	= 0x2
    } ;
typedef DWORD WTS_CACHEFLAGS;


enum __MIDL___MIDL_itf_thumbcache_0000_0000_0003
    {	WTSAT_UNKNOWN	= 0,
	WTSAT_RGB	= 0x1,
	WTSAT_ARGB	= 0x2
    } ;
typedef DWORD WTS_ALPHATYPE;

typedef struct tagTHUMBNAILID
    {
    BYTE rgbKey[ 16 ];
    } 	WTS_THUMBNAILID;

#define WTS_E_FAILEDEXTRACTION MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xB200)


extern RPC_IF_HANDLE __MIDL_itf_thumbcache_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_thumbcache_0000_0000_v0_0_s_ifspec;

#ifndef __ISharedBitmap_INTERFACE_DEFINED__
#define __ISharedBitmap_INTERFACE_DEFINED__

/* interface ISharedBitmap */
/* [object][unique][uuid][helpstring] */ 


EXTERN_C const IID IID_ISharedBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("091162a4-bc96-411f-aae8-c5122cd03363")
    ISharedBitmap : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSharedBitmap( 
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ __RPC__out SIZE *pSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFormat( 
            /* [out] */ __RPC__out WTS_ALPHATYPE *pat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeBitmap( 
            /* [in] */ __RPC__in HBITMAP hbm,
            /* [in] */ WTS_ALPHATYPE wtsAT) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Detach( 
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISharedBitmapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISharedBitmap * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISharedBitmap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISharedBitmap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSharedBitmap )( 
            ISharedBitmap * This,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            ISharedBitmap * This,
            /* [out] */ __RPC__out SIZE *pSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormat )( 
            ISharedBitmap * This,
            /* [out] */ __RPC__out WTS_ALPHATYPE *pat);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeBitmap )( 
            ISharedBitmap * This,
            /* [in] */ __RPC__in HBITMAP hbm,
            /* [in] */ WTS_ALPHATYPE wtsAT);
        
        HRESULT ( STDMETHODCALLTYPE *Detach )( 
            ISharedBitmap * This,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm);
        
        END_INTERFACE
    } ISharedBitmapVtbl;

    interface ISharedBitmap
    {
        CONST_VTBL struct ISharedBitmapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISharedBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISharedBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISharedBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISharedBitmap_GetSharedBitmap(This,phbm)	\
    ( (This)->lpVtbl -> GetSharedBitmap(This,phbm) ) 

#define ISharedBitmap_GetSize(This,pSize)	\
    ( (This)->lpVtbl -> GetSize(This,pSize) ) 

#define ISharedBitmap_GetFormat(This,pat)	\
    ( (This)->lpVtbl -> GetFormat(This,pat) ) 

#define ISharedBitmap_InitializeBitmap(This,hbm,wtsAT)	\
    ( (This)->lpVtbl -> InitializeBitmap(This,hbm,wtsAT) ) 

#define ISharedBitmap_Detach(This,phbm)	\
    ( (This)->lpVtbl -> Detach(This,phbm) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISharedBitmap_INTERFACE_DEFINED__ */


#ifndef __IThumbnailCache_INTERFACE_DEFINED__
#define __IThumbnailCache_INTERFACE_DEFINED__

/* interface IThumbnailCache */
/* [uuid][object][helpstring] */ 


EXTERN_C const IID IID_IThumbnailCache;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F676C15D-596A-4ce2-8234-33996F445DB1")
    IThumbnailCache : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetThumbnail( 
            /* [in] */ __RPC__in_opt IShellItem *pShellItem,
            UINT cxyRequestedThumbSize,
            WTS_FLAGS flags,
            /* [out] */ __RPC__deref_out_opt ISharedBitmap **ppvThumb,
            /* [unique][out][in] */ __RPC__inout_opt WTS_CACHEFLAGS *pOutFlags,
            /* [unique][out][in] */ __RPC__inout_opt WTS_THUMBNAILID *pThumbnailID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThumbnailByID( 
            WTS_THUMBNAILID thumbnailID,
            UINT cxyRequestedThumbSize,
            /* [out] */ __RPC__deref_out_opt ISharedBitmap **ppvThumb,
            /* [unique][out][in] */ __RPC__inout_opt WTS_CACHEFLAGS *pOutFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IThumbnailCacheVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThumbnailCache * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThumbnailCache * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThumbnailCache * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )( 
            IThumbnailCache * This,
            /* [in] */ __RPC__in_opt IShellItem *pShellItem,
            UINT cxyRequestedThumbSize,
            WTS_FLAGS flags,
            /* [out] */ __RPC__deref_out_opt ISharedBitmap **ppvThumb,
            /* [unique][out][in] */ __RPC__inout_opt WTS_CACHEFLAGS *pOutFlags,
            /* [unique][out][in] */ __RPC__inout_opt WTS_THUMBNAILID *pThumbnailID);
        
        HRESULT ( STDMETHODCALLTYPE *GetThumbnailByID )( 
            IThumbnailCache * This,
            WTS_THUMBNAILID thumbnailID,
            UINT cxyRequestedThumbSize,
            /* [out] */ __RPC__deref_out_opt ISharedBitmap **ppvThumb,
            /* [unique][out][in] */ __RPC__inout_opt WTS_CACHEFLAGS *pOutFlags);
        
        END_INTERFACE
    } IThumbnailCacheVtbl;

    interface IThumbnailCache
    {
        CONST_VTBL struct IThumbnailCacheVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThumbnailCache_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThumbnailCache_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThumbnailCache_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThumbnailCache_GetThumbnail(This,pShellItem,cxyRequestedThumbSize,flags,ppvThumb,pOutFlags,pThumbnailID)	\
    ( (This)->lpVtbl -> GetThumbnail(This,pShellItem,cxyRequestedThumbSize,flags,ppvThumb,pOutFlags,pThumbnailID) ) 

#define IThumbnailCache_GetThumbnailByID(This,thumbnailID,cxyRequestedThumbSize,ppvThumb,pOutFlags)	\
    ( (This)->lpVtbl -> GetThumbnailByID(This,thumbnailID,cxyRequestedThumbSize,ppvThumb,pOutFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThumbnailCache_INTERFACE_DEFINED__ */


#ifndef __IThumbnailProvider_INTERFACE_DEFINED__
#define __IThumbnailProvider_INTERFACE_DEFINED__

/* interface IThumbnailProvider */
/* [object][uuid] */ 


EXTERN_C const IID IID_IThumbnailProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e357fccd-a995-4576-b01f-234630154e96")
    IThumbnailProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetThumbnail( 
            /* [in] */ UINT cx,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbmp,
            /* [out] */ __RPC__out WTS_ALPHATYPE *pdwAlpha) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IThumbnailProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThumbnailProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThumbnailProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThumbnailProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetThumbnail )( 
            IThumbnailProvider * This,
            /* [in] */ UINT cx,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbmp,
            /* [out] */ __RPC__out WTS_ALPHATYPE *pdwAlpha);
        
        END_INTERFACE
    } IThumbnailProviderVtbl;

    interface IThumbnailProvider
    {
        CONST_VTBL struct IThumbnailProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThumbnailProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThumbnailProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThumbnailProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThumbnailProvider_GetThumbnail(This,cx,phbmp,pdwAlpha)	\
    ( (This)->lpVtbl -> GetThumbnail(This,cx,phbmp,pdwAlpha) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThumbnailProvider_INTERFACE_DEFINED__ */



#ifndef __ThumbCacheLib_LIBRARY_DEFINED__
#define __ThumbCacheLib_LIBRARY_DEFINED__

/* library ThumbCacheLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ThumbCacheLib;

EXTERN_C const CLSID CLSID_LocalThumbnailCache;

#ifdef __cplusplus

class DECLSPEC_UUID("50EF4544-AC9F-4A8E-B21B-8A26180DB13F")
LocalThumbnailCache;
#endif

EXTERN_C const CLSID CLSID_SharedBitmap;

#ifdef __cplusplus

class DECLSPEC_UUID("4db26476-6787-4046-b836-e8412a9e8a27")
SharedBitmap;
#endif
#endif /* __ThumbCacheLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HBITMAP_UserSize(     unsigned long *, unsigned long            , HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal(  unsigned long *, unsigned char *, HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree(     unsigned long *, HBITMAP * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize64(     unsigned long *, unsigned long            , HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal64(  unsigned long *, unsigned char *, HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal64(unsigned long *, unsigned char *, HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree64(     unsigned long *, HBITMAP * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



