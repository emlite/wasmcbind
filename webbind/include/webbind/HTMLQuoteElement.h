#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HTMLQuoteElement, HTMLElement);

HTMLQuoteElement HTMLQuoteElement_new();

jb_String HTMLQuoteElement_cite(const HTMLQuoteElement *self);

void HTMLQuoteElement_set_cite(HTMLQuoteElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
