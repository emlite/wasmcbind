#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLMetaElement, HTMLElement);

HTMLMetaElement HTMLMetaElement_new();

jb_DOMString HTMLMetaElement_name( const HTMLMetaElement *self);

void HTMLMetaElement_set_name(HTMLMetaElement* self, jb_DOMString * value);

jb_DOMString HTMLMetaElement_httpEquiv( const HTMLMetaElement *self);

void HTMLMetaElement_set_httpEquiv(HTMLMetaElement* self, jb_DOMString * value);

jb_DOMString HTMLMetaElement_content( const HTMLMetaElement *self);

void HTMLMetaElement_set_content(HTMLMetaElement* self, jb_DOMString * value);

jb_DOMString HTMLMetaElement_media( const HTMLMetaElement *self);

void HTMLMetaElement_set_media(HTMLMetaElement* self, jb_DOMString * value);

jb_DOMString HTMLMetaElement_scheme( const HTMLMetaElement *self);

void HTMLMetaElement_set_scheme(HTMLMetaElement* self, jb_DOMString * value);
