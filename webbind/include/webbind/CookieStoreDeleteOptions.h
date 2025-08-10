#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CookieStoreDeleteOptions, em_Val);

jb_String CookieStoreDeleteOptions_name(const CookieStoreDeleteOptions *self);

void CookieStoreDeleteOptions_set_name(CookieStoreDeleteOptions* self, jb_String * value);

jb_String CookieStoreDeleteOptions_domain(const CookieStoreDeleteOptions *self);

void CookieStoreDeleteOptions_set_domain(CookieStoreDeleteOptions* self, jb_String * value);

jb_String CookieStoreDeleteOptions_path(const CookieStoreDeleteOptions *self);

void CookieStoreDeleteOptions_set_path(CookieStoreDeleteOptions* self, jb_String * value);

bool CookieStoreDeleteOptions_partitioned(const CookieStoreDeleteOptions *self);

void CookieStoreDeleteOptions_set_partitioned(CookieStoreDeleteOptions* self, bool value);

CookieStoreDeleteOptions CookieStoreDeleteOptions_new();

#ifdef __cplusplus
}
#endif
