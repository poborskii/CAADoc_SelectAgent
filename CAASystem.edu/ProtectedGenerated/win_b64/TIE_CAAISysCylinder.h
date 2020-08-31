#ifndef __TIE_CAAISysCylinder
#define __TIE_CAAISysCylinder

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysCylinder.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysCylinder */
#define declare_TIE_CAAISysCylinder(classe) \
 \
 \
class TIECAAISysCylinder##classe : public CAAISysCylinder \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysCylinder, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT     SetRadius(const float iRadius) ; \
      virtual  HRESULT     GetRadius(float & oRadius) const ; \
      virtual  HRESULT     SetBasePoint(const CATMathPoint & iBasePoint ) ; \
      virtual  HRESULT     GetBasePoint(CATMathPoint & oBasePoint )   const ; \
      virtual  HRESULT     SetTopPoint(const CATMathPoint & iTopPoint ) ; \
      virtual  HRESULT     GetTopPoint(CATMathPoint & oTopPoint )   const ; \
};



#define ENVTIEdeclare_CAAISysCylinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT     SetRadius(const float iRadius) ; \
virtual  HRESULT     GetRadius(float & oRadius) const ; \
virtual  HRESULT     SetBasePoint(const CATMathPoint & iBasePoint ) ; \
virtual  HRESULT     GetBasePoint(CATMathPoint & oBasePoint )   const ; \
virtual  HRESULT     SetTopPoint(const CATMathPoint & iTopPoint ) ; \
virtual  HRESULT     GetTopPoint(CATMathPoint & oTopPoint )   const ; \


#define ENVTIEdefine_CAAISysCylinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT      ENVTIEName::SetRadius(const float iRadius)  \
{ \
return (ENVTIECALL(CAAISysCylinder,ENVTIETypeLetter,ENVTIELetter)SetRadius(iRadius)); \
} \
HRESULT      ENVTIEName::GetRadius(float & oRadius) const  \
{ \
return (ENVTIECALL(CAAISysCylinder,ENVTIETypeLetter,ENVTIELetter)GetRadius(oRadius)); \
} \
HRESULT      ENVTIEName::SetBasePoint(const CATMathPoint & iBasePoint )  \
{ \
return (ENVTIECALL(CAAISysCylinder,ENVTIETypeLetter,ENVTIELetter)SetBasePoint(iBasePoint )); \
} \
HRESULT      ENVTIEName::GetBasePoint(CATMathPoint & oBasePoint )   const  \
{ \
return (ENVTIECALL(CAAISysCylinder,ENVTIETypeLetter,ENVTIELetter)GetBasePoint(oBasePoint )); \
} \
HRESULT      ENVTIEName::SetTopPoint(const CATMathPoint & iTopPoint )  \
{ \
return (ENVTIECALL(CAAISysCylinder,ENVTIETypeLetter,ENVTIELetter)SetTopPoint(iTopPoint )); \
} \
HRESULT      ENVTIEName::GetTopPoint(CATMathPoint & oTopPoint )   const  \
{ \
return (ENVTIECALL(CAAISysCylinder,ENVTIETypeLetter,ENVTIELetter)GetTopPoint(oTopPoint )); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysCylinder(classe)    TIECAAISysCylinder##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysCylinder(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysCylinder, classe) \
 \
 \
CATImplementTIEMethods(CAAISysCylinder, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysCylinder, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysCylinder, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysCylinder, classe) \
 \
HRESULT      TIECAAISysCylinder##classe::SetRadius(const float iRadius)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRadius(iRadius)); \
} \
HRESULT      TIECAAISysCylinder##classe::GetRadius(float & oRadius) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRadius(oRadius)); \
} \
HRESULT      TIECAAISysCylinder##classe::SetBasePoint(const CATMathPoint & iBasePoint )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBasePoint(iBasePoint )); \
} \
HRESULT      TIECAAISysCylinder##classe::GetBasePoint(CATMathPoint & oBasePoint )   const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBasePoint(oBasePoint )); \
} \
HRESULT      TIECAAISysCylinder##classe::SetTopPoint(const CATMathPoint & iTopPoint )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTopPoint(iTopPoint )); \
} \
HRESULT      TIECAAISysCylinder##classe::GetTopPoint(CATMathPoint & oTopPoint )   const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTopPoint(oTopPoint )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysCylinder(classe) \
 \
 \
declare_TIE_CAAISysCylinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCylinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCylinder,"CAAISysCylinder",CAAISysCylinder::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCylinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysCylinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCylinder##classe(classe::MetaObject(),CAAISysCylinder::MetaObject(),(void *)CreateTIECAAISysCylinder##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysCylinder(classe) \
 \
 \
declare_TIE_CAAISysCylinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCylinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCylinder,"CAAISysCylinder",CAAISysCylinder::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCylinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysCylinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCylinder##classe(classe::MetaObject(),CAAISysCylinder::MetaObject(),(void *)CreateTIECAAISysCylinder##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysCylinder(classe) TIE_CAAISysCylinder(classe)
#else
#define BOA_CAAISysCylinder(classe) CATImplementBOA(CAAISysCylinder, classe)
#endif

#endif
