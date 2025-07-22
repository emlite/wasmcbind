#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct OffscreenCanvas OffscreenCanvas;
typedef struct MediaStream MediaStream;


typedef struct {
  HTMLElement inner;
} HTMLCanvasElement;


DECLARE_EMLITE_TYPE(HTMLCanvasElement, HTMLElement);

HTMLCanvasElement HTMLCanvasElement_new();

unsigned long HTMLCanvasElement_width( const HTMLCanvasElement *self);

void HTMLCanvasElement_set_width(HTMLCanvasElement* self, unsigned long value);

unsigned long HTMLCanvasElement_height( const HTMLCanvasElement *self);

void HTMLCanvasElement_set_height(HTMLCanvasElement* self, unsigned long value);

jb_Any HTMLCanvasElement_getContext(HTMLCanvasElement* self , const jb_DOMString* contextId);

jb_Any HTMLCanvasElement_getContext(HTMLCanvasElement* self , const jb_DOMString* contextId, const jb_Any* options);

jb_USVString HTMLCanvasElement_toDataURL(HTMLCanvasElement* self );

jb_USVString HTMLCanvasElement_toDataURL(HTMLCanvasElement* self , const jb_DOMString* type);

jb_USVString HTMLCanvasElement_toDataURL(HTMLCanvasElement* self , const jb_DOMString* type, const jb_Any* quality);

jb_Undefined HTMLCanvasElement_toBlob(HTMLCanvasElement* self , const jb_Function* callback);

jb_Undefined HTMLCanvasElement_toBlob(HTMLCanvasElement* self , const jb_Function* callback, const jb_DOMString* type);

jb_Undefined HTMLCanvasElement_toBlob(HTMLCanvasElement* self , const jb_Function* callback, const jb_DOMString* type, const jb_Any* quality);

OffscreenCanvas HTMLCanvasElement_transferControlToOffscreen(HTMLCanvasElement* self );

MediaStream HTMLCanvasElement_captureStream(HTMLCanvasElement* self );

MediaStream HTMLCanvasElement_captureStream(HTMLCanvasElement* self , double frameRequestRate);
