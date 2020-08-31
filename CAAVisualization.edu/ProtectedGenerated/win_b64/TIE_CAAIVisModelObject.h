#ifndef __TIE_CAAIVisModelObject
#define __TIE_CAAIVisModelObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIVisModelObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIVisModelObject */
#define declare_TIE_CAAIVisModelObject(classe) \
 \
 \
class TIECAAIVisModelObject##classe : public CAAIVisModelObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIVisModelObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual list<CATBaseUnknown> *GetChildren(); \
      virtual list<CATBaseUnknown> *GetParents(); \
      virtual HRESULT GetType(char ** oType); \
      virtual HRESULT SetType(const char * iType); \
      virtual HRESULT AddChild(CATBaseUnknown *iObject); \
      virtual HRESULT RemChild(CATBaseUnknown *iObject); \
      virtual HRESULT AddParent(CATBaseUnknown *iObject); \
      virtual HRESULT RemParent(CATBaseUnknown *iObject); \
};



#define ENVTIEdeclare_CAAIVisModelObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual list<CATBaseUnknown> *GetChildren(); \
virtual list<CATBaseUnknown> *GetParents(); \
virtual HRESULT GetType(char ** oType); \
virtual HRESULT SetType(const char * iType); \
virtual HRESULT AddChild(CATBaseUnknown *iObject); \
virtual HRESULT RemChild(CATBaseUnknown *iObject); \
virtual HRESULT AddParent(CATBaseUnknown *iObject); \
virtual HRESULT RemParent(CATBaseUnknown *iObject); \


#define ENVTIEdefine_CAAIVisModelObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
list<CATBaseUnknown> * ENVTIEName::GetChildren() \
{ \
return (ENVTIECALL(CAAIVisModelObject,ENVTIETypeLetter,ENVTIELetter)GetChildren()); \
} \
list<CATBaseUnknown> * ENVTIEName::GetParents() \
{ \
return (ENVTIECALL(CAAIVisModelObject,ENVTIETypeLetter,ENVTIELetter)GetParents()); \
} \
HRESULT  ENVTIEName::GetType(char ** oType) \
{ \
return (ENVTIECALL(CAAIVisModelObject,ENVTIETypeLetter,ENVTIELetter)GetType(oType)); \
} \
HRESULT  ENVTIEName::SetType(const char * iType) \
{ \
return (ENVTIECALL(CAAIVisModelObject,ENVTIETypeLetter,ENVTIELetter)SetType(iType)); \
} \
HRESULT  ENVTIEName::AddChild(CATBaseUnknown *iObject) \
{ \
return (ENVTIECALL(CAAIVisModelObject,ENVTIETypeLetter,ENVTIELetter)AddChild(iObject)); \
} \
HRESULT  ENVTIEName::RemChild(CATBaseUnknown *iObject) \
{ \
return (ENVTIECALL(CAAIVisModelObject,ENVTIETypeLetter,ENVTIELetter)RemChild(iObject)); \
} \
HRESULT  ENVTIEName::AddParent(CATBaseUnknown *iObject) \
{ \
return (ENVTIECALL(CAAIVisModelObject,ENVTIETypeLetter,ENVTIELetter)AddParent(iObject)); \
} \
HRESULT  ENVTIEName::RemParent(CATBaseUnknown *iObject) \
{ \
return (ENVTIECALL(CAAIVisModelObject,ENVTIETypeLetter,ENVTIELetter)RemParent(iObject)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIVisModelObject(classe)    TIECAAIVisModelObject##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIVisModelObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIVisModelObject, classe) \
 \
 \
CATImplementTIEMethods(CAAIVisModelObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIVisModelObject, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIVisModelObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIVisModelObject, classe) \
 \
list<CATBaseUnknown> * TIECAAIVisModelObject##classe::GetChildren() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren()); \
} \
list<CATBaseUnknown> * TIECAAIVisModelObject##classe::GetParents() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParents()); \
} \
HRESULT  TIECAAIVisModelObject##classe::GetType(char ** oType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType(oType)); \
} \
HRESULT  TIECAAIVisModelObject##classe::SetType(const char * iType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetType(iType)); \
} \
HRESULT  TIECAAIVisModelObject##classe::AddChild(CATBaseUnknown *iObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddChild(iObject)); \
} \
HRESULT  TIECAAIVisModelObject##classe::RemChild(CATBaseUnknown *iObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemChild(iObject)); \
} \
HRESULT  TIECAAIVisModelObject##classe::AddParent(CATBaseUnknown *iObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddParent(iObject)); \
} \
HRESULT  TIECAAIVisModelObject##classe::RemParent(CATBaseUnknown *iObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemParent(iObject)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIVisModelObject(classe) \
 \
 \
declare_TIE_CAAIVisModelObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelObject,"CAAIVisModelObject",CAAIVisModelObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIVisModelObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelObject##classe(classe::MetaObject(),CAAIVisModelObject::MetaObject(),(void *)CreateTIECAAIVisModelObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIVisModelObject(classe) \
 \
 \
declare_TIE_CAAIVisModelObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelObject,"CAAIVisModelObject",CAAIVisModelObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIVisModelObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelObject##classe(classe::MetaObject(),CAAIVisModelObject::MetaObject(),(void *)CreateTIECAAIVisModelObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIVisModelObject(classe) TIE_CAAIVisModelObject(classe)
#else
#define BOA_CAAIVisModelObject(classe) CATImplementBOA(CAAIVisModelObject, classe)
#endif

#endif
