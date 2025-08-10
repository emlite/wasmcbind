#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HTMLParagraphElement, HTMLElement);

HTMLParagraphElement HTMLParagraphElement_new();

jb_String HTMLParagraphElement_align(const HTMLParagraphElement *self);

void HTMLParagraphElement_set_align(HTMLParagraphElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
