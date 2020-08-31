#ifndef __TIE_CATICAAAfrGeometryWksConfiguration
#define __TIE_CATICAAAfrGeometryWksConfiguration

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICAAAfrGeometryWksConfiguration.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICAAAfrGeometryWksConfiguration */
#define declare_TIE_CATICAAAfrGeometryWksConfiguration(classe) \
 \
 \
class TIECATICAAAfrGeometryWksConfiguration##classe : public CATICAAAfrGeometryWksConfiguration \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICAAAfrGeometryWksConfiguration, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands() ; \
      virtual CATCmdWorkbench * CreateWorkbench() ; \
      virtual CATClassId        GetAddinInterface () ; \
      virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \
};



#define ENVTIEdeclare_CATICAAAfrGeometryWksConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands() ; \
virtual CATCmdWorkbench * CreateWorkbench() ; \
virtual CATClassId        GetAddinInterface () ; \
virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \


#define ENVTIEdefine_CATICAAAfrGeometryWksConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands()  \
{ \
 (ENVTIECALL(CATICAAAfrGeometryWksConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateCommands()); \
} \
CATCmdWorkbench *  ENVTIEName::CreateWorkbench()  \
{ \
return (ENVTIECALL(CATICAAAfrGeometryWksConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateWorkbench()); \
} \
CATClassId         ENVTIEName::GetAddinInterface ()  \
{ \
return (ENVTIECALL(CATICAAAfrGeometryWksConfiguration,ENVTIETypeLetter,ENVTIELetter)GetAddinInterface ()); \
} \
void               ENVTIEName::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
 (ENVTIECALL(CATICAAAfrGeometryWksConfiguration,ENVTIETypeLetter,ENVTIELetter)GetCustomInterfaces(oDefaultIIDList,oCustomIIDList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICAAAfrGeometryWksConfiguration(classe)    TIECATICAAAfrGeometryWksConfiguration##classe


/* Common methods inside a TIE */
#define common_TIE_CATICAAAfrGeometryWksConfiguration(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICAAAfrGeometryWksConfiguration, classe) \
 \
 \
CATImplementTIEMethods(CATICAAAfrGeometryWksConfiguration, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICAAAfrGeometryWksConfiguration, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICAAAfrGeometryWksConfiguration, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICAAAfrGeometryWksConfiguration, classe) \
 \
void               TIECATICAAAfrGeometryWksConfiguration##classe::CreateCommands()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands(); \
} \
CATCmdWorkbench *  TIECATICAAAfrGeometryWksConfiguration##classe::CreateWorkbench()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateWorkbench()); \
} \
CATClassId         TIECATICAAAfrGeometryWksConfiguration##classe::GetAddinInterface ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAddinInterface ()); \
} \
void               TIECATICAAAfrGeometryWksConfiguration##classe::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomInterfaces(oDefaultIIDList,oCustomIIDList); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICAAAfrGeometryWksConfiguration(classe) \
 \
 \
declare_TIE_CATICAAAfrGeometryWksConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICAAAfrGeometryWksConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICAAAfrGeometryWksConfiguration,"CATICAAAfrGeometryWksConfiguration",CATICAAAfrGeometryWksConfiguration::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICAAAfrGeometryWksConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICAAAfrGeometryWksConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICAAAfrGeometryWksConfiguration##classe(classe::MetaObject(),CATICAAAfrGeometryWksConfiguration::MetaObject(),(void *)CreateTIECATICAAAfrGeometryWksConfiguration##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICAAAfrGeometryWksConfiguration(classe) \
 \
 \
declare_TIE_CATICAAAfrGeometryWksConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICAAAfrGeometryWksConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICAAAfrGeometryWksConfiguration,"CATICAAAfrGeometryWksConfiguration",CATICAAAfrGeometryWksConfiguration::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICAAAfrGeometryWksConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICAAAfrGeometryWksConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICAAAfrGeometryWksConfiguration##classe(classe::MetaObject(),CATICAAAfrGeometryWksConfiguration::MetaObject(),(void *)CreateTIECATICAAAfrGeometryWksConfiguration##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICAAAfrGeometryWksConfiguration(classe) TIE_CATICAAAfrGeometryWksConfiguration(classe)
#else
#define BOA_CATICAAAfrGeometryWksConfiguration(classe) CATImplementBOA(CATICAAAfrGeometryWksConfiguration, classe)
#endif

#endif
