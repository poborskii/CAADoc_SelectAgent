#ifndef __TIE_CAAIVisModelCuboid
#define __TIE_CAAIVisModelCuboid

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIVisModelCuboid.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIVisModelCuboid */
#define declare_TIE_CAAIVisModelCuboid(classe) \
 \
 \
class TIECAAIVisModelCuboid##classe : public CAAIVisModelCuboid \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIVisModelCuboid, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetVertices(float ** oVertices) ; \
      virtual HRESULT SetVertices(float  * iVertices) ; \
};



#define ENVTIEdeclare_CAAIVisModelCuboid(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetVertices(float ** oVertices) ; \
virtual HRESULT SetVertices(float  * iVertices) ; \


#define ENVTIEdefine_CAAIVisModelCuboid(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetVertices(float ** oVertices)  \
{ \
return (ENVTIECALL(CAAIVisModelCuboid,ENVTIETypeLetter,ENVTIELetter)GetVertices(oVertices)); \
} \
HRESULT  ENVTIEName::SetVertices(float  * iVertices)  \
{ \
return (ENVTIECALL(CAAIVisModelCuboid,ENVTIETypeLetter,ENVTIELetter)SetVertices(iVertices)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIVisModelCuboid(classe)    TIECAAIVisModelCuboid##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIVisModelCuboid(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIVisModelCuboid, classe) \
 \
 \
CATImplementTIEMethods(CAAIVisModelCuboid, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIVisModelCuboid, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIVisModelCuboid, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIVisModelCuboid, classe) \
 \
HRESULT  TIECAAIVisModelCuboid##classe::GetVertices(float ** oVertices)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVertices(oVertices)); \
} \
HRESULT  TIECAAIVisModelCuboid##classe::SetVertices(float  * iVertices)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVertices(iVertices)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIVisModelCuboid(classe) \
 \
 \
declare_TIE_CAAIVisModelCuboid(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelCuboid##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelCuboid,"CAAIVisModelCuboid",CAAIVisModelCuboid::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelCuboid(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIVisModelCuboid, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelCuboid##classe(classe::MetaObject(),CAAIVisModelCuboid::MetaObject(),(void *)CreateTIECAAIVisModelCuboid##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIVisModelCuboid(classe) \
 \
 \
declare_TIE_CAAIVisModelCuboid(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelCuboid##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelCuboid,"CAAIVisModelCuboid",CAAIVisModelCuboid::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelCuboid(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIVisModelCuboid, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelCuboid##classe(classe::MetaObject(),CAAIVisModelCuboid::MetaObject(),(void *)CreateTIECAAIVisModelCuboid##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIVisModelCuboid(classe) TIE_CAAIVisModelCuboid(classe)
#else
#define BOA_CAAIVisModelCuboid(classe) CATImplementBOA(CAAIVisModelCuboid, classe)
#endif

#endif
