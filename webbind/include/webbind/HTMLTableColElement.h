#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLTableColElement;


DECLARE_EMLITE_TYPE(HTMLTableColElement, HTMLElement);

HTMLTableColElement HTMLTableColElement_new();

unsigned long HTMLTableColElement_span( const HTMLTableColElement *self);

void HTMLTableColElement_set_span(HTMLTableColElement* self, unsigned long value);

jb_DOMString HTMLTableColElement_align( const HTMLTableColElement *self);

void HTMLTableColElement_set_align(HTMLTableColElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableColElement_ch( const HTMLTableColElement *self);

void HTMLTableColElement_set_ch(HTMLTableColElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableColElement_chOff( const HTMLTableColElement *self);

void HTMLTableColElement_set_chOff(HTMLTableColElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableColElement_vAlign( const HTMLTableColElement *self);

void HTMLTableColElement_set_vAlign(HTMLTableColElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableColElement_width( const HTMLTableColElement *self);

void HTMLTableColElement_set_width(HTMLTableColElement* self, const jb_DOMString* value);
