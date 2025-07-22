#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGeometryElement.h"
#include "enums.h"

typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct DOMPoint DOMPoint;
typedef struct SVGPathSegment SVGPathSegment;
typedef struct SVGPathDataSettings SVGPathDataSettings;


typedef struct {
  em_Val inner;
} SVGPathDataSettings;


DECLARE_EMLITE_TYPE(SVGPathDataSettings, em_Val);

bool SVGPathDataSettings_normalize( const SVGPathDataSettings *self);

void SVGPathDataSettings_set_normalize(SVGPathDataSettings* self, bool value);
typedef struct {
  SVGGeometryElement inner;
} SVGPathElement;


DECLARE_EMLITE_TYPE(SVGPathElement, SVGGeometryElement);

SVGAnimatedNumber SVGPathElement_pathLength( const SVGPathElement *self);

float SVGPathElement_getTotalLength(SVGPathElement* self );

DOMPoint SVGPathElement_getPointAtLength(SVGPathElement* self , float distance);

SVGPathSegment SVGPathElement_getPathSegmentAtLength(SVGPathElement* self , float distance);

jb_Sequence SVGPathElement_getPathData(SVGPathElement* self );

jb_Sequence SVGPathElement_getPathData(SVGPathElement* self , const SVGPathDataSettings* settings);

jb_Undefined SVGPathElement_setPathData(SVGPathElement* self , const jb_Sequence* pathData);
