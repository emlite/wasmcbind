#include <webbind/SpeechSynthesisErrorEvent.h>


DEFINE_EMLITE_TYPE(SpeechSynthesisErrorEvent, SpeechSynthesisEvent);


SpeechSynthesisErrorEvent SpeechSynthesisErrorEvent_new(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("SpeechSynthesisErrorEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return SpeechSynthesisErrorEvent_from_val(&vv);
      }


SpeechSynthesisErrorCode SpeechSynthesisErrorEvent_error(const SpeechSynthesisErrorEvent *self) {
    return em_Val_as(SpeechSynthesisErrorCode, em_Val_get(SpeechSynthesisEvent_as_val(self->inner), em_Val_from("error")));
}

