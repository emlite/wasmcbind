#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ObservableEventListenerOptions */
DECLARE_EMLITE_TYPE(ObservableEventListenerOptions, em_Val);

/** @brief Getter of the capture property */
bool ObservableEventListenerOptions_capture(const ObservableEventListenerOptions *self);

/** @brief Setter of the capture property */
void ObservableEventListenerOptions_set_capture(ObservableEventListenerOptions* self, bool value);

/** @brief Getter of the passive property */
bool ObservableEventListenerOptions_passive(const ObservableEventListenerOptions *self);

/** @brief Setter of the passive property */
void ObservableEventListenerOptions_set_passive(ObservableEventListenerOptions* self, bool value);

/** @brief Constructor of the ObservableEventListenerOptions dictionary type */
ObservableEventListenerOptions ObservableEventListenerOptions_new();

#ifdef __cplusplus
}
#endif
