#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUCanvasConfiguration GPUCanvasConfiguration;
typedef struct GPUTexture GPUTexture;

DECLARE_EMLITE_TYPE(GPUCanvasContext, em_Val);

jb_Any GPUCanvasContext_canvas(const GPUCanvasContext *self);

jb_Undefined GPUCanvasContext_configure(GPUCanvasContext* self , GPUCanvasConfiguration * configuration);

jb_Undefined GPUCanvasContext_unconfigure(GPUCanvasContext* self );

GPUCanvasConfiguration GPUCanvasContext_getConfiguration(GPUCanvasContext* self );

GPUTexture GPUCanvasContext_getCurrentTexture(GPUCanvasContext* self );

#ifdef __cplusplus
}
#endif
