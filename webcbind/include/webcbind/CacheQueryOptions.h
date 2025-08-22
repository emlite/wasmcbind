#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CacheQueryOptions */
DECLARE_EMLITE_TYPE(CacheQueryOptions, em_Val);

/** @brief Getter of the ignoreSearch property */
bool CacheQueryOptions_ignoreSearch(const CacheQueryOptions *self);

/** @brief Setter of the ignoreSearch property */
void CacheQueryOptions_set_ignoreSearch(CacheQueryOptions* self, bool value);

/** @brief Getter of the ignoreMethod property */
bool CacheQueryOptions_ignoreMethod(const CacheQueryOptions *self);

/** @brief Setter of the ignoreMethod property */
void CacheQueryOptions_set_ignoreMethod(CacheQueryOptions* self, bool value);

/** @brief Getter of the ignoreVary property */
bool CacheQueryOptions_ignoreVary(const CacheQueryOptions *self);

/** @brief Setter of the ignoreVary property */
void CacheQueryOptions_set_ignoreVary(CacheQueryOptions* self, bool value);

/** @brief Constructor of the CacheQueryOptions dictionary type */
CacheQueryOptions CacheQueryOptions_new();

#ifdef __cplusplus
}
#endif
