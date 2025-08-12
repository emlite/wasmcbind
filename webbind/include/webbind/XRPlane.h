#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;
typedef struct DOMPointReadOnly DOMPointReadOnly;


/**
 * @brief Interface XRPlane
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane)
 */
DECLARE_EMLITE_TYPE(XRPlane, em_Val);

/**
 * @brief Gets the `planeSpace` property. 
*/
XRSpace XRPlane_planeSpace(const XRPlane *self);

/**
 * @brief Gets the `polygon` property. 
*/
jb_Array XRPlane_polygon(const XRPlane *self);

/**
 * @brief Gets the `orientation` property. 
*/
XRPlaneOrientation XRPlane_orientation(const XRPlane *self);

/**
 * @brief Gets the `lastChangedTime` property. 
*/
jb_Any XRPlane_lastChangedTime(const XRPlane *self);

/**
 * @brief Gets the `semanticLabel` property. 
*/
jb_String XRPlane_semanticLabel(const XRPlane *self);

#ifdef __cplusplus
}
#endif
