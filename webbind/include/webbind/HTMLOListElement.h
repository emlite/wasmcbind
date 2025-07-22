#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLOListElement;


DECLARE_EMLITE_TYPE(HTMLOListElement, HTMLElement);

HTMLOListElement HTMLOListElement_new();

bool HTMLOListElement_reversed( const HTMLOListElement *self);

void HTMLOListElement_set_reversed(HTMLOListElement* self, bool value);

long HTMLOListElement_start( const HTMLOListElement *self);

void HTMLOListElement_set_start(HTMLOListElement* self, long value);

jb_DOMString HTMLOListElement_type( const HTMLOListElement *self);

void HTMLOListElement_set_type(HTMLOListElement* self, const jb_DOMString* value);

bool HTMLOListElement_compact( const HTMLOListElement *self);

void HTMLOListElement_set_compact(HTMLOListElement* self, bool value);
