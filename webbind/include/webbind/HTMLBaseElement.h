#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLBaseElement, HTMLElement);

HTMLBaseElement HTMLBaseElement_new();

jb_USVString HTMLBaseElement_href(const HTMLBaseElement *self);

void HTMLBaseElement_set_href(HTMLBaseElement* self, jb_USVString * value);

jb_DOMString HTMLBaseElement_target(const HTMLBaseElement *self);

void HTMLBaseElement_set_target(HTMLBaseElement* self, jb_DOMString * value);
