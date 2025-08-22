#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRWebGLLayer XRWebGLLayer;
typedef struct XRLayer XRLayer;

/** @brief Dictionary type XRRenderStateInit */
DECLARE_EMLITE_TYPE(XRRenderStateInit, em_Val);

/** @brief Getter of the depthNear property */
double XRRenderStateInit_depthNear(const XRRenderStateInit *self);

/** @brief Setter of the depthNear property */
void XRRenderStateInit_set_depthNear(XRRenderStateInit* self, double value);

/** @brief Getter of the depthFar property */
double XRRenderStateInit_depthFar(const XRRenderStateInit *self);

/** @brief Setter of the depthFar property */
void XRRenderStateInit_set_depthFar(XRRenderStateInit* self, double value);

/** @brief Getter of the passthroughFullyObscured property */
bool XRRenderStateInit_passthroughFullyObscured(const XRRenderStateInit *self);

/** @brief Setter of the passthroughFullyObscured property */
void XRRenderStateInit_set_passthroughFullyObscured(XRRenderStateInit* self, bool value);

/** @brief Getter of the inlineVerticalFieldOfView property */
double XRRenderStateInit_inlineVerticalFieldOfView(const XRRenderStateInit *self);

/** @brief Setter of the inlineVerticalFieldOfView property */
void XRRenderStateInit_set_inlineVerticalFieldOfView(XRRenderStateInit* self, double value);

/** @brief Getter of the baseLayer property */
XRWebGLLayer XRRenderStateInit_baseLayer(const XRRenderStateInit *self);

/** @brief Setter of the baseLayer property */
void XRRenderStateInit_set_baseLayer(XRRenderStateInit* self, XRWebGLLayer * value);

/** @brief Getter of the layers property */
jb_Array XRRenderStateInit_layers(const XRRenderStateInit *self);

/** @brief Setter of the layers property */
void XRRenderStateInit_set_layers(XRRenderStateInit* self, jb_Array * value);

/** @brief Constructor of the XRRenderStateInit dictionary type */
XRRenderStateInit XRRenderStateInit_new();

#ifdef __cplusplus
}
#endif
