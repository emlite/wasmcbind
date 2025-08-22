#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "XRLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

/** @brief Dictionary type XRQuadLayerInit */
DECLARE_EMLITE_TYPE(XRQuadLayerInit, XRLayerInit);

/** @brief Getter of the textureType property */
XRTextureType XRQuadLayerInit_textureType(const XRQuadLayerInit *self);

/** @brief Setter of the textureType property */
void XRQuadLayerInit_set_textureType(XRQuadLayerInit* self, XRTextureType * value);

/** @brief Getter of the transform property */
XRRigidTransform XRQuadLayerInit_transform(const XRQuadLayerInit *self);

/** @brief Setter of the transform property */
void XRQuadLayerInit_set_transform(XRQuadLayerInit* self, XRRigidTransform * value);

/** @brief Getter of the width property */
float XRQuadLayerInit_width(const XRQuadLayerInit *self);

/** @brief Setter of the width property */
void XRQuadLayerInit_set_width(XRQuadLayerInit* self, float value);

/** @brief Getter of the height property */
float XRQuadLayerInit_height(const XRQuadLayerInit *self);

/** @brief Setter of the height property */
void XRQuadLayerInit_set_height(XRQuadLayerInit* self, float value);

/** @brief Constructor of the XRQuadLayerInit dictionary type */
XRQuadLayerInit XRQuadLayerInit_new();

#ifdef __cplusplus
}
#endif
