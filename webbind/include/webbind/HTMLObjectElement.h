#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct HTMLFormElement HTMLFormElement;
typedef struct Document Document;
typedef struct ValidityState ValidityState;


DECLARE_EMLITE_TYPE(HTMLObjectElement, HTMLElement);

HTMLObjectElement HTMLObjectElement_new();

jb_USVString HTMLObjectElement_data( const HTMLObjectElement *self);

void HTMLObjectElement_set_data(HTMLObjectElement* self, jb_USVString * value);

jb_DOMString HTMLObjectElement_type( const HTMLObjectElement *self);

void HTMLObjectElement_set_type(HTMLObjectElement* self, jb_DOMString * value);

jb_DOMString HTMLObjectElement_name( const HTMLObjectElement *self);

void HTMLObjectElement_set_name(HTMLObjectElement* self, jb_DOMString * value);

HTMLFormElement HTMLObjectElement_form( const HTMLObjectElement *self);

jb_DOMString HTMLObjectElement_width( const HTMLObjectElement *self);

void HTMLObjectElement_set_width(HTMLObjectElement* self, jb_DOMString * value);

jb_DOMString HTMLObjectElement_height( const HTMLObjectElement *self);

void HTMLObjectElement_set_height(HTMLObjectElement* self, jb_DOMString * value);

Document HTMLObjectElement_contentDocument( const HTMLObjectElement *self);

jb_Any HTMLObjectElement_contentWindow( const HTMLObjectElement *self);

Document HTMLObjectElement_getSVGDocument(HTMLObjectElement* self );

bool HTMLObjectElement_willValidate( const HTMLObjectElement *self);

ValidityState HTMLObjectElement_validity( const HTMLObjectElement *self);

jb_DOMString HTMLObjectElement_validationMessage( const HTMLObjectElement *self);

bool HTMLObjectElement_checkValidity(HTMLObjectElement* self );

bool HTMLObjectElement_reportValidity(HTMLObjectElement* self );

jb_Undefined HTMLObjectElement_setCustomValidity(HTMLObjectElement* self , jb_DOMString * error);

jb_DOMString HTMLObjectElement_align( const HTMLObjectElement *self);

void HTMLObjectElement_set_align(HTMLObjectElement* self, jb_DOMString * value);

jb_DOMString HTMLObjectElement_archive( const HTMLObjectElement *self);

void HTMLObjectElement_set_archive(HTMLObjectElement* self, jb_DOMString * value);

jb_DOMString HTMLObjectElement_code( const HTMLObjectElement *self);

void HTMLObjectElement_set_code(HTMLObjectElement* self, jb_DOMString * value);

bool HTMLObjectElement_declare( const HTMLObjectElement *self);

void HTMLObjectElement_set_declare(HTMLObjectElement* self, bool value);

unsigned long HTMLObjectElement_hspace( const HTMLObjectElement *self);

void HTMLObjectElement_set_hspace(HTMLObjectElement* self, unsigned long value);

jb_DOMString HTMLObjectElement_standby( const HTMLObjectElement *self);

void HTMLObjectElement_set_standby(HTMLObjectElement* self, jb_DOMString * value);

unsigned long HTMLObjectElement_vspace( const HTMLObjectElement *self);

void HTMLObjectElement_set_vspace(HTMLObjectElement* self, unsigned long value);

jb_DOMString HTMLObjectElement_codeBase( const HTMLObjectElement *self);

void HTMLObjectElement_set_codeBase(HTMLObjectElement* self, jb_DOMString * value);

jb_DOMString HTMLObjectElement_codeType( const HTMLObjectElement *self);

void HTMLObjectElement_set_codeType(HTMLObjectElement* self, jb_DOMString * value);

jb_DOMString HTMLObjectElement_useMap( const HTMLObjectElement *self);

void HTMLObjectElement_set_useMap(HTMLObjectElement* self, jb_DOMString * value);

jb_DOMString HTMLObjectElement_border( const HTMLObjectElement *self);

void HTMLObjectElement_set_border(HTMLObjectElement* self, jb_DOMString * value);
