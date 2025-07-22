#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"

typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct DOMPointInit DOMPointInit;
typedef struct DOMPoint DOMPoint;


typedef struct {
  em_Val inner;
} DOMPointInit;


DECLARE_EMLITE_TYPE(DOMPointInit, em_Val);

double DOMPointInit_x( const DOMPointInit *self);

void DOMPointInit_set_x(DOMPointInit* self, double value);

double DOMPointInit_y( const DOMPointInit *self);

void DOMPointInit_set_y(DOMPointInit* self, double value);

double DOMPointInit_z( const DOMPointInit *self);

void DOMPointInit_set_z(DOMPointInit* self, double value);

double DOMPointInit_w( const DOMPointInit *self);

void DOMPointInit_set_w(DOMPointInit* self, double value);
typedef struct {
  SVGGraphicsElement inner;
} SVGGeometryElement;


DECLARE_EMLITE_TYPE(SVGGeometryElement, SVGGraphicsElement);

SVGAnimatedNumber SVGGeometryElement_pathLength( const SVGGeometryElement *self);

bool SVGGeometryElement_isPointInFill(SVGGeometryElement* self );

bool SVGGeometryElement_isPointInFill(SVGGeometryElement* self , const DOMPointInit* point);

bool SVGGeometryElement_isPointInStroke(SVGGeometryElement* self );

bool SVGGeometryElement_isPointInStroke(SVGGeometryElement* self , const DOMPointInit* point);

float SVGGeometryElement_getTotalLength(SVGGeometryElement* self );

DOMPoint SVGGeometryElement_getPointAtLength(SVGGeometryElement* self , float distance);
