#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "StylePropertyMapReadOnly.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(StylePropertyMap, StylePropertyMapReadOnly);

jb_Undefined StylePropertyMap_set(StylePropertyMap* self , jb_String * property, jb_Any * values);

jb_Undefined StylePropertyMap_append(StylePropertyMap* self , jb_String * property, jb_Any * values);

jb_Undefined StylePropertyMap_delete_(StylePropertyMap* self , jb_String * property);

jb_Undefined StylePropertyMap_clear(StylePropertyMap* self );

#ifdef __cplusplus
}
#endif
