#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TimeRanges TimeRanges;
typedef struct AudioTrackList AudioTrackList;
typedef struct VideoTrackList VideoTrackList;
typedef struct TextTrackList TextTrackList;


/**
 * @brief Interface SourceBuffer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer)
 */
DECLARE_EMLITE_TYPE(SourceBuffer, EventTarget);

/**
 * @brief Gets the `mode` property. 
*/
AppendMode SourceBuffer_mode(const SourceBuffer *self);

/**
 * @brief Sets the `mode` property. 
*/
void SourceBuffer_set_mode(SourceBuffer* self, AppendMode * value);

/**
 * @brief Gets the `updating` property. 
*/
bool SourceBuffer_updating(const SourceBuffer *self);

/**
 * @brief Gets the `buffered` property. 
*/
TimeRanges SourceBuffer_buffered(const SourceBuffer *self);

/**
 * @brief Gets the `timestampOffset` property. 
*/
double SourceBuffer_timestampOffset(const SourceBuffer *self);

/**
 * @brief Sets the `timestampOffset` property. 
*/
void SourceBuffer_set_timestampOffset(SourceBuffer* self, double value);

/**
 * @brief Gets the `audioTracks` property. 
*/
AudioTrackList SourceBuffer_audioTracks(const SourceBuffer *self);

/**
 * @brief Gets the `videoTracks` property. 
*/
VideoTrackList SourceBuffer_videoTracks(const SourceBuffer *self);

/**
 * @brief Gets the `textTracks` property. 
*/
TextTrackList SourceBuffer_textTracks(const SourceBuffer *self);

/**
 * @brief Gets the `appendWindowStart` property. 
*/
double SourceBuffer_appendWindowStart(const SourceBuffer *self);

/**
 * @brief Sets the `appendWindowStart` property. 
*/
void SourceBuffer_set_appendWindowStart(SourceBuffer* self, double value);

/**
 * @brief Gets the `appendWindowEnd` property. 
*/
double SourceBuffer_appendWindowEnd(const SourceBuffer *self);

/**
 * @brief Sets the `appendWindowEnd` property. 
*/
void SourceBuffer_set_appendWindowEnd(SourceBuffer* self, double value);

/**
 * @brief Gets the `onupdatestart` property. 
*/
jb_Any SourceBuffer_onupdatestart(const SourceBuffer *self);

/**
 * @brief Sets the `onupdatestart` property. 
*/
void SourceBuffer_set_onupdatestart(SourceBuffer* self, jb_Any * value);

/**
 * @brief Gets the `onupdate` property. 
*/
jb_Any SourceBuffer_onupdate(const SourceBuffer *self);

/**
 * @brief Sets the `onupdate` property. 
*/
void SourceBuffer_set_onupdate(SourceBuffer* self, jb_Any * value);

/**
 * @brief Gets the `onupdateend` property. 
*/
jb_Any SourceBuffer_onupdateend(const SourceBuffer *self);

/**
 * @brief Sets the `onupdateend` property. 
*/
void SourceBuffer_set_onupdateend(SourceBuffer* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any SourceBuffer_onerror(const SourceBuffer *self);

/**
 * @brief Sets the `onerror` property. 
*/
void SourceBuffer_set_onerror(SourceBuffer* self, jb_Any * value);

/**
 * @brief Gets the `onabort` property. 
*/
jb_Any SourceBuffer_onabort(const SourceBuffer *self);

/**
 * @brief Sets the `onabort` property. 
*/
void SourceBuffer_set_onabort(SourceBuffer* self, jb_Any * value);

/**
 * @brief Calls the `appendBuffer` method. 
*/
jb_Undefined SourceBuffer_appendBuffer(SourceBuffer* self , jb_Any * data);

/**
 * @brief Calls the `abort` method. 
*/
jb_Undefined SourceBuffer_abort(SourceBuffer* self );

/**
 * @brief Calls the `changeType` method. 
*/
jb_Undefined SourceBuffer_changeType(SourceBuffer* self , jb_String * type);

/**
 * @brief Calls the `remove` method. 
*/
jb_Undefined SourceBuffer_remove(SourceBuffer* self , double start, double end);

#ifdef __cplusplus
}
#endif
