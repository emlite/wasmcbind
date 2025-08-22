#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;

/** @brief Dictionary type XRLayerInit */
DECLARE_EMLITE_TYPE(XRLayerInit, em_Val);

/** @brief Getter of the space property */
XRSpace XRLayerInit_space(const XRLayerInit *self);

/** @brief Setter of the space property */
void XRLayerInit_set_space(XRLayerInit* self, XRSpace * value);

/** @brief Getter of the colorFormat property */
jb_Any XRLayerInit_colorFormat(const XRLayerInit *self);

/** @brief Setter of the colorFormat property */
void XRLayerInit_set_colorFormat(XRLayerInit* self, jb_Any * value);

/** @brief Getter of the depthFormat property */
jb_Any XRLayerInit_depthFormat(const XRLayerInit *self);

/** @brief Setter of the depthFormat property */
void XRLayerInit_set_depthFormat(XRLayerInit* self, jb_Any * value);

/** @brief Getter of the mipLevels property */
unsigned long XRLayerInit_mipLevels(const XRLayerInit *self);

/** @brief Setter of the mipLevels property */
void XRLayerInit_set_mipLevels(XRLayerInit* self, unsigned long value);

/** @brief Getter of the viewPixelWidth property */
unsigned long XRLayerInit_viewPixelWidth(const XRLayerInit *self);

/** @brief Setter of the viewPixelWidth property */
void XRLayerInit_set_viewPixelWidth(XRLayerInit* self, unsigned long value);

/** @brief Getter of the viewPixelHeight property */
unsigned long XRLayerInit_viewPixelHeight(const XRLayerInit *self);

/** @brief Setter of the viewPixelHeight property */
void XRLayerInit_set_viewPixelHeight(XRLayerInit* self, unsigned long value);

/** @brief Getter of the layout property */
XRLayerLayout XRLayerInit_layout(const XRLayerInit *self);

/** @brief Setter of the layout property */
void XRLayerInit_set_layout(XRLayerInit* self, XRLayerLayout * value);

/** @brief Getter of the isStatic property */
bool XRLayerInit_isStatic(const XRLayerInit *self);

/** @brief Setter of the isStatic property */
void XRLayerInit_set_isStatic(XRLayerInit* self, bool value);

/** @brief Getter of the clearOnAccess property */
bool XRLayerInit_clearOnAccess(const XRLayerInit *self);

/** @brief Setter of the clearOnAccess property */
void XRLayerInit_set_clearOnAccess(XRLayerInit* self, bool value);

/** @brief Constructor of the XRLayerInit dictionary type */
XRLayerInit XRLayerInit_new();

#ifdef __cplusplus
}
#endif
