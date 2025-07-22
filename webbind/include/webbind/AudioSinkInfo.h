#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(AudioSinkInfo, em_Val);

AudioSinkType AudioSinkInfo_type( const AudioSinkInfo *self);
