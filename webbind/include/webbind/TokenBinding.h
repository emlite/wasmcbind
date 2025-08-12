#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TokenBinding */
DECLARE_EMLITE_TYPE(TokenBinding, em_Val);

/** @brief Getter of the status property */
jb_String TokenBinding_status(const TokenBinding *self);

/** @brief Setter of the status property */
void TokenBinding_set_status(TokenBinding* self, jb_String * value);

/** @brief Getter of the id property */
jb_String TokenBinding_id(const TokenBinding *self);

/** @brief Setter of the id property */
void TokenBinding_set_id(TokenBinding* self, jb_String * value);

/** @brief Constructor of the TokenBinding dictionary type */
TokenBinding TokenBinding_new();

#ifdef __cplusplus
}
#endif
