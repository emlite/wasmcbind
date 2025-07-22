#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLTableCaptionElement, HTMLElement);

HTMLTableCaptionElement HTMLTableCaptionElement_new();

jb_DOMString HTMLTableCaptionElement_align( const HTMLTableCaptionElement *self);

void HTMLTableCaptionElement_set_align(HTMLTableCaptionElement* self, jb_DOMString * value);
