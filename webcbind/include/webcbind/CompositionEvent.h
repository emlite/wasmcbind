#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CompositionEventInit CompositionEventInit;


/**
 * @brief Interface CompositionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CompositionEvent)
 */
DECLARE_EMLITE_TYPE(CompositionEvent, UIEvent);

/**
 * @brief Creates a new `CompositionEvent` object. 
*/
CompositionEvent CompositionEvent_new0(jb_String * type);

/**
 * @brief Creates a new `CompositionEvent` object. 
*/
CompositionEvent CompositionEvent_new1(jb_String * type, CompositionEventInit * eventInitDict);

/**
 * @brief Gets the `data` property. 
*/
jb_String CompositionEvent_data(const CompositionEvent *self);

/**
 * @brief Calls the `initCompositionEvent` method. 
*/
jb_Undefined CompositionEvent_initCompositionEvent0(CompositionEvent* self , jb_String * typeArg);

/**
 * @brief Calls the `initCompositionEvent` method. 
*/
jb_Undefined CompositionEvent_initCompositionEvent1(CompositionEvent* self , jb_String * typeArg, bool bubblesArg);

/**
 * @brief Calls the `initCompositionEvent` method. 
*/
jb_Undefined CompositionEvent_initCompositionEvent2(CompositionEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg);

/**
 * @brief Calls the `initCompositionEvent` method. 
*/
jb_Undefined CompositionEvent_initCompositionEvent3(CompositionEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, jb_Any * viewArg);

/**
 * @brief Calls the `initCompositionEvent` method. 
*/
jb_Undefined CompositionEvent_initCompositionEvent4(CompositionEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, jb_Any * viewArg, jb_String * dataArg);

#ifdef __cplusplus
}
#endif
