#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"


typedef struct {
  ExtendableEvent inner;
} InstallEvent;


DECLARE_EMLITE_TYPE(InstallEvent, ExtendableEvent);

InstallEvent InstallEvent_new(const jb_DOMString* type);

InstallEvent InstallEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Promise InstallEvent_addRoutes(InstallEvent* self , const jb_Any* rules);
