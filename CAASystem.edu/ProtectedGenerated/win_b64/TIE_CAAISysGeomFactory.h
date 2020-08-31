#ifndef __TIE_CAAISysGeomFactory
#define __TIE_CAAISysGeomFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysGeomFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysGeomFactory */
#define declare_TIE_CAAISysGeomFactory(classe) \
 \
 \
class TIECAAISysGeomFactory##classe : public CAAISysGeomFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysGeomFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Create ( const CAAISysGeomFactory::GeomObject  iObjectType, const IID                            &iRequestInterfaceIID, CATBaseUnknown **oCreatedObj) const ; \
};



#define ENVTIEdeclare_CAAISysGeomFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Create ( const CAAISysGeomFactory::GeomObject  iObjectType, const IID                            &iRequestInterfaceIID, CATBaseUnknown **oCreatedObj) const ; \


#define ENVTIEdefine_CAAISysGeomFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Create ( const CAAISysGeomFactory::GeomObject  iObjectType, const IID                            &iRequestInterfaceIID, CATBaseUnknown **oCreatedObj) const  \
{ \
return (ENVTIECALL(CAAISysGeomFactory,ENVTIETypeLetter,ENVTIELetter)Create (iObjectType,iRequestInterfaceIID,oCreatedObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysGeomFactory(classe)    TIECAAISysGeomFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysGeomFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysGeomFactory, classe) \
 \
 \
CATImplementTIEMethods(CAAISysGeomFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysGeomFactory, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysGeomFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysGeomFactory, classe) \
 \
HRESULT  TIECAAISysGeomFactory##classe::Create ( const CAAISysGeomFactory::GeomObject  iObjectType, const IID                            &iRequestInterfaceIID, CATBaseUnknown **oCreatedObj) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create (iObjectType,iRequestInterfaceIID,oCreatedObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysGeomFactory(classe) \
 \
 \
declare_TIE_CAAISysGeomFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysGeomFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysGeomFactory,"CAAISysGeomFactory",CAAISysGeomFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysGeomFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysGeomFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysGeomFactory##classe(classe::MetaObject(),CAAISysGeomFactory::MetaObject(),(void *)CreateTIECAAISysGeomFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysGeomFactory(classe) \
 \
 \
declare_TIE_CAAISysGeomFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysGeomFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysGeomFactory,"CAAISysGeomFactory",CAAISysGeomFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysGeomFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysGeomFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysGeomFactory##classe(classe::MetaObject(),CAAISysGeomFactory::MetaObject(),(void *)CreateTIECAAISysGeomFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysGeomFactory(classe) TIE_CAAISysGeomFactory(classe)
#else
#define BOA_CAAISysGeomFactory(classe) CATImplementBOA(CAAISysGeomFactory, classe)
#endif

#endif
