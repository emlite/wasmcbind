#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct StereoPannerOptions StereoPannerOptions;
typedef struct AudioParam AudioParam;

DECLARE_EMLITE_TYPE(StereoPannerNode, AudioNode);

StereoPannerNode StereoPannerNode_new0(BaseAudioContext * context);

StereoPannerNode StereoPannerNode_new1(BaseAudioContext * context, StereoPannerOptions * options);

AudioParam StereoPannerNode_pan(const StereoPannerNode *self);

#ifdef __cplusplus
}
#endif
