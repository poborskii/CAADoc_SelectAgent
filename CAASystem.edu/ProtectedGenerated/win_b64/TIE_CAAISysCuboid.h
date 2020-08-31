#ifndef __TIE_CAAISysCuboid
#define __TIE_CAAISysCuboid

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysCuboid.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysCuboid */
#define declare_TIE_CAAISysCuboid(classe) \
 \
 \
class TIECAAISysCuboid##classe : public CAAISysCuboid \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysCuboid, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT     SetOrigin(const CATMathPoint & iOrigin) ; \
      virtual  HRESULT     GetOrigin(CATMathPoint & oOrigin) const ; \
      virtual  HRESULT     SetVectors (const CATMathVector & iV1, const CATMathVector & iV2, const CATMathVector & iV3) ; \
      virtual  HRESULT     GetVectors(CATMathVector & oV1, CATMathVector & oV2, CATMathVector & oV3)  const ; \
};



#define ENVTIEdeclare_CAAISysCuboid(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT     SetOrigin(const CATMathPoint & iOrigin) ; \
virtual  HRESULT     GetOrigin(CATMathPoint & oOrigin) const ; \
virtual  HRESULT     SetVectors (const CATMathVector & iV1, const CATMathVector & iV2, const CATMathVector & iV3) ; \
virtual  HRESULT     GetVectors(CATMathVector & oV1, CATMathVector & oV2, CATMathVector & oV3)  const ; \


#define ENVTIEdefine_CAAISysCuboid(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT      ENVTIEName::SetOrigin(const CATMathPoint & iOrigin)  \
{ \
return (ENVTIECALL(CAAISysCuboid,ENVTIETypeLetter,ENVTIELetter)SetOrigin(iOrigin)); \
} \
HRESULT      ENVTIEName::GetOrigin(CATMathPoint & oOrigin) const  \
{ \
return (ENVTIECALL(CAAISysCuboid,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT      ENVTIEName::SetVectors (const CATMathVector & iV1, const CATMathVector & iV2, const CATMathVector & iV3)  \
{ \
return (ENVTIECALL(CAAISysCuboid,ENVTIETypeLetter,ENVTIELetter)SetVectors (iV1,iV2,iV3)); \
} \
HRESULT      ENVTIEName::GetVectors(CATMathVector & oV1, CATMathVector & oV2, CATMathVector & oV3)  const  \
{ \
return (ENVTIECALL(CAAISysCuboid,ENVTIETypeLetter,ENVTIELetter)GetVectors(oV1,oV2,oV3)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysCuboid(classe)    TIECAAISysCuboid##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysCuboid(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysCuboid, classe) \
 \
 \
CATImplementTIEMethods(CAAISysCuboid, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysCuboid, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysCuboid, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysCuboid, classe) \
 \
HRESULT      TIECAAISysCuboid##classe::SetOrigin(const CATMathPoint & iOrigin)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrigin(iOrigin)); \
} \
HRESULT      TIECAAISysCuboid##classe::GetOrigin(CATMathPoint & oOrigin) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin)); \
} \
HRESULT      TIECAAISysCuboid##classe::SetVectors (const CATMathVector & iV1, const CATMathVector & iV2, const CATMathVector & iV3)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVectors (iV1,iV2,iV3)); \
} \
HRESULT      TIECAAISysCuboid##classe::GetVectors(CATMathVector & oV1, CATMathVector & oV2, CATMathVector & oV3)  const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVectors(oV1,oV2,oV3)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysCuboid(classe) \
 \
 \
declare_TIE_CAAISysCuboid(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCuboid##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCuboid,"CAAISysCuboid",CAAISysCuboid::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCuboid(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysCuboid, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCuboid##classe(classe::MetaObject(),CAAISysCuboid::MetaObject(),(void *)CreateTIECAAISysCuboid##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysCuboid(classe) \
 \
 \
declare_TIE_CAAISysCuboid(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCuboid##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCuboid,"CAAISysCuboid",CAAISysCuboid::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCuboid(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysCuboid, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCuboid##classe(classe::MetaObject(),CAAISysCuboid::MetaObject(),(void *)CreateTIECAAISysCuboid##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysCuboid(classe) TIE_CAAISysCuboid(classe)
#else
#define BOA_CAAISysCuboid(classe) CATImplementBOA(CAAISysCuboid, classe)
#endif

#endif
