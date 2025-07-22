#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} AudioSinkInfo;


DECLARE_EMLITE_TYPE(AudioSinkInfo, em_Val);

AudioSinkType AudioSinkInfo_type( const AudioSinkInfo *self);
