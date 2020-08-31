#ifndef __TIE_CAAISysName
#define __TIE_CAAISysName

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysName.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysName */
#define declare_TIE_CAAISysName(classe) \
 \
 \
class TIECAAISysName##classe : public CAAISysName \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysName, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT     SetName(const CATUnicodeString & iName)  ; \
      virtual  HRESULT     GetName(CATUnicodeString & ioName) ; \
};



#define ENVTIEdeclare_CAAISysName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT     SetName(const CATUnicodeString & iName)  ; \
virtual  HRESULT     GetName(CATUnicodeString & ioName) ; \


#define ENVTIEdefine_CAAISysName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT      ENVTIEName::SetName(const CATUnicodeString & iName)   \
{ \
return (ENVTIECALL(CAAISysName,ENVTIETypeLetter,ENVTIELetter)SetName(iName)); \
} \
HRESULT      ENVTIEName::GetName(CATUnicodeString & ioName)  \
{ \
return (ENVTIECALL(CAAISysName,ENVTIETypeLetter,ENVTIELetter)GetName(ioName)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysName(classe)    TIECAAISysName##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysName(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysName, classe) \
 \
 \
CATImplementTIEMethods(CAAISysName, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysName, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysName, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysName, classe) \
 \
HRESULT      TIECAAISysName##classe::SetName(const CATUnicodeString & iName)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetName(iName)); \
} \
HRESULT      TIECAAISysName##classe::GetName(CATUnicodeString & ioName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName(ioName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysName(classe) \
 \
 \
declare_TIE_CAAISysName(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysName,"CAAISysName",CAAISysName::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysName##classe(classe::MetaObject(),CAAISysName::MetaObject(),(void *)CreateTIECAAISysName##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysName(classe) \
 \
 \
declare_TIE_CAAISysName(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysName,"CAAISysName",CAAISysName::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysName##classe(classe::MetaObject(),CAAISysName::MetaObject(),(void *)CreateTIECAAISysName##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysName(classe) TIE_CAAISysName(classe)
#else
#define BOA_CAAISysName(classe) CATImplementBOA(CAAISysName, classe)
#endif

#endif
