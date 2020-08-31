#ifndef __TIE_CAAIAfrTemporaryObjectColor
#define __TIE_CAAIAfrTemporaryObjectColor

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIAfrTemporaryObjectColor.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIAfrTemporaryObjectColor */
#define declare_TIE_CAAIAfrTemporaryObjectColor(classe) \
 \
 \
class TIECAAIAfrTemporaryObjectColor##classe : public CAAIAfrTemporaryObjectColor \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIAfrTemporaryObjectColor, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetCurrentColor(int & oRed, int & oGreen, int & oBlue) const ; \
      virtual HRESULT SetCurrentColor(int & oRed, int & oGreen, int & oBlue) ; \
};



#define ENVTIEdeclare_CAAIAfrTemporaryObjectColor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetCurrentColor(int & oRed, int & oGreen, int & oBlue) const ; \
virtual HRESULT SetCurrentColor(int & oRed, int & oGreen, int & oBlue) ; \


#define ENVTIEdefine_CAAIAfrTemporaryObjectColor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetCurrentColor(int & oRed, int & oGreen, int & oBlue) const  \
{ \
return (ENVTIECALL(CAAIAfrTemporaryObjectColor,ENVTIETypeLetter,ENVTIELetter)GetCurrentColor(oRed,oGreen,oBlue)); \
} \
HRESULT  ENVTIEName::SetCurrentColor(int & oRed, int & oGreen, int & oBlue)  \
{ \
return (ENVTIECALL(CAAIAfrTemporaryObjectColor,ENVTIETypeLetter,ENVTIELetter)SetCurrentColor(oRed,oGreen,oBlue)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIAfrTemporaryObjectColor(classe)    TIECAAIAfrTemporaryObjectColor##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIAfrTemporaryObjectColor(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIAfrTemporaryObjectColor, classe) \
 \
 \
CATImplementTIEMethods(CAAIAfrTemporaryObjectColor, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIAfrTemporaryObjectColor, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIAfrTemporaryObjectColor, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIAfrTemporaryObjectColor, classe) \
 \
HRESULT  TIECAAIAfrTemporaryObjectColor##classe::GetCurrentColor(int & oRed, int & oGreen, int & oBlue) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentColor(oRed,oGreen,oBlue)); \
} \
HRESULT  TIECAAIAfrTemporaryObjectColor##classe::SetCurrentColor(int & oRed, int & oGreen, int & oBlue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentColor(oRed,oGreen,oBlue)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIAfrTemporaryObjectColor(classe) \
 \
 \
declare_TIE_CAAIAfrTemporaryObjectColor(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrTemporaryObjectColor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrTemporaryObjectColor,"CAAIAfrTemporaryObjectColor",CAAIAfrTemporaryObjectColor::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrTemporaryObjectColor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIAfrTemporaryObjectColor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrTemporaryObjectColor##classe(classe::MetaObject(),CAAIAfrTemporaryObjectColor::MetaObject(),(void *)CreateTIECAAIAfrTemporaryObjectColor##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIAfrTemporaryObjectColor(classe) \
 \
 \
declare_TIE_CAAIAfrTemporaryObjectColor(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrTemporaryObjectColor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrTemporaryObjectColor,"CAAIAfrTemporaryObjectColor",CAAIAfrTemporaryObjectColor::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrTemporaryObjectColor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIAfrTemporaryObjectColor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrTemporaryObjectColor##classe(classe::MetaObject(),CAAIAfrTemporaryObjectColor::MetaObject(),(void *)CreateTIECAAIAfrTemporaryObjectColor##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIAfrTemporaryObjectColor(classe) TIE_CAAIAfrTemporaryObjectColor(classe)
#else
#define BOA_CAAIAfrTemporaryObjectColor(classe) CATImplementBOA(CAAIAfrTemporaryObjectColor, classe)
#endif

#endif
