#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointInit DOMPointInit;
typedef struct DOMPoint DOMPoint;
typedef struct DOMMatrixInit DOMMatrixInit;

DECLARE_EMLITE_TYPE(DOMPointReadOnly, em_Val);

DOMPointReadOnly DOMPointReadOnly_new0();

DOMPointReadOnly DOMPointReadOnly_new1(double x);

DOMPointReadOnly DOMPointReadOnly_new2(double x, double y);

DOMPointReadOnly DOMPointReadOnly_new3(double x, double y, double z);

DOMPointReadOnly DOMPointReadOnly_new4(double x, double y, double z, double w);

DOMPointReadOnly DOMPointReadOnly_fromPoint0(DOMPointReadOnly* self );

DOMPointReadOnly DOMPointReadOnly_fromPoint1(DOMPointReadOnly* self , DOMPointInit * other);

double DOMPointReadOnly_x(const DOMPointReadOnly *self);

double DOMPointReadOnly_y(const DOMPointReadOnly *self);

double DOMPointReadOnly_z(const DOMPointReadOnly *self);

double DOMPointReadOnly_w(const DOMPointReadOnly *self);

DOMPoint DOMPointReadOnly_matrixTransform0(DOMPointReadOnly* self );

DOMPoint DOMPointReadOnly_matrixTransform1(DOMPointReadOnly* self , DOMMatrixInit * matrix);

jb_Object DOMPointReadOnly_toJSON(DOMPointReadOnly* self );

#ifdef __cplusplus
}
#endif
