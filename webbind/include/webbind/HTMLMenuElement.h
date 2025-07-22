#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLMenuElement;


DECLARE_EMLITE_TYPE(HTMLMenuElement, HTMLElement);

HTMLMenuElement HTMLMenuElement_new();

bool HTMLMenuElement_compact( const HTMLMenuElement *self);

void HTMLMenuElement_set_compact(HTMLMenuElement* self, bool value);
