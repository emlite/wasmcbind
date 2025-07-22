#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct Document Document;


typedef struct {
  HTMLElement inner;
} HTMLEmbedElement;


DECLARE_EMLITE_TYPE(HTMLEmbedElement, HTMLElement);

HTMLEmbedElement HTMLEmbedElement_new();

jb_USVString HTMLEmbedElement_src( const HTMLEmbedElement *self);

void HTMLEmbedElement_set_src(HTMLEmbedElement* self, const jb_USVString* value);

jb_DOMString HTMLEmbedElement_type( const HTMLEmbedElement *self);

void HTMLEmbedElement_set_type(HTMLEmbedElement* self, const jb_DOMString* value);

jb_DOMString HTMLEmbedElement_width( const HTMLEmbedElement *self);

void HTMLEmbedElement_set_width(HTMLEmbedElement* self, const jb_DOMString* value);

jb_DOMString HTMLEmbedElement_height( const HTMLEmbedElement *self);

void HTMLEmbedElement_set_height(HTMLEmbedElement* self, const jb_DOMString* value);

Document HTMLEmbedElement_getSVGDocument(HTMLEmbedElement* self );

jb_DOMString HTMLEmbedElement_align( const HTMLEmbedElement *self);

void HTMLEmbedElement_set_align(HTMLEmbedElement* self, const jb_DOMString* value);

jb_DOMString HTMLEmbedElement_name( const HTMLEmbedElement *self);

void HTMLEmbedElement_set_name(HTMLEmbedElement* self, const jb_DOMString* value);
