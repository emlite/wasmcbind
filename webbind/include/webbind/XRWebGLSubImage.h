#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRSubImage.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLTexture WebGLTexture;


/**
 * @brief Interface XRWebGLSubImage
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLSubImage)
 */
DECLARE_EMLITE_TYPE(XRWebGLSubImage, XRSubImage);

/**
 * @brief Gets the `colorTexture` property. 
*/
WebGLTexture XRWebGLSubImage_colorTexture(const XRWebGLSubImage *self);

/**
 * @brief Gets the `depthStencilTexture` property. 
*/
WebGLTexture XRWebGLSubImage_depthStencilTexture(const XRWebGLSubImage *self);

/**
 * @brief Gets the `motionVectorTexture` property. 
*/
WebGLTexture XRWebGLSubImage_motionVectorTexture(const XRWebGLSubImage *self);

/**
 * @brief Gets the `imageIndex` property. 
*/
unsigned long XRWebGLSubImage_imageIndex(const XRWebGLSubImage *self);

/**
 * @brief Gets the `colorTextureWidth` property. 
*/
unsigned long XRWebGLSubImage_colorTextureWidth(const XRWebGLSubImage *self);

/**
 * @brief Gets the `colorTextureHeight` property. 
*/
unsigned long XRWebGLSubImage_colorTextureHeight(const XRWebGLSubImage *self);

/**
 * @brief Gets the `depthStencilTextureWidth` property. 
*/
unsigned long XRWebGLSubImage_depthStencilTextureWidth(const XRWebGLSubImage *self);

/**
 * @brief Gets the `depthStencilTextureHeight` property. 
*/
unsigned long XRWebGLSubImage_depthStencilTextureHeight(const XRWebGLSubImage *self);

/**
 * @brief Gets the `motionVectorTextureWidth` property. 
*/
unsigned long XRWebGLSubImage_motionVectorTextureWidth(const XRWebGLSubImage *self);

/**
 * @brief Gets the `motionVectorTextureHeight` property. 
*/
unsigned long XRWebGLSubImage_motionVectorTextureHeight(const XRWebGLSubImage *self);

#ifdef __cplusplus
}
#endif
