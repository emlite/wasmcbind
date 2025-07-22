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
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "contextTime"));
}


void AudioTimestamp_set_contextTime(AudioTimestamp* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "contextTime", value);
}


jb_Any AudioTimestamp_performanceTime(const AudioTimestamp *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "performanceTime"));
}


void AudioTimestamp_set_performanceTime(AudioTimestamp* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "performanceTime", value);
}

DEFINE_EMLITE_TYPE(AudioContext, BaseAudioContext);


AudioContext AudioContext_new() : BaseAudioContext(em_Val_global("AudioContext").new_()) {
        return AudioContext(em_Val_new(em_Val_global("AudioContext", ));
      }


AudioContext AudioContext_new(const jb_Any* contextOptions) : BaseAudioContext(em_Val_global("AudioContext").new_(em_Val_from(contextOptions))) {
        return AudioContext(em_Val_new(em_Val_global("AudioContext", em_Val_from(contextOptions)));
      }


double AudioContext_baseLatency(const AudioContext *self) {
    return em_Val_as(double, em_Val_get(BaseAudioContext_as_val(self->inner), "baseLatency"));
}


double AudioContext_outputLatency(const AudioContext *self) {
    return em_Val_as(double, em_Val_get(BaseAudioContext_as_val(self->inner), "outputLatency"));
}


jb_Any AudioContext_sinkId(const AudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(BaseAudioContext_as_val(self->inner), "sinkId"));
}


jb_Any AudioContext_onsinkchange(const AudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(BaseAudioContext_as_val(self->inner), "onsinkchange"));
}


void AudioContext_set_onsinkchange(AudioContext* self, const jb_Any* value) {
    em_Val_set(BaseAudioContext_as_val(self->inner), "onsinkchange", value);
}


jb_Any AudioContext_onerror(const AudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(BaseAudioContext_as_val(self->inner), "onerror"));
}


void AudioContext_set_onerror(AudioContext* self, const jb_Any* value) {
    em_Val_set(BaseAudioContext_as_val(self->inner), "onerror", value);
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


jb_Promise AudioContext_setSinkId(AudioContext* self , const jb_Any* sinkId) {
    return em_Val_as(jb_Promise, em_Val_call(BaseAudioContext_as_val(self->inner), "setSinkId", em_Val_from(sinkId)));
}


MediaElementAudioSourceNode AudioContext_createMediaElementSource(AudioContext* self , const HTMLMediaElement* mediaElement) {
    return em_Val_as(MediaElementAudioSourceNode, em_Val_call(BaseAudioContext_as_val(self->inner), "createMediaElementSource", em_Val_from(mediaElement)));
}


MediaStreamAudioSourceNode AudioContext_createMediaStreamSource(AudioContext* self , const MediaStream* mediaStream) {
    return em_Val_as(MediaStreamAudioSourceNode, em_Val_call(BaseAudioContext_as_val(self->inner), "createMediaStreamSource", em_Val_from(mediaStream)));
}


MediaStreamTrackAudioSourceNode AudioContext_createMediaStreamTrackSource(AudioContext* self , const MediaStreamTrack* mediaStreamTrack) {
    return em_Val_as(MediaStreamTrackAudioSourceNode, em_Val_call(BaseAudioContext_as_val(self->inner), "createMediaStreamTrackSource", em_Val_from(mediaStreamTrack)));
}


MediaStreamAudioDestinationNode AudioContext_createMediaStreamDestination(AudioContext* self ) {
    return em_Val_as(MediaStreamAudioDestinationNode, em_Val_call(BaseAudioContext_as_val(self->inner), "createMediaStreamDestination"));
}

