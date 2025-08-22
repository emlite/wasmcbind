#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "XRLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointReadOnly DOMPointReadOnly;

/** @brief Dictionary type XRCubeLayerInit */
DECLARE_EMLITE_TYPE(XRCubeLayerInit, XRLayerInit);

/** @brief Getter of the orientation property */
DOMPointReadOnly XRCubeLayerInit_orientation(const XRCubeLayerInit *self);

/** @brief Setter of the orientation property */
void XRCubeLayerInit_set_orientation(XRCubeLayerInit* self, DOMPointReadOnly * value);

/** @brief Constructor of the XRCubeLayerInit dictionary type */
XRCubeLayerInit XRCubeLayerInit_new();

#ifdef __cplusplus
}
#endif
