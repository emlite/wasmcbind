#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSStyleValue CSSStyleValue;


typedef struct {
  em_Val inner;
} StylePropertyMapReadOnly;


DECLARE_EMLITE_TYPE(StylePropertyMapReadOnly, em_Val);

jb_Any StylePropertyMapReadOnly_get(StylePropertyMapReadOnly* self , const jb_USVString* property);

jb_Sequence StylePropertyMapReadOnly_getAll(StylePropertyMapReadOnly* self , const jb_USVString* property);

bool StylePropertyMapReadOnly_has(StylePropertyMapReadOnly* self , const jb_USVString* property);

unsigned long StylePropertyMapReadOnly_size( const StylePropertyMapReadOnly *self);
