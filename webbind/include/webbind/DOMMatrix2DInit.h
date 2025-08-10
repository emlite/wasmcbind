#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DOMMatrix2DInit, em_Val);

double DOMMatrix2DInit_a(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_a(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_b(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_b(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_c(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_c(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_d(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_d(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_e(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_e(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_f(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_f(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m11(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m11(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m12(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m12(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m21(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m21(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m22(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m22(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m41(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m41(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m42(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m42(DOMMatrix2DInit* self, double value);

DOMMatrix2DInit DOMMatrix2DInit_new();

#ifdef __cplusplus
}
#endif
