#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type XRDOMOverlayState */
DECLARE_EMLITE_TYPE(XRDOMOverlayState, em_Val);

/** @brief Getter of the type property */
XRDOMOverlayType XRDOMOverlayState_type(const XRDOMOverlayState *self);

/** @brief Setter of the type property */
void XRDOMOverlayState_set_type(XRDOMOverlayState* self, XRDOMOverlayType * value);

/** @brief Constructor of the XRDOMOverlayState dictionary type */
XRDOMOverlayState XRDOMOverlayState_new();

#ifdef __cplusplus
}
#endif
