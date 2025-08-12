#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EventListenerOptions */
DECLARE_EMLITE_TYPE(EventListenerOptions, em_Val);

/** @brief Getter of the capture property */
bool EventListenerOptions_capture(const EventListenerOptions *self);

/** @brief Setter of the capture property */
void EventListenerOptions_set_capture(EventListenerOptions* self, bool value);

/** @brief Constructor of the EventListenerOptions dictionary type */
EventListenerOptions EventListenerOptions_new();

#ifdef __cplusplus
}
#endif
