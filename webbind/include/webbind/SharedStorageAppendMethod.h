#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SharedStorageModifierMethod.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;

DECLARE_EMLITE_TYPE(SharedStorageAppendMethod, SharedStorageModifierMethod);

SharedStorageAppendMethod SharedStorageAppendMethod_new0(jb_String * key, jb_String * value);

SharedStorageAppendMethod SharedStorageAppendMethod_new1(jb_String * key, jb_String * value, SharedStorageModifierMethodOptions * options);

#ifdef __cplusplus
}
#endif
