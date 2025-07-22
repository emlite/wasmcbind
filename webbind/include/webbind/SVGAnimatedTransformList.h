#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SVGTransformList SVGTransformList;


DECLARE_EMLITE_TYPE(SVGAnimatedTransformList, em_Val);

SVGTransformList SVGAnimatedTransformList_baseVal( const SVGAnimatedTransformList *self);

SVGTransformList SVGAnimatedTransformList_animVal( const SVGAnimatedTransformList *self);
