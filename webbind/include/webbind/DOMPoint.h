#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMPointReadOnly.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointInit DOMPointInit;

DECLARE_EMLITE_TYPE(DOMPoint, DOMPointReadOnly);

DOMPoint DOMPoint_new0();

DOMPoint DOMPoint_new1(double x);

DOMPoint DOMPoint_new2(double x, double y);

DOMPoint DOMPoint_new3(double x, double y, double z);

DOMPoint DOMPoint_new4(double x, double y, double z, double w);

DOMPoint DOMPoint_fromPoint0(DOMPoint* self );

DOMPoint DOMPoint_fromPoint1(DOMPoint* self , DOMPointInit * other);

double DOMPoint_x(const DOMPoint *self);

void DOMPoint_set_x(DOMPoint* self, double value);

double DOMPoint_y(const DOMPoint *self);

void DOMPoint_set_y(DOMPoint* self, double value);

double DOMPoint_z(const DOMPoint *self);

void DOMPoint_set_z(DOMPoint* self, double value);

double DOMPoint_w(const DOMPoint *self);

void DOMPoint_set_w(DOMPoint* self, double value);

#ifdef __cplusplus
}
#endif
