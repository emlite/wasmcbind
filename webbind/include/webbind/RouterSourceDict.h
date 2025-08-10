#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RouterSourceDict, em_Val);

jb_String RouterSourceDict_cacheName(const RouterSourceDict *self);

void RouterSourceDict_set_cacheName(RouterSourceDict* self, jb_String * value);

RouterSourceDict RouterSourceDict_new();

#ifdef __cplusplus
}
#endif
