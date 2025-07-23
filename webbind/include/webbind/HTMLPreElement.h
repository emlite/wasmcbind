#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLPreElement, HTMLElement);

HTMLPreElement HTMLPreElement_new();

long HTMLPreElement_width(const HTMLPreElement *self);

void HTMLPreElement_set_width(HTMLPreElement* self, long value);
