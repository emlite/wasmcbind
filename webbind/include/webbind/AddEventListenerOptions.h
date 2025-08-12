#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventListenerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type AddEventListenerOptions */
DECLARE_EMLITE_TYPE(AddEventListenerOptions, EventListenerOptions);

/** @brief Getter of the passive property */
bool AddEventListenerOptions_passive(const AddEventListenerOptions *self);

/** @brief Setter of the passive property */
void AddEventListenerOptions_set_passive(AddEventListenerOptions* self, bool value);

/** @brief Getter of the once property */
bool AddEventListenerOptions_once(const AddEventListenerOptions *self);

/** @brief Setter of the once property */
void AddEventListenerOptions_set_once(AddEventListenerOptions* self, bool value);

/** @brief Getter of the signal property */
AbortSignal AddEventListenerOptions_signal(const AddEventListenerOptions *self);

/** @brief Setter of the signal property */
void AddEventListenerOptions_set_signal(AddEventListenerOptions* self, AbortSignal * value);

/** @brief Constructor of the AddEventListenerOptions dictionary type */
AddEventListenerOptions AddEventListenerOptions_new();

#ifdef __cplusplus
}
#endif
