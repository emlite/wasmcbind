#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ImageDataSettings ImageDataSettings;


typedef struct {
  em_Val inner;
} ImageData;


DECLARE_EMLITE_TYPE(ImageData, em_Val);

ImageData ImageData_new(const jb_Any* data, unsigned long sw);

ImageData ImageData_new(const jb_Any* data, unsigned long sw, unsigned long sh);

ImageData ImageData_new(const jb_Any* data, unsigned long sw, unsigned long sh, const ImageDataSettings* settings);

unsigned long ImageData_width( const ImageData *self);

unsigned long ImageData_height( const ImageData *self);

jb_Any ImageData_data( const ImageData *self);

ImageDataPixelFormat ImageData_pixelFormat( const ImageData *self);

PredefinedColorSpace ImageData_colorSpace( const ImageData *self);
