#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventInit EventInit;
typedef struct PromptResponseObject PromptResponseObject;


/**
 * @brief Interface BeforeInstallPromptEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BeforeInstallPromptEvent)
 */
DECLARE_EMLITE_TYPE(BeforeInstallPromptEvent, Event);

/**
 * @brief Creates a new `BeforeInstallPromptEvent` object. 
*/
BeforeInstallPromptEvent BeforeInstallPromptEvent_new0(jb_String * type);

/**
 * @brief Creates a new `BeforeInstallPromptEvent` object. 
*/
BeforeInstallPromptEvent BeforeInstallPromptEvent_new1(jb_String * type, EventInit * eventInitDict);

/**
 * @brief Calls the `prompt` method. 
*/
jb_Promise BeforeInstallPromptEvent_prompt(BeforeInstallPromptEvent* self );

#ifdef __cplusplus
}
#endif
