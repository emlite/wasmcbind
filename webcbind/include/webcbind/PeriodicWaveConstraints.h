#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PeriodicWaveConstraints */
DECLARE_EMLITE_TYPE(PeriodicWaveConstraints, em_Val);

/** @brief Getter of the disableNormalization property */
bool PeriodicWaveConstraints_disableNormalization(const PeriodicWaveConstraints *self);

/** @brief Setter of the disableNormalization property */
void PeriodicWaveConstraints_set_disableNormalization(PeriodicWaveConstraints* self, bool value);

/** @brief Constructor of the PeriodicWaveConstraints dictionary type */
PeriodicWaveConstraints PeriodicWaveConstraints_new();

#ifdef __cplusplus
}
#endif
