#ifndef __TIE_CAAIVisModelSetOfObject
#define __TIE_CAAIVisModelSetOfObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIVisModelSetOfObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIVisModelSetOfObject */
#define declare_TIE_CAAIVisModelSetOfObject(classe) \
 \
 \
class TIECAAIVisModelSetOfObject##classe : public CAAIVisModelSetOfObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIVisModelSetOfObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
};



#define ENVTIEdeclare_CAAIVisModelSetOfObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


#define ENVTIEdefine_CAAIVisModelSetOfObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


/* Name of the TIE class */
#define class_TIE_CAAIVisModelSetOfObject(classe)    TIECAAIVisModelSetOfObject##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIVisModelSetOfObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIVisModelSetOfObject, classe) \
 \
 \
CATImplementTIEMethods(CAAIVisModelSetOfObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIVisModelSetOfObject, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIVisModelSetOfObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIVisModelSetOfObject, classe) \
 \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIVisModelSetOfObject(classe) \
 \
 \
declare_TIE_CAAIVisModelSetOfObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelSetOfObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelSetOfObject,"CAAIVisModelSetOfObject",CAAIVisModelSetOfObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelSetOfObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIVisModelSetOfObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelSetOfObject##classe(classe::MetaObject(),CAAIVisModelSetOfObject::MetaObject(),(void *)CreateTIECAAIVisModelSetOfObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIVisModelSetOfObject(classe) \
 \
 \
declare_TIE_CAAIVisModelSetOfObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelSetOfObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelSetOfObject,"CAAIVisModelSetOfObject",CAAIVisModelSetOfObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelSetOfObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIVisModelSetOfObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelSetOfObject##classe(classe::MetaObject(),CAAIVisModelSetOfObject::MetaObject(),(void *)CreateTIECAAIVisModelSetOfObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIVisModelSetOfObject(classe) TIE_CAAIVisModelSetOfObject(classe)
#else
#define BOA_CAAIVisModelSetOfObject(classe) CATImplementBOA(CAAIVisModelSetOfObject, classe)
#endif

#endif
