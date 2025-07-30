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
    return em_Val_as(MediaError, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("error")));
}


jb_String HTMLMediaElement_src(const HTMLMediaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLMediaElement_set_src(HTMLMediaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_Any HTMLMediaElement_srcObject(const HTMLMediaElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("srcObject")));
}


void HTMLMediaElement_set_srcObject(HTMLMediaElement* self, jb_Any * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("srcObject"), em_Val_from(value));
}


jb_String HTMLMediaElement_currentSrc(const HTMLMediaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("currentSrc")));
}


jb_String HTMLMediaElement_crossOrigin(const HTMLMediaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("crossOrigin")));
}


void HTMLMediaElement_set_crossOrigin(HTMLMediaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("crossOrigin"), em_Val_from(value));
}


unsigned short HTMLMediaElement_networkState(const HTMLMediaElement *self) {
    return em_Val_as(unsigned short, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("networkState")));
}


jb_String HTMLMediaElement_preload(const HTMLMediaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("preload")));
}


void HTMLMediaElement_set_preload(HTMLMediaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("preload"), em_Val_from(value));
}


TimeRanges HTMLMediaElement_buffered(const HTMLMediaElement *self) {
    return em_Val_as(TimeRanges, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("buffered")));
}


jb_Undefined HTMLMediaElement_load(HTMLMediaElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "load"));
}


CanPlayTypeResult HTMLMediaElement_canPlayType(HTMLMediaElement* self , jb_String * type) {
    return em_Val_as(CanPlayTypeResult, em_Val_call(HTMLElement_as_val(self->inner), "canPlayType", em_Val_from(type)));
}


unsigned short HTMLMediaElement_readyState(const HTMLMediaElement *self) {
    return em_Val_as(unsigned short, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("readyState")));
}


bool HTMLMediaElement_seeking(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("seeking")));
}


double HTMLMediaElement_currentTime(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("currentTime")));
}


void HTMLMediaElement_set_currentTime(HTMLMediaElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("currentTime"), em_Val_from(value));
}


jb_Undefined HTMLMediaElement_fastSeek(HTMLMediaElement* self , double time) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "fastSeek", em_Val_from(time)));
}


double HTMLMediaElement_duration(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("duration")));
}


jb_Object HTMLMediaElement_getStartDate(HTMLMediaElement* self ) {
    return em_Val_as(jb_Object, em_Val_call(HTMLElement_as_val(self->inner), "getStartDate"));
}


bool HTMLMediaElement_paused(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("paused")));
}


double HTMLMediaElement_defaultPlaybackRate(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("defaultPlaybackRate")));
}


void HTMLMediaElement_set_defaultPlaybackRate(HTMLMediaElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("defaultPlaybackRate"), em_Val_from(value));
}


double HTMLMediaElement_playbackRate(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("playbackRate")));
}


void HTMLMediaElement_set_playbackRate(HTMLMediaElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("playbackRate"), em_Val_from(value));
}


bool HTMLMediaElement_preservesPitch(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("preservesPitch")));
}


void HTMLMediaElement_set_preservesPitch(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("preservesPitch"), em_Val_from(value));
}


TimeRanges HTMLMediaElement_played(const HTMLMediaElement *self) {
    return em_Val_as(TimeRanges, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("played")));
}


TimeRanges HTMLMediaElement_seekable(const HTMLMediaElement *self) {
    return em_Val_as(TimeRanges, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("seekable")));
}


bool HTMLMediaElement_ended(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("ended")));
}


bool HTMLMediaElement_autoplay(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("autoplay")));
}


void HTMLMediaElement_set_autoplay(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("autoplay"), em_Val_from(value));
}


bool HTMLMediaElement_loop(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("loop")));
}


void HTMLMediaElement_set_loop(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("loop"), em_Val_from(value));
}


jb_Promise HTMLMediaElement_play(HTMLMediaElement* self ) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "play"));
}


jb_Undefined HTMLMediaElement_pause(HTMLMediaElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "pause"));
}


