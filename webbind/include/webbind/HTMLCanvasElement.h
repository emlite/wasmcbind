#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct OffscreenCanvas OffscreenCanvas;
typedef struct MediaStream MediaStream;


DECLARE_EMLITE_TYPE(HTMLCanvasElement, HTMLElement);

HTMLCanvasElement HTMLCanvasElement_new();

unsigned long HTMLCanvasElement_width(const HTMLCanvasElement *self);

void HTMLCanvasElement_set_width(HTMLCanvasElement* self, unsigned long value);

unsigned long HTMLCanvasElement_height(const HTMLCanvasElement *self);

void HTMLCanvasElement_set_height(HTMLCanvasElement* self, unsigned long value);

jb_Any HTMLCanvasElement_getContext0(HTMLCanvasElement* self , jb_DOMString * contextId);

jb_Any HTMLCanvasElement_getContext1(HTMLCanvasElement* self , jb_DOMString * contextId, jb_Any * options);

jb_USVString HTMLCanvasElement_toDataURL0(HTMLCanvasElement* self );

jb_USVString HTMLCanvasElement_toDataURL1(HTMLCanvasElement* self , jb_DOMString * type);

jb_USVString HTMLCanvasElement_toDataURL2(HTMLCanvasElement* self , jb_DOMString * type, jb_Any * quality);

jb_Undefined HTMLCanvasElement_toBlob0(HTMLCanvasElement* self , jb_Function * callback);

jb_Undefined HTMLCanvasElement_toBlob1(HTMLCanvasElement* self , jb_Function * callback, jb_DOMString * type);

jb_Undefined HTMLCanvasElement_toBlob2(HTMLCanvasElement* self , jb_Function * callback, jb_DOMString * type, jb_Any * quality);

OffscreenCanvas HTMLCanvasElement_transferControlToOffscreen(HTMLCanvasElement* self );

MediaStream HTMLCanvasElement_captureStream0(HTMLCanvasElement* self );

MediaStream HTMLCanvasElement_captureStream1(HTMLCanvasElement* self , double frameRequestRate);
