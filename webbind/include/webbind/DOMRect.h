#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMRectReadOnly.h"
#include "enums.h"

typedef struct DOMRect DOMRect;


typedef struct {
  DOMRectReadOnly inner;
} DOMRect;


DECLARE_EMLITE_TYPE(DOMRect, DOMRectReadOnly);

DOMRect DOMRect_new();

DOMRect DOMRect_new(double x);

DOMRect DOMRect_new(double x, double y);

DOMRect DOMRect_new(double x, double y, double width);

DOMRect DOMRect_new(double x, double y, double width, double height);

DOMRect DOMRect_fromRect(DOMRect* self );

DOMRect DOMRect_fromRect(DOMRect* self , const DOMRectInit* other);

double DOMRect_x( const DOMRect *self);

void DOMRect_set_x(DOMRect* self, double value);

double DOMRect_y( const DOMRect *self);

void DOMRect_set_y(DOMRect* self, double value);

double DOMRect_width( const DOMRect *self);

void DOMRect_set_width(DOMRect* self, double value);

double DOMRect_height( const DOMRect *self);

void DOMRect_set_height(DOMRect* self, double value);
