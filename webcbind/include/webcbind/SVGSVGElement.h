#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct NodeList NodeList;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct SVGElement SVGElement;
typedef struct SVGNumber SVGNumber;
typedef struct SVGLength SVGLength;
typedef struct SVGAngle SVGAngle;
typedef struct DOMPoint DOMPoint;
typedef struct DOMMatrix DOMMatrix;
typedef struct DOMRect DOMRect;
typedef struct SVGTransform SVGTransform;
typedef struct DOMMatrix2DInit DOMMatrix2DInit;
typedef struct Element Element;
typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;


/**
 * @brief Interface SVGSVGElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement)
 */
DECLARE_EMLITE_TYPE(SVGSVGElement, SVGGraphicsElement);

/**
 * @brief Gets the `x` property. 
*/
SVGAnimatedLength SVGSVGElement_x(const SVGSVGElement *self);

/**
 * @brief Gets the `y` property. 
*/
SVGAnimatedLength SVGSVGElement_y(const SVGSVGElement *self);

/**
 * @brief Gets the `width` property. 
*/
SVGAnimatedLength SVGSVGElement_width(const SVGSVGElement *self);

/**
 * @brief Gets the `height` property. 
*/
SVGAnimatedLength SVGSVGElement_height(const SVGSVGElement *self);

/**
 * @brief Gets the `currentScale` property. 
*/
float SVGSVGElement_currentScale(const SVGSVGElement *self);

/**
 * @brief Sets the `currentScale` property. 
*/
void SVGSVGElement_set_currentScale(SVGSVGElement* self, float value);

/**
 * @brief Gets the `currentTranslate` property. 
*/
DOMPointReadOnly SVGSVGElement_currentTranslate(const SVGSVGElement *self);

/**
 * @brief Calls the `getIntersectionList` method. 
*/
NodeList SVGSVGElement_getIntersectionList(SVGSVGElement* self , DOMRectReadOnly * rect, SVGElement * referenceElement);

/**
 * @brief Calls the `getEnclosureList` method. 
*/
NodeList SVGSVGElement_getEnclosureList(SVGSVGElement* self , DOMRectReadOnly * rect, SVGElement * referenceElement);

/**
 * @brief Calls the `checkIntersection` method. 
*/
bool SVGSVGElement_checkIntersection(SVGSVGElement* self , SVGElement * element, DOMRectReadOnly * rect);

/**
 * @brief Calls the `checkEnclosure` method. 
*/
bool SVGSVGElement_checkEnclosure(SVGSVGElement* self , SVGElement * element, DOMRectReadOnly * rect);

/**
 * @brief Calls the `deselectAll` method. 
*/
jb_Undefined SVGSVGElement_deselectAll(SVGSVGElement* self );

/**
 * @brief Calls the `createSVGNumber` method. 
*/
SVGNumber SVGSVGElement_createSVGNumber(SVGSVGElement* self );

/**
 * @brief Calls the `createSVGLength` method. 
*/
SVGLength SVGSVGElement_createSVGLength(SVGSVGElement* self );

/**
 * @brief Calls the `createSVGAngle` method. 
*/
SVGAngle SVGSVGElement_createSVGAngle(SVGSVGElement* self );

/**
 * @brief Calls the `createSVGPoint` method. 
*/
DOMPoint SVGSVGElement_createSVGPoint(SVGSVGElement* self );

/**
 * @brief Calls the `createSVGMatrix` method. 
*/
DOMMatrix SVGSVGElement_createSVGMatrix(SVGSVGElement* self );

/**
 * @brief Calls the `createSVGRect` method. 
*/
DOMRect SVGSVGElement_createSVGRect(SVGSVGElement* self );

/**
 * @brief Calls the `createSVGTransform` method. 
*/
SVGTransform SVGSVGElement_createSVGTransform(SVGSVGElement* self );

/**
 * @brief Calls the `createSVGTransformFromMatrix` method. 
*/
SVGTransform SVGSVGElement_createSVGTransformFromMatrix0(SVGSVGElement* self );

/**
 * @brief Calls the `createSVGTransformFromMatrix` method. 
*/
SVGTransform SVGSVGElement_createSVGTransformFromMatrix1(SVGSVGElement* self , DOMMatrix2DInit * matrix);

/**
 * @brief Calls the `getElementById` method. 
*/
Element SVGSVGElement_getElementById(SVGSVGElement* self , jb_String * elementId);

/**
 * @brief Calls the `suspendRedraw` method. 
*/
unsigned long SVGSVGElement_suspendRedraw(SVGSVGElement* self , unsigned long maxWaitMilliseconds);

/**
 * @brief Calls the `unsuspendRedraw` method. 
*/
jb_Undefined SVGSVGElement_unsuspendRedraw(SVGSVGElement* self , unsigned long suspendHandleID);

/**
 * @brief Calls the `unsuspendRedrawAll` method. 
*/
jb_Undefined SVGSVGElement_unsuspendRedrawAll(SVGSVGElement* self );

/**
 * @brief Calls the `forceRedraw` method. 
*/
jb_Undefined SVGSVGElement_forceRedraw(SVGSVGElement* self );

/**
 * @brief Calls the `pauseAnimations` method. 
*/
jb_Undefined SVGSVGElement_pauseAnimations(SVGSVGElement* self );

/**
 * @brief Calls the `unpauseAnimations` method. 
*/
jb_Undefined SVGSVGElement_unpauseAnimations(SVGSVGElement* self );

/**
 * @brief Calls the `animationsPaused` method. 
*/
bool SVGSVGElement_animationsPaused(SVGSVGElement* self );

/**
 * @brief Calls the `getCurrentTime` method. 
*/
float SVGSVGElement_getCurrentTime(SVGSVGElement* self );

/**
 * @brief Calls the `setCurrentTime` method. 
*/
jb_Undefined SVGSVGElement_setCurrentTime(SVGSVGElement* self , float seconds);

/**
 * @brief Gets the `viewBox` property. 
*/
SVGAnimatedRect SVGSVGElement_viewBox(const SVGSVGElement *self);

/**
 * @brief Gets the `preserveAspectRatio` property. 
*/
SVGAnimatedPreserveAspectRatio SVGSVGElement_preserveAspectRatio(const SVGSVGElement *self);

/**
 * @brief Gets the `onportalactivate` property. 
*/
jb_Any SVGSVGElement_onportalactivate(const SVGSVGElement *self);

/**
 * @brief Sets the `onportalactivate` property. 
*/
void SVGSVGElement_set_onportalactivate(SVGSVGElement* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
