#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type XRSessionInit */
DECLARE_EMLITE_TYPE(XRSessionInit, em_Val);

/** @brief Getter of the requiredFeatures property */
jb_Array XRSessionInit_requiredFeatures(const XRSessionInit *self);

/** @brief Setter of the requiredFeatures property */
void XRSessionInit_set_requiredFeatures(XRSessionInit* self, jb_Array * value);

/** @brief Getter of the optionalFeatures property */
jb_Array XRSessionInit_optionalFeatures(const XRSessionInit *self);

/** @brief Setter of the optionalFeatures property */
void XRSessionInit_set_optionalFeatures(XRSessionInit* self, jb_Array * value);

/** @brief Constructor of the XRSessionInit dictionary type */
XRSessionInit XRSessionInit_new();

#ifdef __cplusplus
}
#endif
