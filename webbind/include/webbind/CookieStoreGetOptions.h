#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CookieStoreGetOptions */
DECLARE_EMLITE_TYPE(CookieStoreGetOptions, em_Val);

/** @brief Getter of the name property */
jb_String CookieStoreGetOptions_name(const CookieStoreGetOptions *self);

/** @brief Setter of the name property */
void CookieStoreGetOptions_set_name(CookieStoreGetOptions* self, jb_String * value);

/** @brief Getter of the url property */
jb_String CookieStoreGetOptions_url(const CookieStoreGetOptions *self);

/** @brief Setter of the url property */
void CookieStoreGetOptions_set_url(CookieStoreGetOptions* self, jb_String * value);

/** @brief Constructor of the CookieStoreGetOptions dictionary type */
CookieStoreGetOptions CookieStoreGetOptions_new();

#ifdef __cplusplus
}
#endif
