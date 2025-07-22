#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

typedef struct SharedStorageSetMethodOptions SharedStorageSetMethodOptions;


typedef struct {
  SharedStorageModifierMethod inner;
} SharedStorageSetMethod;


DECLARE_EMLITE_TYPE(SharedStorageSetMethod, SharedStorageModifierMethod);

SharedStorageSetMethod SharedStorageSetMethod_new(const jb_DOMString* key, const jb_DOMString* value);

SharedStorageSetMethod SharedStorageSetMethod_new(const jb_DOMString* key, const jb_DOMString* value, const SharedStorageSetMethodOptions* options);
