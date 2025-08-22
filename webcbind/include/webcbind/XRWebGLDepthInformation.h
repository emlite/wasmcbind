#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "XRDepthInformation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLTexture WebGLTexture;


/**
 * @brief Interface XRWebGLDepthInformation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLDepthInformation)
 */
DECLARE_EMLITE_TYPE(XRWebGLDepthInformation, XRDepthInformation);

/**
 * @brief Gets the `texture` property. 
*/
WebGLTexture XRWebGLDepthInformation_texture(const XRWebGLDepthInformation *self);

/**
 * @brief Gets the `textureType` property. 
*/
XRTextureType XRWebGLDepthInformation_textureType(const XRWebGLDepthInformation *self);

/**
 * @brief Gets the `imageIndex` property. 
*/
unsigned long XRWebGLDepthInformation_imageIndex(const XRWebGLDepthInformation *self);

#ifdef __cplusplus
}
#endif
