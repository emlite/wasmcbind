#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct ImageBitmap ImageBitmap;
typedef struct Blob Blob;
typedef struct ImageEncodeOptions ImageEncodeOptions;


typedef struct {
  em_Val inner;
} ImageEncodeOptions;


DECLARE_EMLITE_TYPE(ImageEncodeOptions, em_Val);

jb_DOMString ImageEncodeOptions_type( const ImageEncodeOptions *self);

void ImageEncodeOptions_set_type(ImageEncodeOptions* self, const jb_DOMString* value);

double ImageEncodeOptions_quality( const ImageEncodeOptions *self);

void ImageEncodeOptions_set_quality(ImageEncodeOptions* self, double value);
typedef struct {
  EventTarget inner;
} OffscreenCanvas;


DECLARE_EMLITE_TYPE(OffscreenCanvas, EventTarget);

OffscreenCanvas OffscreenCanvas_new(long long width, long long height);

long long OffscreenCanvas_width( const OffscreenCanvas *self);

void OffscreenCanvas_set_width(OffscreenCanvas* self, long long value);

long long OffscreenCanvas_height( const OffscreenCanvas *self);

void OffscreenCanvas_set_height(OffscreenCanvas* self, long long value);

jb_Any OffscreenCanvas_getContext(OffscreenCanvas* self , const OffscreenRenderingContextId* contextId);

jb_Any OffscreenCanvas_getContext(OffscreenCanvas* self , const OffscreenRenderingContextId* contextId, const jb_Any* options);

ImageBitmap OffscreenCanvas_transferToImageBitmap(OffscreenCanvas* self );

jb_Promise OffscreenCanvas_convertToBlob(OffscreenCanvas* self );

jb_Promise OffscreenCanvas_convertToBlob(OffscreenCanvas* self , const ImageEncodeOptions* options);

jb_Any OffscreenCanvas_oncontextlost( const OffscreenCanvas *self);

void OffscreenCanvas_set_oncontextlost(OffscreenCanvas* self, const jb_Any* value);

jb_Any OffscreenCanvas_oncontextrestored( const OffscreenCanvas *self);

void OffscreenCanvas_set_oncontextrestored(OffscreenCanvas* self, const jb_Any* value);
