#ifndef __TIE_CAAIVisModelSphere
#define __TIE_CAAIVisModelSphere

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIVisModelSphere.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIVisModelSphere */
#define declare_TIE_CAAIVisModelSphere(classe) \
 \
 \
class TIECAAIVisModelSphere##classe : public CAAIVisModelSphere \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIVisModelSphere, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT     SetCenter(const CATMathPointf & iCenter)  ; \
      virtual  HRESULT     GetCenter(CATMathPointf & oCenter) const  ; \
      virtual  HRESULT     SetRadius(const float iRadius)           ; \
      virtual  HRESULT     GetRadius(float & oRadius)        const  ; \
};



#define ENVTIEdeclare_CAAIVisModelSphere(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT     SetCenter(const CATMathPointf & iCenter)  ; \
virtual  HRESULT     GetCenter(CATMathPointf & oCenter) const  ; \
virtual  HRESULT     SetRadius(const float iRadius)           ; \
virtual  HRESULT     GetRadius(float & oRadius)        const  ; \


#define ENVTIEdefine_CAAIVisModelSphere(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT      ENVTIEName::SetCenter(const CATMathPointf & iCenter)   \
{ \
return (ENVTIECALL(CAAIVisModelSphere,ENVTIETypeLetter,ENVTIELetter)SetCenter(iCenter)); \
} \
HRESULT      ENVTIEName::GetCenter(CATMathPointf & oCenter) const   \
{ \
return (ENVTIECALL(CAAIVisModelSphere,ENVTIETypeLetter,ENVTIELetter)GetCenter(oCenter)); \
} \
HRESULT      ENVTIEName::SetRadius(const float iRadius)            \
{ \
return (ENVTIECALL(CAAIVisModelSphere,ENVTIETypeLetter,ENVTIELetter)SetRadius(iRadius)); \
} \
HRESULT      ENVTIEName::GetRadius(float & oRadius)        const   \
{ \
return (ENVTIECALL(CAAIVisModelSphere,ENVTIETypeLetter,ENVTIELetter)GetRadius(oRadius)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIVisModelSphere(classe)    TIECAAIVisModelSphere##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIVisModelSphere(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIVisModelSphere, classe) \
 \
 \
CATImplementTIEMethods(CAAIVisModelSphere, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIVisModelSphere, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIVisModelSphere, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIVisModelSphere, classe) \
 \
HRESULT      TIECAAIVisModelSphere##classe::SetCenter(const CATMathPointf & iCenter)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCenter(iCenter)); \
} \
HRESULT      TIECAAIVisModelSphere##classe::GetCenter(CATMathPointf & oCenter) const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenter(oCenter)); \
} \
HRESULT      TIECAAIVisModelSphere##classe::SetRadius(const float iRadius)            \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRadius(iRadius)); \
} \
HRESULT      TIECAAIVisModelSphere##classe::GetRadius(float & oRadius)        const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRadius(oRadius)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIVisModelSphere(classe) \
 \
 \
declare_TIE_CAAIVisModelSphere(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelSphere##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelSphere,"CAAIVisModelSphere",CAAIVisModelSphere::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelSphere(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIVisModelSphere, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelSphere##classe(classe::MetaObject(),CAAIVisModelSphere::MetaObject(),(void *)CreateTIECAAIVisModelSphere##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIVisModelSphere(classe) \
 \
 \
declare_TIE_CAAIVisModelSphere(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelSphere##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelSphere,"CAAIVisModelSphere",CAAIVisModelSphere::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelSphere(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIVisModelSphere, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelSphere##classe(classe::MetaObject(),CAAIVisModelSphere::MetaObject(),(void *)CreateTIECAAIVisModelSphere##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIVisModelSphere(classe) TIE_CAAIVisModelSphere(classe)
#else
#define BOA_CAAIVisModelSphere(classe) CATImplementBOA(CAAIVisModelSphere, classe)
#endif

#endif
