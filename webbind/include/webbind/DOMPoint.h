#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMPointReadOnly.h"
#include "SVGGeometryElement.h"
#include "enums.h"

typedef struct DOMPoint DOMPoint;


typedef struct {
  DOMPointReadOnly inner;
} DOMPoint;


DECLARE_EMLITE_TYPE(DOMPoint, DOMPointReadOnly);

DOMPoint DOMPoint_new();

DOMPoint DOMPoint_new(double x);

DOMPoint DOMPoint_new(double x, double y);

DOMPoint DOMPoint_new(double x, double y, double z);

DOMPoint DOMPoint_new(double x, double y, double z, double w);

DOMPoint DOMPoint_fromPoint(DOMPoint* self );

DOMPoint DOMPoint_fromPoint(DOMPoint* self , const DOMPointInit* other);

double DOMPoint_x( const DOMPoint *self);

void DOMPoint_set_x(DOMPoint* self, double value);

double DOMPoint_y( const DOMPoint *self);

void DOMPoint_set_y(DOMPoint* self, double value);

double DOMPoint_z( const DOMPoint *self);

void DOMPoint_set_z(DOMPoint* self, double value);

double DOMPoint_w( const DOMPoint *self);

void DOMPoint_set_w(DOMPoint* self, double value);
