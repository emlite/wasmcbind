#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CacheQueryOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MultiCacheQueryOptions, CacheQueryOptions);

jb_String MultiCacheQueryOptions_cacheName(const MultiCacheQueryOptions *self);

void MultiCacheQueryOptions_set_cacheName(MultiCacheQueryOptions* self, jb_String * value);

MultiCacheQueryOptions MultiCacheQueryOptions_new();

#ifdef __cplusplus
}
#endif
