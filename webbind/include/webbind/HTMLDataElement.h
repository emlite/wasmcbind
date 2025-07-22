#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLDataElement;


DECLARE_EMLITE_TYPE(HTMLDataElement, HTMLElement);

HTMLDataElement HTMLDataElement_new();

jb_DOMString HTMLDataElement_value( const HTMLDataElement *self);

void HTMLDataElement_set_value(HTMLDataElement* self, const jb_DOMString* value);
