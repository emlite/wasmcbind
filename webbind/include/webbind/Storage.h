#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(Storage, em_Val);

unsigned long Storage_length(const Storage *self);

jb_DOMString Storage_key(Storage* self , unsigned long index);

jb_DOMString Storage_getItem(Storage* self , jb_DOMString * key);

jb_Undefined Storage_setItem(Storage* self , jb_DOMString * key, jb_DOMString * value);

jb_Undefined Storage_removeItem(Storage* self , jb_DOMString * key);

jb_Undefined Storage_clear(Storage* self );
