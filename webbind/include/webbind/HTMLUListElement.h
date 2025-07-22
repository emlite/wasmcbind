#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLUListElement;


DECLARE_EMLITE_TYPE(HTMLUListElement, HTMLElement);

HTMLUListElement HTMLUListElement_new();

bool HTMLUListElement_compact( const HTMLUListElement *self);

void HTMLUListElement_set_compact(HTMLUListElement* self, bool value);

jb_DOMString HTMLUListElement_type( const HTMLUListElement *self);

void HTMLUListElement_set_type(HTMLUListElement* self, const jb_DOMString* value);
