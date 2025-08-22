#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EcKeyAlgorithm */
DECLARE_EMLITE_TYPE(EcKeyAlgorithm, KeyAlgorithm);

/** @brief Getter of the namedCurve property */
jb_Any EcKeyAlgorithm_namedCurve(const EcKeyAlgorithm *self);

/** @brief Setter of the namedCurve property */
void EcKeyAlgorithm_set_namedCurve(EcKeyAlgorithm* self, jb_Any * value);

/** @brief Constructor of the EcKeyAlgorithm dictionary type */
EcKeyAlgorithm EcKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
