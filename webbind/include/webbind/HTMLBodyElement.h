#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLBodyElement;


DECLARE_EMLITE_TYPE(HTMLBodyElement, HTMLElement);

HTMLBodyElement HTMLBodyElement_new();

jb_Any HTMLBodyElement_onorientationchange( const HTMLBodyElement *self);

void HTMLBodyElement_set_onorientationchange(HTMLBodyElement* self, const jb_Any* value);

jb_DOMString HTMLBodyElement_text( const HTMLBodyElement *self);

void HTMLBodyElement_set_text(HTMLBodyElement* self, const jb_DOMString* value);

jb_DOMString HTMLBodyElement_link( const HTMLBodyElement *self);

void HTMLBodyElement_set_link(HTMLBodyElement* self, const jb_DOMString* value);

jb_DOMString HTMLBodyElement_vLink( const HTMLBodyElement *self);

void HTMLBodyElement_set_vLink(HTMLBodyElement* self, const jb_DOMString* value);

jb_DOMString HTMLBodyElement_aLink( const HTMLBodyElement *self);

void HTMLBodyElement_set_aLink(HTMLBodyElement* self, const jb_DOMString* value);

jb_DOMString HTMLBodyElement_bgColor( const HTMLBodyElement *self);

void HTMLBodyElement_set_bgColor(HTMLBodyElement* self, const jb_DOMString* value);

jb_DOMString HTMLBodyElement_background( const HTMLBodyElement *self);

void HTMLBodyElement_set_background(HTMLBodyElement* self, const jb_DOMString* value);

jb_Any HTMLBodyElement_onportalactivate( const HTMLBodyElement *self);

void HTMLBodyElement_set_onportalactivate(HTMLBodyElement* self, const jb_Any* value);
