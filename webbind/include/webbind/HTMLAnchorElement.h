#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct DOMTokenList DOMTokenList;


typedef struct {
  HTMLElement inner;
} HTMLAnchorElement;


DECLARE_EMLITE_TYPE(HTMLAnchorElement, HTMLElement);

HTMLAnchorElement HTMLAnchorElement_new();

jb_DOMString HTMLAnchorElement_target( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_target(HTMLAnchorElement* self, const jb_DOMString* value);

jb_DOMString HTMLAnchorElement_download( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_download(HTMLAnchorElement* self, const jb_DOMString* value);

jb_USVString HTMLAnchorElement_ping( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_ping(HTMLAnchorElement* self, const jb_USVString* value);

jb_DOMString HTMLAnchorElement_rel( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_rel(HTMLAnchorElement* self, const jb_DOMString* value);

DOMTokenList HTMLAnchorElement_relList( const HTMLAnchorElement *self);

jb_DOMString HTMLAnchorElement_hreflang( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_hreflang(HTMLAnchorElement* self, const jb_DOMString* value);

jb_DOMString HTMLAnchorElement_type( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_type(HTMLAnchorElement* self, const jb_DOMString* value);

jb_DOMString HTMLAnchorElement_text( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_text(HTMLAnchorElement* self, const jb_DOMString* value);

jb_DOMString HTMLAnchorElement_referrerPolicy( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_referrerPolicy(HTMLAnchorElement* self, const jb_DOMString* value);

jb_DOMString HTMLAnchorElement_coords( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_coords(HTMLAnchorElement* self, const jb_DOMString* value);

jb_DOMString HTMLAnchorElement_charset( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_charset(HTMLAnchorElement* self, const jb_DOMString* value);

jb_DOMString HTMLAnchorElement_name( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_name(HTMLAnchorElement* self, const jb_DOMString* value);

jb_DOMString HTMLAnchorElement_rev( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_rev(HTMLAnchorElement* self, const jb_DOMString* value);

jb_DOMString HTMLAnchorElement_shape( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_shape(HTMLAnchorElement* self, const jb_DOMString* value);

unsigned long HTMLAnchorElement_attributionSourceId( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_attributionSourceId(HTMLAnchorElement* self, unsigned long value);

jb_USVString HTMLAnchorElement_attributionSrc( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_attributionSrc(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_href( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_href(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_origin( const HTMLAnchorElement *self);

jb_USVString HTMLAnchorElement_protocol( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_protocol(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_username( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_username(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_password( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_password(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_host( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_host(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_hostname( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_hostname(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_port( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_port(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_pathname( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_pathname(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_search( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_search(HTMLAnchorElement* self, const jb_USVString* value);

jb_USVString HTMLAnchorElement_hash( const HTMLAnchorElement *self);

void HTMLAnchorElement_set_hash(HTMLAnchorElement* self, const jb_USVString* value);
