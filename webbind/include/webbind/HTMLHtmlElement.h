#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLHtmlElement, HTMLElement);

HTMLHtmlElement HTMLHtmlElement_new();

jb_String HTMLHtmlElement_version(const HTMLHtmlElement *self);

void HTMLHtmlElement_set_version(HTMLHtmlElement* self, jb_String * value);
