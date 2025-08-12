#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaKeyMessageEventInit */
DECLARE_EMLITE_TYPE(MediaKeyMessageEventInit, EventInit);

/** @brief Getter of the messageType property */
MediaKeyMessageType MediaKeyMessageEventInit_messageType(const MediaKeyMessageEventInit *self);

/** @brief Setter of the messageType property */
void MediaKeyMessageEventInit_set_messageType(MediaKeyMessageEventInit* self, MediaKeyMessageType * value);

/** @brief Getter of the message property */
jb_ArrayBuffer MediaKeyMessageEventInit_message(const MediaKeyMessageEventInit *self);

/** @brief Setter of the message property */
void MediaKeyMessageEventInit_set_message(MediaKeyMessageEventInit* self, jb_ArrayBuffer * value);

/** @brief Constructor of the MediaKeyMessageEventInit dictionary type */
MediaKeyMessageEventInit MediaKeyMessageEventInit_new();

#ifdef __cplusplus
}
#endif
