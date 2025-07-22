#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "StylePropertyMapReadOnly.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(StylePropertyMap, StylePropertyMapReadOnly);

jb_Undefined StylePropertyMap_set(StylePropertyMap* self , jb_USVString * property, jb_Any * values);

jb_Undefined StylePropertyMap_append(StylePropertyMap* self , jb_USVString * property, jb_Any * values);

jb_Undefined StylePropertyMap_delete_(StylePropertyMap* self , jb_USVString * property);

jb_Undefined StylePropertyMap_clear(StylePropertyMap* self );
