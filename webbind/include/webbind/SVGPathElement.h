#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGeometryElement.h"
#include "enums.h"

typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct DOMPoint DOMPoint;
typedef struct SVGPathSegment SVGPathSegment;
typedef struct SVGPathDataSettings SVGPathDataSettings;


DECLARE_EMLITE_TYPE(SVGPathDataSettings, em_Val);

bool SVGPathDataSettings_normalize( const SVGPathDataSettings *self);

void SVGPathDataSettings_set_normalize(SVGPathDataSettings* self, bool value);
DECLARE_EMLITE_TYPE(SVGPathElement, SVGGeometryElement);

SVGAnimatedNumber SVGPathElement_pathLength( const SVGPathElement *self);

float SVGPathElement_getTotalLength(SVGPathElement* self );

DOMPoint SVGPathElement_getPointAtLength(SVGPathElement* self , float distance);

SVGPathSegment SVGPathElement_getPathSegmentAtLength(SVGPathElement* self , float distance);

jb_Sequence SVGPathElement_getPathData0(SVGPathElement* self );

jb_Sequence SVGPathElement_getPathData1(SVGPathElement* self , SVGPathDataSettings * settings);

jb_Undefined SVGPathElement_setPathData(SVGPathElement* self , jb_Sequence * pathData);
