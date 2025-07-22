#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct DOMTokenList DOMTokenList;
typedef struct HTMLFormControlsCollection HTMLFormControlsCollection;


typedef struct {
  HTMLElement inner;
} HTMLFormElement;


DECLARE_EMLITE_TYPE(HTMLFormElement, HTMLElement);

HTMLFormElement HTMLFormElement_new();

jb_DOMString HTMLFormElement_acceptCharset( const HTMLFormElement *self);

void HTMLFormElement_set_acceptCharset(HTMLFormElement* self, const jb_DOMString* value);

jb_USVString HTMLFormElement_action( const HTMLFormElement *self);

void HTMLFormElement_set_action(HTMLFormElement* self, const jb_USVString* value);

jb_DOMString HTMLFormElement_autocomplete( const HTMLFormElement *self);

void HTMLFormElement_set_autocomplete(HTMLFormElement* self, const jb_DOMString* value);

jb_DOMString HTMLFormElement_enctype( const HTMLFormElement *self);

void HTMLFormElement_set_enctype(HTMLFormElement* self, const jb_DOMString* value);

jb_DOMString HTMLFormElement_encoding( const HTMLFormElement *self);

void HTMLFormElement_set_encoding(HTMLFormElement* self, const jb_DOMString* value);

jb_DOMString HTMLFormElement_method( const HTMLFormElement *self);

void HTMLFormElement_set_method(HTMLFormElement* self, const jb_DOMString* value);

jb_DOMString HTMLFormElement_name( const HTMLFormElement *self);

void HTMLFormElement_set_name(HTMLFormElement* self, const jb_DOMString* value);

bool HTMLFormElement_noValidate( const HTMLFormElement *self);

void HTMLFormElement_set_noValidate(HTMLFormElement* self, bool value);

jb_DOMString HTMLFormElement_target( const HTMLFormElement *self);

void HTMLFormElement_set_target(HTMLFormElement* self, const jb_DOMString* value);

jb_DOMString HTMLFormElement_rel( const HTMLFormElement *self);

void HTMLFormElement_set_rel(HTMLFormElement* self, const jb_DOMString* value);

DOMTokenList HTMLFormElement_relList( const HTMLFormElement *self);

HTMLFormControlsCollection HTMLFormElement_elements( const HTMLFormElement *self);

unsigned long HTMLFormElement_length( const HTMLFormElement *self);

jb_Undefined HTMLFormElement_submit(HTMLFormElement* self );

jb_Undefined HTMLFormElement_requestSubmit(HTMLFormElement* self );

jb_Undefined HTMLFormElement_requestSubmit(HTMLFormElement* self , const HTMLElement* submitter);

jb_Undefined HTMLFormElement_reset(HTMLFormElement* self );

bool HTMLFormElement_checkValidity(HTMLFormElement* self );

bool HTMLFormElement_reportValidity(HTMLFormElement* self );
