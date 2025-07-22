#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct HTMLFormElement HTMLFormElement;


typedef struct {
  HTMLElement inner;
} HTMLLegendElement;


DECLARE_EMLITE_TYPE(HTMLLegendElement, HTMLElement);

HTMLLegendElement HTMLLegendElement_new();

HTMLFormElement HTMLLegendElement_form( const HTMLLegendElement *self);

jb_DOMString HTMLLegendElement_align( const HTMLLegendElement *self);

void HTMLLegendElement_set_align(HTMLLegendElement* self, const jb_DOMString* value);