bool HTMLMediaElement_controls(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("controls")));
}


void HTMLMediaElement_set_controls(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("controls"), em_Val_from(value));
}


double HTMLMediaElement_volume(const HTMLMediaElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("volume")));
}


void HTMLMediaElement_set_volume(HTMLMediaElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("volume"), em_Val_from(value));
}


bool HTMLMediaElement_muted(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("muted")));
}


void HTMLMediaElement_set_muted(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("muted"), em_Val_from(value));
}


bool HTMLMediaElement_defaultMuted(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("defaultMuted")));
}


void HTMLMediaElement_set_defaultMuted(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("defaultMuted"), em_Val_from(value));
}


AudioTrackList HTMLMediaElement_audioTracks(const HTMLMediaElement *self) {
    return em_Val_as(AudioTrackList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("audioTracks")));
}


VideoTrackList HTMLMediaElement_videoTracks(const HTMLMediaElement *self) {
    return em_Val_as(VideoTrackList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("videoTracks")));
}


TextTrackList HTMLMediaElement_textTracks(const HTMLMediaElement *self) {
    return em_Val_as(TextTrackList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("textTracks")));
}


TextTrack HTMLMediaElement_addTextTrack0(HTMLMediaElement* self , TextTrackKind * kind) {
    return em_Val_as(TextTrack, em_Val_call(HTMLElement_as_val(self->inner), "addTextTrack", em_Val_from(kind)));
}


TextTrack HTMLMediaElement_addTextTrack1(HTMLMediaElement* self , TextTrackKind * kind, jb_String * label) {
    return em_Val_as(TextTrack, em_Val_call(HTMLElement_as_val(self->inner), "addTextTrack", em_Val_from(kind), em_Val_from(label)));
}


TextTrack HTMLMediaElement_addTextTrack2(HTMLMediaElement* self , TextTrackKind * kind, jb_String * label, jb_String * language) {
    return em_Val_as(TextTrack, em_Val_call(HTMLElement_as_val(self->inner), "addTextTrack", em_Val_from(kind), em_Val_from(label), em_Val_from(language)));
}


jb_String HTMLMediaElement_sinkId(const HTMLMediaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sinkId")));
}


jb_Promise HTMLMediaElement_setSinkId(HTMLMediaElement* self , jb_String * sinkId) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "setSinkId", em_Val_from(sinkId)));
}


MediaKeys HTMLMediaElement_mediaKeys(const HTMLMediaElement *self) {
    return em_Val_as(MediaKeys, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("mediaKeys")));
}


jb_Any HTMLMediaElement_onencrypted(const HTMLMediaElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("onencrypted")));
}


void HTMLMediaElement_set_onencrypted(HTMLMediaElement* self, jb_Any * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("onencrypted"), em_Val_from(value));
}


jb_Any HTMLMediaElement_onwaitingforkey(const HTMLMediaElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("onwaitingforkey")));
}


void HTMLMediaElement_set_onwaitingforkey(HTMLMediaElement* self, jb_Any * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("onwaitingforkey"), em_Val_from(value));
}


jb_Promise HTMLMediaElement_setMediaKeys(HTMLMediaElement* self , MediaKeys * mediaKeys) {
    return em_Val_as(jb_Promise, em_Val_call(HTMLElement_as_val(self->inner), "setMediaKeys", em_Val_from(mediaKeys)));
}


MediaStream HTMLMediaElement_captureStream(HTMLMediaElement* self ) {
    return em_Val_as(MediaStream, em_Val_call(HTMLElement_as_val(self->inner), "captureStream"));
}


RemotePlayback HTMLMediaElement_remote(const HTMLMediaElement *self) {
    return em_Val_as(RemotePlayback, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("remote")));
}


bool HTMLMediaElement_disableRemotePlayback(const HTMLMediaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disableRemotePlayback")));
}


void HTMLMediaElement_set_disableRemotePlayback(HTMLMediaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disableRemotePlayback"), em_Val_from(value));
}

