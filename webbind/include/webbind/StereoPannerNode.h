#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

typedef struct AudioParam AudioParam;


typedef struct {
  AudioNode inner;
} StereoPannerNode;


DECLARE_EMLITE_TYPE(StereoPannerNode, AudioNode);

StereoPannerNode StereoPannerNode_new(const BaseAudioContext* context);

StereoPannerNode StereoPannerNode_new(const BaseAudioContext* context, const jb_Any* options);

AudioParam StereoPannerNode_pan( const StereoPannerNode *self);
