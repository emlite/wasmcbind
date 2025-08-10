#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CurrentUserDetailsOptions, em_Val);

jb_String CurrentUserDetailsOptions_rpId(const CurrentUserDetailsOptions *self);

void CurrentUserDetailsOptions_set_rpId(CurrentUserDetailsOptions* self, jb_String * value);

jb_Any CurrentUserDetailsOptions_userId(const CurrentUserDetailsOptions *self);

void CurrentUserDetailsOptions_set_userId(CurrentUserDetailsOptions* self, jb_Any * value);

jb_String CurrentUserDetailsOptions_name(const CurrentUserDetailsOptions *self);

void CurrentUserDetailsOptions_set_name(CurrentUserDetailsOptions* self, jb_String * value);

jb_String CurrentUserDetailsOptions_displayName(const CurrentUserDetailsOptions *self);

void CurrentUserDetailsOptions_set_displayName(CurrentUserDetailsOptions* self, jb_String * value);

CurrentUserDetailsOptions CurrentUserDetailsOptions_new();

#ifdef __cplusplus
}
#endif
