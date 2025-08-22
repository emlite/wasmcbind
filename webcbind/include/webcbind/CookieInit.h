#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CookieInit */
DECLARE_EMLITE_TYPE(CookieInit, em_Val);

/** @brief Getter of the name property */
jb_String CookieInit_name(const CookieInit *self);

/** @brief Setter of the name property */
void CookieInit_set_name(CookieInit* self, jb_String * value);

/** @brief Getter of the value property */
jb_String CookieInit_value(const CookieInit *self);

/** @brief Setter of the value property */
void CookieInit_set_value(CookieInit* self, jb_String * value);

/** @brief Getter of the expires property */
jb_Any CookieInit_expires(const CookieInit *self);

/** @brief Setter of the expires property */
void CookieInit_set_expires(CookieInit* self, jb_Any * value);

/** @brief Getter of the domain property */
jb_String CookieInit_domain(const CookieInit *self);

/** @brief Setter of the domain property */
void CookieInit_set_domain(CookieInit* self, jb_String * value);

/** @brief Getter of the path property */
jb_String CookieInit_path(const CookieInit *self);

/** @brief Setter of the path property */
void CookieInit_set_path(CookieInit* self, jb_String * value);

/** @brief Getter of the sameSite property */
CookieSameSite CookieInit_sameSite(const CookieInit *self);

/** @brief Setter of the sameSite property */
void CookieInit_set_sameSite(CookieInit* self, CookieSameSite * value);

/** @brief Getter of the partitioned property */
bool CookieInit_partitioned(const CookieInit *self);

/** @brief Setter of the partitioned property */
void CookieInit_set_partitioned(CookieInit* self, bool value);

/** @brief Constructor of the CookieInit dictionary type */
CookieInit CookieInit_new();

#ifdef __cplusplus
}
#endif
