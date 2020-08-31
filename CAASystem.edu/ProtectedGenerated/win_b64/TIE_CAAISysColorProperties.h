#ifndef __TIE_CAAISysColorProperties
#define __TIE_CAAISysColorProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysColorProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysColorProperties */
#define declare_TIE_CAAISysColorProperties(classe) \
 \
 \
class TIECAAISysColorProperties##classe : public CAAISysColorProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysColorProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetColor(int & oRed,int & oGreen,int & oBlue )              ; \
      virtual HRESULT SetColor(const int iRed,const int iGreen,const int iBlue )  ; \
};



#define ENVTIEdeclare_CAAISysColorProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetColor(int & oRed,int & oGreen,int & oBlue )              ; \
virtual HRESULT SetColor(const int iRed,const int iGreen,const int iBlue )  ; \


#define ENVTIEdefine_CAAISysColorProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetColor(int & oRed,int & oGreen,int & oBlue )               \
{ \
return (ENVTIECALL(CAAISysColorProperties,ENVTIETypeLetter,ENVTIELetter)GetColor(oRed,oGreen,oBlue )); \
} \
HRESULT  ENVTIEName::SetColor(const int iRed,const int iGreen,const int iBlue )   \
{ \
return (ENVTIECALL(CAAISysColorProperties,ENVTIETypeLetter,ENVTIELetter)SetColor(iRed,iGreen,iBlue )); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysColorProperties(classe)    TIECAAISysColorProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysColorProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysColorProperties, classe) \
 \
 \
CATImplementTIEMethods(CAAISysColorProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysColorProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysColorProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysColorProperties, classe) \
 \
HRESULT  TIECAAISysColorProperties##classe::GetColor(int & oRed,int & oGreen,int & oBlue )               \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColor(oRed,oGreen,oBlue )); \
} \
HRESULT  TIECAAISysColorProperties##classe::SetColor(const int iRed,const int iGreen,const int iBlue )   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColor(iRed,iGreen,iBlue )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysColorProperties(classe) \
 \
 \
declare_TIE_CAAISysColorProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysColorProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysColorProperties,"CAAISysColorProperties",CAAISysColorProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysColorProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysColorProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysColorProperties##classe(classe::MetaObject(),CAAISysColorProperties::MetaObject(),(void *)CreateTIECAAISysColorProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysColorProperties(classe) \
 \
 \
declare_TIE_CAAISysColorProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysColorProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysColorProperties,"CAAISysColorProperties",CAAISysColorProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysColorProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysColorProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysColorProperties##classe(classe::MetaObject(),CAAISysColorProperties::MetaObject(),(void *)CreateTIECAAISysColorProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysColorProperties(classe) TIE_CAAISysColorProperties(classe)
#else
#define BOA_CAAISysColorProperties(classe) CATImplementBOA(CAAISysColorProperties, classe)
#endif

#endif
