#ifndef __TIE_CAAIAfrMRUManagement
#define __TIE_CAAIAfrMRUManagement

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIAfrMRUManagement.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIAfrMRUManagement */
#define declare_TIE_CAAIAfrMRUManagement(classe) \
 \
 \
class TIECAAIAfrMRUManagement##classe : public CAAIAfrMRUManagement \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIAfrMRUManagement, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AddElement(CATUnicodeString &iNewElement)  ; \
      virtual HRESULT GetElementList(CATListOfCATUnicodeString &ElementList) const ; \
      virtual HRESULT SelectElement(int iPosition) ; \
};



#define ENVTIEdeclare_CAAIAfrMRUManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AddElement(CATUnicodeString &iNewElement)  ; \
virtual HRESULT GetElementList(CATListOfCATUnicodeString &ElementList) const ; \
virtual HRESULT SelectElement(int iPosition) ; \


#define ENVTIEdefine_CAAIAfrMRUManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AddElement(CATUnicodeString &iNewElement)   \
{ \
return (ENVTIECALL(CAAIAfrMRUManagement,ENVTIETypeLetter,ENVTIELetter)AddElement(iNewElement)); \
} \
HRESULT  ENVTIEName::GetElementList(CATListOfCATUnicodeString &ElementList) const  \
{ \
return (ENVTIECALL(CAAIAfrMRUManagement,ENVTIETypeLetter,ENVTIELetter)GetElementList(ElementList)); \
} \
HRESULT  ENVTIEName::SelectElement(int iPosition)  \
{ \
return (ENVTIECALL(CAAIAfrMRUManagement,ENVTIETypeLetter,ENVTIELetter)SelectElement(iPosition)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIAfrMRUManagement(classe)    TIECAAIAfrMRUManagement##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIAfrMRUManagement(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIAfrMRUManagement, classe) \
 \
 \
CATImplementTIEMethods(CAAIAfrMRUManagement, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIAfrMRUManagement, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIAfrMRUManagement, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIAfrMRUManagement, classe) \
 \
HRESULT  TIECAAIAfrMRUManagement##classe::AddElement(CATUnicodeString &iNewElement)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddElement(iNewElement)); \
} \
HRESULT  TIECAAIAfrMRUManagement##classe::GetElementList(CATListOfCATUnicodeString &ElementList) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElementList(ElementList)); \
} \
HRESULT  TIECAAIAfrMRUManagement##classe::SelectElement(int iPosition)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SelectElement(iPosition)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIAfrMRUManagement(classe) \
 \
 \
declare_TIE_CAAIAfrMRUManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrMRUManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrMRUManagement,"CAAIAfrMRUManagement",CAAIAfrMRUManagement::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrMRUManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIAfrMRUManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrMRUManagement##classe(classe::MetaObject(),CAAIAfrMRUManagement::MetaObject(),(void *)CreateTIECAAIAfrMRUManagement##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIAfrMRUManagement(classe) \
 \
 \
declare_TIE_CAAIAfrMRUManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrMRUManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrMRUManagement,"CAAIAfrMRUManagement",CAAIAfrMRUManagement::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrMRUManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIAfrMRUManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrMRUManagement##classe(classe::MetaObject(),CAAIAfrMRUManagement::MetaObject(),(void *)CreateTIECAAIAfrMRUManagement##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIAfrMRUManagement(classe) TIE_CAAIAfrMRUManagement(classe)
#else
#define BOA_CAAIAfrMRUManagement(classe) CATImplementBOA(CAAIAfrMRUManagement, classe)
#endif

#endif
