#include "CATMetaObject.h"
#include <string.h>

#include "CAAIASysSprockets.h"
#include "CATIACollection.h"

IID IID_CAAIASysSprockets = {0xb9baf840, 0x2f74, 0x11d6, {0x80, 0x4d, 0x00, 0x10, 0xb5, 0xfa, 0x10, 0x31}};
CATImplementNamedLicensedInterface(CAAIASysSprockets, CATIACollection, Sprockets);
CATImplementHandler(CAAIASysSprockets, CATIACollection);

