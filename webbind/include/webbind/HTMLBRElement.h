#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLBRElement, HTMLElement);

HTMLBRElement HTMLBRElement_new();

jb_DOMString HTMLBRElement_clear(const HTMLBRElement *self);

void HTMLBRElement_set_clear(HTMLBRElement* self, jb_DOMString * value);
