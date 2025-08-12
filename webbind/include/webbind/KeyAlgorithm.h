#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type KeyAlgorithm */
DECLARE_EMLITE_TYPE(KeyAlgorithm, em_Val);

/** @brief Getter of the name property */
jb_String KeyAlgorithm_name(const KeyAlgorithm *self);

/** @brief Setter of the name property */
void KeyAlgorithm_set_name(KeyAlgorithm* self, jb_String * value);

/** @brief Constructor of the KeyAlgorithm dictionary type */
KeyAlgorithm KeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
