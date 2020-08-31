#ifndef __TIE_CAAISysDocumentChartWindow
#define __TIE_CAAISysDocumentChartWindow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysDocumentChartWindow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysDocumentChartWindow */
#define declare_TIE_CAAISysDocumentChartWindow(classe) \
 \
 \
class TIECAAISysDocumentChartWindow##classe : public CAAISysDocumentChartWindow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysDocumentChartWindow, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CreateHistogramWindow() ; \
};



#define ENVTIEdeclare_CAAISysDocumentChartWindow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CreateHistogramWindow() ; \


#define ENVTIEdefine_CAAISysDocumentChartWindow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CreateHistogramWindow()  \
{ \
return (ENVTIECALL(CAAISysDocumentChartWindow,ENVTIETypeLetter,ENVTIELetter)CreateHistogramWindow()); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysDocumentChartWindow(classe)    TIECAAISysDocumentChartWindow##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysDocumentChartWindow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysDocumentChartWindow, classe) \
 \
 \
CATImplementTIEMethods(CAAISysDocumentChartWindow, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysDocumentChartWindow, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysDocumentChartWindow, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysDocumentChartWindow, classe) \
 \
HRESULT  TIECAAISysDocumentChartWindow##classe::CreateHistogramWindow()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateHistogramWindow()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysDocumentChartWindow(classe) \
 \
 \
declare_TIE_CAAISysDocumentChartWindow(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysDocumentChartWindow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysDocumentChartWindow,"CAAISysDocumentChartWindow",CAAISysDocumentChartWindow::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysDocumentChartWindow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysDocumentChartWindow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysDocumentChartWindow##classe(classe::MetaObject(),CAAISysDocumentChartWindow::MetaObject(),(void *)CreateTIECAAISysDocumentChartWindow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysDocumentChartWindow(classe) \
 \
 \
declare_TIE_CAAISysDocumentChartWindow(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysDocumentChartWindow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysDocumentChartWindow,"CAAISysDocumentChartWindow",CAAISysDocumentChartWindow::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysDocumentChartWindow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysDocumentChartWindow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysDocumentChartWindow##classe(classe::MetaObject(),CAAISysDocumentChartWindow::MetaObject(),(void *)CreateTIECAAISysDocumentChartWindow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysDocumentChartWindow(classe) TIE_CAAISysDocumentChartWindow(classe)
#else
#define BOA_CAAISysDocumentChartWindow(classe) CATImplementBOA(CAAISysDocumentChartWindow, classe)
#endif

#endif
