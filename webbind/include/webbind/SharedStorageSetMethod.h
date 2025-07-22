#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

typedef struct SharedStorageSetMethodOptions SharedStorageSetMethodOptions;


DECLARE_EMLITE_TYPE(SharedStorageSetMethod, SharedStorageModifierMethod);

SharedStorageSetMethod SharedStorageSetMethod_new0(jb_DOMString * key, jb_DOMString * value);

SharedStorageSetMethod SharedStorageSetMethod_new1(jb_DOMString * key, jb_DOMString * value, SharedStorageSetMethodOptions * options);
