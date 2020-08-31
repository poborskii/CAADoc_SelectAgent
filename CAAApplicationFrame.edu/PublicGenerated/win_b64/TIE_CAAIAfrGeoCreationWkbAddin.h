#ifndef __TIE_CAAIAfrGeoCreationWkbAddin
#define __TIE_CAAIAfrGeoCreationWkbAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIAfrGeoCreationWkbAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIAfrGeoCreationWkbAddin */
#define declare_TIE_CAAIAfrGeoCreationWkbAddin(classe) \
 \
 \
class TIECAAIAfrGeoCreationWkbAddin##classe : public CAAIAfrGeoCreationWkbAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIAfrGeoCreationWkbAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CAAIAfrGeoCreationWkbAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CAAIAfrGeoCreationWkbAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CAAIAfrGeoCreationWkbAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CAAIAfrGeoCreationWkbAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIAfrGeoCreationWkbAddin(classe)    TIECAAIAfrGeoCreationWkbAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIAfrGeoCreationWkbAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIAfrGeoCreationWkbAddin, classe) \
 \
 \
CATImplementTIEMethods(CAAIAfrGeoCreationWkbAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIAfrGeoCreationWkbAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIAfrGeoCreationWkbAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIAfrGeoCreationWkbAddin, classe) \
 \
void               TIECAAIAfrGeoCreationWkbAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECAAIAfrGeoCreationWkbAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIAfrGeoCreationWkbAddin(classe) \
 \
 \
declare_TIE_CAAIAfrGeoCreationWkbAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeoCreationWkbAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeoCreationWkbAddin,"CAAIAfrGeoCreationWkbAddin",CAAIAfrGeoCreationWkbAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeoCreationWkbAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIAfrGeoCreationWkbAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeoCreationWkbAddin##classe(classe::MetaObject(),CAAIAfrGeoCreationWkbAddin::MetaObject(),(void *)CreateTIECAAIAfrGeoCreationWkbAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIAfrGeoCreationWkbAddin(classe) \
 \
 \
declare_TIE_CAAIAfrGeoCreationWkbAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeoCreationWkbAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeoCreationWkbAddin,"CAAIAfrGeoCreationWkbAddin",CAAIAfrGeoCreationWkbAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeoCreationWkbAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIAfrGeoCreationWkbAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeoCreationWkbAddin##classe(classe::MetaObject(),CAAIAfrGeoCreationWkbAddin::MetaObject(),(void *)CreateTIECAAIAfrGeoCreationWkbAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIAfrGeoCreationWkbAddin(classe) TIE_CAAIAfrGeoCreationWkbAddin(classe)
#else
#define BOA_CAAIAfrGeoCreationWkbAddin(classe) CATImplementBOA(CAAIAfrGeoCreationWkbAddin, classe)
#endif

#endif
