#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaStreamConstraints */
DECLARE_EMLITE_TYPE(MediaStreamConstraints, em_Val);

/** @brief Getter of the peerIdentity property */
jb_String MediaStreamConstraints_peerIdentity(const MediaStreamConstraints *self);

/** @brief Setter of the peerIdentity property */
void MediaStreamConstraints_set_peerIdentity(MediaStreamConstraints* self, jb_String * value);

/** @brief Constructor of the MediaStreamConstraints dictionary type */
MediaStreamConstraints MediaStreamConstraints_new();

#ifdef __cplusplus
}
#endif
