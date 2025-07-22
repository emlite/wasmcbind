#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLModElement, HTMLElement);

HTMLModElement HTMLModElement_new();

jb_USVString HTMLModElement_cite( const HTMLModElement *self);

void HTMLModElement_set_cite(HTMLModElement* self, jb_USVString * value);

jb_DOMString HTMLModElement_dateTime( const HTMLModElement *self);

void HTMLModElement_set_dateTime(HTMLModElement* self, jb_DOMString * value);
