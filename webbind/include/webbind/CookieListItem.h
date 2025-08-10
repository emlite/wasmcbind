#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CookieListItem, em_Val);

jb_String CookieListItem_name(const CookieListItem *self);

void CookieListItem_set_name(CookieListItem* self, jb_String * value);

jb_String CookieListItem_value(const CookieListItem *self);

void CookieListItem_set_value(CookieListItem* self, jb_String * value);

jb_String CookieListItem_domain(const CookieListItem *self);

void CookieListItem_set_domain(CookieListItem* self, jb_String * value);

jb_String CookieListItem_path(const CookieListItem *self);

void CookieListItem_set_path(CookieListItem* self, jb_String * value);

jb_Any CookieListItem_expires(const CookieListItem *self);

void CookieListItem_set_expires(CookieListItem* self, jb_Any * value);

bool CookieListItem_secure(const CookieListItem *self);

void CookieListItem_set_secure(CookieListItem* self, bool value);

CookieSameSite CookieListItem_sameSite(const CookieListItem *self);

void CookieListItem_set_sameSite(CookieListItem* self, CookieSameSite * value);

bool CookieListItem_partitioned(const CookieListItem *self);

void CookieListItem_set_partitioned(CookieListItem* self, bool value);

CookieListItem CookieListItem_new();

#ifdef __cplusplus
}
#endif
