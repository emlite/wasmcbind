#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventListenerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(AddEventListenerOptions, EventListenerOptions);

bool AddEventListenerOptions_passive(const AddEventListenerOptions *self);

void AddEventListenerOptions_set_passive(AddEventListenerOptions* self, bool value);

bool AddEventListenerOptions_once(const AddEventListenerOptions *self);

void AddEventListenerOptions_set_once(AddEventListenerOptions* self, bool value);

AbortSignal AddEventListenerOptions_signal(const AddEventListenerOptions *self);

void AddEventListenerOptions_set_signal(AddEventListenerOptions* self, AbortSignal * value);

AddEventListenerOptions AddEventListenerOptions_new();

#ifdef __cplusplus
}
#endif
