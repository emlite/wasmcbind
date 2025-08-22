#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CookieListItem */
DECLARE_EMLITE_TYPE(CookieListItem, em_Val);

/** @brief Getter of the name property */
jb_String CookieListItem_name(const CookieListItem *self);

/** @brief Setter of the name property */
void CookieListItem_set_name(CookieListItem* self, jb_String * value);

/** @brief Getter of the value property */
jb_String CookieListItem_value(const CookieListItem *self);

/** @brief Setter of the value property */
void CookieListItem_set_value(CookieListItem* self, jb_String * value);

/** @brief Getter of the domain property */
jb_String CookieListItem_domain(const CookieListItem *self);

/** @brief Setter of the domain property */
void CookieListItem_set_domain(CookieListItem* self, jb_String * value);

/** @brief Getter of the path property */
jb_String CookieListItem_path(const CookieListItem *self);

/** @brief Setter of the path property */
void CookieListItem_set_path(CookieListItem* self, jb_String * value);

/** @brief Getter of the expires property */
jb_Any CookieListItem_expires(const CookieListItem *self);

/** @brief Setter of the expires property */
void CookieListItem_set_expires(CookieListItem* self, jb_Any * value);

/** @brief Getter of the secure property */
bool CookieListItem_secure(const CookieListItem *self);

/** @brief Setter of the secure property */
void CookieListItem_set_secure(CookieListItem* self, bool value);

/** @brief Getter of the sameSite property */
CookieSameSite CookieListItem_sameSite(const CookieListItem *self);

/** @brief Setter of the sameSite property */
void CookieListItem_set_sameSite(CookieListItem* self, CookieSameSite * value);

/** @brief Getter of the partitioned property */
bool CookieListItem_partitioned(const CookieListItem *self);

/** @brief Setter of the partitioned property */
void CookieListItem_set_partitioned(CookieListItem* self, bool value);

/** @brief Constructor of the CookieListItem dictionary type */
CookieListItem CookieListItem_new();

#ifdef __cplusplus
}
#endif
