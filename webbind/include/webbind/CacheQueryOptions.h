#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CacheQueryOptions, em_Val);

bool CacheQueryOptions_ignoreSearch(const CacheQueryOptions *self);

void CacheQueryOptions_set_ignoreSearch(CacheQueryOptions* self, bool value);

bool CacheQueryOptions_ignoreMethod(const CacheQueryOptions *self);

void CacheQueryOptions_set_ignoreMethod(CacheQueryOptions* self, bool value);

bool CacheQueryOptions_ignoreVary(const CacheQueryOptions *self);

void CacheQueryOptions_set_ignoreVary(CacheQueryOptions* self, bool value);

CacheQueryOptions CacheQueryOptions_new();

#ifdef __cplusplus
}
#endif
