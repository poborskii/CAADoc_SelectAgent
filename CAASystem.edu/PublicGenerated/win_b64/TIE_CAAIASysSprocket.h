#ifndef __TIE_CAAIASysSprocket
#define __TIE_CAAIASysSprocket

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIASysSprocket.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIASysSprocket */
#define declare_TIE_CAAIASysSprocket(classe) \
 \
 \
class TIECAAIASysSprocket##classe : public CAAIASysSprocket \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIASysSprocket, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CAAIASysSprocket(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CAAIASysSprocket(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CAAIASysSprocket,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CAAIASysSprocket,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CAAIASysSprocket,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CAAIASysSprocket,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CAAIASysSprocket,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIASysSprocket(classe)    TIECAAIASysSprocket##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIASysSprocket(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIASysSprocket, classe) \
 \
 \
CATImplementTIEMethods(CAAIASysSprocket, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIASysSprocket, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIASysSprocket, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIASysSprocket, classe) \
 \
HRESULT  __stdcall  TIECAAIASysSprocket##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECAAIASysSprocket##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECAAIASysSprocket##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECAAIASysSprocket##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECAAIASysSprocket##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIASysSprocket(classe) \
 \
 \
declare_TIE_CAAIASysSprocket(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIASysSprocket##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIASysSprocket,"CAAIASysSprocket",CAAIASysSprocket::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIASysSprocket(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIASysSprocket, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIASysSprocket##classe(classe::MetaObject(),CAAIASysSprocket::MetaObject(),(void *)CreateTIECAAIASysSprocket##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIASysSprocket(classe) \
 \
 \
declare_TIE_CAAIASysSprocket(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIASysSprocket##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIASysSprocket,"CAAIASysSprocket",CAAIASysSprocket::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIASysSprocket(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIASysSprocket, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIASysSprocket##classe(classe::MetaObject(),CAAIASysSprocket::MetaObject(),(void *)CreateTIECAAIASysSprocket##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIASysSprocket(classe) TIE_CAAIASysSprocket(classe)
#else
#define BOA_CAAIASysSprocket(classe) CATImplementBOA(CAAIASysSprocket, classe)
#endif

#endif
