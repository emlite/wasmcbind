#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLLIElement;


DECLARE_EMLITE_TYPE(HTMLLIElement, HTMLElement);

HTMLLIElement HTMLLIElement_new();

long HTMLLIElement_value( const HTMLLIElement *self);

void HTMLLIElement_set_value(HTMLLIElement* self, long value);

jb_DOMString HTMLLIElement_type( const HTMLLIElement *self);

void HTMLLIElement_set_type(HTMLLIElement* self, const jb_DOMString* value);
