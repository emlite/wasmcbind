#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRMediaLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

/** @brief Dictionary type XRMediaEquirectLayerInit */
DECLARE_EMLITE_TYPE(XRMediaEquirectLayerInit, XRMediaLayerInit);

/** @brief Getter of the transform property */
XRRigidTransform XRMediaEquirectLayerInit_transform(const XRMediaEquirectLayerInit *self);

/** @brief Setter of the transform property */
void XRMediaEquirectLayerInit_set_transform(XRMediaEquirectLayerInit* self, XRRigidTransform * value);

/** @brief Getter of the radius property */
float XRMediaEquirectLayerInit_radius(const XRMediaEquirectLayerInit *self);

/** @brief Setter of the radius property */
void XRMediaEquirectLayerInit_set_radius(XRMediaEquirectLayerInit* self, float value);

/** @brief Getter of the centralHorizontalAngle property */
float XRMediaEquirectLayerInit_centralHorizontalAngle(const XRMediaEquirectLayerInit *self);

/** @brief Setter of the centralHorizontalAngle property */
void XRMediaEquirectLayerInit_set_centralHorizontalAngle(XRMediaEquirectLayerInit* self, float value);

/** @brief Getter of the upperVerticalAngle property */
float XRMediaEquirectLayerInit_upperVerticalAngle(const XRMediaEquirectLayerInit *self);

/** @brief Setter of the upperVerticalAngle property */
void XRMediaEquirectLayerInit_set_upperVerticalAngle(XRMediaEquirectLayerInit* self, float value);

/** @brief Getter of the lowerVerticalAngle property */
float XRMediaEquirectLayerInit_lowerVerticalAngle(const XRMediaEquirectLayerInit *self);

/** @brief Setter of the lowerVerticalAngle property */
void XRMediaEquirectLayerInit_set_lowerVerticalAngle(XRMediaEquirectLayerInit* self, float value);

/** @brief Constructor of the XRMediaEquirectLayerInit dictionary type */
XRMediaEquirectLayerInit XRMediaEquirectLayerInit_new();

#ifdef __cplusplus
}
#endif
