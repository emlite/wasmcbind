#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaQueryListEventInit */
DECLARE_EMLITE_TYPE(MediaQueryListEventInit, EventInit);

/** @brief Getter of the media property */
jb_String MediaQueryListEventInit_media(const MediaQueryListEventInit *self);

/** @brief Setter of the media property */
void MediaQueryListEventInit_set_media(MediaQueryListEventInit* self, jb_String * value);

/** @brief Getter of the matches property */
bool MediaQueryListEventInit_matches(const MediaQueryListEventInit *self);

/** @brief Setter of the matches property */
void MediaQueryListEventInit_set_matches(MediaQueryListEventInit* self, bool value);

/** @brief Constructor of the MediaQueryListEventInit dictionary type */
MediaQueryListEventInit MediaQueryListEventInit_new();

#ifdef __cplusplus
}
#endif
