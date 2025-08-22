#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "BaseAudioContext.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBuffer AudioBuffer;


/**
 * @brief Interface OfflineAudioContext
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioContext)
 */
DECLARE_EMLITE_TYPE(OfflineAudioContext, BaseAudioContext);

/**
 * @brief Creates a new `OfflineAudioContext` object. 
*/
OfflineAudioContext OfflineAudioContext_new(unsigned long numberOfChannels, unsigned long length, float sampleRate);

/**
 * @brief Calls the `startRendering` method. 
*/
jb_Promise OfflineAudioContext_startRendering(OfflineAudioContext* self );

/**
 * @brief Calls the `resume` method. 
*/
jb_Promise OfflineAudioContext_resume(OfflineAudioContext* self );

/**
 * @brief Calls the `suspend` method. 
*/
jb_Promise OfflineAudioContext_suspend(OfflineAudioContext* self , double suspendTime);

/**
 * @brief Gets the `length` property. 
*/
unsigned long OfflineAudioContext_length(const OfflineAudioContext *self);

/**
 * @brief Gets the `oncomplete` property. 
*/
jb_Any OfflineAudioContext_oncomplete(const OfflineAudioContext *self);

/**
 * @brief Sets the `oncomplete` property. 
*/
void OfflineAudioContext_set_oncomplete(OfflineAudioContext* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
