#ifndef __TIE_CAAIVisTextModel
#define __TIE_CAAIVisTextModel

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIVisTextModel.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIVisTextModel */
#define declare_TIE_CAAIVisTextModel(classe) \
 \
 \
class TIECAAIVisTextModel##classe : public CAAIVisTextModel \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIVisTextModel, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetGraphicRepresentation(CATRep * iRep) ; \
};



#define ENVTIEdeclare_CAAIVisTextModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetGraphicRepresentation(CATRep * iRep) ; \


#define ENVTIEdefine_CAAIVisTextModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetGraphicRepresentation(CATRep * iRep)  \
{ \
return (ENVTIECALL(CAAIVisTextModel,ENVTIETypeLetter,ENVTIELetter)SetGraphicRepresentation(iRep)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIVisTextModel(classe)    TIECAAIVisTextModel##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIVisTextModel(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIVisTextModel, classe) \
 \
 \
CATImplementTIEMethods(CAAIVisTextModel, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIVisTextModel, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIVisTextModel, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIVisTextModel, classe) \
 \
HRESULT  TIECAAIVisTextModel##classe::SetGraphicRepresentation(CATRep * iRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGraphicRepresentation(iRep)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIVisTextModel(classe) \
 \
 \
declare_TIE_CAAIVisTextModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisTextModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisTextModel,"CAAIVisTextModel",CAAIVisTextModel::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisTextModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIVisTextModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisTextModel##classe(classe::MetaObject(),CAAIVisTextModel::MetaObject(),(void *)CreateTIECAAIVisTextModel##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIVisTextModel(classe) \
 \
 \
declare_TIE_CAAIVisTextModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisTextModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisTextModel,"CAAIVisTextModel",CAAIVisTextModel::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisTextModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIVisTextModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisTextModel##classe(classe::MetaObject(),CAAIVisTextModel::MetaObject(),(void *)CreateTIECAAIVisTextModel##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIVisTextModel(classe) TIE_CAAIVisTextModel(classe)
#else
#define BOA_CAAIVisTextModel(classe) CATImplementBOA(CAAIVisTextModel, classe)
#endif

#endif
