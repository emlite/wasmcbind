#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectInit DOMRectInit;

DECLARE_EMLITE_TYPE(DOMRectReadOnly, em_Val);

DOMRectReadOnly DOMRectReadOnly_new0();

DOMRectReadOnly DOMRectReadOnly_new1(double x);

DOMRectReadOnly DOMRectReadOnly_new2(double x, double y);

DOMRectReadOnly DOMRectReadOnly_new3(double x, double y, double width);

DOMRectReadOnly DOMRectReadOnly_new4(double x, double y, double width, double height);

DOMRectReadOnly DOMRectReadOnly_fromRect0(DOMRectReadOnly* self );

DOMRectReadOnly DOMRectReadOnly_fromRect1(DOMRectReadOnly* self , DOMRectInit * other);

double DOMRectReadOnly_x(const DOMRectReadOnly *self);

double DOMRectReadOnly_y(const DOMRectReadOnly *self);

double DOMRectReadOnly_width(const DOMRectReadOnly *self);

double DOMRectReadOnly_height(const DOMRectReadOnly *self);

double DOMRectReadOnly_top(const DOMRectReadOnly *self);

double DOMRectReadOnly_right(const DOMRectReadOnly *self);

double DOMRectReadOnly_bottom(const DOMRectReadOnly *self);

double DOMRectReadOnly_left(const DOMRectReadOnly *self);

jb_Object DOMRectReadOnly_toJSON(DOMRectReadOnly* self );

#ifdef __cplusplus
}
#endif
