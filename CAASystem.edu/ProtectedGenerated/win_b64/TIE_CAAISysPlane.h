#ifndef __TIE_CAAISysPlane
#define __TIE_CAAISysPlane

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysPlane.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysPlane */
#define declare_TIE_CAAISysPlane(classe) \
 \
 \
class TIECAAISysPlane##classe : public CAAISysPlane \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysPlane, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT     SetOrigin(const CATMathPoint & iOrigin) ; \
      virtual  HRESULT     GetOrigin(CATMathPoint & oOrigin) const ; \
      virtual  HRESULT     SetPlane (const CATMathVector & iU, const CATMathVector & iV) ; \
      virtual  HRESULT     GetPlane (CATMathVector & iU, CATMathVector & iV)  const ; \
};



#define ENVTIEdeclare_CAAISysPlane(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT     SetOrigin(const CATMathPoint & iOrigin) ; \
virtual  HRESULT     GetOrigin(CATMathPoint & oOrigin) const ; \
virtual  HRESULT     SetPlane (const CATMathVector & iU, const CATMathVector & iV) ; \
virtual  HRESULT     GetPlane (CATMathVector & iU, CATMathVector & iV)  const ; \


#define ENVTIEdefine_CAAISysPlane(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT      ENVTIEName::SetOrigin(const CATMathPoint & iOrigin)  \
{ \
return (ENVTIECALL(CAAISysPlane,ENVTIETypeLetter,ENVTIELetter)SetOrigin(iOrigin)); \
} \
HRESULT      ENVTIEName::GetOrigin(CATMathPoint & oOrigin) const  \
{ \
return (ENVTIECALL(CAAISysPlane,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT      ENVTIEName::SetPlane (const CATMathVector & iU, const CATMathVector & iV)  \
{ \
return (ENVTIECALL(CAAISysPlane,ENVTIETypeLetter,ENVTIELetter)SetPlane (iU,iV)); \
} \
HRESULT      ENVTIEName::GetPlane (CATMathVector & iU, CATMathVector & iV)  const  \
{ \
return (ENVTIECALL(CAAISysPlane,ENVTIETypeLetter,ENVTIELetter)GetPlane (iU,iV)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysPlane(classe)    TIECAAISysPlane##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysPlane(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysPlane, classe) \
 \
 \
CATImplementTIEMethods(CAAISysPlane, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysPlane, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysPlane, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysPlane, classe) \
 \
HRESULT      TIECAAISysPlane##classe::SetOrigin(const CATMathPoint & iOrigin)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrigin(iOrigin)); \
} \
HRESULT      TIECAAISysPlane##classe::GetOrigin(CATMathPoint & oOrigin) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin)); \
} \
HRESULT      TIECAAISysPlane##classe::SetPlane (const CATMathVector & iU, const CATMathVector & iV)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlane (iU,iV)); \
} \
HRESULT      TIECAAISysPlane##classe::GetPlane (CATMathVector & iU, CATMathVector & iV)  const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlane (iU,iV)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysPlane(classe) \
 \
 \
declare_TIE_CAAISysPlane(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysPlane##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysPlane,"CAAISysPlane",CAAISysPlane::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysPlane(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysPlane, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysPlane##classe(classe::MetaObject(),CAAISysPlane::MetaObject(),(void *)CreateTIECAAISysPlane##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysPlane(classe) \
 \
 \
declare_TIE_CAAISysPlane(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysPlane##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysPlane,"CAAISysPlane",CAAISysPlane::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysPlane(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysPlane, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysPlane##classe(classe::MetaObject(),CAAISysPlane::MetaObject(),(void *)CreateTIECAAISysPlane##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysPlane(classe) TIE_CAAISysPlane(classe)
#else
#define BOA_CAAISysPlane(classe) CATImplementBOA(CAAISysPlane, classe)
#endif

#endif
