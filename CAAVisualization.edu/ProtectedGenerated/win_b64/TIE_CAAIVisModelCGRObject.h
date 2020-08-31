#ifndef __TIE_CAAIVisModelCGRObject
#define __TIE_CAAIVisModelCGRObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAIVisModelCGRObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAIVisModelCGRObject */
#define declare_TIE_CAAIVisModelCGRObject(classe) \
 \
 \
class TIECAAIVisModelCGRObject##classe : public CAAIVisModelCGRObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAIVisModelCGRObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetCGRRep(CATRep ** oCGRRep) ; \
      virtual HRESULT ReadCGRFile(const char * iCGRFileName) ; \
};



#define ENVTIEdeclare_CAAIVisModelCGRObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetCGRRep(CATRep ** oCGRRep) ; \
virtual HRESULT ReadCGRFile(const char * iCGRFileName) ; \


#define ENVTIEdefine_CAAIVisModelCGRObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetCGRRep(CATRep ** oCGRRep)  \
{ \
return (ENVTIECALL(CAAIVisModelCGRObject,ENVTIETypeLetter,ENVTIELetter)GetCGRRep(oCGRRep)); \
} \
HRESULT  ENVTIEName::ReadCGRFile(const char * iCGRFileName)  \
{ \
return (ENVTIECALL(CAAIVisModelCGRObject,ENVTIETypeLetter,ENVTIELetter)ReadCGRFile(iCGRFileName)); \
} \


/* Name of the TIE class */
#define class_TIE_CAAIVisModelCGRObject(classe)    TIECAAIVisModelCGRObject##classe


/* Common methods inside a TIE */
#define common_TIE_CAAIVisModelCGRObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAIVisModelCGRObject, classe) \
 \
 \
CATImplementTIEMethods(CAAIVisModelCGRObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAIVisModelCGRObject, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAIVisModelCGRObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAIVisModelCGRObject, classe) \
 \
HRESULT  TIECAAIVisModelCGRObject##classe::GetCGRRep(CATRep ** oCGRRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCGRRep(oCGRRep)); \
} \
HRESULT  TIECAAIVisModelCGRObject##classe::ReadCGRFile(const char * iCGRFileName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadCGRFile(iCGRFileName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAIVisModelCGRObject(classe) \
 \
 \
declare_TIE_CAAIVisModelCGRObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelCGRObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelCGRObject,"CAAIVisModelCGRObject",CAAIVisModelCGRObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelCGRObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAIVisModelCGRObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelCGRObject##classe(classe::MetaObject(),CAAIVisModelCGRObject::MetaObject(),(void *)CreateTIECAAIVisModelCGRObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAIVisModelCGRObject(classe) \
 \
 \
declare_TIE_CAAIVisModelCGRObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAIVisModelCGRObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAIVisModelCGRObject,"CAAIVisModelCGRObject",CAAIVisModelCGRObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAIVisModelCGRObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAIVisModelCGRObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAIVisModelCGRObject##classe(classe::MetaObject(),CAAIVisModelCGRObject::MetaObject(),(void *)CreateTIECAAIVisModelCGRObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAIVisModelCGRObject(classe) TIE_CAAIVisModelCGRObject(classe)
#else
#define BOA_CAAIVisModelCGRObject(classe) CATImplementBOA(CAAIVisModelCGRObject, classe)
#endif

#endif
