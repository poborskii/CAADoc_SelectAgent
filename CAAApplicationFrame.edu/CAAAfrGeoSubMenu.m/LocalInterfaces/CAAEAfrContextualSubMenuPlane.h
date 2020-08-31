#ifndef CAAEAfrContextualSubMenuPlane_h
#define CAAEAfrContextualSubMenuPlane_h

// Copyright Dassault Systemes 2001

//******************************************************************************
//  Abstract:
//  ---------
//  Implementation of CATIContextualSubMenu for the CAASysPlane object
//
//  You are adding commands which appears in the <CAASysPlane> object menu of the 
//  contextual menu.The plane must implement the CATIEdit interface.  
//  see CAAAfrGeoSubMenu.m
//
//  To do this, we create and arrange command starters that we associate with 
//  commands using command headers. 
//
//  These command headers are referred to using their identifiers.  
//
//  Here each command header is defined in the Geometry workshop 
//
//******************************************************************************
//  Usage:
//  ------
//  This sub menu is merged with the menu associated with CATIEdit, named 
//  <CAASysPlane> Object in this case. 
//
//
//******************************************************************************
//  Explanation:
//  ------------
//  The sub menu must be a data member to manage its life cycle. It can be
//  identical or different from a call to another.
//  . If it is identical, it can be created in the constructor, returned in the
//    GetContextualSubMenu method, and deleted in the destructor. This is the
//    case here
//  . Otherwise, it must be created in the GetContextualSubMenu method. To
//    correctly manage its life cycle, it must be deleted:
//    . whenever calling GetContextualSubMenu
//    . in the destructor when the class itself is deleted
// 
//******************************************************************************
//  Main Methods:
//  ------------- 
//  Constructor            -> Builds the  sub menu 
//  Destructor             -> Deletes it
//  GetContextualSubMenu() -> Returns it
//
//******************************************************************************
#include "CATBaseUnknown.h"

class CATCmdAccess;

class CAAEAfrContextualSubMenuPlane : public CATBaseUnknown
{
  // Used in conjunction with CATImplementClass in the .cpp file
  CATDeclareClass;

  public:

    CAAEAfrContextualSubMenuPlane();
    virtual ~CAAEAfrContextualSubMenuPlane();

    virtual CATCmdAccess * GetContextualSubMenu() ;
 
  private :

    // Copy constructor, not implemented
    // Set as private to prevent from compiler automatic creation as public.
    CAAEAfrContextualSubMenuPlane(const CAAEAfrContextualSubMenuPlane &iObjectToCopy);

    // Assigment operator, not implemented
    // Set as private to prevent from compiler automatic creation as public.
    CAAEAfrContextualSubMenuPlane & operator = (const CAAEAfrContextualSubMenuPlane &iObjectToCopy);


  private :

    // The menu which is added to the CATIEdit menu
    CATCmdAccess *  _pMenu ;
};
#endif
