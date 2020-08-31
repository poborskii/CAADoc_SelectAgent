#ifndef __TIE_CAAISysCollection
#define __TIE_CAAISysCollection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysCollection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysCollection */
#define declare_TIE_CAAISysCollection(classe) \
 \
 \
class TIECAAISysCollection##classe : public CAAISysCollection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysCollection, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetNumberOfObjects(int * oCount) ; \
      virtual HRESULT GetObject    (int iRank, CATBaseUnknown ** oObject) ; \
      virtual HRESULT AddObject    (CATBaseUnknown * iObject) ; \
      virtual HRESULT RemoveObject (CATBaseUnknown * iObject) ; \
      virtual HRESULT Empty  () ; \
};



#define ENVTIEdeclare_CAAISysCollection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetNumberOfObjects(int * oCount) ; \
virtual HRESULT GetObject    (int iRank, CATBaseUnknown ** oObject) ; \
virtual HRESULT AddObject    (CATBaseUnknown * iObject) ; \
virtual HRESULT RemoveObject (CATBaseUnknown * iObject) ; \
virtual HRESULT Empty  () ; \


#define ENVTIEdefine_CAAISysCollection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetNumberOfObjects(int * oCount)  \
{ \
return (ENVTIECALL(CAAISysCollection,ENVTIETypeLetter,ENVTIELetter)GetNumberOfObjects(oCount)); \
} \
HRESULT  ENVTIEName::GetObject    (int iRank, CATBaseUnknown ** oObject)  \
{ \
return (ENVTIECALL(CAAISysCollection,ENVTIETypeLetter,ENVTIELetter)GetObject    (iRank,oObject)); \
} \
HRESULT  ENVTIEName::AddObject    (CATBaseUnknown * iObject)  \
{ \
return (ENVTIECALL(CAAISysCollection,ENVTIETypeLetter,ENVTIELetter)AddObject    (iObject)); \
} \
HRESULT  ENVTIEName::RemoveObject (CATBaseUnknown * iObject)  \
{ \
return (ENVTIECALL(CAAISysCollection,ENVTIETypeLetter,ENVTIELetter)RemoveObject (iObject)); \
} \
HRESULT  ENVTIEName::Empty  ()  \
{ \
return (ENVTIECALL(CAAISysCollection,ENVTIETypeLetter,ENVTIELetter)Empty  ()); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysCollection(classe)    TIECAAISysCollection##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysCollection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysCollection, classe) \
 \
 \
CATImplementTIEMethods(CAAISysCollection, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysCollection, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysCollection, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysCollection, classe) \
 \
HRESULT  TIECAAISysCollection##classe::GetNumberOfObjects(int * oCount)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfObjects(oCount)); \
} \
HRESULT  TIECAAISysCollection##classe::GetObject    (int iRank, CATBaseUnknown ** oObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObject    (iRank,oObject)); \
} \
HRESULT  TIECAAISysCollection##classe::AddObject    (CATBaseUnknown * iObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObject    (iObject)); \
} \
HRESULT  TIECAAISysCollection##classe::RemoveObject (CATBaseUnknown * iObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveObject (iObject)); \
} \
HRESULT  TIECAAISysCollection##classe::Empty  ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Empty  ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysCollection(classe) \
 \
 \
declare_TIE_CAAISysCollection(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCollection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCollection,"CAAISysCollection",CAAISysCollection::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCollection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysCollection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCollection##classe(classe::MetaObject(),CAAISysCollection::MetaObject(),(void *)CreateTIECAAISysCollection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysCollection(classe) \
 \
 \
declare_TIE_CAAISysCollection(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysCollection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysCollection,"CAAISysCollection",CAAISysCollection::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysCollection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysCollection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysCollection##classe(classe::MetaObject(),CAAISysCollection::MetaObject(),(void *)CreateTIECAAISysCollection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysCollection(classe) TIE_CAAISysCollection(classe)
#else
#define BOA_CAAISysCollection(classe) CATImplementBOA(CAAISysCollection, classe)
#endif

#endif
