#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RsaPssParams */
DECLARE_EMLITE_TYPE(RsaPssParams, Algorithm);

/** @brief Getter of the saltLength property */
unsigned long RsaPssParams_saltLength(const RsaPssParams *self);

/** @brief Setter of the saltLength property */
void RsaPssParams_set_saltLength(RsaPssParams* self, unsigned long value);

/** @brief Constructor of the RsaPssParams dictionary type */
RsaPssParams RsaPssParams_new();

#ifdef __cplusplus
}
#endif
