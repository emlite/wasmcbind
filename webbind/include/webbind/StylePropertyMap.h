#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "StylePropertyMapReadOnly.h"
#include "enums.h"


typedef struct {
  StylePropertyMapReadOnly inner;
} StylePropertyMap;


DECLARE_EMLITE_TYPE(StylePropertyMap, StylePropertyMapReadOnly);

jb_Undefined StylePropertyMap_set(StylePropertyMap* self , const jb_USVString* property, const jb_Any* values);

jb_Undefined StylePropertyMap_append(StylePropertyMap* self , const jb_USVString* property, const jb_Any* values);

jb_Undefined StylePropertyMap_delete_(StylePropertyMap* self , const jb_USVString* property);

jb_Undefined StylePropertyMap_clear(StylePropertyMap* self );
