#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PresentationConnectionCloseEventInit */
DECLARE_EMLITE_TYPE(PresentationConnectionCloseEventInit, EventInit);

/** @brief Getter of the reason property */
PresentationConnectionCloseReason PresentationConnectionCloseEventInit_reason(const PresentationConnectionCloseEventInit *self);

/** @brief Setter of the reason property */
void PresentationConnectionCloseEventInit_set_reason(PresentationConnectionCloseEventInit* self, PresentationConnectionCloseReason * value);

/** @brief Getter of the message property */
jb_String PresentationConnectionCloseEventInit_message(const PresentationConnectionCloseEventInit *self);

/** @brief Setter of the message property */
void PresentationConnectionCloseEventInit_set_message(PresentationConnectionCloseEventInit* self, jb_String * value);

/** @brief Constructor of the PresentationConnectionCloseEventInit dictionary type */
PresentationConnectionCloseEventInit PresentationConnectionCloseEventInit_new();

#ifdef __cplusplus
}
#endif
