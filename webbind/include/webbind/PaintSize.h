#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} PaintSize;


DECLARE_EMLITE_TYPE(PaintSize, em_Val);

double PaintSize_width( const PaintSize *self);

double PaintSize_height( const PaintSize *self);
