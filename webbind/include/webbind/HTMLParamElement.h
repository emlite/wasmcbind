#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLParamElement, HTMLElement);

HTMLParamElement HTMLParamElement_new();

jb_DOMString HTMLParamElement_name(const HTMLParamElement *self);

void HTMLParamElement_set_name(HTMLParamElement* self, jb_DOMString * value);

jb_DOMString HTMLParamElement_value(const HTMLParamElement *self);

void HTMLParamElement_set_value(HTMLParamElement* self, jb_DOMString * value);

jb_DOMString HTMLParamElement_type(const HTMLParamElement *self);

void HTMLParamElement_set_type(HTMLParamElement* self, jb_DOMString * value);

jb_DOMString HTMLParamElement_valueType(const HTMLParamElement *self);

void HTMLParamElement_set_valueType(HTMLParamElement* self, jb_DOMString * value);
