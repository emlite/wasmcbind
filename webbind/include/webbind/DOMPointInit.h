#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DOMPointInit, em_Val);

double DOMPointInit_x(const DOMPointInit *self);

void DOMPointInit_set_x(DOMPointInit* self, double value);

double DOMPointInit_y(const DOMPointInit *self);

void DOMPointInit_set_y(DOMPointInit* self, double value);

double DOMPointInit_z(const DOMPointInit *self);

void DOMPointInit_set_z(DOMPointInit* self, double value);

double DOMPointInit_w(const DOMPointInit *self);

void DOMPointInit_set_w(DOMPointInit* self, double value);

DOMPointInit DOMPointInit_new();

#ifdef __cplusplus
}
#endif
