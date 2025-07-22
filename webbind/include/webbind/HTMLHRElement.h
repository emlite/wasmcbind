#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLHRElement, HTMLElement);

HTMLHRElement HTMLHRElement_new();

jb_DOMString HTMLHRElement_align( const HTMLHRElement *self);

void HTMLHRElement_set_align(HTMLHRElement* self, jb_DOMString * value);

jb_DOMString HTMLHRElement_color( const HTMLHRElement *self);

void HTMLHRElement_set_color(HTMLHRElement* self, jb_DOMString * value);

bool HTMLHRElement_noShade( const HTMLHRElement *self);

void HTMLHRElement_set_noShade(HTMLHRElement* self, bool value);

jb_DOMString HTMLHRElement_size( const HTMLHRElement *self);

void HTMLHRElement_set_size(HTMLHRElement* self, jb_DOMString * value);

jb_DOMString HTMLHRElement_width( const HTMLHRElement *self);

void HTMLHRElement_set_width(HTMLHRElement* self, jb_DOMString * value);
