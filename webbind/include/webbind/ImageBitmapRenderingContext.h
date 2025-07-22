#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ImageBitmap ImageBitmap;


typedef struct {
  em_Val inner;
} ImageBitmapRenderingContext;


DECLARE_EMLITE_TYPE(ImageBitmapRenderingContext, em_Val);

jb_Any ImageBitmapRenderingContext_canvas( const ImageBitmapRenderingContext *self);

jb_Undefined ImageBitmapRenderingContext_transferFromImageBitmap(ImageBitmapRenderingContext* self , const ImageBitmap* bitmap);
