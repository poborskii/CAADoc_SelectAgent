#ifndef __TIE_CAAISysInterface
#define __TIE_CAAISysInterface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysInterface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysInterface */
#define declare_TIE_CAAISysInterface(classe) \
 \
 \
class TIECAAISysInterface##classe : public CAAISysInterface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysInterface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ToString() ; \
};



#define ENVTIEdeclare_CAAISysInterface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ToString() ; \


#define ENVTIEdefine_CAAISysInterface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ToString()  \
{ \
return (ENVTIECALL(CAAISysInterface,ENVTIETypeLetter,ENVTIELetter)ToString()); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysInterface(classe)    TIECAAISysInterface##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysInterface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysInterface, classe) \
 \
 \
CATImplementTIEMethods(CAAISysInterface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysInterface, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysInterface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysInterface, classe) \
 \
HRESULT  TIECAAISysInterface##classe::ToString()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ToString()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysInterface(classe) \
 \
 \
declare_TIE_CAAISysInterface(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysInterface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysInterface,"CAAISysInterface",CAAISysInterface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysInterface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysInterface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysInterface##classe(classe::MetaObject(),CAAISysInterface::MetaObject(),(void *)CreateTIECAAISysInterface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysInterface(classe) \
 \
 \
declare_TIE_CAAISysInterface(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysInterface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysInterface,"CAAISysInterface",CAAISysInterface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysInterface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysInterface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysInterface##classe(classe::MetaObject(),CAAISysInterface::MetaObject(),(void *)CreateTIECAAISysInterface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysInterface(classe) TIE_CAAISysInterface(classe)
#else
#define BOA_CAAISysInterface(classe) CATImplementBOA(CAAISysInterface, classe)
#endif

#endif
