#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EcKeyImportParams */
DECLARE_EMLITE_TYPE(EcKeyImportParams, Algorithm);

/** @brief Getter of the namedCurve property */
jb_Any EcKeyImportParams_namedCurve(const EcKeyImportParams *self);

/** @brief Setter of the namedCurve property */
void EcKeyImportParams_set_namedCurve(EcKeyImportParams* self, jb_Any * value);

/** @brief Constructor of the EcKeyImportParams dictionary type */
EcKeyImportParams EcKeyImportParams_new();

#ifdef __cplusplus
}
#endif
