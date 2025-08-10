#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ObservableEventListenerOptions, em_Val);

bool ObservableEventListenerOptions_capture(const ObservableEventListenerOptions *self);

void ObservableEventListenerOptions_set_capture(ObservableEventListenerOptions* self, bool value);

bool ObservableEventListenerOptions_passive(const ObservableEventListenerOptions *self);

void ObservableEventListenerOptions_set_passive(ObservableEventListenerOptions* self, bool value);

ObservableEventListenerOptions ObservableEventListenerOptions_new();

#ifdef __cplusplus
}
#endif
