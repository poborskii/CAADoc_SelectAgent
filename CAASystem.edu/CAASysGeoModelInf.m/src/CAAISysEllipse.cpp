// COPYRIGHT DASSAULT SYSTEMES 1999

// Local Framework
#include "CAAISysEllipse.h"

// Use uuid_gen -C on UNIX or uuidgen -s on NT  to generate the IID 
//
IID IID_CAAISysEllipse={ /* a8fda0f4-d4bf-11d3-b7f5-0008c74fe8dd */
    0xa8fda0f4,
    0xd4bf,
    0x11d3,
    {0xb7, 0xf5, 0x00, 0x08, 0xc7, 0x4f, 0xe8, 0xdd}
  };

// Declares that CAAISysEllipse is an interface
CATImplementInterface(CAAISysEllipse, CATBaseUnknown);

