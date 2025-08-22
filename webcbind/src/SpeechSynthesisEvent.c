#include <webcbind/SpeechSynthesisEvent.h>

#include <webcbind/SpeechSynthesisEventInit.h>
#include <webcbind/SpeechSynthesisUtterance.h>

DEFINE_EMLITE_TYPE(SpeechSynthesisEvent, Event);


SpeechSynthesisEvent SpeechSynthesisEvent_new(jb_String * type, SpeechSynthesisEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("SpeechSynthesisEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return SpeechSynthesisEvent_from_val(&vv);
      }


SpeechSynthesisUtterance SpeechSynthesisEvent_utterance(const SpeechSynthesisEvent *self) {
    return em_Val_as(SpeechSynthesisUtterance, em_Val_get(Event_as_val(self->inner), em_Val_from("utterance")));
}


unsigned long SpeechSynthesisEvent_charIndex(const SpeechSynthesisEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("charIndex")));
}


unsigned long SpeechSynthesisEvent_charLength(const SpeechSynthesisEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("charLength")));
}


float SpeechSynthesisEvent_elapsedTime(const SpeechSynthesisEvent *self) {
    return em_Val_as(float, em_Val_get(Event_as_val(self->inner), em_Val_from("elapsedTime")));
}


jb_String SpeechSynthesisEvent_name(const SpeechSynthesisEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("name")));
}

