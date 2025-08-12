#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type XRProjectionLayerInit */
DECLARE_EMLITE_TYPE(XRProjectionLayerInit, em_Val);

/** @brief Getter of the textureType property */
XRTextureType XRProjectionLayerInit_textureType(const XRProjectionLayerInit *self);

/** @brief Setter of the textureType property */
void XRProjectionLayerInit_set_textureType(XRProjectionLayerInit* self, XRTextureType * value);

/** @brief Getter of the colorFormat property */
jb_Any XRProjectionLayerInit_colorFormat(const XRProjectionLayerInit *self);

/** @brief Setter of the colorFormat property */
void XRProjectionLayerInit_set_colorFormat(XRProjectionLayerInit* self, jb_Any * value);

/** @brief Getter of the depthFormat property */
jb_Any XRProjectionLayerInit_depthFormat(const XRProjectionLayerInit *self);

/** @brief Setter of the depthFormat property */
void XRProjectionLayerInit_set_depthFormat(XRProjectionLayerInit* self, jb_Any * value);

/** @brief Getter of the scaleFactor property */
double XRProjectionLayerInit_scaleFactor(const XRProjectionLayerInit *self);

/** @brief Setter of the scaleFactor property */
void XRProjectionLayerInit_set_scaleFactor(XRProjectionLayerInit* self, double value);

/** @brief Getter of the clearOnAccess property */
bool XRProjectionLayerInit_clearOnAccess(const XRProjectionLayerInit *self);

/** @brief Setter of the clearOnAccess property */
void XRProjectionLayerInit_set_clearOnAccess(XRProjectionLayerInit* self, bool value);

/** @brief Constructor of the XRProjectionLayerInit dictionary type */
XRProjectionLayerInit XRProjectionLayerInit_new();

#ifdef __cplusplus
}
#endif
