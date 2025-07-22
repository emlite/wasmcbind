#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLTitleElement, HTMLElement);

HTMLTitleElement HTMLTitleElement_new();

jb_DOMString HTMLTitleElement_text( const HTMLTitleElement *self);

void HTMLTitleElement_set_text(HTMLTitleElement* self, jb_DOMString * value);
