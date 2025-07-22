#include <webbind/AudioProcessingEvent.h>
#include <webbind/AudioBuffer.h>


DEFINE_EMLITE_TYPE(AudioProcessingEvent, Event);


AudioProcessingEvent AudioProcessingEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("AudioProcessingEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return AudioProcessingEvent(em_Val_new(em_Val_global("AudioProcessingEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


double AudioProcessingEvent_playbackTime(const AudioProcessingEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), "playbackTime"));
}


AudioBuffer AudioProcessingEvent_inputBuffer(const AudioProcessingEvent *self) {
    return em_Val_as(AudioBuffer, em_Val_get(Event_as_val(self->inner), "inputBuffer"));
}


AudioBuffer AudioProcessingEvent_outputBuffer(const AudioProcessingEvent *self) {
    return em_Val_as(AudioBuffer, em_Val_get(Event_as_val(self->inner), "outputBuffer"));
}

