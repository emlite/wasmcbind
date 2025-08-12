#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SourceBuffer SourceBuffer;


/**
 * @brief Interface SourceBufferList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SourceBufferList)
 */
DECLARE_EMLITE_TYPE(SourceBufferList, EventTarget);

/**
 * @brief Gets the `length` property. 
*/
unsigned long SourceBufferList_length(const SourceBufferList *self);

/**
 * @brief Gets the `onaddsourcebuffer` property. 
*/
jb_Any SourceBufferList_onaddsourcebuffer(const SourceBufferList *self);

/**
 * @brief Sets the `onaddsourcebuffer` property. 
*/
void SourceBufferList_set_onaddsourcebuffer(SourceBufferList* self, jb_Any * value);

/**
 * @brief Gets the `onremovesourcebuffer` property. 
*/
jb_Any SourceBufferList_onremovesourcebuffer(const SourceBufferList *self);

/**
 * @brief Sets the `onremovesourcebuffer` property. 
*/
void SourceBufferList_set_onremovesourcebuffer(SourceBufferList* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
