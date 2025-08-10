#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaStreamConstraints, em_Val);

jb_String MediaStreamConstraints_peerIdentity(const MediaStreamConstraints *self);

void MediaStreamConstraints_set_peerIdentity(MediaStreamConstraints* self, jb_String * value);

MediaStreamConstraints MediaStreamConstraints_new();

#ifdef __cplusplus
}
#endif
