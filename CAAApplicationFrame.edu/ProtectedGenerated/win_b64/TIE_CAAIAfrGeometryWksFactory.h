#ifndef __TIE_CAAIAfrGeometryWksFactory
#define __TIE_CAAIAfrGeometryWksFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIAfrGeometryWksFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIAfrGeometryWksFactory */
#define declare_TIE_CAAIAfrGeometryWksFactory(classe) \
 \
 \
class TIECAAIAfrGeometryWksFactory##classe : public CAAIAfrGeometryWksFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIAfrGeometryWksFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual unsigned char       Support( const CATUnicodeString& iEditName ) const ; \
      virtual CATBaseUnknown*     Create ( const CATUnicodeString& iIntfName ) const ; \
};



#define ENVTIEdeclare_CAAIAfrGeometryWksFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual unsigned char       Support( const CATUnicodeString& iEditName ) const ; \
virtual CATBaseUnknown*     Create ( const CATUnicodeString& iIntfName ) const ; \


#define ENVTIEdefine_CAAIAfrGeometryWksFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
unsigned char        ENVTIEName::Support( const CATUnicodeString& iEditName ) const  \
{ \
return (ENVTIECALL(CAAIAfrGeometryWksFactory,ENVTIETypeLetter,ENVTIELetter)Support(iEditName )); \
} \
CATBaseUnknown*      ENVTIEName::Create ( const CATUnicodeString& iIntfName ) const  \
{ \
return (ENVTIECALL(CAAIAfrGeometryWksFactory,ENVTIETypeLetter,ENVTIELetter)Create (iIntfName )); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIAfrGeometryWksFactory(classe)    TIECAAIAfrGeometryWksFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIAfrGeometryWksFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIAfrGeometryWksFactory, classe) \
 \
 \
CATImplementTIEMethods(CAAIAfrGeometryWksFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIAfrGeometryWksFactory, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIAfrGeometryWksFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIAfrGeometryWksFactory, classe) \
 \
unsigned char        TIECAAIAfrGeometryWksFactory##classe::Support( const CATUnicodeString& iEditName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Support(iEditName )); \
} \
CATBaseUnknown*      TIECAAIAfrGeometryWksFactory##classe::Create ( const CATUnicodeString& iIntfName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create (iIntfName )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIAfrGeometryWksFactory(classe) \
 \
 \
declare_TIE_CAAIAfrGeometryWksFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeometryWksFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeometryWksFactory,"CAAIAfrGeometryWksFactory",CAAIAfrGeometryWksFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeometryWksFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIAfrGeometryWksFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeometryWksFactory##classe(classe::MetaObject(),CAAIAfrGeometryWksFactory::MetaObject(),(void *)CreateTIECAAIAfrGeometryWksFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIAfrGeometryWksFactory(classe) \
 \
 \
declare_TIE_CAAIAfrGeometryWksFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIAfrGeometryWksFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIAfrGeometryWksFactory,"CAAIAfrGeometryWksFactory",CAAIAfrGeometryWksFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIAfrGeometryWksFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIAfrGeometryWksFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIAfrGeometryWksFactory##classe(classe::MetaObject(),CAAIAfrGeometryWksFactory::MetaObject(),(void *)CreateTIECAAIAfrGeometryWksFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIAfrGeometryWksFactory(classe) TIE_CAAIAfrGeometryWksFactory(classe)
#else
#define BOA_CAAIAfrGeometryWksFactory(classe) CATImplementBOA(CAAIAfrGeometryWksFactory, classe)
#endif

#endif
