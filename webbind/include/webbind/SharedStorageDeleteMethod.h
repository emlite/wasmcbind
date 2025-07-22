#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;


DECLARE_EMLITE_TYPE(SharedStorageDeleteMethod, SharedStorageModifierMethod);

SharedStorageDeleteMethod SharedStorageDeleteMethod_new0(jb_DOMString * key);

SharedStorageDeleteMethod SharedStorageDeleteMethod_new1(jb_DOMString * key, SharedStorageModifierMethodOptions * options);
