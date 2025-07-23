#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLParagraphElement, HTMLElement);

HTMLParagraphElement HTMLParagraphElement_new();

jb_DOMString HTMLParagraphElement_align(const HTMLParagraphElement *self);

void HTMLParagraphElement_set_align(HTMLParagraphElement* self, jb_DOMString * value);
