#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RsaOaepParams */
DECLARE_EMLITE_TYPE(RsaOaepParams, Algorithm);

/** @brief Getter of the label property */
jb_Any RsaOaepParams_label(const RsaOaepParams *self);

/** @brief Setter of the label property */
void RsaOaepParams_set_label(RsaOaepParams* self, jb_Any * value);

/** @brief Constructor of the RsaOaepParams dictionary type */
RsaOaepParams RsaOaepParams_new();

#ifdef __cplusplus
}
#endif
