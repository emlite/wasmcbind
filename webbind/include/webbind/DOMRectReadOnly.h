#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMRectInit DOMRectInit;


typedef struct {
  em_Val inner;
} DOMRectInit;


DECLARE_EMLITE_TYPE(DOMRectInit, em_Val);

double DOMRectInit_x( const DOMRectInit *self);

void DOMRectInit_set_x(DOMRectInit* self, double value);

double DOMRectInit_y( const DOMRectInit *self);

void DOMRectInit_set_y(DOMRectInit* self, double value);

double DOMRectInit_width( const DOMRectInit *self);

void DOMRectInit_set_width(DOMRectInit* self, double value);

double DOMRectInit_height( const DOMRectInit *self);

void DOMRectInit_set_height(DOMRectInit* self, double value);
typedef struct {
  em_Val inner;
} DOMRectReadOnly;


DECLARE_EMLITE_TYPE(DOMRectReadOnly, em_Val);

DOMRectReadOnly DOMRectReadOnly_new();

DOMRectReadOnly DOMRectReadOnly_new(double x);

DOMRectReadOnly DOMRectReadOnly_new(double x, double y);

DOMRectReadOnly DOMRectReadOnly_new(double x, double y, double width);

DOMRectReadOnly DOMRectReadOnly_new(double x, double y, double width, double height);

DOMRectReadOnly DOMRectReadOnly_fromRect(DOMRectReadOnly* self );

DOMRectReadOnly DOMRectReadOnly_fromRect(DOMRectReadOnly* self , const DOMRectInit* other);

double DOMRectReadOnly_x( const DOMRectReadOnly *self);

double DOMRectReadOnly_y( const DOMRectReadOnly *self);

double DOMRectReadOnly_width( const DOMRectReadOnly *self);

double DOMRectReadOnly_height( const DOMRectReadOnly *self);

double DOMRectReadOnly_top( const DOMRectReadOnly *self);

double DOMRectReadOnly_right( const DOMRectReadOnly *self);

double DOMRectReadOnly_bottom( const DOMRectReadOnly *self);

double DOMRectReadOnly_left( const DOMRectReadOnly *self);

jb_Object DOMRectReadOnly_toJSON(DOMRectReadOnly* self );
