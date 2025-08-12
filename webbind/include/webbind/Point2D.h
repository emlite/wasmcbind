#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type Point2D */
DECLARE_EMLITE_TYPE(Point2D, em_Val);

/** @brief Getter of the x property */
double Point2D_x(const Point2D *self);

/** @brief Setter of the x property */
void Point2D_set_x(Point2D* self, double value);

/** @brief Getter of the y property */
double Point2D_y(const Point2D *self);

/** @brief Setter of the y property */
void Point2D_set_y(Point2D* self, double value);

/** @brief Constructor of the Point2D dictionary type */
Point2D Point2D_new();

#ifdef __cplusplus
}
#endif
