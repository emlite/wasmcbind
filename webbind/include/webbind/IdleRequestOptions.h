#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdleRequestOptions */
DECLARE_EMLITE_TYPE(IdleRequestOptions, em_Val);

/** @brief Getter of the timeout property */
unsigned long IdleRequestOptions_timeout(const IdleRequestOptions *self);

/** @brief Setter of the timeout property */
void IdleRequestOptions_set_timeout(IdleRequestOptions* self, unsigned long value);

/** @brief Constructor of the IdleRequestOptions dictionary type */
IdleRequestOptions IdleRequestOptions_new();

#ifdef __cplusplus
}
#endif
