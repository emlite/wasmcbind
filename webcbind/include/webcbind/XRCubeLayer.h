#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "XRCompositionLayer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;
typedef struct DOMPointReadOnly DOMPointReadOnly;


/**
 * @brief Interface XRCubeLayer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRCubeLayer)
 */
DECLARE_EMLITE_TYPE(XRCubeLayer, XRCompositionLayer);

/**
 * @brief Gets the `space` property. 
*/
XRSpace XRCubeLayer_space(const XRCubeLayer *self);

/**
 * @brief Sets the `space` property. 
*/
void XRCubeLayer_set_space(XRCubeLayer* self, XRSpace * value);

/**
 * @brief Gets the `orientation` property. 
*/
DOMPointReadOnly XRCubeLayer_orientation(const XRCubeLayer *self);

/**
 * @brief Sets the `orientation` property. 
*/
void XRCubeLayer_set_orientation(XRCubeLayer* self, DOMPointReadOnly * value);

/**
 * @brief Gets the `onredraw` property. 
*/
jb_Any XRCubeLayer_onredraw(const XRCubeLayer *self);

/**
 * @brief Sets the `onredraw` property. 
*/
void XRCubeLayer_set_onredraw(XRCubeLayer* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
