#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLFrameSetElement;


DECLARE_EMLITE_TYPE(HTMLFrameSetElement, HTMLElement);

HTMLFrameSetElement HTMLFrameSetElement_new();

jb_DOMString HTMLFrameSetElement_cols( const HTMLFrameSetElement *self);

void HTMLFrameSetElement_set_cols(HTMLFrameSetElement* self, const jb_DOMString* value);

jb_DOMString HTMLFrameSetElement_rows( const HTMLFrameSetElement *self);

void HTMLFrameSetElement_set_rows(HTMLFrameSetElement* self, const jb_DOMString* value);

jb_Any HTMLFrameSetElement_onportalactivate( const HTMLFrameSetElement *self);

void HTMLFrameSetElement_set_onportalactivate(HTMLFrameSetElement* self, const jb_Any* value);
