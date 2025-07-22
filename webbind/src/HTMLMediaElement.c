#include <webbind/HTMLMediaElement.h>
#include <webbind/MediaError.h>
#include <webbind/TimeRanges.h>
#include <webbind/AudioTrackList.h>
#include <webbind/VideoTrackList.h>
#include <webbind/TextTrackList.h>
#include <webbind/TextTrack.h>
#include <webbind/MediaKeys.h>
#include <webbind/MediaStream.h>
#include <webbind/RemotePlayback.h>


DEFINE_EMLITE_TYPE(HTMLMediaElement, HTMLElement);


MediaError HTMLMediaElement_error(const HTMLMediaElement *self) {
    return em_Val_as(MediaError, em_Val_get(HTMLElement_as_val(self->inner), "error"));
}


jb_USVString HTMLMediaElement_src(const HTMLMediaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLMediaElement_set_src(HTMLMediaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


jb_Any HTMLMediaElement_srcObject(const HTMLMediaElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "srcObject"));
}


void HTMLMediaElement_set_srcObject(HTMLMediaElement* self, const jb_Any* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "srcObject", value);
}


jb_USVString HTMLMediaElement_currentSrc(const HTMLMediaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "currentSrc"));
}


jb_DOMString HTMLMediaElement_crossOrigin(const HTMLMediaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "crossOrigin"));
}


void HTMLMediaElement_set_crossOrigin(HTMLMediaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "crossOrigin", value);
}


unsigned short HTMLMediaElement_networkState(const HTMLMediaElement *self) {
    return em_Val_as(unsigned short, em_Val_get(HTMLElement_as_val(self->inner), "networkState"));
}


jb_DOMString HTMLMediaElement_preload(const HTMLMediaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "preload"));
}


void HTMLMediaElement_set_preload(HTMLMediaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "preload", value);
}


TimeRanges HTMLMediaElement_buffered(const HTMLMediaElement *self) {
    return em_Val_as(TimeRanges, em_Val_get(HTMLElement_as_val(self->inner), "buffered"));
}


jb_Undefined HTMLMediaElement_load(HTMLMediaElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "load"));
}


CanPlayTypeResult HTMLMediaElement_canPlayType(HTMLMediaElement* self , const jb_DOMString* type) {
    return em_Val_as(CanPlayTypeResult, em_Val_call(HTMLElement_as_val(self->inner), "canPlayType", em_Val_from(type)));
}


unsigned short HTMLMediaElement_readyState(const HTMLMediaElement *self) {
    return em_Val_as(unsigned short, em_Val_get(HTMLElement_as_val(self->inner), "readyState"));
}


bool HTMLMediaElement_seeking(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "seeking"));
}


double HTMLMediaElement_currentTime(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "currentTime"));
}


void HTMLMediaElement_set_currentTime(HTMLMediaElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "currentTime", value);
}


jb_Undefined HTMLMediaElement_fastSeek(HTMLMediaElement* self , double time) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "fastSeek", em_Val_from(time)));
}


double HTMLMediaElement_duration(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "duration"));
}


jb_Object HTMLMediaElement_getStartDate(HTMLMediaElement* self ) {
    return em_Val_as(jb_Object, em_Val_call(HTMLElement_as_val(self->inner), "getStartDate"));
}


bool HTMLMediaElement_paused(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "paused"));
}


double HTMLMediaElement_defaultPlaybackRate(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "defaultPlaybackRate"));
}


void HTMLMediaElement_set_defaultPlaybackRate(HTMLMediaElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "defaultPlaybackRate", value);
}


double HTMLMediaElement_playbackRate(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "playbackRate"));
}


void HTMLMediaElement_set_playbackRate(HTMLMediaElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "playbackRate", value);
}


bool HTMLMediaElement_preservesPitch(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "preservesPitch"));
}


void HTMLMediaElement_set_preservesPitch(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "preservesPitch", value);
}


TimeRanges HTMLMediaElement_played(const HTMLMediaElement *self) {
    return em_Val_as(TimeRanges, em_Val_get(HTMLElement_as_val(self->inner), "played"));
}


TimeRanges HTMLMediaElement_seekable(const HTMLMediaElement *self) {
    return em_Val_as(TimeRanges, em_Val_get(HTMLElement_as_val(self->inner), "seekable"));
}


bool HTMLMediaElement_ended(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "ended"));
}


bool HTMLMediaElement_autoplay(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "autoplay"));
}


