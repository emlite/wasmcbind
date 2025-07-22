#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLDListElement, HTMLElement);

HTMLDListElement HTMLDListElement_new();

bool HTMLDListElement_compact( const HTMLDListElement *self);

void HTMLDListElement_set_compact(HTMLDListElement* self, bool value);
