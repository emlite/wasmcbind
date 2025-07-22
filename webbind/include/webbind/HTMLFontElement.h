#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLFontElement;


DECLARE_EMLITE_TYPE(HTMLFontElement, HTMLElement);

HTMLFontElement HTMLFontElement_new();

jb_DOMString HTMLFontElement_color( const HTMLFontElement *self);

void HTMLFontElement_set_color(HTMLFontElement* self, const jb_DOMString* value);

jb_DOMString HTMLFontElement_face( const HTMLFontElement *self);

void HTMLFontElement_set_face(HTMLFontElement* self, const jb_DOMString* value);

jb_DOMString HTMLFontElement_size( const HTMLFontElement *self);

void HTMLFontElement_set_size(HTMLFontElement* self, const jb_DOMString* value);
