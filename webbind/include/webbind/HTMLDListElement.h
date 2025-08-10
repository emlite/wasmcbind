#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HTMLDListElement, HTMLElement);

HTMLDListElement HTMLDListElement_new();

bool HTMLDListElement_compact(const HTMLDListElement *self);

void HTMLDListElement_set_compact(HTMLDListElement* self, bool value);

#ifdef __cplusplus
}
#endif
