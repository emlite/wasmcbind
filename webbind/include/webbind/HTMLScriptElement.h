#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct DOMTokenList DOMTokenList;


DECLARE_EMLITE_TYPE(HTMLScriptElement, HTMLElement);

HTMLScriptElement HTMLScriptElement_new();

jb_DOMString HTMLScriptElement_type(const HTMLScriptElement *self);

void HTMLScriptElement_set_type(HTMLScriptElement* self, jb_DOMString * value);

jb_USVString HTMLScriptElement_src(const HTMLScriptElement *self);

void HTMLScriptElement_set_src(HTMLScriptElement* self, jb_USVString * value);

bool HTMLScriptElement_noModule(const HTMLScriptElement *self);

void HTMLScriptElement_set_noModule(HTMLScriptElement* self, bool value);

bool HTMLScriptElement_async(const HTMLScriptElement *self);

void HTMLScriptElement_set_async(HTMLScriptElement* self, bool value);

bool HTMLScriptElement_defer(const HTMLScriptElement *self);

void HTMLScriptElement_set_defer(HTMLScriptElement* self, bool value);

DOMTokenList HTMLScriptElement_blocking(const HTMLScriptElement *self);

jb_DOMString HTMLScriptElement_crossOrigin(const HTMLScriptElement *self);

void HTMLScriptElement_set_crossOrigin(HTMLScriptElement* self, jb_DOMString * value);

jb_DOMString HTMLScriptElement_referrerPolicy(const HTMLScriptElement *self);

void HTMLScriptElement_set_referrerPolicy(HTMLScriptElement* self, jb_DOMString * value);

jb_DOMString HTMLScriptElement_integrity(const HTMLScriptElement *self);

void HTMLScriptElement_set_integrity(HTMLScriptElement* self, jb_DOMString * value);

jb_DOMString HTMLScriptElement_fetchPriority(const HTMLScriptElement *self);

void HTMLScriptElement_set_fetchPriority(HTMLScriptElement* self, jb_DOMString * value);

jb_DOMString HTMLScriptElement_text(const HTMLScriptElement *self);

void HTMLScriptElement_set_text(HTMLScriptElement* self, jb_DOMString * value);

bool HTMLScriptElement_supports(HTMLScriptElement* self , jb_DOMString * type);

jb_DOMString HTMLScriptElement_charset(const HTMLScriptElement *self);

void HTMLScriptElement_set_charset(HTMLScriptElement* self, jb_DOMString * value);

jb_DOMString HTMLScriptElement_event(const HTMLScriptElement *self);

void HTMLScriptElement_set_event(HTMLScriptElement* self, jb_DOMString * value);

jb_DOMString HTMLScriptElement_htmlFor(const HTMLScriptElement *self);

void HTMLScriptElement_set_htmlFor(HTMLScriptElement* self, jb_DOMString * value);

jb_USVString HTMLScriptElement_attributionSrc(const HTMLScriptElement *self);

void HTMLScriptElement_set_attributionSrc(HTMLScriptElement* self, jb_USVString * value);
