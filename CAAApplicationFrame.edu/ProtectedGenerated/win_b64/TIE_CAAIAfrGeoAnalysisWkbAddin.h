#ifndef __TIE_CAAIAfrGeoAnalysisWkbAddin
#define __TIE_CAAIAfrGeoAnalysisWkbAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIAfrGeoAnalysisWkbAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIAfrGeoAnalysisWkbAddin */
#define declare_TIE_CAAIAfrGeoAnalysisWkbAddin(classe) \
 \
 \
class TIECAAIAfrGeoAnalysisWkbAddin##classe : public CAAIAfrGeoAnalysisWkbAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIAfrGeoAnalysisWkbAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CAAIAfrGeoAnalysisWkbAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CAAIAfrGeoAnalysisWkbAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CAAIAfrGeoAnalysisWkbAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CAAIAfrGeoAnalysisWkbAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIAfrGeoAnalysisWkbAddin(classe)    TIECAAIAfrGeoAnalysisWkbAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIAfrGeoAnalysisWkbAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIAfrGeoAnalysisWkbAddin, classe) \
 \
 \
CATImplementTIEMethods(CAAIAfrGeoAnalysisWkbAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIAfrGeoAnalysisWkbAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIAfrGeoAnalysisWkbAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIAfrGeoAnalysisWkbAddin, classe) \
 \
void               TIECAAIAfrGeoAnalysisWkbAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECAAIAfrGeoAnalysisWkbAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIAfrGeoAnalysisWkbAddin(classe) \
 \
 \
declare_TIE_CAAIAfrGeoAnalysisWkbAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeoAnalysisWkbAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeoAnalysisWkbAddin,"CAAIAfrGeoAnalysisWkbAddin",CAAIAfrGeoAnalysisWkbAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeoAnalysisWkbAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIAfrGeoAnalysisWkbAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeoAnalysisWkbAddin##classe(classe::MetaObject(),CAAIAfrGeoAnalysisWkbAddin::MetaObject(),(void *)CreateTIECAAIAfrGeoAnalysisWkbAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIAfrGeoAnalysisWkbAddin(classe) \
 \
 \
declare_TIE_CAAIAfrGeoAnalysisWkbAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeoAnalysisWkbAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeoAnalysisWkbAddin,"CAAIAfrGeoAnalysisWkbAddin",CAAIAfrGeoAnalysisWkbAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeoAnalysisWkbAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIAfrGeoAnalysisWkbAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeoAnalysisWkbAddin##classe(classe::MetaObject(),CAAIAfrGeoAnalysisWkbAddin::MetaObject(),(void *)CreateTIECAAIAfrGeoAnalysisWkbAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIAfrGeoAnalysisWkbAddin(classe) TIE_CAAIAfrGeoAnalysisWkbAddin(classe)
#else
#define BOA_CAAIAfrGeoAnalysisWkbAddin(classe) CATImplementBOA(CAAIAfrGeoAnalysisWkbAddin, classe)
#endif

#endif
