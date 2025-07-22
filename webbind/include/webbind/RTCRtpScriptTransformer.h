#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


typedef struct {
  EventTarget inner;
} RTCRtpScriptTransformer;


DECLARE_EMLITE_TYPE(RTCRtpScriptTransformer, EventTarget);

ReadableStream RTCRtpScriptTransformer_readable( const RTCRtpScriptTransformer *self);

jb_Promise RTCRtpScriptTransformer_generateKeyFrame(RTCRtpScriptTransformer* self );

jb_Promise RTCRtpScriptTransformer_generateKeyFrame(RTCRtpScriptTransformer* self , const jb_DOMString* rid);

jb_Promise RTCRtpScriptTransformer_sendKeyFrameRequest(RTCRtpScriptTransformer* self );

WritableStream RTCRtpScriptTransformer_writable( const RTCRtpScriptTransformer *self);

jb_Any RTCRtpScriptTransformer_onkeyframerequest( const RTCRtpScriptTransformer *self);

void RTCRtpScriptTransformer_set_onkeyframerequest(RTCRtpScriptTransformer* self, const jb_Any* value);

jb_Any RTCRtpScriptTransformer_options( const RTCRtpScriptTransformer *self);
