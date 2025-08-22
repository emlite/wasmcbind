#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CurrentUserDetailsOptions */
DECLARE_EMLITE_TYPE(CurrentUserDetailsOptions, em_Val);

/** @brief Getter of the rpId property */
jb_String CurrentUserDetailsOptions_rpId(const CurrentUserDetailsOptions *self);

/** @brief Setter of the rpId property */
void CurrentUserDetailsOptions_set_rpId(CurrentUserDetailsOptions* self, jb_String * value);

/** @brief Getter of the userId property */
jb_Any CurrentUserDetailsOptions_userId(const CurrentUserDetailsOptions *self);

/** @brief Setter of the userId property */
void CurrentUserDetailsOptions_set_userId(CurrentUserDetailsOptions* self, jb_Any * value);

/** @brief Getter of the name property */
jb_String CurrentUserDetailsOptions_name(const CurrentUserDetailsOptions *self);

/** @brief Setter of the name property */
void CurrentUserDetailsOptions_set_name(CurrentUserDetailsOptions* self, jb_String * value);

/** @brief Getter of the displayName property */
jb_String CurrentUserDetailsOptions_displayName(const CurrentUserDetailsOptions *self);

/** @brief Setter of the displayName property */
void CurrentUserDetailsOptions_set_displayName(CurrentUserDetailsOptions* self, jb_String * value);

/** @brief Constructor of the CurrentUserDetailsOptions dictionary type */
CurrentUserDetailsOptions CurrentUserDetailsOptions_new();

#ifdef __cplusplus
}
#endif
