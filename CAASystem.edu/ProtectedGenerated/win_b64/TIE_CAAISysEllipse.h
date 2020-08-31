#ifndef __TIE_CAAISysEllipse
#define __TIE_CAAISysEllipse

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysEllipse.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysEllipse */
#define declare_TIE_CAAISysEllipse(classe) \
 \
 \
class TIECAAISysEllipse##classe : public CAAISysEllipse \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysEllipse, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT   SetCenter(const CATMathPoint & iCenter)  ; \
      virtual  HRESULT   GetCenter(CATMathPoint & oCenter)        const ; \
      virtual  HRESULT   SetRadius(const float iXRadius, const float iYRadius)           ; \
      virtual  HRESULT   GetRadius(float & oXRadius, float & oYRadius)               const ; \
      virtual  HRESULT   SetPlanar(const CATMathVector & iNormal, const CATMathVector & iAxis)   ; \
      virtual  HRESULT   GetPlanar(CATMathVector & oNormal , CATMathVector & oAxis)         const ; \
};



#define ENVTIEdeclare_CAAISysEllipse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT   SetCenter(const CATMathPoint & iCenter)  ; \
virtual  HRESULT   GetCenter(CATMathPoint & oCenter)        const ; \
virtual  HRESULT   SetRadius(const float iXRadius, const float iYRadius)           ; \
virtual  HRESULT   GetRadius(float & oXRadius, float & oYRadius)               const ; \
virtual  HRESULT   SetPlanar(const CATMathVector & iNormal, const CATMathVector & iAxis)   ; \
virtual  HRESULT   GetPlanar(CATMathVector & oNormal , CATMathVector & oAxis)         const ; \


#define ENVTIEdefine_CAAISysEllipse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::SetCenter(const CATMathPoint & iCenter)   \
{ \
return (ENVTIECALL(CAAISysEllipse,ENVTIETypeLetter,ENVTIELetter)SetCenter(iCenter)); \
} \
HRESULT    ENVTIEName::GetCenter(CATMathPoint & oCenter)        const  \
{ \
return (ENVTIECALL(CAAISysEllipse,ENVTIETypeLetter,ENVTIELetter)GetCenter(oCenter)); \
} \
HRESULT    ENVTIEName::SetRadius(const float iXRadius, const float iYRadius)            \
{ \
return (ENVTIECALL(CAAISysEllipse,ENVTIETypeLetter,ENVTIELetter)SetRadius(iXRadius,iYRadius)); \
} \
HRESULT    ENVTIEName::GetRadius(float & oXRadius, float & oYRadius)               const  \
{ \
return (ENVTIECALL(CAAISysEllipse,ENVTIETypeLetter,ENVTIELetter)GetRadius(oXRadius,oYRadius)); \
} \
HRESULT    ENVTIEName::SetPlanar(const CATMathVector & iNormal, const CATMathVector & iAxis)    \
{ \
return (ENVTIECALL(CAAISysEllipse,ENVTIETypeLetter,ENVTIELetter)SetPlanar(iNormal,iAxis)); \
} \
HRESULT    ENVTIEName::GetPlanar(CATMathVector & oNormal , CATMathVector & oAxis)         const  \
{ \
return (ENVTIECALL(CAAISysEllipse,ENVTIETypeLetter,ENVTIELetter)GetPlanar(oNormal ,oAxis)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysEllipse(classe)    TIECAAISysEllipse##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysEllipse(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysEllipse, classe) \
 \
 \
CATImplementTIEMethods(CAAISysEllipse, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysEllipse, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysEllipse, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysEllipse, classe) \
 \
HRESULT    TIECAAISysEllipse##classe::SetCenter(const CATMathPoint & iCenter)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCenter(iCenter)); \
} \
HRESULT    TIECAAISysEllipse##classe::GetCenter(CATMathPoint & oCenter)        const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenter(oCenter)); \
} \
HRESULT    TIECAAISysEllipse##classe::SetRadius(const float iXRadius, const float iYRadius)            \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRadius(iXRadius,iYRadius)); \
} \
HRESULT    TIECAAISysEllipse##classe::GetRadius(float & oXRadius, float & oYRadius)               const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRadius(oXRadius,oYRadius)); \
} \
HRESULT    TIECAAISysEllipse##classe::SetPlanar(const CATMathVector & iNormal, const CATMathVector & iAxis)    \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlanar(iNormal,iAxis)); \
} \
HRESULT    TIECAAISysEllipse##classe::GetPlanar(CATMathVector & oNormal , CATMathVector & oAxis)         const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlanar(oNormal ,oAxis)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysEllipse(classe) \
 \
 \
declare_TIE_CAAISysEllipse(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysEllipse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysEllipse,"CAAISysEllipse",CAAISysEllipse::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysEllipse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysEllipse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysEllipse##classe(classe::MetaObject(),CAAISysEllipse::MetaObject(),(void *)CreateTIECAAISysEllipse##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysEllipse(classe) \
 \
 \
declare_TIE_CAAISysEllipse(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysEllipse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysEllipse,"CAAISysEllipse",CAAISysEllipse::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysEllipse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysEllipse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysEllipse##classe(classe::MetaObject(),CAAISysEllipse::MetaObject(),(void *)CreateTIECAAISysEllipse##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysEllipse(classe) TIE_CAAISysEllipse(classe)
#else
#define BOA_CAAISysEllipse(classe) CATImplementBOA(CAAISysEllipse, classe)
#endif

#endif
