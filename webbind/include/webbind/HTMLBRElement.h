#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLBRElement;


DECLARE_EMLITE_TYPE(HTMLBRElement, HTMLElement);

HTMLBRElement HTMLBRElement_new();

jb_DOMString HTMLBRElement_clear( const HTMLBRElement *self);

void HTMLBRElement_set_clear(HTMLBRElement* self, const jb_DOMString* value);
