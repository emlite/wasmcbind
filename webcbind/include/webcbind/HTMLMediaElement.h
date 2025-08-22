#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaError MediaError;
typedef struct TimeRanges TimeRanges;
typedef struct AudioTrackList AudioTrackList;
typedef struct VideoTrackList VideoTrackList;
typedef struct TextTrackList TextTrackList;
typedef struct TextTrack TextTrack;
typedef struct MediaKeys MediaKeys;
typedef struct MediaStream MediaStream;
typedef struct RemotePlayback RemotePlayback;


/**
 * @brief Interface HTMLMediaElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement)
 */
DECLARE_EMLITE_TYPE(HTMLMediaElement, HTMLElement);

/**
 * @brief Gets the `error` property. 
*/
MediaError HTMLMediaElement_error(const HTMLMediaElement *self);

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLMediaElement_src(const HTMLMediaElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLMediaElement_set_src(HTMLMediaElement* self, jb_String * value);

/**
 * @brief Gets the `srcObject` property. 
*/
jb_Any HTMLMediaElement_srcObject(const HTMLMediaElement *self);

/**
 * @brief Sets the `srcObject` property. 
*/
void HTMLMediaElement_set_srcObject(HTMLMediaElement* self, jb_Any * value);

/**
 * @brief Gets the `currentSrc` property. 
*/
jb_String HTMLMediaElement_currentSrc(const HTMLMediaElement *self);

/**
 * @brief Gets the `crossOrigin` property. 
*/
jb_String HTMLMediaElement_crossOrigin(const HTMLMediaElement *self);

/**
 * @brief Sets the `crossOrigin` property. 
*/
void HTMLMediaElement_set_crossOrigin(HTMLMediaElement* self, jb_String * value);

/**
 * @brief Gets the `networkState` property. 
*/
unsigned short HTMLMediaElement_networkState(const HTMLMediaElement *self);

/**
 * @brief Gets the `preload` property. 
*/
jb_String HTMLMediaElement_preload(const HTMLMediaElement *self);

/**
 * @brief Sets the `preload` property. 
*/
void HTMLMediaElement_set_preload(HTMLMediaElement* self, jb_String * value);

/**
 * @brief Gets the `buffered` property. 
*/
TimeRanges HTMLMediaElement_buffered(const HTMLMediaElement *self);

/**
 * @brief Calls the `load` method. 
*/
jb_Undefined HTMLMediaElement_load(HTMLMediaElement* self );

/**
 * @brief Calls the `canPlayType` method. 
*/
CanPlayTypeResult HTMLMediaElement_canPlayType(HTMLMediaElement* self , jb_String * type);

/**
 * @brief Gets the `readyState` property. 
*/
unsigned short HTMLMediaElement_readyState(const HTMLMediaElement *self);

/**
 * @brief Gets the `seeking` property. 
*/
bool HTMLMediaElement_seeking(const HTMLMediaElement *self);

/**
 * @brief Gets the `currentTime` property. 
*/
double HTMLMediaElement_currentTime(const HTMLMediaElement *self);

/**
 * @brief Sets the `currentTime` property. 
*/
void HTMLMediaElement_set_currentTime(HTMLMediaElement* self, double value);

/**
 * @brief Calls the `fastSeek` method. 
*/
jb_Undefined HTMLMediaElement_fastSeek(HTMLMediaElement* self , double time);

/**
 * @brief Gets the `duration` property. 
*/
double HTMLMediaElement_duration(const HTMLMediaElement *self);

/**
 * @brief Calls the `getStartDate` method. 
*/
jb_Object HTMLMediaElement_getStartDate(HTMLMediaElement* self );

/**
 * @brief Gets the `paused` property. 
*/
bool HTMLMediaElement_paused(const HTMLMediaElement *self);

/**
 * @brief Gets the `defaultPlaybackRate` property. 
*/
double HTMLMediaElement_defaultPlaybackRate(const HTMLMediaElement *self);

/**
 * @brief Sets the `defaultPlaybackRate` property. 
*/
void HTMLMediaElement_set_defaultPlaybackRate(HTMLMediaElement* self, double value);

/**
 * @brief Gets the `playbackRate` property. 
*/
double HTMLMediaElement_playbackRate(const HTMLMediaElement *self);

/**
 * @brief Sets the `playbackRate` property. 
*/
void HTMLMediaElement_set_playbackRate(HTMLMediaElement* self, double value);

/**
 * @brief Gets the `preservesPitch` property. 
*/
bool HTMLMediaElement_preservesPitch(const HTMLMediaElement *self);

/**
 * @brief Sets the `preservesPitch` property. 
*/
void HTMLMediaElement_set_preservesPitch(HTMLMediaElement* self, bool value);

/**
 * @brief Gets the `played` property. 
*/
TimeRanges HTMLMediaElement_played(const HTMLMediaElement *self);

/**
 * @brief Gets the `seekable` property. 
*/
TimeRanges HTMLMediaElement_seekable(const HTMLMediaElement *self);

/**
 * @brief Gets the `ended` property. 
*/
bool HTMLMediaElement_ended(const HTMLMediaElement *self);

/**
 * @brief Gets the `autoplay` property. 
*/
bool HTMLMediaElement_autoplay(const HTMLMediaElement *self);

/**
 * @brief Sets the `autoplay` property. 
*/
void HTMLMediaElement_set_autoplay(HTMLMediaElement* self, bool value);

/**
 * @brief Gets the `loop` property. 
*/
bool HTMLMediaElement_loop(const HTMLMediaElement *self);

/**
 * @brief Sets the `loop` property. 
*/
void HTMLMediaElement_set_loop(HTMLMediaElement* self, bool value);

/**
 * @brief Calls the `play` method. 
*/
jb_Promise HTMLMediaElement_play(HTMLMediaElement* self );

/**
 * @brief Calls the `pause` method. 
*/
jb_Undefined HTMLMediaElement_pause(HTMLMediaElement* self );

/**
 * @brief Gets the `controls` property. 
*/
bool HTMLMediaElement_controls(const HTMLMediaElement *self);

/**
 * @brief Sets the `controls` property. 
*/
void HTMLMediaElement_set_controls(HTMLMediaElement* self, bool value);

/**
 * @brief Gets the `volume` property. 
*/
double HTMLMediaElement_volume(const HTMLMediaElement *self);

/**
 * @brief Sets the `volume` property. 
*/
void HTMLMediaElement_set_volume(HTMLMediaElement* self, double value);

/**
 * @brief Gets the `muted` property. 
*/
bool HTMLMediaElement_muted(const HTMLMediaElement *self);

/**
 * @brief Sets the `muted` property. 
*/
void HTMLMediaElement_set_muted(HTMLMediaElement* self, bool value);

/**
 * @brief Gets the `defaultMuted` property. 
*/
bool HTMLMediaElement_defaultMuted(const HTMLMediaElement *self);

/**
 * @brief Sets the `defaultMuted` property. 
*/
void HTMLMediaElement_set_defaultMuted(HTMLMediaElement* self, bool value);

/**
 * @brief Gets the `audioTracks` property. 
*/
AudioTrackList HTMLMediaElement_audioTracks(const HTMLMediaElement *self);

/**
 * @brief Gets the `videoTracks` property. 
*/
VideoTrackList HTMLMediaElement_videoTracks(const HTMLMediaElement *self);

/**
 * @brief Gets the `textTracks` property. 
*/
TextTrackList HTMLMediaElement_textTracks(const HTMLMediaElement *self);

/**
 * @brief Calls the `addTextTrack` method. 
*/
TextTrack HTMLMediaElement_addTextTrack0(HTMLMediaElement* self , TextTrackKind * kind);

/**
 * @brief Calls the `addTextTrack` method. 
*/
TextTrack HTMLMediaElement_addTextTrack1(HTMLMediaElement* self , TextTrackKind * kind, jb_String * label);

/**
 * @brief Calls the `addTextTrack` method. 
*/
TextTrack HTMLMediaElement_addTextTrack2(HTMLMediaElement* self , TextTrackKind * kind, jb_String * label, jb_String * language);

/**
 * @brief Gets the `sinkId` property. 
*/
jb_String HTMLMediaElement_sinkId(const HTMLMediaElement *self);

/**
 * @brief Calls the `setSinkId` method. 
*/
jb_Promise HTMLMediaElement_setSinkId(HTMLMediaElement* self , jb_String * sinkId);

/**
 * @brief Gets the `mediaKeys` property. 
*/
MediaKeys HTMLMediaElement_mediaKeys(const HTMLMediaElement *self);

/**
 * @brief Gets the `onencrypted` property. 
*/
jb_Any HTMLMediaElement_onencrypted(const HTMLMediaElement *self);

/**
 * @brief Sets the `onencrypted` property. 
*/
void HTMLMediaElement_set_onencrypted(HTMLMediaElement* self, jb_Any * value);

/**
 * @brief Gets the `onwaitingforkey` property. 
*/
jb_Any HTMLMediaElement_onwaitingforkey(const HTMLMediaElement *self);

/**
 * @brief Sets the `onwaitingforkey` property. 
*/
void HTMLMediaElement_set_onwaitingforkey(HTMLMediaElement* self, jb_Any * value);

/**
 * @brief Calls the `setMediaKeys` method. 
*/
jb_Promise HTMLMediaElement_setMediaKeys(HTMLMediaElement* self , MediaKeys * mediaKeys);

/**
 * @brief Calls the `captureStream` method. 
*/
MediaStream HTMLMediaElement_captureStream(HTMLMediaElement* self );

/**
 * @brief Gets the `remote` property. 
*/
RemotePlayback HTMLMediaElement_remote(const HTMLMediaElement *self);

/**
 * @brief Gets the `disableRemotePlayback` property. 
*/
bool HTMLMediaElement_disableRemotePlayback(const HTMLMediaElement *self);

/**
 * @brief Sets the `disableRemotePlayback` property. 
*/
void HTMLMediaElement_set_disableRemotePlayback(HTMLMediaElement* self, bool value);

#ifdef __cplusplus
}
#endif
