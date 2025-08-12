#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaSourceHandle MediaSourceHandle;
typedef struct SourceBufferList SourceBufferList;
typedef struct SourceBuffer SourceBuffer;


/**
 * @brief Interface MediaSource
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource)
 */
DECLARE_EMLITE_TYPE(MediaSource, EventTarget);

/**
 * @brief Creates a new `MediaSource` object. 
*/
MediaSource MediaSource_new();

/**
 * @brief Gets the `handle` property. 
*/
MediaSourceHandle MediaSource_handle(const MediaSource *self);

/**
 * @brief Gets the `sourceBuffers` property. 
*/
SourceBufferList MediaSource_sourceBuffers(const MediaSource *self);

/**
 * @brief Gets the `activeSourceBuffers` property. 
*/
SourceBufferList MediaSource_activeSourceBuffers(const MediaSource *self);

/**
 * @brief Gets the `readyState` property. 
*/
ReadyState MediaSource_readyState(const MediaSource *self);

/**
 * @brief Gets the `duration` property. 
*/
double MediaSource_duration(const MediaSource *self);

/**
 * @brief Sets the `duration` property. 
*/
void MediaSource_set_duration(MediaSource* self, double value);

/**
 * @brief Gets the `onsourceopen` property. 
*/
jb_Any MediaSource_onsourceopen(const MediaSource *self);

/**
 * @brief Sets the `onsourceopen` property. 
*/
void MediaSource_set_onsourceopen(MediaSource* self, jb_Any * value);

/**
 * @brief Gets the `onsourceended` property. 
*/
jb_Any MediaSource_onsourceended(const MediaSource *self);

/**
 * @brief Sets the `onsourceended` property. 
*/
void MediaSource_set_onsourceended(MediaSource* self, jb_Any * value);

/**
 * @brief Gets the `onsourceclose` property. 
*/
jb_Any MediaSource_onsourceclose(const MediaSource *self);

/**
 * @brief Sets the `onsourceclose` property. 
*/
void MediaSource_set_onsourceclose(MediaSource* self, jb_Any * value);

/**
 * @brief Gets the `canConstructInDedicatedWorker` property. 
*/
bool MediaSource_canConstructInDedicatedWorker(const MediaSource *self);

/**
 * @brief Calls the `addSourceBuffer` method. 
*/
SourceBuffer MediaSource_addSourceBuffer(MediaSource* self , jb_String * type);

/**
 * @brief Calls the `removeSourceBuffer` method. 
*/
jb_Undefined MediaSource_removeSourceBuffer(MediaSource* self , SourceBuffer * sourceBuffer);

/**
 * @brief Calls the `endOfStream` method. 
*/
jb_Undefined MediaSource_endOfStream0(MediaSource* self );

/**
 * @brief Calls the `endOfStream` method. 
*/
jb_Undefined MediaSource_endOfStream1(MediaSource* self , EndOfStreamError * error);

/**
 * @brief Calls the `setLiveSeekableRange` method. 
*/
jb_Undefined MediaSource_setLiveSeekableRange(MediaSource* self , double start, double end);

/**
 * @brief Calls the `clearLiveSeekableRange` method. 
*/
jb_Undefined MediaSource_clearLiveSeekableRange(MediaSource* self );

/**
 * @brief Calls the `isTypeSupported` method. 
*/
bool MediaSource_isTypeSupported(MediaSource* self , jb_String * type);

#ifdef __cplusplus
}
#endif
