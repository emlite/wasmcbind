#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLDataElement, HTMLElement);

HTMLDataElement HTMLDataElement_new();

jb_String HTMLDataElement_value(const HTMLDataElement *self);

void HTMLDataElement_set_value(HTMLDataElement* self, jb_String * value);
