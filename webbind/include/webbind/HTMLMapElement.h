#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct HTMLCollection HTMLCollection;


DECLARE_EMLITE_TYPE(HTMLMapElement, HTMLElement);

HTMLMapElement HTMLMapElement_new();

jb_DOMString HTMLMapElement_name( const HTMLMapElement *self);

void HTMLMapElement_set_name(HTMLMapElement* self, jb_DOMString * value);

HTMLCollection HTMLMapElement_areas( const HTMLMapElement *self);
