#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type URLPatternComponentResult */
DECLARE_EMLITE_TYPE(URLPatternComponentResult, em_Val);

/** @brief Getter of the input property */
jb_String URLPatternComponentResult_input(const URLPatternComponentResult *self);

/** @brief Setter of the input property */
void URLPatternComponentResult_set_input(URLPatternComponentResult* self, jb_String * value);

/** @brief Getter of the groups property */
jb_Object URLPatternComponentResult_groups(const URLPatternComponentResult *self);

/** @brief Setter of the groups property */
void URLPatternComponentResult_set_groups(URLPatternComponentResult* self, jb_Object * value);

/** @brief Constructor of the URLPatternComponentResult dictionary type */
URLPatternComponentResult URLPatternComponentResult_new();

#ifdef __cplusplus
}
#endif
