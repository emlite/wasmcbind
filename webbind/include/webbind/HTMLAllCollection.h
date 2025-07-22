#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Element Element;


typedef struct {
  em_Val inner;
} HTMLAllCollection;


DECLARE_EMLITE_TYPE(HTMLAllCollection, em_Val);

unsigned long HTMLAllCollection_length( const HTMLAllCollection *self);

jb_Any HTMLAllCollection_namedItem(HTMLAllCollection* self , const jb_DOMString* name);

jb_Any HTMLAllCollection_item(HTMLAllCollection* self );

jb_Any HTMLAllCollection_item(HTMLAllCollection* self , const jb_DOMString* nameOrIndex);
