#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;


DECLARE_EMLITE_TYPE(SharedStorageAppendMethod, SharedStorageModifierMethod);

SharedStorageAppendMethod SharedStorageAppendMethod_new0(jb_DOMString * key, jb_DOMString * value);

SharedStorageAppendMethod SharedStorageAppendMethod_new1(jb_DOMString * key, jb_DOMString * value, SharedStorageModifierMethodOptions * options);
