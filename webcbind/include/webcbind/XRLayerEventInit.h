#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRLayer XRLayer;

/** @brief Dictionary type XRLayerEventInit */
DECLARE_EMLITE_TYPE(XRLayerEventInit, EventInit);

/** @brief Getter of the layer property */
XRLayer XRLayerEventInit_layer(const XRLayerEventInit *self);

/** @brief Setter of the layer property */
void XRLayerEventInit_set_layer(XRLayerEventInit* self, XRLayer * value);

/** @brief Constructor of the XRLayerEventInit dictionary type */
XRLayerEventInit XRLayerEventInit_new();

#ifdef __cplusplus
}
#endif
