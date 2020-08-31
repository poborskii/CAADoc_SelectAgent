#ifndef __TIE_CAAISysLine
#define __TIE_CAAISysLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CAAISysLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CAAISysLine */
#define declare_TIE_CAAISysLine(classe) \
 \
 \
class TIECAAISysLine##classe : public CAAISysLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CAAISysLine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  SetStartPoint(const CATMathPoint & iStartPoint) ; \
      virtual HRESULT  SetEndPoint  (const CATMathPoint & iEndPoint)   ; \
      virtual HRESULT  GetStartPoint(CATMathPoint & oStartPoint) const ; \
      virtual HRESULT  GetEndPoint  (CATMathPoint & oEndPoint  ) const ; \
};



#define ENVTIEdeclare_CAAISysLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  SetStartPoint(const CATMathPoint & iStartPoint) ; \
virtual HRESULT  SetEndPoint  (const CATMathPoint & iEndPoint)   ; \
virtual HRESULT  GetStartPoint(CATMathPoint & oStartPoint) const ; \
virtual HRESULT  GetEndPoint  (CATMathPoint & oEndPoint  ) const ; \


#define ENVTIEdefine_CAAISysLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::SetStartPoint(const CATMathPoint & iStartPoint)  \
{ \
return (ENVTIECALL(CAAISysLine,ENVTIETypeLetter,ENVTIELetter)SetStartPoint(iStartPoint)); \
} \
HRESULT   ENVTIEName::SetEndPoint  (const CATMathPoint & iEndPoint)    \
{ \
return (ENVTIECALL(CAAISysLine,ENVTIETypeLetter,ENVTIELetter)SetEndPoint  (iEndPoint)); \
} \
HRESULT   ENVTIEName::GetStartPoint(CATMathPoint & oStartPoint) const  \
{ \
return (ENVTIECALL(CAAISysLine,ENVTIETypeLetter,ENVTIELetter)GetStartPoint(oStartPoint)); \
} \
HRESULT   ENVTIEName::GetEndPoint  (CATMathPoint & oEndPoint  ) const  \
{ \
return (ENVTIECALL(CAAISysLine,ENVTIETypeLetter,ENVTIELetter)GetEndPoint  (oEndPoint  )); \
} \


/* Name of the TIE class */
#define class_TIE_CAAISysLine(classe)    TIECAAISysLine##classe


/* Common methods inside a TIE */
#define common_TIE_CAAISysLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CAAISysLine, classe) \
 \
 \
CATImplementTIEMethods(CAAISysLine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CAAISysLine, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CAAISysLine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CAAISysLine, classe) \
 \
HRESULT   TIECAAISysLine##classe::SetStartPoint(const CATMathPoint & iStartPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartPoint(iStartPoint)); \
} \
HRESULT   TIECAAISysLine##classe::SetEndPoint  (const CATMathPoint & iEndPoint)    \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEndPoint  (iEndPoint)); \
} \
HRESULT   TIECAAISysLine##classe::GetStartPoint(CATMathPoint & oStartPoint) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartPoint(oStartPoint)); \
} \
HRESULT   TIECAAISysLine##classe::GetEndPoint  (CATMathPoint & oEndPoint  ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndPoint  (oEndPoint  )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CAAISysLine(classe) \
 \
 \
declare_TIE_CAAISysLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysLine,"CAAISysLine",CAAISysLine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CAAISysLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysLine##classe(classe::MetaObject(),CAAISysLine::MetaObject(),(void *)CreateTIECAAISysLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CAAISysLine(classe) \
 \
 \
declare_TIE_CAAISysLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECAAISysLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CAAISysLine,"CAAISysLine",CAAISysLine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CAAISysLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CAAISysLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCAAISysLine##classe(classe::MetaObject(),CAAISysLine::MetaObject(),(void *)CreateTIECAAISysLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CAAISysLine(classe) TIE_CAAISysLine(classe)
#else
#define BOA_CAAISysLine(classe) CATImplementBOA(CAAISysLine, classe)
#endif

#endif
