#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextFormatUpdateEventInit TextFormatUpdateEventInit;
typedef struct TextFormat TextFormat;


/**
 * @brief Interface TextFormatUpdateEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextFormatUpdateEvent)
 */
DECLARE_EMLITE_TYPE(TextFormatUpdateEvent, Event);

/**
 * @brief Creates a new `TextFormatUpdateEvent` object. 
*/
TextFormatUpdateEvent TextFormatUpdateEvent_new0(jb_String * type);

/**
 * @brief Creates a new `TextFormatUpdateEvent` object. 
*/
TextFormatUpdateEvent TextFormatUpdateEvent_new1(jb_String * type, TextFormatUpdateEventInit * options);

/**
 * @brief Calls the `getTextFormats` method. 
*/
jb_Array TextFormatUpdateEvent_getTextFormats(TextFormatUpdateEvent* self );

#ifdef __cplusplus
}
#endif
