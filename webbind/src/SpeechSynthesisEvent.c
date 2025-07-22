#include <webbind/SpeechSynthesisEvent.h>
#include <webbind/SpeechSynthesisUtterance.h>


DEFINE_EMLITE_TYPE(SpeechSynthesisEvent, Event);


SpeechSynthesisEvent SpeechSynthesisEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("SpeechSynthesisEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return SpeechSynthesisEvent(em_Val_new(em_Val_global("SpeechSynthesisEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


SpeechSynthesisUtterance SpeechSynthesisEvent_utterance(const SpeechSynthesisEvent *self) {
    return em_Val_as(SpeechSynthesisUtterance, em_Val_get(Event_as_val(self->inner), "utterance"));
}


unsigned long SpeechSynthesisEvent_charIndex(const SpeechSynthesisEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "charIndex"));
}


unsigned long SpeechSynthesisEvent_charLength(const SpeechSynthesisEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "charLength"));
}


float SpeechSynthesisEvent_elapsedTime(const SpeechSynthesisEvent *self) {
    return em_Val_as(float, em_Val_get(Event_as_val(self->inner), "elapsedTime"));
}


jb_DOMString SpeechSynthesisEvent_name(const SpeechSynthesisEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "name"));
}

