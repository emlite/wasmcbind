#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type Ed448Params */
DECLARE_EMLITE_TYPE(Ed448Params, Algorithm);

/** @brief Getter of the context property */
jb_Any Ed448Params_context(const Ed448Params *self);

/** @brief Setter of the context property */
void Ed448Params_set_context(Ed448Params* self, jb_Any * value);

/** @brief Constructor of the Ed448Params dictionary type */
Ed448Params Ed448Params_new();

#ifdef __cplusplus
}
#endif
