#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EcKeyGenParams */
DECLARE_EMLITE_TYPE(EcKeyGenParams, Algorithm);

/** @brief Getter of the namedCurve property */
jb_Any EcKeyGenParams_namedCurve(const EcKeyGenParams *self);

/** @brief Setter of the namedCurve property */
void EcKeyGenParams_set_namedCurve(EcKeyGenParams* self, jb_Any * value);

/** @brief Constructor of the EcKeyGenParams dictionary type */
EcKeyGenParams EcKeyGenParams_new();

#ifdef __cplusplus
}
#endif
