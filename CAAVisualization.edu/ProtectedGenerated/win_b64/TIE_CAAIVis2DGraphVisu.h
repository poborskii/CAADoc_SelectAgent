#ifndef __TIE_CAAIVis2DGraphVisu
#define __TIE_CAAIVis2DGraphVisu

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIVis2DGraphVisu.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIVis2DGraphVisu */
#define declare_TIE_CAAIVis2DGraphVisu(classe) \
 \
 \
class TIECAAIVis2DGraphVisu##classe : public CAAIVis2DGraphVisu \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIVis2DGraphVisu, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CAT3x3Matrix & GetPositioningMatrix(); \
      virtual void IncrementPositioningMatrix(); \
      virtual CATRep * BuildRep () ; \
      virtual CATRep * GiveRep () ; \
      virtual HRESULT GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep ) ; \
      virtual int ModifyRep ( const CATNotification & iInfo ) ; \
      virtual void UnreferenceRep () ; \
      virtual HRESULT BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep ) ; \
      virtual HRESULT BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep ) ; \
      virtual HRESULT DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt ) ; \
      virtual CATRep * GetRep () ; \
      virtual HRESULT IsHighlightValid(CATPathElement & iPathElt) ; \
      virtual HRESULT SetVisuRep(CATRep * iRep) ; \
      virtual void SetRepNotUpToDate() ; \
      virtual int IsRepUpToDate() ; \
};



#define ENVTIEdeclare_CAAIVis2DGraphVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CAT3x3Matrix & GetPositioningMatrix(); \
virtual void IncrementPositioningMatrix(); \
virtual CATRep * BuildRep () ; \
virtual CATRep * GiveRep () ; \
virtual HRESULT GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep ) ; \
virtual int ModifyRep ( const CATNotification & iInfo ) ; \
virtual void UnreferenceRep () ; \
virtual HRESULT BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep ) ; \
virtual HRESULT BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep ) ; \
virtual HRESULT DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt ) ; \
virtual CATRep * GetRep () ; \
virtual HRESULT IsHighlightValid(CATPathElement & iPathElt) ; \
virtual HRESULT SetVisuRep(CATRep * iRep) ; \
virtual void SetRepNotUpToDate() ; \
virtual int IsRepUpToDate() ; \


#define ENVTIEdefine_CAAIVis2DGraphVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CAT3x3Matrix &  ENVTIEName::GetPositioningMatrix() \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)GetPositioningMatrix()); \
} \
void  ENVTIEName::IncrementPositioningMatrix() \
{ \
 (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)IncrementPositioningMatrix()); \
} \
CATRep *  ENVTIEName::BuildRep ()  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)BuildRep ()); \
} \
CATRep *  ENVTIEName::GiveRep ()  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)GiveRep ()); \
} \
HRESULT  ENVTIEName::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)GiveContextualRep(iContext,oRep )); \
} \
int  ENVTIEName::ModifyRep ( const CATNotification & iInfo )  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)ModifyRep (iInfo )); \
} \
void  ENVTIEName::UnreferenceRep ()  \
{ \
 (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)UnreferenceRep ()); \
} \
HRESULT  ENVTIEName::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  ENVTIEName::GetRep ()  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)GetRep ()); \
} \
HRESULT  ENVTIEName::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)IsHighlightValid(iPathElt)); \
} \
HRESULT  ENVTIEName::SetVisuRep(CATRep * iRep)  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)SetVisuRep(iRep)); \
} \
void  ENVTIEName::SetRepNotUpToDate()  \
{ \
 (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)SetRepNotUpToDate()); \
} \
int  ENVTIEName::IsRepUpToDate()  \
{ \
return (ENVTIECALL(CAAIVis2DGraphVisu,ENVTIETypeLetter,ENVTIELetter)IsRepUpToDate()); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIVis2DGraphVisu(classe)    TIECAAIVis2DGraphVisu##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIVis2DGraphVisu(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIVis2DGraphVisu, classe) \
 \
 \
CATImplementTIEMethods(CAAIVis2DGraphVisu, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIVis2DGraphVisu, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIVis2DGraphVisu, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIVis2DGraphVisu, classe) \
 \
CAT3x3Matrix &  TIECAAIVis2DGraphVisu##classe::GetPositioningMatrix() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPositioningMatrix()); \
} \
void  TIECAAIVis2DGraphVisu##classe::IncrementPositioningMatrix() \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IncrementPositioningMatrix(); \
} \
CATRep *  TIECAAIVis2DGraphVisu##classe::BuildRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRep ()); \
} \
CATRep *  TIECAAIVis2DGraphVisu##classe::GiveRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveRep ()); \
} \
HRESULT  TIECAAIVis2DGraphVisu##classe::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveContextualRep(iContext,oRep )); \
} \
int  TIECAAIVis2DGraphVisu##classe::ModifyRep ( const CATNotification & iInfo )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyRep (iInfo )); \
} \
void  TIECAAIVis2DGraphVisu##classe::UnreferenceRep ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnreferenceRep (); \
} \
HRESULT  TIECAAIVis2DGraphVisu##classe::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  TIECAAIVis2DGraphVisu##classe::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  TIECAAIVis2DGraphVisu##classe::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  TIECAAIVis2DGraphVisu##classe::GetRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRep ()); \
} \
HRESULT  TIECAAIVis2DGraphVisu##classe::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsHighlightValid(iPathElt)); \
} \
HRESULT  TIECAAIVis2DGraphVisu##classe::SetVisuRep(CATRep * iRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisuRep(iRep)); \
} \
void  TIECAAIVis2DGraphVisu##classe::SetRepNotUpToDate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRepNotUpToDate(); \
} \
int  TIECAAIVis2DGraphVisu##classe::IsRepUpToDate()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsRepUpToDate()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIVis2DGraphVisu(classe) \
 \
 \
declare_TIE_CAAIVis2DGraphVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVis2DGraphVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVis2DGraphVisu,"CAAIVis2DGraphVisu",CAAIVis2DGraphVisu::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVis2DGraphVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIVis2DGraphVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVis2DGraphVisu##classe(classe::MetaObject(),CAAIVis2DGraphVisu::MetaObject(),(void *)CreateTIECAAIVis2DGraphVisu##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIVis2DGraphVisu(classe) \
 \
 \
declare_TIE_CAAIVis2DGraphVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVis2DGraphVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVis2DGraphVisu,"CAAIVis2DGraphVisu",CAAIVis2DGraphVisu::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVis2DGraphVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIVis2DGraphVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVis2DGraphVisu##classe(classe::MetaObject(),CAAIVis2DGraphVisu::MetaObject(),(void *)CreateTIECAAIVis2DGraphVisu##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIVis2DGraphVisu(classe) TIE_CAAIVis2DGraphVisu(classe)
#else
#define BOA_CAAIVis2DGraphVisu(classe) CATImplementBOA(CAAIVis2DGraphVisu, classe)
#endif

#endif
