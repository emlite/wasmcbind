#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats;


/**
 * @brief Interface Clipboard
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Clipboard)
 */
DECLARE_EMLITE_TYPE(Clipboard, EventTarget);

/**
 * @brief Calls the `read` method. 
*/
jb_Promise Clipboard_read0(Clipboard* self );

/**
 * @brief Calls the `read` method. 
*/
jb_Promise Clipboard_read1(Clipboard* self , ClipboardUnsanitizedFormats * formats);

/**
 * @brief Calls the `readText` method. 
*/
jb_Promise Clipboard_readText(Clipboard* self );

/**
 * @brief Calls the `write` method. 
*/
jb_Promise Clipboard_write(Clipboard* self , jb_Any * data);

/**
 * @brief Calls the `writeText` method. 
*/
jb_Promise Clipboard_writeText(Clipboard* self , jb_String * data);

#ifdef __cplusplus
}
#endif
