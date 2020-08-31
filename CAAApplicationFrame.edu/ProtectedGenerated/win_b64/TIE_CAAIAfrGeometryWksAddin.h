#ifndef __TIE_CAAIAfrGeometryWksAddin
#define __TIE_CAAIAfrGeometryWksAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIAfrGeometryWksAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIAfrGeometryWksAddin */
#define declare_TIE_CAAIAfrGeometryWksAddin(classe) \
 \
 \
class TIECAAIAfrGeometryWksAddin##classe : public CAAIAfrGeometryWksAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIAfrGeometryWksAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CAAIAfrGeometryWksAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CAAIAfrGeometryWksAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CAAIAfrGeometryWksAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CAAIAfrGeometryWksAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIAfrGeometryWksAddin(classe)    TIECAAIAfrGeometryWksAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIAfrGeometryWksAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIAfrGeometryWksAddin, classe) \
 \
 \
CATImplementTIEMethods(CAAIAfrGeometryWksAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIAfrGeometryWksAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIAfrGeometryWksAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIAfrGeometryWksAddin, classe) \
 \
void               TIECAAIAfrGeometryWksAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECAAIAfrGeometryWksAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIAfrGeometryWksAddin(classe) \
 \
 \
declare_TIE_CAAIAfrGeometryWksAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeometryWksAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeometryWksAddin,"CAAIAfrGeometryWksAddin",CAAIAfrGeometryWksAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeometryWksAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIAfrGeometryWksAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeometryWksAddin##classe(classe::MetaObject(),CAAIAfrGeometryWksAddin::MetaObject(),(void *)CreateTIECAAIAfrGeometryWksAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIAfrGeometryWksAddin(classe) \
 \
 \
declare_TIE_CAAIAfrGeometryWksAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeometryWksAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeometryWksAddin,"CAAIAfrGeometryWksAddin",CAAIAfrGeometryWksAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeometryWksAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIAfrGeometryWksAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeometryWksAddin##classe(classe::MetaObject(),CAAIAfrGeometryWksAddin::MetaObject(),(void *)CreateTIECAAIAfrGeometryWksAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIAfrGeometryWksAddin(classe) TIE_CAAIAfrGeometryWksAddin(classe)
#else
#define BOA_CAAIAfrGeometryWksAddin(classe) CATImplementBOA(CAAIAfrGeometryWksAddin, classe)
#endif

#endif
