#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLDivElement;


DECLARE_EMLITE_TYPE(HTMLDivElement, HTMLElement);

HTMLDivElement HTMLDivElement_new();

jb_DOMString HTMLDivElement_align( const HTMLDivElement *self);

void HTMLDivElement_set_align(HTMLDivElement* self, const jb_DOMString* value);
