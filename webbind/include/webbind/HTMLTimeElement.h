#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLTimeElement;


DECLARE_EMLITE_TYPE(HTMLTimeElement, HTMLElement);

HTMLTimeElement HTMLTimeElement_new();

jb_DOMString HTMLTimeElement_dateTime( const HTMLTimeElement *self);

void HTMLTimeElement_set_dateTime(HTMLTimeElement* self, const jb_DOMString* value);
