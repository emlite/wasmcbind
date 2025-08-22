#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CookieChangeEventInit */
DECLARE_EMLITE_TYPE(CookieChangeEventInit, EventInit);

/** @brief Getter of the changed property */
jb_Any CookieChangeEventInit_changed(const CookieChangeEventInit *self);

/** @brief Setter of the changed property */
void CookieChangeEventInit_set_changed(CookieChangeEventInit* self, jb_Any * value);

/** @brief Getter of the deleted property */
jb_Any CookieChangeEventInit_deleted(const CookieChangeEventInit *self);

/** @brief Setter of the deleted property */
void CookieChangeEventInit_set_deleted(CookieChangeEventInit* self, jb_Any * value);

/** @brief Constructor of the CookieChangeEventInit dictionary type */
CookieChangeEventInit CookieChangeEventInit_new();

#ifdef __cplusplus
}
#endif
