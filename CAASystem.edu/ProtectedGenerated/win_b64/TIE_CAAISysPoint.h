#ifndef __TIE_CAAISysPoint
#define __TIE_CAAISysPoint

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysPoint.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysPoint */
#define declare_TIE_CAAISysPoint(classe) \
 \
 \
class TIECAAISysPoint##classe : public CAAISysPoint \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysPoint, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetCoord(const float iX, const float iY, const float iZ)  ; \
      virtual HRESULT GetCoord(float & oX, float & oY, float & oZ)  const ; \
};



#define ENVTIEdeclare_CAAISysPoint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetCoord(const float iX, const float iY, const float iZ)  ; \
virtual HRESULT GetCoord(float & oX, float & oY, float & oZ)  const ; \


#define ENVTIEdefine_CAAISysPoint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetCoord(const float iX, const float iY, const float iZ)   \
{ \
return (ENVTIECALL(CAAISysPoint,ENVTIETypeLetter,ENVTIELetter)SetCoord(iX,iY,iZ)); \
} \
HRESULT  ENVTIEName::GetCoord(float & oX, float & oY, float & oZ)  const  \
{ \
return (ENVTIECALL(CAAISysPoint,ENVTIETypeLetter,ENVTIELetter)GetCoord(oX,oY,oZ)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysPoint(classe)    TIECAAISysPoint##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysPoint(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysPoint, classe) \
 \
 \
CATImplementTIEMethods(CAAISysPoint, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysPoint, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysPoint, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysPoint, classe) \
 \
HRESULT  TIECAAISysPoint##classe::SetCoord(const float iX, const float iY, const float iZ)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCoord(iX,iY,iZ)); \
} \
HRESULT  TIECAAISysPoint##classe::GetCoord(float & oX, float & oY, float & oZ)  const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoord(oX,oY,oZ)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysPoint(classe) \
 \
 \
declare_TIE_CAAISysPoint(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysPoint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysPoint,"CAAISysPoint",CAAISysPoint::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysPoint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysPoint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysPoint##classe(classe::MetaObject(),CAAISysPoint::MetaObject(),(void *)CreateTIECAAISysPoint##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysPoint(classe) \
 \
 \
declare_TIE_CAAISysPoint(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysPoint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysPoint,"CAAISysPoint",CAAISysPoint::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysPoint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysPoint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysPoint##classe(classe::MetaObject(),CAAISysPoint::MetaObject(),(void *)CreateTIECAAISysPoint##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysPoint(classe) TIE_CAAISysPoint(classe)
#else
#define BOA_CAAISysPoint(classe) CATImplementBOA(CAAISysPoint, classe)
#endif

#endif
