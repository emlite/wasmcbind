#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedTransformList SVGAnimatedTransformList;
typedef struct DOMRect DOMRect;
typedef struct SVGBoundingBoxOptions SVGBoundingBoxOptions;
typedef struct DOMMatrix DOMMatrix;
typedef struct SVGStringList SVGStringList;

DECLARE_EMLITE_TYPE(SVGGraphicsElement, SVGElement);

SVGAnimatedTransformList SVGGraphicsElement_transform(const SVGGraphicsElement *self);

DOMRect SVGGraphicsElement_getBBox0(SVGGraphicsElement* self );

DOMRect SVGGraphicsElement_getBBox1(SVGGraphicsElement* self , SVGBoundingBoxOptions * options);

DOMMatrix SVGGraphicsElement_getCTM(SVGGraphicsElement* self );

DOMMatrix SVGGraphicsElement_getScreenCTM(SVGGraphicsElement* self );

SVGStringList SVGGraphicsElement_requiredExtensions(const SVGGraphicsElement *self);

SVGStringList SVGGraphicsElement_systemLanguage(const SVGGraphicsElement *self);

#ifdef __cplusplus
}
#endif