void HTMLMediaElement_set_autoplay(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "autoplay", value);
}


bool HTMLMediaElement_loop(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "loop"));
}


void HTMLMediaElement_set_loop(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "loop", value);
}


jb_Promise HTMLMediaElement_play(HTMLMediaElement* self ) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "play"));
}


jb_Undefined HTMLMediaElement_pause(HTMLMediaElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "pause"));
}


bool HTMLMediaElement_controls(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "controls"));
}


void HTMLMediaElement_set_controls(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "controls", value);
}


double HTMLMediaElement_volume(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "volume"));
}


void HTMLMediaElement_set_volume(HTMLMediaElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "volume", value);
}


bool HTMLMediaElement_muted(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "muted"));
}


void HTMLMediaElement_set_muted(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "muted", value);
}


bool HTMLMediaElement_defaultMuted(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "defaultMuted"));
}


void HTMLMediaElement_set_defaultMuted(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "defaultMuted", value);
}


AudioTrackList HTMLMediaElement_audioTracks(const HTMLMediaElement *self) {
    return em_Val_as(AudioTrackList, em_Val_get(HTMLElement_as_val(self->inner), "audioTracks"));
}


VideoTrackList HTMLMediaElement_videoTracks(const HTMLMediaElement *self) {
    return em_Val_as(VideoTrackList, em_Val_get(HTMLElement_as_val(self->inner), "videoTracks"));
}


TextTrackList HTMLMediaElement_textTracks(const HTMLMediaElement *self) {
    return em_Val_as(TextTrackList, em_Val_get(HTMLElement_as_val(self->inner), "textTracks"));
}


TextTrack HTMLMediaElement_addTextTrack(HTMLMediaElement* self , const TextTrackKind* kind) {
    return em_Val_as(TextTrack, em_Val_call(HTMLElement_as_val(self->inner), "addTextTrack", em_Val_from(kind)));
}


TextTrack HTMLMediaElement_addTextTrack(HTMLMediaElement* self , const TextTrackKind* kind, const jb_DOMString* label) {
    return em_Val_as(TextTrack, em_Val_call(HTMLElement_as_val(self->inner), "addTextTrack", em_Val_from(kind), em_Val_from(label)));
}


TextTrack HTMLMediaElement_addTextTrack(HTMLMediaElement* self , const TextTrackKind* kind, const jb_DOMString* label, const jb_DOMString* language) {
    return em_Val_as(TextTrack, em_Val_call(HTMLElement_as_val(self->inner), "addTextTrack", em_Val_from(kind), em_Val_from(label), em_Val_from(language)));
}


jb_DOMString HTMLMediaElement_sinkId(const HTMLMediaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "sinkId"));
}


jb_Promise HTMLMediaElement_setSinkId(HTMLMediaElement* self , const jb_DOMString* sinkId) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "setSinkId", em_Val_from(sinkId)));
}


MediaKeys HTMLMediaElement_mediaKeys(const HTMLMediaElement *self) {
    return em_Val_as(MediaKeys, em_Val_get(HTMLElement_as_val(self->inner), "mediaKeys"));
}


jb_Any HTMLMediaElement_onencrypted(const HTMLMediaElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "onencrypted"));
}


void HTMLMediaElement_set_onencrypted(HTMLMediaElement* self, const jb_Any* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "onencrypted", value);
}


jb_Any HTMLMediaElement_onwaitingforkey(const HTMLMediaElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "onwaitingforkey"));
}


void HTMLMediaElement_set_onwaitingforkey(HTMLMediaElement* self, const jb_Any* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "onwaitingforkey", value);
}


jb_Promise HTMLMediaElement_setMediaKeys(HTMLMediaElement* self , const MediaKeys* mediaKeys) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "setMediaKeys", em_Val_from(mediaKeys)));
}


MediaStream HTMLMediaElement_captureStream(HTMLMediaElement* self ) {
    return em_Val_as(MediaStream, em_Val_call(HTMLElement_as_val(self->inner), "captureStream"));
}


RemotePlayback HTMLMediaElement_remote(const HTMLMediaElement *self) {
    return em_Val_as(RemotePlayback, em_Val_get(HTMLElement_as_val(self->inner), "remote"));
}


bool HTMLMediaElement_disableRemotePlayback(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disableRemotePlayback"));
}


void HTMLMediaElement_set_disableRemotePlayback(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disableRemotePlayback", value);
}

