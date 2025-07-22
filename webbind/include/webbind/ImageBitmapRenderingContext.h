#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ImageBitmap ImageBitmap;


DECLARE_EMLITE_TYPE(ImageBitmapRenderingContext, em_Val);

jb_Any ImageBitmapRenderingContext_canvas( const ImageBitmapRenderingContext *self);

jb_Undefined ImageBitmapRenderingContext_transferFromImageBitmap(ImageBitmapRenderingContext* self , ImageBitmap * bitmap);
