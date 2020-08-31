#include "CATMetaObject.h"
#include <string.h>

#include "CAAIASysSprocket.h"
#include "CATIABase.h"

IID IID_CAAIASysSprocket = {0xa5efde80, 0x2f74, 0x11d6, {0x80, 0x4d, 0x00, 0x10, 0xb5, 0xfa, 0x10, 0x31}};
CATImplementNamedLicensedInterface(CAAIASysSprocket, CATIABase, Sprocket);
CATImplementHandler(CAAIASysSprocket, CATIABase);

