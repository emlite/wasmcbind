#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMMatrix2DInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DOMMatrixInit, DOMMatrix2DInit);

double DOMMatrixInit_m13(const DOMMatrixInit *self);

void DOMMatrixInit_set_m13(DOMMatrixInit* self, double value);

double DOMMatrixInit_m14(const DOMMatrixInit *self);

void DOMMatrixInit_set_m14(DOMMatrixInit* self, double value);

double DOMMatrixInit_m23(const DOMMatrixInit *self);

void DOMMatrixInit_set_m23(DOMMatrixInit* self, double value);

double DOMMatrixInit_m24(const DOMMatrixInit *self);

void DOMMatrixInit_set_m24(DOMMatrixInit* self, double value);

double DOMMatrixInit_m31(const DOMMatrixInit *self);

void DOMMatrixInit_set_m31(DOMMatrixInit* self, double value);

double DOMMatrixInit_m32(const DOMMatrixInit *self);

void DOMMatrixInit_set_m32(DOMMatrixInit* self, double value);

double DOMMatrixInit_m33(const DOMMatrixInit *self);

void DOMMatrixInit_set_m33(DOMMatrixInit* self, double value);

double DOMMatrixInit_m34(const DOMMatrixInit *self);

void DOMMatrixInit_set_m34(DOMMatrixInit* self, double value);

double DOMMatrixInit_m43(const DOMMatrixInit *self);

void DOMMatrixInit_set_m43(DOMMatrixInit* self, double value);

double DOMMatrixInit_m44(const DOMMatrixInit *self);

void DOMMatrixInit_set_m44(DOMMatrixInit* self, double value);

bool DOMMatrixInit_is2D(const DOMMatrixInit *self);

void DOMMatrixInit_set_is2D(DOMMatrixInit* self, bool value);

DOMMatrixInit DOMMatrixInit_new();

#ifdef __cplusplus
}
#endif
