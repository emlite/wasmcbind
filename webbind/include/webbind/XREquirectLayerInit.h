#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

/** @brief Dictionary type XREquirectLayerInit */
DECLARE_EMLITE_TYPE(XREquirectLayerInit, XRLayerInit);

/** @brief Getter of the textureType property */
XRTextureType XREquirectLayerInit_textureType(const XREquirectLayerInit *self);

/** @brief Setter of the textureType property */
void XREquirectLayerInit_set_textureType(XREquirectLayerInit* self, XRTextureType * value);

/** @brief Getter of the transform property */
XRRigidTransform XREquirectLayerInit_transform(const XREquirectLayerInit *self);

/** @brief Setter of the transform property */
void XREquirectLayerInit_set_transform(XREquirectLayerInit* self, XRRigidTransform * value);

/** @brief Getter of the radius property */
float XREquirectLayerInit_radius(const XREquirectLayerInit *self);

/** @brief Setter of the radius property */
void XREquirectLayerInit_set_radius(XREquirectLayerInit* self, float value);

/** @brief Getter of the centralHorizontalAngle property */
float XREquirectLayerInit_centralHorizontalAngle(const XREquirectLayerInit *self);

/** @brief Setter of the centralHorizontalAngle property */
void XREquirectLayerInit_set_centralHorizontalAngle(XREquirectLayerInit* self, float value);

/** @brief Getter of the upperVerticalAngle property */
float XREquirectLayerInit_upperVerticalAngle(const XREquirectLayerInit *self);

/** @brief Setter of the upperVerticalAngle property */
void XREquirectLayerInit_set_upperVerticalAngle(XREquirectLayerInit* self, float value);

/** @brief Getter of the lowerVerticalAngle property */
float XREquirectLayerInit_lowerVerticalAngle(const XREquirectLayerInit *self);

/** @brief Setter of the lowerVerticalAngle property */
void XREquirectLayerInit_set_lowerVerticalAngle(XREquirectLayerInit* self, float value);

/** @brief Constructor of the XREquirectLayerInit dictionary type */
XREquirectLayerInit XREquirectLayerInit_new();

#ifdef __cplusplus
}
#endif
