#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ClipboardEventInit ClipboardEventInit;
typedef struct DataTransfer DataTransfer;


/**
 * @brief Interface ClipboardEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardEvent)
 */
DECLARE_EMLITE_TYPE(ClipboardEvent, Event);

/**
 * @brief Creates a new `ClipboardEvent` object. 
*/
ClipboardEvent ClipboardEvent_new0(jb_String * type);

/**
 * @brief Creates a new `ClipboardEvent` object. 
*/
ClipboardEvent ClipboardEvent_new1(jb_String * type, ClipboardEventInit * eventInitDict);

/**
 * @brief Gets the `clipboardData` property. 
*/
DataTransfer ClipboardEvent_clipboardData(const ClipboardEvent *self);

#ifdef __cplusplus
}
#endif
