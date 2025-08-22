#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type LockOptions */
DECLARE_EMLITE_TYPE(LockOptions, em_Val);

/** @brief Getter of the mode property */
LockMode LockOptions_mode(const LockOptions *self);

/** @brief Setter of the mode property */
void LockOptions_set_mode(LockOptions* self, LockMode * value);

/** @brief Getter of the ifAvailable property */
bool LockOptions_ifAvailable(const LockOptions *self);

/** @brief Setter of the ifAvailable property */
void LockOptions_set_ifAvailable(LockOptions* self, bool value);

/** @brief Getter of the steal property */
bool LockOptions_steal(const LockOptions *self);

/** @brief Setter of the steal property */
void LockOptions_set_steal(LockOptions* self, bool value);

/** @brief Getter of the signal property */
AbortSignal LockOptions_signal(const LockOptions *self);

/** @brief Setter of the signal property */
void LockOptions_set_signal(LockOptions* self, AbortSignal * value);

/** @brief Constructor of the LockOptions dictionary type */
LockOptions LockOptions_new();

#ifdef __cplusplus
}
#endif
