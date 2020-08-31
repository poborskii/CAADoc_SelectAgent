#ifndef __TIE_CAAIAfrGeoAnalysisWkbFactory
#define __TIE_CAAIAfrGeoAnalysisWkbFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIAfrGeoAnalysisWkbFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIAfrGeoAnalysisWkbFactory */
#define declare_TIE_CAAIAfrGeoAnalysisWkbFactory(classe) \
 \
 \
class TIECAAIAfrGeoAnalysisWkbFactory##classe : public CAAIAfrGeoAnalysisWkbFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIAfrGeoAnalysisWkbFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual unsigned char       Support( const CATUnicodeString& iEditName ) const ; \
      virtual CATBaseUnknown*     Create ( const CATUnicodeString& iIntfName ) const ; \
};



#define ENVTIEdeclare_CAAIAfrGeoAnalysisWkbFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual unsigned char       Support( const CATUnicodeString& iEditName ) const ; \
virtual CATBaseUnknown*     Create ( const CATUnicodeString& iIntfName ) const ; \


#define ENVTIEdefine_CAAIAfrGeoAnalysisWkbFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
unsigned char        ENVTIEName::Support( const CATUnicodeString& iEditName ) const  \
{ \
return (ENVTIECALL(CAAIAfrGeoAnalysisWkbFactory,ENVTIETypeLetter,ENVTIELetter)Support(iEditName )); \
} \
CATBaseUnknown*      ENVTIEName::Create ( const CATUnicodeString& iIntfName ) const  \
{ \
return (ENVTIECALL(CAAIAfrGeoAnalysisWkbFactory,ENVTIETypeLetter,ENVTIELetter)Create (iIntfName )); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIAfrGeoAnalysisWkbFactory(classe)    TIECAAIAfrGeoAnalysisWkbFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIAfrGeoAnalysisWkbFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIAfrGeoAnalysisWkbFactory, classe) \
 \
 \
CATImplementTIEMethods(CAAIAfrGeoAnalysisWkbFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIAfrGeoAnalysisWkbFactory, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIAfrGeoAnalysisWkbFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIAfrGeoAnalysisWkbFactory, classe) \
 \
unsigned char        TIECAAIAfrGeoAnalysisWkbFactory##classe::Support( const CATUnicodeString& iEditName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Support(iEditName )); \
} \
CATBaseUnknown*      TIECAAIAfrGeoAnalysisWkbFactory##classe::Create ( const CATUnicodeString& iIntfName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create (iIntfName )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIAfrGeoAnalysisWkbFactory(classe) \
 \
 \
declare_TIE_CAAIAfrGeoAnalysisWkbFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeoAnalysisWkbFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeoAnalysisWkbFactory,"CAAIAfrGeoAnalysisWkbFactory",CAAIAfrGeoAnalysisWkbFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeoAnalysisWkbFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIAfrGeoAnalysisWkbFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeoAnalysisWkbFactory##classe(classe::MetaObject(),CAAIAfrGeoAnalysisWkbFactory::MetaObject(),(void *)CreateTIECAAIAfrGeoAnalysisWkbFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIAfrGeoAnalysisWkbFactory(classe) \
 \
 \
declare_TIE_CAAIAfrGeoAnalysisWkbFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeoAnalysisWkbFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeoAnalysisWkbFactory,"CAAIAfrGeoAnalysisWkbFactory",CAAIAfrGeoAnalysisWkbFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeoAnalysisWkbFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIAfrGeoAnalysisWkbFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeoAnalysisWkbFactory##classe(classe::MetaObject(),CAAIAfrGeoAnalysisWkbFactory::MetaObject(),(void *)CreateTIECAAIAfrGeoAnalysisWkbFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIAfrGeoAnalysisWkbFactory(classe) TIE_CAAIAfrGeoAnalysisWkbFactory(classe)
#else
#define BOA_CAAIAfrGeoAnalysisWkbFactory(classe) CATImplementBOA(CAAIAfrGeoAnalysisWkbFactory, classe)
#endif

#endif
