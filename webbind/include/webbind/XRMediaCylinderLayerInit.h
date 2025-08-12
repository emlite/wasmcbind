#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRMediaLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

/** @brief Dictionary type XRMediaCylinderLayerInit */
DECLARE_EMLITE_TYPE(XRMediaCylinderLayerInit, XRMediaLayerInit);

/** @brief Getter of the transform property */
XRRigidTransform XRMediaCylinderLayerInit_transform(const XRMediaCylinderLayerInit *self);

/** @brief Setter of the transform property */
void XRMediaCylinderLayerInit_set_transform(XRMediaCylinderLayerInit* self, XRRigidTransform * value);

/** @brief Getter of the radius property */
float XRMediaCylinderLayerInit_radius(const XRMediaCylinderLayerInit *self);

/** @brief Setter of the radius property */
void XRMediaCylinderLayerInit_set_radius(XRMediaCylinderLayerInit* self, float value);

/** @brief Getter of the centralAngle property */
float XRMediaCylinderLayerInit_centralAngle(const XRMediaCylinderLayerInit *self);

/** @brief Setter of the centralAngle property */
void XRMediaCylinderLayerInit_set_centralAngle(XRMediaCylinderLayerInit* self, float value);

/** @brief Getter of the aspectRatio property */
float XRMediaCylinderLayerInit_aspectRatio(const XRMediaCylinderLayerInit *self);

/** @brief Setter of the aspectRatio property */
void XRMediaCylinderLayerInit_set_aspectRatio(XRMediaCylinderLayerInit* self, float value);

/** @brief Constructor of the XRMediaCylinderLayerInit dictionary type */
XRMediaCylinderLayerInit XRMediaCylinderLayerInit_new();

#ifdef __cplusplus
}
#endif
