// COPYRIGHT DASSAULT SYSTEMES 1999

#include "CAAIVisModelSphere.h"

// Use uuid_gen -C on UNIX or uuidgen -s on NT  to generate the IID 
IID IID_CAAIVisModelSphere = { /* 07d4b040-2259-11d4-85b3-00108335648a */
    0x07d4b040,
    0x2259,
    0x11d4,
    {0x85, 0xb3, 0x00, 0x10, 0x83, 0x35, 0x64, 0x8a}
  };


// Declares that CAAIVisModelSphere is an interface that CNext-derive from CATBaseUnknown
CATImplementInterface(CAAIVisModelSphere,CATBaseUnknown);
