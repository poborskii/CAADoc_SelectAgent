#ifndef __TIE_CAAIVisHistogramChartVisu
#define __TIE_CAAIVisHistogramChartVisu

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIVisHistogramChartVisu.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIVisHistogramChartVisu */
#define declare_TIE_CAAIVisHistogramChartVisu(classe) \
 \
 \
class TIECAAIVisHistogramChartVisu##classe : public CAAIVisHistogramChartVisu \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIVisHistogramChartVisu, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
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



#define ENVTIEdeclare_CAAIVisHistogramChartVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CAAIVisHistogramChartVisu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATRep *  ENVTIEName::BuildRep ()  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)BuildRep ()); \
} \
CATRep *  ENVTIEName::GiveRep ()  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)GiveRep ()); \
} \
HRESULT  ENVTIEName::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)GiveContextualRep(iContext,oRep )); \
} \
int  ENVTIEName::ModifyRep ( const CATNotification & iInfo )  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)ModifyRep (iInfo )); \
} \
void  ENVTIEName::UnreferenceRep ()  \
{ \
 (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)UnreferenceRep ()); \
} \
HRESULT  ENVTIEName::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  ENVTIEName::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  ENVTIEName::GetRep ()  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)GetRep ()); \
} \
HRESULT  ENVTIEName::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)IsHighlightValid(iPathElt)); \
} \
HRESULT  ENVTIEName::SetVisuRep(CATRep * iRep)  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)SetVisuRep(iRep)); \
} \
void  ENVTIEName::SetRepNotUpToDate()  \
{ \
 (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)SetRepNotUpToDate()); \
} \
int  ENVTIEName::IsRepUpToDate()  \
{ \
return (ENVTIECALL(CAAIVisHistogramChartVisu,ENVTIETypeLetter,ENVTIELetter)IsRepUpToDate()); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIVisHistogramChartVisu(classe)    TIECAAIVisHistogramChartVisu##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIVisHistogramChartVisu(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIVisHistogramChartVisu, classe) \
 \
 \
CATImplementTIEMethods(CAAIVisHistogramChartVisu, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIVisHistogramChartVisu, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIVisHistogramChartVisu, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIVisHistogramChartVisu, classe) \
 \
CATRep *  TIECAAIVisHistogramChartVisu##classe::BuildRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRep ()); \
} \
CATRep *  TIECAAIVisHistogramChartVisu##classe::GiveRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveRep ()); \
} \
HRESULT  TIECAAIVisHistogramChartVisu##classe::GiveContextualRep( CATVisRepContext & iContext, CATRep *& oRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveContextualRep(iContext,oRep )); \
} \
int  TIECAAIVisHistogramChartVisu##classe::ModifyRep ( const CATNotification & iInfo )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyRep (iInfo )); \
} \
void  TIECAAIVisHistogramChartVisu##classe::UnreferenceRep ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnreferenceRep (); \
} \
HRESULT  TIECAAIVisHistogramChartVisu##classe::BuildRepPath(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRepPath(iPathElt,ioPathRep )); \
} \
HRESULT  TIECAAIVisHistogramChartVisu##classe::BuildHighlightLook(const CATPathElement & iPathElt, CATRepPath & ioPathRep )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildHighlightLook(iPathElt,ioPathRep )); \
} \
HRESULT  TIECAAIVisHistogramChartVisu##classe::DecodeGraphic(const CATPickPath &iPickPath, CATPathElement &ioPathElt )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DecodeGraphic(iPickPath,ioPathElt )); \
} \
CATRep *  TIECAAIVisHistogramChartVisu##classe::GetRep ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRep ()); \
} \
HRESULT  TIECAAIVisHistogramChartVisu##classe::IsHighlightValid(CATPathElement & iPathElt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsHighlightValid(iPathElt)); \
} \
HRESULT  TIECAAIVisHistogramChartVisu##classe::SetVisuRep(CATRep * iRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisuRep(iRep)); \
} \
void  TIECAAIVisHistogramChartVisu##classe::SetRepNotUpToDate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRepNotUpToDate(); \
} \
int  TIECAAIVisHistogramChartVisu##classe::IsRepUpToDate()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsRepUpToDate()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIVisHistogramChartVisu(classe) \
 \
 \
declare_TIE_CAAIVisHistogramChartVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisHistogramChartVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisHistogramChartVisu,"CAAIVisHistogramChartVisu",CAAIVisHistogramChartVisu::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisHistogramChartVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIVisHistogramChartVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisHistogramChartVisu##classe(classe::MetaObject(),CAAIVisHistogramChartVisu::MetaObject(),(void *)CreateTIECAAIVisHistogramChartVisu##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIVisHistogramChartVisu(classe) \
 \
 \
declare_TIE_CAAIVisHistogramChartVisu(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisHistogramChartVisu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisHistogramChartVisu,"CAAIVisHistogramChartVisu",CAAIVisHistogramChartVisu::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisHistogramChartVisu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIVisHistogramChartVisu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisHistogramChartVisu##classe(classe::MetaObject(),CAAIVisHistogramChartVisu::MetaObject(),(void *)CreateTIECAAIVisHistogramChartVisu##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIVisHistogramChartVisu(classe) TIE_CAAIVisHistogramChartVisu(classe)
#else
#define BOA_CAAIVisHistogramChartVisu(classe) CATImplementBOA(CAAIVisHistogramChartVisu, classe)
#endif

#endif
