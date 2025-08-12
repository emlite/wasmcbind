#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CookieStoreDeleteOptions */
DECLARE_EMLITE_TYPE(CookieStoreDeleteOptions, em_Val);

/** @brief Getter of the name property */
jb_String CookieStoreDeleteOptions_name(const CookieStoreDeleteOptions *self);

/** @brief Setter of the name property */
void CookieStoreDeleteOptions_set_name(CookieStoreDeleteOptions* self, jb_String * value);

/** @brief Getter of the domain property */
jb_String CookieStoreDeleteOptions_domain(const CookieStoreDeleteOptions *self);

/** @brief Setter of the domain property */
void CookieStoreDeleteOptions_set_domain(CookieStoreDeleteOptions* self, jb_String * value);

/** @brief Getter of the path property */
jb_String CookieStoreDeleteOptions_path(const CookieStoreDeleteOptions *self);

/** @brief Setter of the path property */
void CookieStoreDeleteOptions_set_path(CookieStoreDeleteOptions* self, jb_String * value);

/** @brief Getter of the partitioned property */
bool CookieStoreDeleteOptions_partitioned(const CookieStoreDeleteOptions *self);

/** @brief Setter of the partitioned property */
void CookieStoreDeleteOptions_set_partitioned(CookieStoreDeleteOptions* self, bool value);

/** @brief Constructor of the CookieStoreDeleteOptions dictionary type */
CookieStoreDeleteOptions CookieStoreDeleteOptions_new();

#ifdef __cplusplus
}
#endif
