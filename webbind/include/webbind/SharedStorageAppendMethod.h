#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;


typedef struct {
  SharedStorageModifierMethod inner;
} SharedStorageAppendMethod;


DECLARE_EMLITE_TYPE(SharedStorageAppendMethod, SharedStorageModifierMethod);

SharedStorageAppendMethod SharedStorageAppendMethod_new(const jb_DOMString* key, const jb_DOMString* value);

SharedStorageAppendMethod SharedStorageAppendMethod_new(const jb_DOMString* key, const jb_DOMString* value, const SharedStorageModifierMethodOptions* options);
