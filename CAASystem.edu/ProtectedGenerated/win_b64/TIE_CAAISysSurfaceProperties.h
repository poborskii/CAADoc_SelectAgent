#ifndef __TIE_CAAISysSurfaceProperties
#define __TIE_CAAISysSurfaceProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysSurfaceProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysSurfaceProperties */
#define declare_TIE_CAAISysSurfaceProperties(classe) \
 \
 \
class TIECAAISysSurfaceProperties##classe : public CAAISysSurfaceProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysSurfaceProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetColor(int & oRed,int & oGreen,int & oBlue )              ; \
      virtual HRESULT SetColor(const int iRed,const int iGreen,const int iBlue )  ; \
};



#define ENVTIEdeclare_CAAISysSurfaceProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetColor(int & oRed,int & oGreen,int & oBlue )              ; \
virtual HRESULT SetColor(const int iRed,const int iGreen,const int iBlue )  ; \


#define ENVTIEdefine_CAAISysSurfaceProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetColor(int & oRed,int & oGreen,int & oBlue )               \
{ \
return (ENVTIECALL(CAAISysSurfaceProperties,ENVTIETypeLetter,ENVTIELetter)GetColor(oRed,oGreen,oBlue )); \
} \
HRESULT  ENVTIEName::SetColor(const int iRed,const int iGreen,const int iBlue )   \
{ \
return (ENVTIECALL(CAAISysSurfaceProperties,ENVTIETypeLetter,ENVTIELetter)SetColor(iRed,iGreen,iBlue )); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysSurfaceProperties(classe)    TIECAAISysSurfaceProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysSurfaceProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysSurfaceProperties, classe) \
 \
 \
CATImplementTIEMethods(CAAISysSurfaceProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysSurfaceProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysSurfaceProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysSurfaceProperties, classe) \
 \
HRESULT  TIECAAISysSurfaceProperties##classe::GetColor(int & oRed,int & oGreen,int & oBlue )               \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColor(oRed,oGreen,oBlue )); \
} \
HRESULT  TIECAAISysSurfaceProperties##classe::SetColor(const int iRed,const int iGreen,const int iBlue )   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColor(iRed,iGreen,iBlue )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysSurfaceProperties(classe) \
 \
 \
declare_TIE_CAAISysSurfaceProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysSurfaceProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysSurfaceProperties,"CAAISysSurfaceProperties",CAAISysSurfaceProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysSurfaceProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysSurfaceProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysSurfaceProperties##classe(classe::MetaObject(),CAAISysSurfaceProperties::MetaObject(),(void *)CreateTIECAAISysSurfaceProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysSurfaceProperties(classe) \
 \
 \
declare_TIE_CAAISysSurfaceProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysSurfaceProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysSurfaceProperties,"CAAISysSurfaceProperties",CAAISysSurfaceProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysSurfaceProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysSurfaceProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysSurfaceProperties##classe(classe::MetaObject(),CAAISysSurfaceProperties::MetaObject(),(void *)CreateTIECAAISysSurfaceProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysSurfaceProperties(classe) TIE_CAAISysSurfaceProperties(classe)
#else
#define BOA_CAAISysSurfaceProperties(classe) CATImplementBOA(CAAISysSurfaceProperties, classe)
#endif

#endif
