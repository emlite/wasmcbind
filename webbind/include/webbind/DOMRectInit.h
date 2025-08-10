#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DOMRectInit, em_Val);

double DOMRectInit_x(const DOMRectInit *self);

void DOMRectInit_set_x(DOMRectInit* self, double value);

double DOMRectInit_y(const DOMRectInit *self);

void DOMRectInit_set_y(DOMRectInit* self, double value);

double DOMRectInit_width(const DOMRectInit *self);

void DOMRectInit_set_width(DOMRectInit* self, double value);

double DOMRectInit_height(const DOMRectInit *self);

void DOMRectInit_set_height(DOMRectInit* self, double value);

DOMRectInit DOMRectInit_new();

#ifdef __cplusplus
}
#endif
