#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HTMLHtmlElement, HTMLElement);

HTMLHtmlElement HTMLHtmlElement_new();

jb_String HTMLHtmlElement_version(const HTMLHtmlElement *self);

void HTMLHtmlElement_set_version(HTMLHtmlElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
