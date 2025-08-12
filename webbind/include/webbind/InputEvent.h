#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct InputEventInit InputEventInit;
typedef struct DataTransfer DataTransfer;
typedef struct StaticRange StaticRange;


/**
 * @brief Interface InputEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/InputEvent)
 */
DECLARE_EMLITE_TYPE(InputEvent, UIEvent);

/**
 * @brief Creates a new `InputEvent` object. 
*/
InputEvent InputEvent_new0(jb_String * type);

/**
 * @brief Creates a new `InputEvent` object. 
*/
InputEvent InputEvent_new1(jb_String * type, InputEventInit * eventInitDict);

/**
 * @brief Gets the `data` property. 
*/
jb_String InputEvent_data(const InputEvent *self);

/**
 * @brief Gets the `isComposing` property. 
*/
bool InputEvent_isComposing(const InputEvent *self);

/**
 * @brief Gets the `inputType` property. 
*/
jb_String InputEvent_inputType(const InputEvent *self);

/**
 * @brief Gets the `dataTransfer` property. 
*/
DataTransfer InputEvent_dataTransfer(const InputEvent *self);

/**
 * @brief Calls the `getTargetRanges` method. 
*/
jb_Array InputEvent_getTargetRanges(InputEvent* self );

#ifdef __cplusplus
}
#endif
