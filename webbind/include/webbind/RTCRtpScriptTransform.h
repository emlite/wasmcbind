#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Worker Worker;


typedef struct {
  em_Val inner;
} RTCRtpScriptTransform;


DECLARE_EMLITE_TYPE(RTCRtpScriptTransform, em_Val);

RTCRtpScriptTransform RTCRtpScriptTransform_new(const Worker* worker);

RTCRtpScriptTransform RTCRtpScriptTransform_new(const Worker* worker, const jb_Any* options);

RTCRtpScriptTransform RTCRtpScriptTransform_new(const Worker* worker, const jb_Any* options, const jb_Sequence* transfer);
