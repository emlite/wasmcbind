#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SourceBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ManagedSourceBuffer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ManagedSourceBuffer)
 */
DECLARE_EMLITE_TYPE(ManagedSourceBuffer, SourceBuffer);

/**
 * @brief Gets the `onbufferedchange` property. 
*/
jb_Any ManagedSourceBuffer_onbufferedchange(const ManagedSourceBuffer *self);

/**
 * @brief Sets the `onbufferedchange` property. 
*/
void ManagedSourceBuffer_set_onbufferedchange(ManagedSourceBuffer* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
