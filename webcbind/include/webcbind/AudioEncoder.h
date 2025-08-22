#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioEncoderInit AudioEncoderInit;
typedef struct AudioEncoderConfig AudioEncoderConfig;
typedef struct AudioData AudioData;
typedef struct AudioEncoderSupport AudioEncoderSupport;


/**
 * @brief Interface AudioEncoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder)
 */
DECLARE_EMLITE_TYPE(AudioEncoder, EventTarget);

/**
 * @brief Creates a new `AudioEncoder` object. 
*/
AudioEncoder AudioEncoder_new(AudioEncoderInit * init);

/**
 * @brief Gets the `state` property. 
*/
CodecState AudioEncoder_state(const AudioEncoder *self);

/**
 * @brief Gets the `encodeQueueSize` property. 
*/
unsigned long AudioEncoder_encodeQueueSize(const AudioEncoder *self);

/**
 * @brief Gets the `ondequeue` property. 
*/
jb_Any AudioEncoder_ondequeue(const AudioEncoder *self);

/**
 * @brief Sets the `ondequeue` property. 
*/
void AudioEncoder_set_ondequeue(AudioEncoder* self, jb_Any * value);

/**
 * @brief Calls the `configure` method. 
*/
jb_Undefined AudioEncoder_configure(AudioEncoder* self , AudioEncoderConfig * config);

/**
 * @brief Calls the `encode` method. 
*/
jb_Undefined AudioEncoder_encode(AudioEncoder* self , AudioData * data);

/**
 * @brief Calls the `flush` method. 
*/
jb_Promise AudioEncoder_flush(AudioEncoder* self );

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined AudioEncoder_reset(AudioEncoder* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined AudioEncoder_close(AudioEncoder* self );

/**
 * @brief Calls the `isConfigSupported` method. 
*/
jb_Promise AudioEncoder_isConfigSupported(AudioEncoder* self , AudioEncoderConfig * config);

#ifdef __cplusplus
}
#endif
