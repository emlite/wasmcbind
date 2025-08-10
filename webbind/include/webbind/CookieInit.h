#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CookieInit, em_Val);

jb_String CookieInit_name(const CookieInit *self);

void CookieInit_set_name(CookieInit* self, jb_String * value);

jb_String CookieInit_value(const CookieInit *self);

void CookieInit_set_value(CookieInit* self, jb_String * value);

jb_Any CookieInit_expires(const CookieInit *self);

void CookieInit_set_expires(CookieInit* self, jb_Any * value);

jb_String CookieInit_domain(const CookieInit *self);

void CookieInit_set_domain(CookieInit* self, jb_String * value);

jb_String CookieInit_path(const CookieInit *self);

void CookieInit_set_path(CookieInit* self, jb_String * value);

CookieSameSite CookieInit_sameSite(const CookieInit *self);

void CookieInit_set_sameSite(CookieInit* self, CookieSameSite * value);

bool CookieInit_partitioned(const CookieInit *self);

void CookieInit_set_partitioned(CookieInit* self, bool value);

CookieInit CookieInit_new();

#ifdef __cplusplus
}
#endif
