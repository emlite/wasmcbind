#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLBaseElement;


DECLARE_EMLITE_TYPE(HTMLBaseElement, HTMLElement);

HTMLBaseElement HTMLBaseElement_new();

jb_USVString HTMLBaseElement_href( const HTMLBaseElement *self);

void HTMLBaseElement_set_href(HTMLBaseElement* self, const jb_USVString* value);

jb_DOMString HTMLBaseElement_target( const HTMLBaseElement *self);

void HTMLBaseElement_set_target(HTMLBaseElement* self, const jb_DOMString* value);
