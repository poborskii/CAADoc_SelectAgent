#ifndef __TIE_CAAISysDataRequest
#define __TIE_CAAISysDataRequest

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysDataRequest.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysDataRequest */
#define declare_TIE_CAAISysDataRequest(classe) \
 \
 \
class TIECAAISysDataRequest##classe : public CAAISysDataRequest \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysDataRequest, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetData(const float iRadiusOfCircle      , const int   iNbOfCircle   , char      * iColorOfCircle   , float     * iSagOfCircle) ; \
      virtual HRESULT GetData(float  & oRadiusOfCircle     , int    & oNbOfCircle     , char  ** oColorOfCircle   , float ** oSagOfCircle) ; \
};



#define ENVTIEdeclare_CAAISysDataRequest(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetData(const float iRadiusOfCircle      , const int   iNbOfCircle   , char      * iColorOfCircle   , float     * iSagOfCircle) ; \
virtual HRESULT GetData(float  & oRadiusOfCircle     , int    & oNbOfCircle     , char  ** oColorOfCircle   , float ** oSagOfCircle) ; \


#define ENVTIEdefine_CAAISysDataRequest(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetData(const float iRadiusOfCircle      , const int   iNbOfCircle   , char      * iColorOfCircle   , float     * iSagOfCircle)  \
{ \
return (ENVTIECALL(CAAISysDataRequest,ENVTIETypeLetter,ENVTIELetter)SetData(iRadiusOfCircle      ,iNbOfCircle   ,iColorOfCircle   ,iSagOfCircle)); \
} \
HRESULT  ENVTIEName::GetData(float  & oRadiusOfCircle     , int    & oNbOfCircle     , char  ** oColorOfCircle   , float ** oSagOfCircle)  \
{ \
return (ENVTIECALL(CAAISysDataRequest,ENVTIETypeLetter,ENVTIELetter)GetData(oRadiusOfCircle     ,oNbOfCircle     ,oColorOfCircle   ,oSagOfCircle)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysDataRequest(classe)    TIECAAISysDataRequest##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysDataRequest(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysDataRequest, classe) \
 \
 \
CATImplementTIEMethods(CAAISysDataRequest, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysDataRequest, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysDataRequest, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysDataRequest, classe) \
 \
HRESULT  TIECAAISysDataRequest##classe::SetData(const float iRadiusOfCircle      , const int   iNbOfCircle   , char      * iColorOfCircle   , float     * iSagOfCircle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetData(iRadiusOfCircle      ,iNbOfCircle   ,iColorOfCircle   ,iSagOfCircle)); \
} \
HRESULT  TIECAAISysDataRequest##classe::GetData(float  & oRadiusOfCircle     , int    & oNbOfCircle     , char  ** oColorOfCircle   , float ** oSagOfCircle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetData(oRadiusOfCircle     ,oNbOfCircle     ,oColorOfCircle   ,oSagOfCircle)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysDataRequest(classe) \
 \
 \
declare_TIE_CAAISysDataRequest(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysDataRequest##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysDataRequest,"CAAISysDataRequest",CAAISysDataRequest::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysDataRequest(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysDataRequest, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysDataRequest##classe(classe::MetaObject(),CAAISysDataRequest::MetaObject(),(void *)CreateTIECAAISysDataRequest##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysDataRequest(classe) \
 \
 \
declare_TIE_CAAISysDataRequest(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysDataRequest##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysDataRequest,"CAAISysDataRequest",CAAISysDataRequest::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysDataRequest(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysDataRequest, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysDataRequest##classe(classe::MetaObject(),CAAISysDataRequest::MetaObject(),(void *)CreateTIECAAISysDataRequest##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysDataRequest(classe) TIE_CAAISysDataRequest(classe)
#else
#define BOA_CAAISysDataRequest(classe) CATImplementBOA(CAAISysDataRequest, classe)
#endif

#endif
