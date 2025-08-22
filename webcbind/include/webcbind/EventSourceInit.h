#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EventSourceInit */
DECLARE_EMLITE_TYPE(EventSourceInit, em_Val);

/** @brief Getter of the withCredentials property */
bool EventSourceInit_withCredentials(const EventSourceInit *self);

/** @brief Setter of the withCredentials property */
void EventSourceInit_set_withCredentials(EventSourceInit* self, bool value);

/** @brief Constructor of the EventSourceInit dictionary type */
EventSourceInit EventSourceInit_new();

#ifdef __cplusplus
}
#endif
