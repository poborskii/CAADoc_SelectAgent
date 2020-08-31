#ifndef __TIE_CAAISysCircle
#define __TIE_CAAISysCircle

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysCircle.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysCircle */
#define declare_TIE_CAAISysCircle(classe) \
 \
 \
class TIECAAISysCircle##classe : public CAAISysCircle \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysCircle, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT     SetCenter(const CATMathPoint & iCenter)  ; \
      virtual  HRESULT     GetCenter(CATMathPoint & oCenter) const  ; \
      virtual  HRESULT     SetRadius(const float iRadius)           ; \
      virtual  HRESULT     GetRadius(float & oRadius)        const  ; \
      virtual  HRESULT     SetPlanar(const CATMathVector & iNormal , const CATMathVector & iAxis)   ; \
      virtual  HRESULT     GetPlanar(CATMathVector & oNormal , CATMathVector & oAxis)  const  ; \
};



#define ENVTIEdeclare_CAAISysCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT     SetCenter(const CATMathPoint & iCenter)  ; \
virtual  HRESULT     GetCenter(CATMathPoint & oCenter) const  ; \
virtual  HRESULT     SetRadius(const float iRadius)           ; \
virtual  HRESULT     GetRadius(float & oRadius)        const  ; \
virtual  HRESULT     SetPlanar(const CATMathVector & iNormal , const CATMathVector & iAxis)   ; \
virtual  HRESULT     GetPlanar(CATMathVector & oNormal , CATMathVector & oAxis)  const  ; \


#define ENVTIEdefine_CAAISysCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT      ENVTIEName::SetCenter(const CATMathPoint & iCenter)   \
{ \
return (ENVTIECALL(CAAISysCircle,ENVTIETypeLetter,ENVTIELetter)SetCenter(iCenter)); \
} \
HRESULT      ENVTIEName::GetCenter(CATMathPoint & oCenter) const   \
{ \
return (ENVTIECALL(CAAISysCircle,ENVTIETypeLetter,ENVTIELetter)GetCenter(oCenter)); \
} \
HRESULT      ENVTIEName::SetRadius(const float iRadius)            \
{ \
return (ENVTIECALL(CAAISysCircle,ENVTIETypeLetter,ENVTIELetter)SetRadius(iRadius)); \
} \
HRESULT      ENVTIEName::GetRadius(float & oRadius)        const   \
{ \
return (ENVTIECALL(CAAISysCircle,ENVTIETypeLetter,ENVTIELetter)GetRadius(oRadius)); \
} \
HRESULT      ENVTIEName::SetPlanar(const CATMathVector & iNormal , const CATMathVector & iAxis)    \
{ \
return (ENVTIECALL(CAAISysCircle,ENVTIETypeLetter,ENVTIELetter)SetPlanar(iNormal ,iAxis)); \
} \
HRESULT      ENVTIEName::GetPlanar(CATMathVector & oNormal , CATMathVector & oAxis)  const   \
{ \
return (ENVTIECALL(CAAISysCircle,ENVTIETypeLetter,ENVTIELetter)GetPlanar(oNormal ,oAxis)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysCircle(classe)    TIECAAISysCircle##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysCircle(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysCircle, classe) \
 \
 \
CATImplementTIEMethods(CAAISysCircle, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysCircle, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysCircle, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysCircle, classe) \
 \
HRESULT      TIECAAISysCircle##classe::SetCenter(const CATMathPoint & iCenter)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCenter(iCenter)); \
} \
HRESULT      TIECAAISysCircle##classe::GetCenter(CATMathPoint & oCenter) const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenter(oCenter)); \
} \
HRESULT      TIECAAISysCircle##classe::SetRadius(const float iRadius)            \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRadius(iRadius)); \
} \
HRESULT      TIECAAISysCircle##classe::GetRadius(float & oRadius)        const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRadius(oRadius)); \
} \
HRESULT      TIECAAISysCircle##classe::SetPlanar(const CATMathVector & iNormal , const CATMathVector & iAxis)    \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlanar(iNormal ,iAxis)); \
} \
HRESULT      TIECAAISysCircle##classe::GetPlanar(CATMathVector & oNormal , CATMathVector & oAxis)  const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlanar(oNormal ,oAxis)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysCircle(classe) \
 \
 \
declare_TIE_CAAISysCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCircle,"CAAISysCircle",CAAISysCircle::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCircle##classe(classe::MetaObject(),CAAISysCircle::MetaObject(),(void *)CreateTIECAAISysCircle##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysCircle(classe) \
 \
 \
declare_TIE_CAAISysCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCircle,"CAAISysCircle",CAAISysCircle::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCircle##classe(classe::MetaObject(),CAAISysCircle::MetaObject(),(void *)CreateTIECAAISysCircle##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysCircle(classe) TIE_CAAISysCircle(classe)
#else
#define BOA_CAAISysCircle(classe) CATImplementBOA(CAAISysCircle, classe)
#endif

#endif
