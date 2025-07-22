#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct HandwritingPoint HandwritingPoint;


typedef struct {
  em_Val inner;
} HandwritingPoint;


DECLARE_EMLITE_TYPE(HandwritingPoint, em_Val);

double HandwritingPoint_x( const HandwritingPoint *self);

void HandwritingPoint_set_x(HandwritingPoint* self, double value);

double HandwritingPoint_y( const HandwritingPoint *self);

void HandwritingPoint_set_y(HandwritingPoint* self, double value);

jb_Any HandwritingPoint_t( const HandwritingPoint *self);

void HandwritingPoint_set_t(HandwritingPoint* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} HandwritingStroke;


DECLARE_EMLITE_TYPE(HandwritingStroke, em_Val);

HandwritingStroke HandwritingStroke_new();

jb_Undefined HandwritingStroke_addPoint(HandwritingStroke* self , const HandwritingPoint* point);

jb_Sequence HandwritingStroke_getPoints(HandwritingStroke* self );

jb_Undefined HandwritingStroke_clear(HandwritingStroke* self );
