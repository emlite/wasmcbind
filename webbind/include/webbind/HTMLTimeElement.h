#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HTMLTimeElement, HTMLElement);

HTMLTimeElement HTMLTimeElement_new();

jb_String HTMLTimeElement_dateTime(const HTMLTimeElement *self);

void HTMLTimeElement_set_dateTime(HTMLTimeElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
