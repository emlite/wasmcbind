#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct HTMLFormElement HTMLFormElement;


DECLARE_EMLITE_TYPE(HTMLOptionElement, HTMLElement);

HTMLOptionElement HTMLOptionElement_new();

bool HTMLOptionElement_disabled( const HTMLOptionElement *self);

void HTMLOptionElement_set_disabled(HTMLOptionElement* self, bool value);

HTMLFormElement HTMLOptionElement_form( const HTMLOptionElement *self);

jb_DOMString HTMLOptionElement_label( const HTMLOptionElement *self);

void HTMLOptionElement_set_label(HTMLOptionElement* self, jb_DOMString * value);

bool HTMLOptionElement_defaultSelected( const HTMLOptionElement *self);

void HTMLOptionElement_set_defaultSelected(HTMLOptionElement* self, bool value);

bool HTMLOptionElement_selected( const HTMLOptionElement *self);

void HTMLOptionElement_set_selected(HTMLOptionElement* self, bool value);

jb_DOMString HTMLOptionElement_value( const HTMLOptionElement *self);

void HTMLOptionElement_set_value(HTMLOptionElement* self, jb_DOMString * value);

jb_DOMString HTMLOptionElement_text( const HTMLOptionElement *self);

void HTMLOptionElement_set_text(HTMLOptionElement* self, jb_DOMString * value);

long HTMLOptionElement_index( const HTMLOptionElement *self);
