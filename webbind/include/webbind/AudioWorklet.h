#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Worklet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;

DECLARE_EMLITE_TYPE(AudioWorklet, Worklet);

MessagePort AudioWorklet_port(const AudioWorklet *self);

#ifdef __cplusplus
}
#endif
