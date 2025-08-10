#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(Point2D, em_Val);

double Point2D_x(const Point2D *self);

void Point2D_set_x(Point2D* self, double value);

double Point2D_y(const Point2D *self);

void Point2D_set_y(Point2D* self, double value);

Point2D Point2D_new();

#ifdef __cplusplus
}
#endif
