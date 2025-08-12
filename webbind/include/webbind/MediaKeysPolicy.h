#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaKeysPolicy */
DECLARE_EMLITE_TYPE(MediaKeysPolicy, em_Val);

/** @brief Getter of the minHdcpVersion property */
jb_String MediaKeysPolicy_minHdcpVersion(const MediaKeysPolicy *self);

/** @brief Setter of the minHdcpVersion property */
void MediaKeysPolicy_set_minHdcpVersion(MediaKeysPolicy* self, jb_String * value);

/** @brief Constructor of the MediaKeysPolicy dictionary type */
MediaKeysPolicy MediaKeysPolicy_new();

#ifdef __cplusplus
}
#endif
