#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRLayer.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRCompositionLayer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRCompositionLayer)
 */
DECLARE_EMLITE_TYPE(XRCompositionLayer, XRLayer);

/**
 * @brief Gets the `layout` property. 
*/
XRLayerLayout XRCompositionLayer_layout(const XRCompositionLayer *self);

/**
 * @brief Gets the `blendTextureSourceAlpha` property. 
*/
bool XRCompositionLayer_blendTextureSourceAlpha(const XRCompositionLayer *self);

/**
 * @brief Sets the `blendTextureSourceAlpha` property. 
*/
void XRCompositionLayer_set_blendTextureSourceAlpha(XRCompositionLayer* self, bool value);

/**
 * @brief Gets the `forceMonoPresentation` property. 
*/
bool XRCompositionLayer_forceMonoPresentation(const XRCompositionLayer *self);

/**
 * @brief Sets the `forceMonoPresentation` property. 
*/
void XRCompositionLayer_set_forceMonoPresentation(XRCompositionLayer* self, bool value);

/**
 * @brief Gets the `opacity` property. 
*/
float XRCompositionLayer_opacity(const XRCompositionLayer *self);

/**
 * @brief Sets the `opacity` property. 
*/
void XRCompositionLayer_set_opacity(XRCompositionLayer* self, float value);

/**
 * @brief Gets the `mipLevels` property. 
*/
unsigned long XRCompositionLayer_mipLevels(const XRCompositionLayer *self);

/**
 * @brief Gets the `quality` property. 
*/
XRLayerQuality XRCompositionLayer_quality(const XRCompositionLayer *self);

/**
 * @brief Sets the `quality` property. 
*/
void XRCompositionLayer_set_quality(XRCompositionLayer* self, XRLayerQuality * value);

/**
 * @brief Gets the `needsRedraw` property. 
*/
bool XRCompositionLayer_needsRedraw(const XRCompositionLayer *self);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined XRCompositionLayer_destroy(XRCompositionLayer* self );

#ifdef __cplusplus
}
#endif
