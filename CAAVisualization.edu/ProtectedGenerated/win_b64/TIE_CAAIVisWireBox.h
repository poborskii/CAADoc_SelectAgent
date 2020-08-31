#ifndef __TIE_CAAIVisWireBox
#define __TIE_CAAIVisWireBox

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIVisWireBox.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIVisWireBox */
#define declare_TIE_CAAIVisWireBox(classe) \
 \
 \
class TIECAAIVisWireBox##classe : public CAAIVisWireBox \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIVisWireBox, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetDimBox ( const float iDimBox ) ; \
      virtual HRESULT GetDimBox (float * oDimBox ) ; \
      virtual  HRESULT  SetCenterBox(const CATMathPoint & iCenter)  ; \
      virtual  HRESULT  GetCenterBox(CATMathPoint & oCenter) const  ; \
};



#define ENVTIEdeclare_CAAIVisWireBox(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetDimBox ( const float iDimBox ) ; \
virtual HRESULT GetDimBox (float * oDimBox ) ; \
virtual  HRESULT  SetCenterBox(const CATMathPoint & iCenter)  ; \
virtual  HRESULT  GetCenterBox(CATMathPoint & oCenter) const  ; \


#define ENVTIEdefine_CAAIVisWireBox(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetDimBox ( const float iDimBox )  \
{ \
return (ENVTIECALL(CAAIVisWireBox,ENVTIETypeLetter,ENVTIELetter)SetDimBox (iDimBox )); \
} \
HRESULT  ENVTIEName::GetDimBox (float * oDimBox )  \
{ \
return (ENVTIECALL(CAAIVisWireBox,ENVTIETypeLetter,ENVTIELetter)GetDimBox (oDimBox )); \
} \
HRESULT   ENVTIEName::SetCenterBox(const CATMathPoint & iCenter)   \
{ \
return (ENVTIECALL(CAAIVisWireBox,ENVTIETypeLetter,ENVTIELetter)SetCenterBox(iCenter)); \
} \
HRESULT   ENVTIEName::GetCenterBox(CATMathPoint & oCenter) const   \
{ \
return (ENVTIECALL(CAAIVisWireBox,ENVTIETypeLetter,ENVTIELetter)GetCenterBox(oCenter)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIVisWireBox(classe)    TIECAAIVisWireBox##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIVisWireBox(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIVisWireBox, classe) \
 \
 \
CATImplementTIEMethods(CAAIVisWireBox, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIVisWireBox, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIVisWireBox, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIVisWireBox, classe) \
 \
HRESULT  TIECAAIVisWireBox##classe::SetDimBox ( const float iDimBox )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimBox (iDimBox )); \
} \
HRESULT  TIECAAIVisWireBox##classe::GetDimBox (float * oDimBox )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimBox (oDimBox )); \
} \
HRESULT   TIECAAIVisWireBox##classe::SetCenterBox(const CATMathPoint & iCenter)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCenterBox(iCenter)); \
} \
HRESULT   TIECAAIVisWireBox##classe::GetCenterBox(CATMathPoint & oCenter) const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenterBox(oCenter)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIVisWireBox(classe) \
 \
 \
declare_TIE_CAAIVisWireBox(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisWireBox##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisWireBox,"CAAIVisWireBox",CAAIVisWireBox::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisWireBox(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIVisWireBox, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisWireBox##classe(classe::MetaObject(),CAAIVisWireBox::MetaObject(),(void *)CreateTIECAAIVisWireBox##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIVisWireBox(classe) \
 \
 \
declare_TIE_CAAIVisWireBox(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisWireBox##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisWireBox,"CAAIVisWireBox",CAAIVisWireBox::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisWireBox(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIVisWireBox, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisWireBox##classe(classe::MetaObject(),CAAIVisWireBox::MetaObject(),(void *)CreateTIECAAIVisWireBox##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIVisWireBox(classe) TIE_CAAIVisWireBox(classe)
#else
#define BOA_CAAIVisWireBox(classe) CATImplementBOA(CAAIVisWireBox, classe)
#endif

#endif
