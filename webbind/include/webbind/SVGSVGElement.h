#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
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

DECLARE_EMLITE_TYPE(SVGSVGElement, SVGGraphicsElement);

SVGAnimatedLength SVGSVGElement_x(const SVGSVGElement *self);

SVGAnimatedLength SVGSVGElement_y(const SVGSVGElement *self);

SVGAnimatedLength SVGSVGElement_width(const SVGSVGElement *self);

SVGAnimatedLength SVGSVGElement_height(const SVGSVGElement *self);

float SVGSVGElement_currentScale(const SVGSVGElement *self);

void SVGSVGElement_set_currentScale(SVGSVGElement* self, float value);

DOMPointReadOnly SVGSVGElement_currentTranslate(const SVGSVGElement *self);

NodeList SVGSVGElement_getIntersectionList(SVGSVGElement* self , DOMRectReadOnly * rect, SVGElement * referenceElement);

NodeList SVGSVGElement_getEnclosureList(SVGSVGElement* self , DOMRectReadOnly * rect, SVGElement * referenceElement);

bool SVGSVGElement_checkIntersection(SVGSVGElement* self , SVGElement * element, DOMRectReadOnly * rect);

bool SVGSVGElement_checkEnclosure(SVGSVGElement* self , SVGElement * element, DOMRectReadOnly * rect);

jb_Undefined SVGSVGElement_deselectAll(SVGSVGElement* self );

SVGNumber SVGSVGElement_createSVGNumber(SVGSVGElement* self );

SVGLength SVGSVGElement_createSVGLength(SVGSVGElement* self );

SVGAngle SVGSVGElement_createSVGAngle(SVGSVGElement* self );

DOMPoint SVGSVGElement_createSVGPoint(SVGSVGElement* self );

DOMMatrix SVGSVGElement_createSVGMatrix(SVGSVGElement* self );

DOMRect SVGSVGElement_createSVGRect(SVGSVGElement* self );

SVGTransform SVGSVGElement_createSVGTransform(SVGSVGElement* self );

SVGTransform SVGSVGElement_createSVGTransformFromMatrix0(SVGSVGElement* self );

SVGTransform SVGSVGElement_createSVGTransformFromMatrix1(SVGSVGElement* self , DOMMatrix2DInit * matrix);

Element SVGSVGElement_getElementById(SVGSVGElement* self , jb_String * elementId);

unsigned long SVGSVGElement_suspendRedraw(SVGSVGElement* self , unsigned long maxWaitMilliseconds);

jb_Undefined SVGSVGElement_unsuspendRedraw(SVGSVGElement* self , unsigned long suspendHandleID);

jb_Undefined SVGSVGElement_unsuspendRedrawAll(SVGSVGElement* self );

jb_Undefined SVGSVGElement_forceRedraw(SVGSVGElement* self );

jb_Undefined SVGSVGElement_pauseAnimations(SVGSVGElement* self );

jb_Undefined SVGSVGElement_unpauseAnimations(SVGSVGElement* self );

bool SVGSVGElement_animationsPaused(SVGSVGElement* self );

float SVGSVGElement_getCurrentTime(SVGSVGElement* self );

jb_Undefined SVGSVGElement_setCurrentTime(SVGSVGElement* self , float seconds);

SVGAnimatedRect SVGSVGElement_viewBox(const SVGSVGElement *self);

SVGAnimatedPreserveAspectRatio SVGSVGElement_preserveAspectRatio(const SVGSVGElement *self);

jb_Any SVGSVGElement_onportalactivate(const SVGSVGElement *self);

void SVGSVGElement_set_onportalactivate(SVGSVGElement* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
