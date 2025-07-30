#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Element Element;


DECLARE_EMLITE_TYPE(HTMLCollection, em_Val);

unsigned long HTMLCollection_length(const HTMLCollection *self);

Element HTMLCollection_item(HTMLCollection* self , unsigned long index);

Element HTMLCollection_namedItem(HTMLCollection* self , jb_String * name);
