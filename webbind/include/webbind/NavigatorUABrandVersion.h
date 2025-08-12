#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NavigatorUABrandVersion */
DECLARE_EMLITE_TYPE(NavigatorUABrandVersion, em_Val);

/** @brief Getter of the brand property */
jb_String NavigatorUABrandVersion_brand(const NavigatorUABrandVersion *self);

/** @brief Setter of the brand property */
void NavigatorUABrandVersion_set_brand(NavigatorUABrandVersion* self, jb_String * value);

/** @brief Getter of the version property */
jb_String NavigatorUABrandVersion_version(const NavigatorUABrandVersion *self);

/** @brief Setter of the version property */
void NavigatorUABrandVersion_set_version(NavigatorUABrandVersion* self, jb_String * value);

/** @brief Constructor of the NavigatorUABrandVersion dictionary type */
NavigatorUABrandVersion NavigatorUABrandVersion_new();

#ifdef __cplusplus
}
#endif
