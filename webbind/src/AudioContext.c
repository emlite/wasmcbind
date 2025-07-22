#include <webbind/AudioContext.h>
#include <webbind/MediaElementAudioSourceNode.h>
#include <webbind/HTMLMediaElement.h>
#include <webbind/MediaStreamAudioSourceNode.h>
#include <webbind/MediaStream.h>
#include <webbind/MediaStreamTrackAudioSourceNode.h>
#include <webbind/MediaStreamTrack.h>
#include <webbind/MediaStreamAudioDestinationNode.h>


DEFINE_EMLITE_TYPE(AudioTimestamp, em_Val);


double AudioTimestamp_contextTime(const AudioTimestamp *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contextTime")));
}


void AudioTimestamp_set_contextTime(AudioTimestamp* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contextTime"), em_Val_from(value));
}


jb_Any AudioTimestamp_performanceTime(const AudioTimestamp *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("performanceTime")));
}


void AudioTimestamp_set_performanceTime(AudioTimestamp* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("performanceTime"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AudioContext, BaseAudioContext);


AudioContext AudioContext_new0() {
        em_Val vv = em_Val_new(em_Val_global("AudioContext") );
        return AudioContext_from_val(&vv);
      }


AudioContext AudioContext_new1(jb_Any * contextOptions) {
        em_Val vv = em_Val_new(em_Val_global("AudioContext") , em_Val_from(contextOptions));
        return AudioContext_from_val(&vv);
      }


double AudioContext_baseLatency(const AudioContext *self) {
    return em_Val_as(double, em_Val_get(BaseAudioContext_as_val(self->inner), em_Val_from("baseLatency")));
}


double AudioContext_outputLatency(const AudioContext *self) {
    return em_Val_as(double, em_Val_get(BaseAudioContext_as_val(self->inner), em_Val_from("outputLatency")));
}


jb_Any AudioContext_sinkId(const AudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(BaseAudioContext_as_val(self->inner), em_Val_from("sinkId")));
}


jb_Any AudioContext_onsinkchange(const AudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(BaseAudioContext_as_val(self->inner), em_Val_from("onsinkchange")));
}


void AudioContext_set_onsinkchange(AudioContext* self, jb_Any * value) {
    em_Val_set(BaseAudioContext_as_val(self->inner), em_Val_from("onsinkchange"), em_Val_from(value));
}


jb_Any AudioContext_onerror(const AudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(BaseAudioContext_as_val(self->inner), em_Val_from("onerror")));
}


void AudioContext_set_onerror(AudioContext* self, jb_Any * value) {
    em_Val_set(BaseAudioContext_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


AudioTimestamp AudioContext_getOutputTimestamp(AudioContext* self ) {
    return em_Val_as(AudioTimestamp, em_Val_call(BaseAudioContext_as_val(self->inner), "getOutputTimestamp"));
}


jb_Promise AudioContext_resume(AudioContext* self ) {
    return em_Val_as(jb_Promise, em_Val_call(BaseAudioContext_as_val(self->inner), "resume"));
}


jb_Promise AudioContext_suspend(AudioContext* self ) {
    return em_Val_as(jb_Promise, em_Val_call(BaseAudioContext_as_val(self->inner), "suspend"));
}


jb_Promise AudioContext_close(AudioContext* self ) {
    return em_Val_as(jb_Promise, em_Val_call(BaseAudioContext_as_val(self->inner), "close"));
}


jb_Promise AudioContext_setSinkId(AudioContext* self , jb_Any * sinkId) {
    return em_Val_as(jb_Promise, em_Val_call(BaseAudioContext_as_val(self->inner), "setSinkId", em_Val_from(sinkId)));
}


MediaElementAudioSourceNode AudioContext_createMediaElementSource(AudioContext* self , HTMLMediaElement * mediaElement) {
    return em_Val_as(MediaElementAudioSourceNode, em_Val_call(BaseAudioContext_as_val(self->inner), "createMediaElementSource", em_Val_from(mediaElement)));
}


MediaStreamAudioSourceNode AudioContext_createMediaStreamSource(AudioContext* self , MediaStream * mediaStream) {
    return em_Val_as(MediaStreamAudioSourceNode, em_Val_call(BaseAudioContext_as_val(self->inner), "createMediaStreamSource", em_Val_from(mediaStream)));
}


MediaStreamTrackAudioSourceNode AudioContext_createMediaStreamTrackSource(AudioContext* self , MediaStreamTrack * mediaStreamTrack) {
    return em_Val_as(MediaStreamTrackAudioSourceNode, em_Val_call(BaseAudioContext_as_val(self->inner), "createMediaStreamTrackSource", em_Val_from(mediaStreamTrack)));
}


MediaStreamAudioDestinationNode AudioContext_createMediaStreamDestination(AudioContext* self ) {
    return em_Val_as(MediaStreamAudioDestinationNode, em_Val_call(BaseAudioContext_as_val(self->inner), "createMediaStreamDestination"));
}

