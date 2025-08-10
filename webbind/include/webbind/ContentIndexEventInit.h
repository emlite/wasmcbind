#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ContentIndexEventInit, ExtendableEventInit);

jb_String ContentIndexEventInit_id(const ContentIndexEventInit *self);

void ContentIndexEventInit_set_id(ContentIndexEventInit* self, jb_String * value);

ContentIndexEventInit ContentIndexEventInit_new();

#ifdef __cplusplus
}
#endif
