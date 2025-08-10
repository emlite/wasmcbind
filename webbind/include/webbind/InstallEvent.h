#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ExtendableEventInit ExtendableEventInit;

DECLARE_EMLITE_TYPE(InstallEvent, ExtendableEvent);

InstallEvent InstallEvent_new0(jb_String * type);

InstallEvent InstallEvent_new1(jb_String * type, ExtendableEventInit * eventInitDict);

jb_Promise InstallEvent_addRoutes(InstallEvent* self , jb_Any * rules);

#ifdef __cplusplus
}
#endif
