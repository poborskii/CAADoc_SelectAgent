#ifndef __TIE_CAAISysPolyline
#define __TIE_CAAISysPolyline

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysPolyline.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysPolyline */
#define declare_TIE_CAAISysPolyline(classe) \
 \
 \
class TIECAAISysPolyline##classe : public CAAISysPolyline \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysPolyline, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetListPoint ( const int iPointCount, CATMathPoint *  iList ) ; \
      virtual HRESULT GetListPoint ( int * oPointCount    , CATMathPoint ** oList ) ; \
      virtual HRESULT SetCloseStatus ( const int iIsClosed ) ; \
      virtual HRESULT GetCloseStatus (int * oIsClosed ) ; \
};



#define ENVTIEdeclare_CAAISysPolyline(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetListPoint ( const int iPointCount, CATMathPoint *  iList ) ; \
virtual HRESULT GetListPoint ( int * oPointCount    , CATMathPoint ** oList ) ; \
virtual HRESULT SetCloseStatus ( const int iIsClosed ) ; \
virtual HRESULT GetCloseStatus (int * oIsClosed ) ; \


#define ENVTIEdefine_CAAISysPolyline(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetListPoint ( const int iPointCount, CATMathPoint *  iList )  \
{ \
return (ENVTIECALL(CAAISysPolyline,ENVTIETypeLetter,ENVTIELetter)SetListPoint (iPointCount,iList )); \
} \
HRESULT  ENVTIEName::GetListPoint ( int * oPointCount    , CATMathPoint ** oList )  \
{ \
return (ENVTIECALL(CAAISysPolyline,ENVTIETypeLetter,ENVTIELetter)GetListPoint (oPointCount    ,oList )); \
} \
HRESULT  ENVTIEName::SetCloseStatus ( const int iIsClosed )  \
{ \
return (ENVTIECALL(CAAISysPolyline,ENVTIETypeLetter,ENVTIELetter)SetCloseStatus (iIsClosed )); \
} \
HRESULT  ENVTIEName::GetCloseStatus (int * oIsClosed )  \
{ \
return (ENVTIECALL(CAAISysPolyline,ENVTIETypeLetter,ENVTIELetter)GetCloseStatus (oIsClosed )); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysPolyline(classe)    TIECAAISysPolyline##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysPolyline(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysPolyline, classe) \
 \
 \
CATImplementTIEMethods(CAAISysPolyline, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysPolyline, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysPolyline, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysPolyline, classe) \
 \
HRESULT  TIECAAISysPolyline##classe::SetListPoint ( const int iPointCount, CATMathPoint *  iList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetListPoint (iPointCount,iList )); \
} \
HRESULT  TIECAAISysPolyline##classe::GetListPoint ( int * oPointCount    , CATMathPoint ** oList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListPoint (oPointCount    ,oList )); \
} \
HRESULT  TIECAAISysPolyline##classe::SetCloseStatus ( const int iIsClosed )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCloseStatus (iIsClosed )); \
} \
HRESULT  TIECAAISysPolyline##classe::GetCloseStatus (int * oIsClosed )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCloseStatus (oIsClosed )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysPolyline(classe) \
 \
 \
declare_TIE_CAAISysPolyline(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysPolyline##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysPolyline,"CAAISysPolyline",CAAISysPolyline::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysPolyline(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysPolyline, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysPolyline##classe(classe::MetaObject(),CAAISysPolyline::MetaObject(),(void *)CreateTIECAAISysPolyline##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysPolyline(classe) \
 \
 \
declare_TIE_CAAISysPolyline(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysPolyline##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysPolyline,"CAAISysPolyline",CAAISysPolyline::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysPolyline(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysPolyline, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysPolyline##classe(classe::MetaObject(),CAAISysPolyline::MetaObject(),(void *)CreateTIECAAISysPolyline##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysPolyline(classe) TIE_CAAISysPolyline(classe)
#else
#define BOA_CAAISysPolyline(classe) CATImplementBOA(CAAISysPolyline, classe)
#endif

#endif
