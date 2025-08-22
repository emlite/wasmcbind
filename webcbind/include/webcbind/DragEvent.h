#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MouseEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DragEventInit DragEventInit;
typedef struct DataTransfer DataTransfer;


/**
 * @brief Interface DragEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DragEvent)
 */
DECLARE_EMLITE_TYPE(DragEvent, MouseEvent);

/**
 * @brief Creates a new `DragEvent` object. 
*/
DragEvent DragEvent_new0(jb_String * type);

/**
 * @brief Creates a new `DragEvent` object. 
*/
DragEvent DragEvent_new1(jb_String * type, DragEventInit * eventInitDict);

/**
 * @brief Gets the `dataTransfer` property. 
*/
DataTransfer DragEvent_dataTransfer(const DragEvent *self);

#ifdef __cplusplus
}
#endif
