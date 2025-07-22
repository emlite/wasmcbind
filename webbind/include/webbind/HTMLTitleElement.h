#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLTitleElement;


DECLARE_EMLITE_TYPE(HTMLTitleElement, HTMLElement);

HTMLTitleElement HTMLTitleElement_new();

jb_DOMString HTMLTitleElement_text( const HTMLTitleElement *self);

void HTMLTitleElement_set_text(HTMLTitleElement* self, const jb_DOMString* value);
