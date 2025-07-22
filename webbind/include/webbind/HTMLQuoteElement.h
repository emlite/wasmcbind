#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLQuoteElement;


DECLARE_EMLITE_TYPE(HTMLQuoteElement, HTMLElement);

HTMLQuoteElement HTMLQuoteElement_new();

jb_USVString HTMLQuoteElement_cite( const HTMLQuoteElement *self);

void HTMLQuoteElement_set_cite(HTMLQuoteElement* self, const jb_USVString* value);
