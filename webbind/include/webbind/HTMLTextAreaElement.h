#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;


typedef struct {
  HTMLElement inner;
} HTMLTextAreaElement;


DECLARE_EMLITE_TYPE(HTMLTextAreaElement, HTMLElement);

HTMLTextAreaElement HTMLTextAreaElement_new();

jb_DOMString HTMLTextAreaElement_autocomplete( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_autocomplete(HTMLTextAreaElement* self, const jb_DOMString* value);

unsigned long HTMLTextAreaElement_cols( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_cols(HTMLTextAreaElement* self, unsigned long value);

jb_DOMString HTMLTextAreaElement_dirName( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_dirName(HTMLTextAreaElement* self, const jb_DOMString* value);

bool HTMLTextAreaElement_disabled( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_disabled(HTMLTextAreaElement* self, bool value);

HTMLFormElement HTMLTextAreaElement_form( const HTMLTextAreaElement *self);

long HTMLTextAreaElement_maxLength( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_maxLength(HTMLTextAreaElement* self, long value);

long HTMLTextAreaElement_minLength( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_minLength(HTMLTextAreaElement* self, long value);

jb_DOMString HTMLTextAreaElement_name( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_name(HTMLTextAreaElement* self, const jb_DOMString* value);

jb_DOMString HTMLTextAreaElement_placeholder( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_placeholder(HTMLTextAreaElement* self, const jb_DOMString* value);

bool HTMLTextAreaElement_readOnly( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_readOnly(HTMLTextAreaElement* self, bool value);

bool HTMLTextAreaElement_required( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_required(HTMLTextAreaElement* self, bool value);

unsigned long HTMLTextAreaElement_rows( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_rows(HTMLTextAreaElement* self, unsigned long value);

jb_DOMString HTMLTextAreaElement_wrap( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_wrap(HTMLTextAreaElement* self, const jb_DOMString* value);

jb_DOMString HTMLTextAreaElement_type( const HTMLTextAreaElement *self);

jb_DOMString HTMLTextAreaElement_defaultValue( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_defaultValue(HTMLTextAreaElement* self, const jb_DOMString* value);

jb_DOMString HTMLTextAreaElement_value( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_value(HTMLTextAreaElement* self, const jb_DOMString* value);

unsigned long HTMLTextAreaElement_textLength( const HTMLTextAreaElement *self);

bool HTMLTextAreaElement_willValidate( const HTMLTextAreaElement *self);

ValidityState HTMLTextAreaElement_validity( const HTMLTextAreaElement *self);

jb_DOMString HTMLTextAreaElement_validationMessage( const HTMLTextAreaElement *self);

bool HTMLTextAreaElement_checkValidity(HTMLTextAreaElement* self );

bool HTMLTextAreaElement_reportValidity(HTMLTextAreaElement* self );

jb_Undefined HTMLTextAreaElement_setCustomValidity(HTMLTextAreaElement* self , const jb_DOMString* error);

NodeList HTMLTextAreaElement_labels( const HTMLTextAreaElement *self);

jb_Undefined HTMLTextAreaElement_select(HTMLTextAreaElement* self );

unsigned long HTMLTextAreaElement_selectionStart( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_selectionStart(HTMLTextAreaElement* self, unsigned long value);

unsigned long HTMLTextAreaElement_selectionEnd( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_selectionEnd(HTMLTextAreaElement* self, unsigned long value);

jb_DOMString HTMLTextAreaElement_selectionDirection( const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_selectionDirection(HTMLTextAreaElement* self, const jb_DOMString* value);

jb_Undefined HTMLTextAreaElement_setRangeText(HTMLTextAreaElement* self , const jb_DOMString* replacement, unsigned long start, unsigned long end);

jb_Undefined HTMLTextAreaElement_setRangeText(HTMLTextAreaElement* self , const jb_DOMString* replacement, unsigned long start, unsigned long end, const SelectionMode* selectionMode);

jb_Undefined HTMLTextAreaElement_setSelectionRange(HTMLTextAreaElement* self , unsigned long start, unsigned long end);

jb_Undefined HTMLTextAreaElement_setSelectionRange(HTMLTextAreaElement* self , unsigned long start, unsigned long end, const jb_DOMString* direction);
