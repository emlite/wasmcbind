#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLDetailsElement;


DECLARE_EMLITE_TYPE(HTMLDetailsElement, HTMLElement);

HTMLDetailsElement HTMLDetailsElement_new();

jb_DOMString HTMLDetailsElement_name( const HTMLDetailsElement *self);

void HTMLDetailsElement_set_name(HTMLDetailsElement* self, const jb_DOMString* value);

bool HTMLDetailsElement_open( const HTMLDetailsElement *self);

void HTMLDetailsElement_set_open(HTMLDetailsElement* self, bool value);
