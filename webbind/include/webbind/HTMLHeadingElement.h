#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HTMLHeadingElement, HTMLElement);

HTMLHeadingElement HTMLHeadingElement_new();

jb_String HTMLHeadingElement_align(const HTMLHeadingElement *self);

void HTMLHeadingElement_set_align(HTMLHeadingElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
