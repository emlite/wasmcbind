#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct DOMTokenList DOMTokenList;
typedef struct CSSStyleSheet CSSStyleSheet;


typedef struct {
  HTMLElement inner;
} HTMLLinkElement;


DECLARE_EMLITE_TYPE(HTMLLinkElement, HTMLElement);

HTMLLinkElement HTMLLinkElement_new();

jb_USVString HTMLLinkElement_href( const HTMLLinkElement *self);

void HTMLLinkElement_set_href(HTMLLinkElement* self, const jb_USVString* value);

jb_DOMString HTMLLinkElement_crossOrigin( const HTMLLinkElement *self);

void HTMLLinkElement_set_crossOrigin(HTMLLinkElement* self, const jb_DOMString* value);

jb_DOMString HTMLLinkElement_rel( const HTMLLinkElement *self);

void HTMLLinkElement_set_rel(HTMLLinkElement* self, const jb_DOMString* value);

jb_DOMString HTMLLinkElement_as( const HTMLLinkElement *self);

void HTMLLinkElement_set_as(HTMLLinkElement* self, const jb_DOMString* value);

DOMTokenList HTMLLinkElement_relList( const HTMLLinkElement *self);

jb_DOMString HTMLLinkElement_media( const HTMLLinkElement *self);

void HTMLLinkElement_set_media(HTMLLinkElement* self, const jb_DOMString* value);

jb_DOMString HTMLLinkElement_integrity( const HTMLLinkElement *self);

void HTMLLinkElement_set_integrity(HTMLLinkElement* self, const jb_DOMString* value);

jb_DOMString HTMLLinkElement_hreflang( const HTMLLinkElement *self);

void HTMLLinkElement_set_hreflang(HTMLLinkElement* self, const jb_DOMString* value);

jb_DOMString HTMLLinkElement_type( const HTMLLinkElement *self);

void HTMLLinkElement_set_type(HTMLLinkElement* self, const jb_DOMString* value);

DOMTokenList HTMLLinkElement_sizes( const HTMLLinkElement *self);

jb_USVString HTMLLinkElement_imageSrcset( const HTMLLinkElement *self);

void HTMLLinkElement_set_imageSrcset(HTMLLinkElement* self, const jb_USVString* value);

jb_DOMString HTMLLinkElement_imageSizes( const HTMLLinkElement *self);

void HTMLLinkElement_set_imageSizes(HTMLLinkElement* self, const jb_DOMString* value);

jb_DOMString HTMLLinkElement_referrerPolicy( const HTMLLinkElement *self);

void HTMLLinkElement_set_referrerPolicy(HTMLLinkElement* self, const jb_DOMString* value);

DOMTokenList HTMLLinkElement_blocking( const HTMLLinkElement *self);

bool HTMLLinkElement_disabled( const HTMLLinkElement *self);

void HTMLLinkElement_set_disabled(HTMLLinkElement* self, bool value);

jb_DOMString HTMLLinkElement_fetchPriority( const HTMLLinkElement *self);

void HTMLLinkElement_set_fetchPriority(HTMLLinkElement* self, const jb_DOMString* value);

jb_DOMString HTMLLinkElement_charset( const HTMLLinkElement *self);

void HTMLLinkElement_set_charset(HTMLLinkElement* self, const jb_DOMString* value);

jb_DOMString HTMLLinkElement_rev( const HTMLLinkElement *self);

void HTMLLinkElement_set_rev(HTMLLinkElement* self, const jb_DOMString* value);

jb_DOMString HTMLLinkElement_target( const HTMLLinkElement *self);

void HTMLLinkElement_set_target(HTMLLinkElement* self, const jb_DOMString* value);

CSSStyleSheet HTMLLinkElement_sheet( const HTMLLinkElement *self);
