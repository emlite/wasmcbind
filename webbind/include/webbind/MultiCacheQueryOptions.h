#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CacheQueryOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MultiCacheQueryOptions */
DECLARE_EMLITE_TYPE(MultiCacheQueryOptions, CacheQueryOptions);

/** @brief Getter of the cacheName property */
jb_String MultiCacheQueryOptions_cacheName(const MultiCacheQueryOptions *self);

/** @brief Setter of the cacheName property */
void MultiCacheQueryOptions_set_cacheName(MultiCacheQueryOptions* self, jb_String * value);

/** @brief Constructor of the MultiCacheQueryOptions dictionary type */
MultiCacheQueryOptions MultiCacheQueryOptions_new();

#ifdef __cplusplus
}
#endif
