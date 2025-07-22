#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLHeadingElement, HTMLElement);

HTMLHeadingElement HTMLHeadingElement_new();

jb_DOMString HTMLHeadingElement_align( const HTMLHeadingElement *self);

void HTMLHeadingElement_set_align(HTMLHeadingElement* self, jb_DOMString * value);
