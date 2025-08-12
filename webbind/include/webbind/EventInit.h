#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EventInit */
DECLARE_EMLITE_TYPE(EventInit, em_Val);

/** @brief Getter of the bubbles property */
bool EventInit_bubbles(const EventInit *self);

/** @brief Setter of the bubbles property */
void EventInit_set_bubbles(EventInit* self, bool value);

/** @brief Getter of the cancelable property */
bool EventInit_cancelable(const EventInit *self);

/** @brief Setter of the cancelable property */
void EventInit_set_cancelable(EventInit* self, bool value);

/** @brief Getter of the composed property */
bool EventInit_composed(const EventInit *self);

/** @brief Setter of the composed property */
void EventInit_set_composed(EventInit* self, bool value);

/** @brief Constructor of the EventInit dictionary type */
EventInit EventInit_new();

#ifdef __cplusplus
}
#endif
