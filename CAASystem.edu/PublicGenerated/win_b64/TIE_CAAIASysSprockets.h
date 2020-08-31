#ifndef __TIE_CAAIASysSprockets
#define __TIE_CAAIASysSprockets

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIASysSprockets.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIASysSprockets */
#define declare_TIE_CAAIASysSprockets(classe) \
 \
 \
class TIECAAIASysSprockets##classe : public CAAIASysSprockets \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIASysSprockets, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CAAIASysSprocket *& oSprocket); \
      virtual HRESULT __stdcall AddAll(const CATSafeArrayVariant & iSprocketArray); \
      virtual HRESULT __stdcall ToArray(CATSafeArrayVariant & ioArray); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CAAIASysSprockets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CAAIASysSprocket *& oSprocket); \
virtual HRESULT __stdcall AddAll(const CATSafeArrayVariant & iSprocketArray); \
virtual HRESULT __stdcall ToArray(CATSafeArrayVariant & ioArray); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CAAIASysSprockets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CAAIASysSprocket *& oSprocket) \
{ \
return (ENVTIECALL(CAAIASysSprockets,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oSprocket)); \
} \
HRESULT __stdcall  ENVTIEName::AddAll(const CATSafeArrayVariant & iSprocketArray) \
{ \
return (ENVTIECALL(CAAIASysSprockets,ENVTIETypeLetter,ENVTIELetter)AddAll(iSprocketArray)); \
} \
HRESULT __stdcall  ENVTIEName::ToArray(CATSafeArrayVariant & ioArray) \
{ \
return (ENVTIECALL(CAAIASysSprockets,ENVTIETypeLetter,ENVTIELetter)ToArray(ioArray)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CAAIASysSprockets,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CAAIASysSprockets,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CAAIASysSprockets,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CAAIASysSprockets,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CAAIASysSprockets,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CAAIASysSprockets,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIASysSprockets(classe)    TIECAAIASysSprockets##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIASysSprockets(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIASysSprockets, classe) \
 \
 \
CATImplementTIEMethods(CAAIASysSprockets, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIASysSprockets, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIASysSprockets, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIASysSprockets, classe) \
 \
HRESULT __stdcall  TIECAAIASysSprockets##classe::Item(const CATVariant & iIndex, CAAIASysSprocket *& oSprocket) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oSprocket)); \
} \
HRESULT __stdcall  TIECAAIASysSprockets##classe::AddAll(const CATSafeArrayVariant & iSprocketArray) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAll(iSprocketArray)); \
} \
HRESULT __stdcall  TIECAAIASysSprockets##classe::ToArray(CATSafeArrayVariant & ioArray) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ToArray(ioArray)); \
} \
HRESULT  __stdcall  TIECAAIASysSprockets##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECAAIASysSprockets##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECAAIASysSprockets##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  TIECAAIASysSprockets##classe::get_Name(CATBSTR & oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName)); \
} \
HRESULT  __stdcall  TIECAAIASysSprockets##classe::get_Count(CATLONG & oNbItems) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems)); \
} \
HRESULT  __stdcall  TIECAAIASysSprockets##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIASysSprockets(classe) \
 \
 \
declare_TIE_CAAIASysSprockets(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIASysSprockets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIASysSprockets,"CAAIASysSprockets",CAAIASysSprockets::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIASysSprockets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIASysSprockets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIASysSprockets##classe(classe::MetaObject(),CAAIASysSprockets::MetaObject(),(void *)CreateTIECAAIASysSprockets##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIASysSprockets(classe) \
 \
 \
declare_TIE_CAAIASysSprockets(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIASysSprockets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIASysSprockets,"CAAIASysSprockets",CAAIASysSprockets::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIASysSprockets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIASysSprockets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIASysSprockets##classe(classe::MetaObject(),CAAIASysSprockets::MetaObject(),(void *)CreateTIECAAIASysSprockets##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIASysSprockets(classe) TIE_CAAIASysSprockets(classe)
#else
#define BOA_CAAIASysSprockets(classe) CATImplementBOA(CAAIASysSprockets, classe)
#endif

#endif
