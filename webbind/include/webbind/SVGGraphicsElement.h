#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedTransformList SVGAnimatedTransformList;
typedef struct DOMRect DOMRect;
typedef struct SVGBoundingBoxOptions SVGBoundingBoxOptions;
typedef struct DOMMatrix DOMMatrix;
typedef struct SVGStringList SVGStringList;


typedef struct {
  em_Val inner;
} SVGBoundingBoxOptions;


DECLARE_EMLITE_TYPE(SVGBoundingBoxOptions, em_Val);

bool SVGBoundingBoxOptions_fill( const SVGBoundingBoxOptions *self);

void SVGBoundingBoxOptions_set_fill(SVGBoundingBoxOptions* self, bool value);

bool SVGBoundingBoxOptions_stroke( const SVGBoundingBoxOptions *self);

void SVGBoundingBoxOptions_set_stroke(SVGBoundingBoxOptions* self, bool value);

bool SVGBoundingBoxOptions_markers( const SVGBoundingBoxOptions *self);

void SVGBoundingBoxOptions_set_markers(SVGBoundingBoxOptions* self, bool value);

bool SVGBoundingBoxOptions_clipped( const SVGBoundingBoxOptions *self);

void SVGBoundingBoxOptions_set_clipped(SVGBoundingBoxOptions* self, bool value);
typedef struct {
  SVGElement inner;
} SVGGraphicsElement;


DECLARE_EMLITE_TYPE(SVGGraphicsElement, SVGElement);

SVGAnimatedTransformList SVGGraphicsElement_transform( const SVGGraphicsElement *self);

DOMRect SVGGraphicsElement_getBBox(SVGGraphicsElement* self );

DOMRect SVGGraphicsElement_getBBox(SVGGraphicsElement* self , const SVGBoundingBoxOptions* options);

DOMMatrix SVGGraphicsElement_getCTM(SVGGraphicsElement* self );

DOMMatrix SVGGraphicsElement_getScreenCTM(SVGGraphicsElement* self );

SVGStringList SVGGraphicsElement_requiredExtensions( const SVGGraphicsElement *self);

SVGStringList SVGGraphicsElement_systemLanguage( const SVGGraphicsElement *self);
