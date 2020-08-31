#ifndef __TIE_CAAISysRevolAxis
#define __TIE_CAAISysRevolAxis

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysRevolAxis.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysRevolAxis */
#define declare_TIE_CAAISysRevolAxis(classe) \
 \
 \
class TIECAAISysRevolAxis##classe : public CAAISysRevolAxis \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysRevolAxis, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetAxis(float &oX , float &oY ,float &oZ  )            ; \
      virtual HRESULT SetAxis(const float iX,const float iY,const float iZ ) ; \
};



#define ENVTIEdeclare_CAAISysRevolAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetAxis(float &oX , float &oY ,float &oZ  )            ; \
virtual HRESULT SetAxis(const float iX,const float iY,const float iZ ) ; \


#define ENVTIEdefine_CAAISysRevolAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetAxis(float &oX , float &oY ,float &oZ  )             \
{ \
return (ENVTIECALL(CAAISysRevolAxis,ENVTIETypeLetter,ENVTIELetter)GetAxis(oX ,oY ,oZ  )); \
} \
HRESULT  ENVTIEName::SetAxis(const float iX,const float iY,const float iZ )  \
{ \
return (ENVTIECALL(CAAISysRevolAxis,ENVTIETypeLetter,ENVTIELetter)SetAxis(iX,iY,iZ )); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysRevolAxis(classe)    TIECAAISysRevolAxis##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysRevolAxis(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysRevolAxis, classe) \
 \
 \
CATImplementTIEMethods(CAAISysRevolAxis, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysRevolAxis, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysRevolAxis, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysRevolAxis, classe) \
 \
HRESULT  TIECAAISysRevolAxis##classe::GetAxis(float &oX , float &oY ,float &oZ  )             \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxis(oX ,oY ,oZ  )); \
} \
HRESULT  TIECAAISysRevolAxis##classe::SetAxis(const float iX,const float iY,const float iZ )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAxis(iX,iY,iZ )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysRevolAxis(classe) \
 \
 \
declare_TIE_CAAISysRevolAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysRevolAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysRevolAxis,"CAAISysRevolAxis",CAAISysRevolAxis::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysRevolAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysRevolAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysRevolAxis##classe(classe::MetaObject(),CAAISysRevolAxis::MetaObject(),(void *)CreateTIECAAISysRevolAxis##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysRevolAxis(classe) \
 \
 \
declare_TIE_CAAISysRevolAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysRevolAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysRevolAxis,"CAAISysRevolAxis",CAAISysRevolAxis::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysRevolAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysRevolAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysRevolAxis##classe(classe::MetaObject(),CAAISysRevolAxis::MetaObject(),(void *)CreateTIECAAISysRevolAxis##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysRevolAxis(classe) TIE_CAAISysRevolAxis(classe)
#else
#define BOA_CAAISysRevolAxis(classe) CATImplementBOA(CAAISysRevolAxis, classe)
#endif

#endif
