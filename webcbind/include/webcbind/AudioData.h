#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioDataInit AudioDataInit;
typedef struct AudioDataCopyToOptions AudioDataCopyToOptions;


/**
 * @brief Interface AudioData
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioData)
 */
DECLARE_EMLITE_TYPE(AudioData, em_Val);

/**
 * @brief Creates a new `AudioData` object. 
*/
AudioData AudioData_new(AudioDataInit * init);

/**
 * @brief Gets the `format` property. 
*/
AudioSampleFormat AudioData_format(const AudioData *self);

/**
 * @brief Gets the `sampleRate` property. 
*/
float AudioData_sampleRate(const AudioData *self);

/**
 * @brief Gets the `numberOfFrames` property. 
*/
unsigned long AudioData_numberOfFrames(const AudioData *self);

/**
 * @brief Gets the `numberOfChannels` property. 
*/
unsigned long AudioData_numberOfChannels(const AudioData *self);

/**
 * @brief Gets the `duration` property. 
*/
long long AudioData_duration(const AudioData *self);

/**
 * @brief Gets the `timestamp` property. 
*/
long long AudioData_timestamp(const AudioData *self);

/**
 * @brief Calls the `allocationSize` method. 
*/
unsigned long AudioData_allocationSize(AudioData* self , AudioDataCopyToOptions * options);

/**
 * @brief Calls the `copyTo` method. 
*/
jb_Undefined AudioData_copyTo(AudioData* self , jb_Any * destination, AudioDataCopyToOptions * options);

/**
 * @brief Calls the `clone` method. 
*/
AudioData AudioData_clone(AudioData* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined AudioData_close(AudioData* self );

#ifdef __cplusplus
}
#endif
