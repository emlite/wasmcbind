#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ExtendableCookieChangeEventInit */
DECLARE_EMLITE_TYPE(ExtendableCookieChangeEventInit, ExtendableEventInit);

/** @brief Getter of the changed property */
jb_Any ExtendableCookieChangeEventInit_changed(const ExtendableCookieChangeEventInit *self);

/** @brief Setter of the changed property */
void ExtendableCookieChangeEventInit_set_changed(ExtendableCookieChangeEventInit* self, jb_Any * value);

/** @brief Getter of the deleted property */
jb_Any ExtendableCookieChangeEventInit_deleted(const ExtendableCookieChangeEventInit *self);

/** @brief Setter of the deleted property */
void ExtendableCookieChangeEventInit_set_deleted(ExtendableCookieChangeEventInit* self, jb_Any * value);

/** @brief Constructor of the ExtendableCookieChangeEventInit dictionary type */
ExtendableCookieChangeEventInit ExtendableCookieChangeEventInit_new();

#ifdef __cplusplus
}
#endif
