#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface VisualViewport
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport)
 */
DECLARE_EMLITE_TYPE(VisualViewport, EventTarget);

/**
 * @brief Gets the `offsetLeft` property. 
*/
double VisualViewport_offsetLeft(const VisualViewport *self);

/**
 * @brief Gets the `offsetTop` property. 
*/
double VisualViewport_offsetTop(const VisualViewport *self);

/**
 * @brief Gets the `pageLeft` property. 
*/
double VisualViewport_pageLeft(const VisualViewport *self);

/**
 * @brief Gets the `pageTop` property. 
*/
double VisualViewport_pageTop(const VisualViewport *self);

/**
 * @brief Gets the `width` property. 
*/
double VisualViewport_width(const VisualViewport *self);

/**
 * @brief Gets the `height` property. 
*/
double VisualViewport_height(const VisualViewport *self);

/**
 * @brief Gets the `scale` property. 
*/
double VisualViewport_scale(const VisualViewport *self);

/**
 * @brief Gets the `onresize` property. 
*/
jb_Any VisualViewport_onresize(const VisualViewport *self);

/**
 * @brief Sets the `onresize` property. 
*/
void VisualViewport_set_onresize(VisualViewport* self, jb_Any * value);

/**
 * @brief Gets the `onscroll` property. 
*/
jb_Any VisualViewport_onscroll(const VisualViewport *self);

/**
 * @brief Sets the `onscroll` property. 
*/
void VisualViewport_set_onscroll(VisualViewport* self, jb_Any * value);

/**
 * @brief Gets the `onscrollend` property. 
*/
jb_Any VisualViewport_onscrollend(const VisualViewport *self);

/**
 * @brief Sets the `onscrollend` property. 
*/
void VisualViewport_set_onscrollend(VisualViewport* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
