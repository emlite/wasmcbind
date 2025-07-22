#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(InstallEvent, ExtendableEvent);

InstallEvent InstallEvent_new0(jb_DOMString * type);

InstallEvent InstallEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_Promise InstallEvent_addRoutes(InstallEvent* self , jb_Any * rules);
