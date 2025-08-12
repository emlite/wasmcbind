#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

/** @brief Dictionary type XRCylinderLayerInit */
DECLARE_EMLITE_TYPE(XRCylinderLayerInit, XRLayerInit);

/** @brief Getter of the textureType property */
XRTextureType XRCylinderLayerInit_textureType(const XRCylinderLayerInit *self);

/** @brief Setter of the textureType property */
void XRCylinderLayerInit_set_textureType(XRCylinderLayerInit* self, XRTextureType * value);

/** @brief Getter of the transform property */
XRRigidTransform XRCylinderLayerInit_transform(const XRCylinderLayerInit *self);

/** @brief Setter of the transform property */
void XRCylinderLayerInit_set_transform(XRCylinderLayerInit* self, XRRigidTransform * value);

/** @brief Getter of the radius property */
float XRCylinderLayerInit_radius(const XRCylinderLayerInit *self);

/** @brief Setter of the radius property */
void XRCylinderLayerInit_set_radius(XRCylinderLayerInit* self, float value);

/** @brief Getter of the centralAngle property */
float XRCylinderLayerInit_centralAngle(const XRCylinderLayerInit *self);

/** @brief Setter of the centralAngle property */
void XRCylinderLayerInit_set_centralAngle(XRCylinderLayerInit* self, float value);

/** @brief Getter of the aspectRatio property */
float XRCylinderLayerInit_aspectRatio(const XRCylinderLayerInit *self);

/** @brief Setter of the aspectRatio property */
void XRCylinderLayerInit_set_aspectRatio(XRCylinderLayerInit* self, float value);

/** @brief Constructor of the XRCylinderLayerInit dictionary type */
XRCylinderLayerInit XRCylinderLayerInit_new();

#ifdef __cplusplus
}
#endif
