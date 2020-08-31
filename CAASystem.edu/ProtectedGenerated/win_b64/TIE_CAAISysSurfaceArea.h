#ifndef __TIE_CAAISysSurfaceArea
#define __TIE_CAAISysSurfaceArea

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysSurfaceArea.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysSurfaceArea */
#define declare_TIE_CAAISysSurfaceArea(classe) \
 \
 \
class TIECAAISysSurfaceArea##classe : public CAAISysSurfaceArea \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysSurfaceArea, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ComputeArea(float & oArea)  ; \
};



#define ENVTIEdeclare_CAAISysSurfaceArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ComputeArea(float & oArea)  ; \


#define ENVTIEdefine_CAAISysSurfaceArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ComputeArea(float & oArea)   \
{ \
return (ENVTIECALL(CAAISysSurfaceArea,ENVTIETypeLetter,ENVTIELetter)ComputeArea(oArea)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysSurfaceArea(classe)    TIECAAISysSurfaceArea##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysSurfaceArea(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysSurfaceArea, classe) \
 \
 \
CATImplementTIEMethods(CAAISysSurfaceArea, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysSurfaceArea, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysSurfaceArea, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysSurfaceArea, classe) \
 \
HRESULT  TIECAAISysSurfaceArea##classe::ComputeArea(float & oArea)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeArea(oArea)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysSurfaceArea(classe) \
 \
 \
declare_TIE_CAAISysSurfaceArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysSurfaceArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysSurfaceArea,"CAAISysSurfaceArea",CAAISysSurfaceArea::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysSurfaceArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysSurfaceArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysSurfaceArea##classe(classe::MetaObject(),CAAISysSurfaceArea::MetaObject(),(void *)CreateTIECAAISysSurfaceArea##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysSurfaceArea(classe) \
 \
 \
declare_TIE_CAAISysSurfaceArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysSurfaceArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysSurfaceArea,"CAAISysSurfaceArea",CAAISysSurfaceArea::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysSurfaceArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysSurfaceArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysSurfaceArea##classe(classe::MetaObject(),CAAISysSurfaceArea::MetaObject(),(void *)CreateTIECAAISysSurfaceArea##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysSurfaceArea(classe) TIE_CAAISysSurfaceArea(classe)
#else
#define BOA_CAAISysSurfaceArea(classe) CATImplementBOA(CAAISysSurfaceArea, classe)
#endif

#endif
