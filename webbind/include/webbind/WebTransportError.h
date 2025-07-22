#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMException.h"
#include "enums.h"


typedef struct {
  DOMException inner;
} WebTransportError;


DECLARE_EMLITE_TYPE(WebTransportError, DOMException);

WebTransportError WebTransportError_new();

WebTransportError WebTransportError_new(const jb_DOMString* message);

WebTransportError WebTransportError_new(const jb_DOMString* message, const jb_Any* options);

WebTransportErrorSource WebTransportError_source( const WebTransportError *self);

unsigned long WebTransportError_streamErrorCode( const WebTransportError *self);
