#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSStyleValue CSSStyleValue;


DECLARE_EMLITE_TYPE(StylePropertyMapReadOnly, em_Val);

jb_Any StylePropertyMapReadOnly_get(StylePropertyMapReadOnly* self , jb_USVString * property);

jb_Sequence StylePropertyMapReadOnly_getAll(StylePropertyMapReadOnly* self , jb_USVString * property);

bool StylePropertyMapReadOnly_has(StylePropertyMapReadOnly* self , jb_USVString * property);

unsigned long StylePropertyMapReadOnly_size( const StylePropertyMapReadOnly *self);
