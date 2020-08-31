#ifndef __TIE_CAAISysCircleCenterProperties
#define __TIE_CAAISysCircleCenterProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysCircleCenterProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysCircleCenterProperties */
#define declare_TIE_CAAISysCircleCenterProperties(classe) \
 \
 \
class TIECAAISysCircleCenterProperties##classe : public CAAISysCircleCenterProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysCircleCenterProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMarkerType(CAAISysCircleCenterProperties::MarkerType & oMarkerType )    ; \
      virtual HRESULT SetMarkerType(const CAAISysCircleCenterProperties::MarkerType iMarkerType) ; \
};



#define ENVTIEdeclare_CAAISysCircleCenterProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMarkerType(CAAISysCircleCenterProperties::MarkerType & oMarkerType )    ; \
virtual HRESULT SetMarkerType(const CAAISysCircleCenterProperties::MarkerType iMarkerType) ; \


#define ENVTIEdefine_CAAISysCircleCenterProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMarkerType(CAAISysCircleCenterProperties::MarkerType & oMarkerType )     \
{ \
return (ENVTIECALL(CAAISysCircleCenterProperties,ENVTIETypeLetter,ENVTIELetter)GetMarkerType(oMarkerType )); \
} \
HRESULT  ENVTIEName::SetMarkerType(const CAAISysCircleCenterProperties::MarkerType iMarkerType)  \
{ \
return (ENVTIECALL(CAAISysCircleCenterProperties,ENVTIETypeLetter,ENVTIELetter)SetMarkerType(iMarkerType)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysCircleCenterProperties(classe)    TIECAAISysCircleCenterProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysCircleCenterProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysCircleCenterProperties, classe) \
 \
 \
CATImplementTIEMethods(CAAISysCircleCenterProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysCircleCenterProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysCircleCenterProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysCircleCenterProperties, classe) \
 \
HRESULT  TIECAAISysCircleCenterProperties##classe::GetMarkerType(CAAISysCircleCenterProperties::MarkerType & oMarkerType )     \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerType(oMarkerType )); \
} \
HRESULT  TIECAAISysCircleCenterProperties##classe::SetMarkerType(const CAAISysCircleCenterProperties::MarkerType iMarkerType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerType(iMarkerType)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysCircleCenterProperties(classe) \
 \
 \
declare_TIE_CAAISysCircleCenterProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCircleCenterProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCircleCenterProperties,"CAAISysCircleCenterProperties",CAAISysCircleCenterProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCircleCenterProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysCircleCenterProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCircleCenterProperties##classe(classe::MetaObject(),CAAISysCircleCenterProperties::MetaObject(),(void *)CreateTIECAAISysCircleCenterProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysCircleCenterProperties(classe) \
 \
 \
declare_TIE_CAAISysCircleCenterProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCircleCenterProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCircleCenterProperties,"CAAISysCircleCenterProperties",CAAISysCircleCenterProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCircleCenterProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysCircleCenterProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCircleCenterProperties##classe(classe::MetaObject(),CAAISysCircleCenterProperties::MetaObject(),(void *)CreateTIECAAISysCircleCenterProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysCircleCenterProperties(classe) TIE_CAAISysCircleCenterProperties(classe)
#else
#define BOA_CAAISysCircleCenterProperties(classe) CATImplementBOA(CAAISysCircleCenterProperties, classe)
#endif

#endif
