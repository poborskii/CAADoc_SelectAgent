#ifndef __TIE_CAAISysTextureProperties
#define __TIE_CAAISysTextureProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysTextureProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysTextureProperties */
#define declare_TIE_CAAISysTextureProperties(classe) \
 \
 \
class TIECAAISysTextureProperties##classe : public CAAISysTextureProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysTextureProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMetal(int & oIsMetal)  ; \
      virtual HRESULT SetMetal(const int iIsMetal)  ; \
      virtual HRESULT GetRough(int & oIsMetal)  ; \
      virtual HRESULT SetRough(const int iIsMetal)  ; \
};



#define ENVTIEdeclare_CAAISysTextureProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMetal(int & oIsMetal)  ; \
virtual HRESULT SetMetal(const int iIsMetal)  ; \
virtual HRESULT GetRough(int & oIsMetal)  ; \
virtual HRESULT SetRough(const int iIsMetal)  ; \


#define ENVTIEdefine_CAAISysTextureProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMetal(int & oIsMetal)   \
{ \
return (ENVTIECALL(CAAISysTextureProperties,ENVTIETypeLetter,ENVTIELetter)GetMetal(oIsMetal)); \
} \
HRESULT  ENVTIEName::SetMetal(const int iIsMetal)   \
{ \
return (ENVTIECALL(CAAISysTextureProperties,ENVTIETypeLetter,ENVTIELetter)SetMetal(iIsMetal)); \
} \
HRESULT  ENVTIEName::GetRough(int & oIsMetal)   \
{ \
return (ENVTIECALL(CAAISysTextureProperties,ENVTIETypeLetter,ENVTIELetter)GetRough(oIsMetal)); \
} \
HRESULT  ENVTIEName::SetRough(const int iIsMetal)   \
{ \
return (ENVTIECALL(CAAISysTextureProperties,ENVTIETypeLetter,ENVTIELetter)SetRough(iIsMetal)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysTextureProperties(classe)    TIECAAISysTextureProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysTextureProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysTextureProperties, classe) \
 \
 \
CATImplementTIEMethods(CAAISysTextureProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysTextureProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysTextureProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysTextureProperties, classe) \
 \
HRESULT  TIECAAISysTextureProperties##classe::GetMetal(int & oIsMetal)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMetal(oIsMetal)); \
} \
HRESULT  TIECAAISysTextureProperties##classe::SetMetal(const int iIsMetal)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMetal(iIsMetal)); \
} \
HRESULT  TIECAAISysTextureProperties##classe::GetRough(int & oIsMetal)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRough(oIsMetal)); \
} \
HRESULT  TIECAAISysTextureProperties##classe::SetRough(const int iIsMetal)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRough(iIsMetal)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysTextureProperties(classe) \
 \
 \
declare_TIE_CAAISysTextureProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysTextureProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysTextureProperties,"CAAISysTextureProperties",CAAISysTextureProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysTextureProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysTextureProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysTextureProperties##classe(classe::MetaObject(),CAAISysTextureProperties::MetaObject(),(void *)CreateTIECAAISysTextureProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysTextureProperties(classe) \
 \
 \
declare_TIE_CAAISysTextureProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysTextureProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysTextureProperties,"CAAISysTextureProperties",CAAISysTextureProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysTextureProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysTextureProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysTextureProperties##classe(classe::MetaObject(),CAAISysTextureProperties::MetaObject(),(void *)CreateTIECAAISysTextureProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysTextureProperties(classe) TIE_CAAISysTextureProperties(classe)
#else
#define BOA_CAAISysTextureProperties(classe) CATImplementBOA(CAAISysTextureProperties, classe)
#endif

#endif
