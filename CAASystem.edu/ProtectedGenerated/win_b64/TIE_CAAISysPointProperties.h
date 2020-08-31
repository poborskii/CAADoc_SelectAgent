#ifndef __TIE_CAAISysPointProperties
#define __TIE_CAAISysPointProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysPointProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysPointProperties */
#define declare_TIE_CAAISysPointProperties(classe) \
 \
 \
class TIECAAISysPointProperties##classe : public CAAISysPointProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysPointProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMarkerType(CAAISysPointProperties::MarkerType & oMarkerType )    ; \
      virtual HRESULT SetMarkerType(const CAAISysPointProperties::MarkerType iMarkerType) ; \
};



#define ENVTIEdeclare_CAAISysPointProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMarkerType(CAAISysPointProperties::MarkerType & oMarkerType )    ; \
virtual HRESULT SetMarkerType(const CAAISysPointProperties::MarkerType iMarkerType) ; \


#define ENVTIEdefine_CAAISysPointProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMarkerType(CAAISysPointProperties::MarkerType & oMarkerType )     \
{ \
return (ENVTIECALL(CAAISysPointProperties,ENVTIETypeLetter,ENVTIELetter)GetMarkerType(oMarkerType )); \
} \
HRESULT  ENVTIEName::SetMarkerType(const CAAISysPointProperties::MarkerType iMarkerType)  \
{ \
return (ENVTIECALL(CAAISysPointProperties,ENVTIETypeLetter,ENVTIELetter)SetMarkerType(iMarkerType)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysPointProperties(classe)    TIECAAISysPointProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysPointProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysPointProperties, classe) \
 \
 \
CATImplementTIEMethods(CAAISysPointProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysPointProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysPointProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysPointProperties, classe) \
 \
HRESULT  TIECAAISysPointProperties##classe::GetMarkerType(CAAISysPointProperties::MarkerType & oMarkerType )     \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerType(oMarkerType )); \
} \
HRESULT  TIECAAISysPointProperties##classe::SetMarkerType(const CAAISysPointProperties::MarkerType iMarkerType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerType(iMarkerType)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysPointProperties(classe) \
 \
 \
declare_TIE_CAAISysPointProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysPointProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysPointProperties,"CAAISysPointProperties",CAAISysPointProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysPointProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysPointProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysPointProperties##classe(classe::MetaObject(),CAAISysPointProperties::MetaObject(),(void *)CreateTIECAAISysPointProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysPointProperties(classe) \
 \
 \
declare_TIE_CAAISysPointProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysPointProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysPointProperties,"CAAISysPointProperties",CAAISysPointProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysPointProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysPointProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysPointProperties##classe(classe::MetaObject(),CAAISysPointProperties::MetaObject(),(void *)CreateTIECAAISysPointProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysPointProperties(classe) TIE_CAAISysPointProperties(classe)
#else
#define BOA_CAAISysPointProperties(classe) CATImplementBOA(CAAISysPointProperties, classe)
#endif

#endif
