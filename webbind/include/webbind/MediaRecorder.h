#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStream MediaStream;
typedef struct MediaRecorderOptions MediaRecorderOptions;


/**
 * @brief Interface MediaRecorder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder)
 */
DECLARE_EMLITE_TYPE(MediaRecorder, EventTarget);

/**
 * @brief Creates a new `MediaRecorder` object. 
*/
MediaRecorder MediaRecorder_new0(MediaStream * stream);

/**
 * @brief Creates a new `MediaRecorder` object. 
*/
MediaRecorder MediaRecorder_new1(MediaStream * stream, MediaRecorderOptions * options);

/**
 * @brief Gets the `stream` property. 
*/
MediaStream MediaRecorder_stream(const MediaRecorder *self);

/**
 * @brief Gets the `mimeType` property. 
*/
jb_String MediaRecorder_mimeType(const MediaRecorder *self);

/**
 * @brief Gets the `state` property. 
*/
RecordingState MediaRecorder_state(const MediaRecorder *self);

/**
 * @brief Gets the `onstart` property. 
*/
jb_Any MediaRecorder_onstart(const MediaRecorder *self);

/**
 * @brief Sets the `onstart` property. 
*/
void MediaRecorder_set_onstart(MediaRecorder* self, jb_Any * value);

/**
 * @brief Gets the `onstop` property. 
*/
jb_Any MediaRecorder_onstop(const MediaRecorder *self);

/**
 * @brief Sets the `onstop` property. 
*/
void MediaRecorder_set_onstop(MediaRecorder* self, jb_Any * value);

/**
 * @brief Gets the `ondataavailable` property. 
*/
jb_Any MediaRecorder_ondataavailable(const MediaRecorder *self);

/**
 * @brief Sets the `ondataavailable` property. 
*/
void MediaRecorder_set_ondataavailable(MediaRecorder* self, jb_Any * value);

/**
 * @brief Gets the `onpause` property. 
*/
jb_Any MediaRecorder_onpause(const MediaRecorder *self);

/**
 * @brief Sets the `onpause` property. 
*/
void MediaRecorder_set_onpause(MediaRecorder* self, jb_Any * value);

/**
 * @brief Gets the `onresume` property. 
*/
jb_Any MediaRecorder_onresume(const MediaRecorder *self);

/**
 * @brief Sets the `onresume` property. 
*/
void MediaRecorder_set_onresume(MediaRecorder* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any MediaRecorder_onerror(const MediaRecorder *self);

/**
 * @brief Sets the `onerror` property. 
*/
void MediaRecorder_set_onerror(MediaRecorder* self, jb_Any * value);

/**
 * @brief Gets the `videoBitsPerSecond` property. 
*/
unsigned long MediaRecorder_videoBitsPerSecond(const MediaRecorder *self);

/**
 * @brief Gets the `audioBitsPerSecond` property. 
*/
unsigned long MediaRecorder_audioBitsPerSecond(const MediaRecorder *self);

/**
 * @brief Gets the `audioBitrateMode` property. 
*/
BitrateMode MediaRecorder_audioBitrateMode(const MediaRecorder *self);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined MediaRecorder_start0(MediaRecorder* self );

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined MediaRecorder_start1(MediaRecorder* self , unsigned long timeslice);

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined MediaRecorder_stop(MediaRecorder* self );

/**
 * @brief Calls the `pause` method. 
*/
jb_Undefined MediaRecorder_pause(MediaRecorder* self );

/**
 * @brief Calls the `resume` method. 
*/
jb_Undefined MediaRecorder_resume(MediaRecorder* self );

/**
 * @brief Calls the `requestData` method. 
*/
jb_Undefined MediaRecorder_requestData(MediaRecorder* self );

/**
 * @brief Calls the `isTypeSupported` method. 
*/
bool MediaRecorder_isTypeSupported(MediaRecorder* self , jb_String * type);

#ifdef __cplusplus
}
#endif
