#include <webbind/AudioProcessingEvent.h>
#include <webbind/AudioBuffer.h>


DEFINE_EMLITE_TYPE(AudioProcessingEvent, Event);


AudioProcessingEvent AudioProcessingEvent_new(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("AudioProcessingEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return AudioProcessingEvent_from_val(&vv);
      }


double AudioProcessingEvent_playbackTime(const AudioProcessingEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("playbackTime")));
}


AudioBuffer AudioProcessingEvent_inputBuffer(const AudioProcessingEvent *self) {
    return em_Val_as(AudioBuffer, em_Val_get(Event_as_val(self->inner), em_Val_from("inputBuffer")));
}


AudioBuffer AudioProcessingEvent_outputBuffer(const AudioProcessingEvent *self) {
    return em_Val_as(AudioBuffer, em_Val_get(Event_as_val(self->inner), em_Val_from("outputBuffer")));
}

