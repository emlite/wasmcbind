#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CookieStoreGetOptions, em_Val);

jb_String CookieStoreGetOptions_name(const CookieStoreGetOptions *self);

void CookieStoreGetOptions_set_name(CookieStoreGetOptions* self, jb_String * value);

jb_String CookieStoreGetOptions_url(const CookieStoreGetOptions *self);

void CookieStoreGetOptions_set_url(CookieStoreGetOptions* self, jb_String * value);

CookieStoreGetOptions CookieStoreGetOptions_new();

#ifdef __cplusplus
}
#endif
