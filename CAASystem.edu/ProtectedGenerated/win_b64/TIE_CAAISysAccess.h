#ifndef __TIE_CAAISysAccess
#define __TIE_CAAISysAccess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysAccess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysAccess */
#define declare_TIE_CAAISysAccess(classe) \
 \
 \
class TIECAAISysAccess##classe : public CAAISysAccess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysAccess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT     SetContainer(CATBaseUnknown * iContainer)  ; \
      virtual  HRESULT     GetContainer(CATBaseUnknown ** oContainer) ; \
};



#define ENVTIEdeclare_CAAISysAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT     SetContainer(CATBaseUnknown * iContainer)  ; \
virtual  HRESULT     GetContainer(CATBaseUnknown ** oContainer) ; \


#define ENVTIEdefine_CAAISysAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT      ENVTIEName::SetContainer(CATBaseUnknown * iContainer)   \
{ \
return (ENVTIECALL(CAAISysAccess,ENVTIETypeLetter,ENVTIELetter)SetContainer(iContainer)); \
} \
HRESULT      ENVTIEName::GetContainer(CATBaseUnknown ** oContainer)  \
{ \
return (ENVTIECALL(CAAISysAccess,ENVTIETypeLetter,ENVTIELetter)GetContainer(oContainer)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysAccess(classe)    TIECAAISysAccess##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysAccess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysAccess, classe) \
 \
 \
CATImplementTIEMethods(CAAISysAccess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysAccess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysAccess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysAccess, classe) \
 \
HRESULT      TIECAAISysAccess##classe::SetContainer(CATBaseUnknown * iContainer)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetContainer(iContainer)); \
} \
HRESULT      TIECAAISysAccess##classe::GetContainer(CATBaseUnknown ** oContainer)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContainer(oContainer)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysAccess(classe) \
 \
 \
declare_TIE_CAAISysAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysAccess,"CAAISysAccess",CAAISysAccess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysAccess##classe(classe::MetaObject(),CAAISysAccess::MetaObject(),(void *)CreateTIECAAISysAccess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysAccess(classe) \
 \
 \
declare_TIE_CAAISysAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysAccess,"CAAISysAccess",CAAISysAccess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysAccess##classe(classe::MetaObject(),CAAISysAccess::MetaObject(),(void *)CreateTIECAAISysAccess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysAccess(classe) TIE_CAAISysAccess(classe)
#else
#define BOA_CAAISysAccess(classe) CATImplementBOA(CAAISysAccess, classe)
#endif

#endif
