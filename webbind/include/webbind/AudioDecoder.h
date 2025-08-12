#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioDecoderInit AudioDecoderInit;
typedef struct AudioDecoderConfig AudioDecoderConfig;
typedef struct EncodedAudioChunk EncodedAudioChunk;
typedef struct AudioDecoderSupport AudioDecoderSupport;


/**
 * @brief Interface AudioDecoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder)
 */
DECLARE_EMLITE_TYPE(AudioDecoder, EventTarget);

/**
 * @brief Creates a new `AudioDecoder` object. 
*/
AudioDecoder AudioDecoder_new(AudioDecoderInit * init);

/**
 * @brief Gets the `state` property. 
*/
CodecState AudioDecoder_state(const AudioDecoder *self);

/**
 * @brief Gets the `decodeQueueSize` property. 
*/
unsigned long AudioDecoder_decodeQueueSize(const AudioDecoder *self);

/**
 * @brief Gets the `ondequeue` property. 
*/
jb_Any AudioDecoder_ondequeue(const AudioDecoder *self);

/**
 * @brief Sets the `ondequeue` property. 
*/
void AudioDecoder_set_ondequeue(AudioDecoder* self, jb_Any * value);

/**
 * @brief Calls the `configure` method. 
*/
jb_Undefined AudioDecoder_configure(AudioDecoder* self , AudioDecoderConfig * config);

/**
 * @brief Calls the `decode` method. 
*/
jb_Undefined AudioDecoder_decode(AudioDecoder* self , EncodedAudioChunk * chunk);

/**
 * @brief Calls the `flush` method. 
*/
jb_Promise AudioDecoder_flush(AudioDecoder* self );

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined AudioDecoder_reset(AudioDecoder* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined AudioDecoder_close(AudioDecoder* self );

/**
 * @brief Calls the `isConfigSupported` method. 
*/
jb_Promise AudioDecoder_isConfigSupported(AudioDecoder* self , AudioDecoderConfig * config);

#ifdef __cplusplus
}
#endif
