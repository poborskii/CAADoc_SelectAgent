#ifndef __TIE_CAAIAfrGeoCreationWkbFactory
#define __TIE_CAAIAfrGeoCreationWkbFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIAfrGeoCreationWkbFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIAfrGeoCreationWkbFactory */
#define declare_TIE_CAAIAfrGeoCreationWkbFactory(classe) \
 \
 \
class TIECAAIAfrGeoCreationWkbFactory##classe : public CAAIAfrGeoCreationWkbFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIAfrGeoCreationWkbFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual unsigned char       Support( const CATUnicodeString& iEditName ) const ; \
      virtual CATBaseUnknown*     Create ( const CATUnicodeString& iIntfName ) const ; \
};



#define ENVTIEdeclare_CAAIAfrGeoCreationWkbFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual unsigned char       Support( const CATUnicodeString& iEditName ) const ; \
virtual CATBaseUnknown*     Create ( const CATUnicodeString& iIntfName ) const ; \


#define ENVTIEdefine_CAAIAfrGeoCreationWkbFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
unsigned char        ENVTIEName::Support( const CATUnicodeString& iEditName ) const  \
{ \
return (ENVTIECALL(CAAIAfrGeoCreationWkbFactory,ENVTIETypeLetter,ENVTIELetter)Support(iEditName )); \
} \
CATBaseUnknown*      ENVTIEName::Create ( const CATUnicodeString& iIntfName ) const  \
{ \
return (ENVTIECALL(CAAIAfrGeoCreationWkbFactory,ENVTIETypeLetter,ENVTIELetter)Create (iIntfName )); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIAfrGeoCreationWkbFactory(classe)    TIECAAIAfrGeoCreationWkbFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIAfrGeoCreationWkbFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIAfrGeoCreationWkbFactory, classe) \
 \
 \
CATImplementTIEMethods(CAAIAfrGeoCreationWkbFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIAfrGeoCreationWkbFactory, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIAfrGeoCreationWkbFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIAfrGeoCreationWkbFactory, classe) \
 \
unsigned char        TIECAAIAfrGeoCreationWkbFactory##classe::Support( const CATUnicodeString& iEditName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Support(iEditName )); \
} \
CATBaseUnknown*      TIECAAIAfrGeoCreationWkbFactory##classe::Create ( const CATUnicodeString& iIntfName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create (iIntfName )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIAfrGeoCreationWkbFactory(classe) \
 \
 \
declare_TIE_CAAIAfrGeoCreationWkbFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeoCreationWkbFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeoCreationWkbFactory,"CAAIAfrGeoCreationWkbFactory",CAAIAfrGeoCreationWkbFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeoCreationWkbFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIAfrGeoCreationWkbFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeoCreationWkbFactory##classe(classe::MetaObject(),CAAIAfrGeoCreationWkbFactory::MetaObject(),(void *)CreateTIECAAIAfrGeoCreationWkbFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIAfrGeoCreationWkbFactory(classe) \
 \
 \
declare_TIE_CAAIAfrGeoCreationWkbFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeoCreationWkbFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeoCreationWkbFactory,"CAAIAfrGeoCreationWkbFactory",CAAIAfrGeoCreationWkbFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeoCreationWkbFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIAfrGeoCreationWkbFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeoCreationWkbFactory##classe(classe::MetaObject(),CAAIAfrGeoCreationWkbFactory::MetaObject(),(void *)CreateTIECAAIAfrGeoCreationWkbFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIAfrGeoCreationWkbFactory(classe) TIE_CAAIAfrGeoCreationWkbFactory(classe)
#else
#define BOA_CAAIAfrGeoCreationWkbFactory(classe) CATImplementBOA(CAAIAfrGeoCreationWkbFactory, classe)
#endif

#endif
