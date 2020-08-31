#ifndef __TIE_CAAISysMyInterface
#define __TIE_CAAISysMyInterface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysMyInterface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysMyInterface */
#define declare_TIE_CAAISysMyInterface(classe) \
 \
 \
class TIECAAISysMyInterface##classe : public CAAISysMyInterface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysMyInterface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT  Print()  const  ; \
};



#define ENVTIEdeclare_CAAISysMyInterface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT  Print()  const  ; \


#define ENVTIEdefine_CAAISysMyInterface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::Print()  const   \
{ \
return (ENVTIECALL(CAAISysMyInterface,ENVTIETypeLetter,ENVTIELetter)Print()); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysMyInterface(classe)    TIECAAISysMyInterface##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysMyInterface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysMyInterface, classe) \
 \
 \
CATImplementTIEMethods(CAAISysMyInterface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysMyInterface, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysMyInterface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysMyInterface, classe) \
 \
HRESULT   TIECAAISysMyInterface##classe::Print()  const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Print()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysMyInterface(classe) \
 \
 \
declare_TIE_CAAISysMyInterface(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysMyInterface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysMyInterface,"CAAISysMyInterface",CAAISysMyInterface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysMyInterface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysMyInterface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysMyInterface##classe(classe::MetaObject(),CAAISysMyInterface::MetaObject(),(void *)CreateTIECAAISysMyInterface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysMyInterface(classe) \
 \
 \
declare_TIE_CAAISysMyInterface(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysMyInterface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysMyInterface,"CAAISysMyInterface",CAAISysMyInterface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysMyInterface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysMyInterface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysMyInterface##classe(classe::MetaObject(),CAAISysMyInterface::MetaObject(),(void *)CreateTIECAAISysMyInterface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysMyInterface(classe) TIE_CAAISysMyInterface(classe)
#else
#define BOA_CAAISysMyInterface(classe) CATImplementBOA(CAAISysMyInterface, classe)
#endif

#endif
