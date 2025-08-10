#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SharedStorageModifierMethod.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;

DECLARE_EMLITE_TYPE(SharedStorageDeleteMethod, SharedStorageModifierMethod);

SharedStorageDeleteMethod SharedStorageDeleteMethod_new0(jb_String * key);

SharedStorageDeleteMethod SharedStorageDeleteMethod_new1(jb_String * key, SharedStorageModifierMethodOptions * options);

#ifdef __cplusplus
}
#endif
