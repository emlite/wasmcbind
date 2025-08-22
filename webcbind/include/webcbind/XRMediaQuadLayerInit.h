#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "XRMediaLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

/** @brief Dictionary type XRMediaQuadLayerInit */
DECLARE_EMLITE_TYPE(XRMediaQuadLayerInit, XRMediaLayerInit);

/** @brief Getter of the transform property */
XRRigidTransform XRMediaQuadLayerInit_transform(const XRMediaQuadLayerInit *self);

/** @brief Setter of the transform property */
void XRMediaQuadLayerInit_set_transform(XRMediaQuadLayerInit* self, XRRigidTransform * value);

/** @brief Getter of the width property */
float XRMediaQuadLayerInit_width(const XRMediaQuadLayerInit *self);

/** @brief Setter of the width property */
void XRMediaQuadLayerInit_set_width(XRMediaQuadLayerInit* self, float value);

/** @brief Getter of the height property */
float XRMediaQuadLayerInit_height(const XRMediaQuadLayerInit *self);

/** @brief Setter of the height property */
void XRMediaQuadLayerInit_set_height(XRMediaQuadLayerInit* self, float value);

/** @brief Constructor of the XRMediaQuadLayerInit dictionary type */
XRMediaQuadLayerInit XRMediaQuadLayerInit_new();

#ifdef __cplusplus
}
#endif
