#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;


typedef struct {
  SharedStorageModifierMethod inner;
} SharedStorageDeleteMethod;


DECLARE_EMLITE_TYPE(SharedStorageDeleteMethod, SharedStorageModifierMethod);

SharedStorageDeleteMethod SharedStorageDeleteMethod_new(const jb_DOMString* key);

SharedStorageDeleteMethod SharedStorageDeleteMethod_new(const jb_DOMString* key, const SharedStorageModifierMethodOptions* options);
