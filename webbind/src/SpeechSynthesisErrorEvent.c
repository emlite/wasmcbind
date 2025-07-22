#include <webbind/SpeechSynthesisErrorEvent.h>


DEFINE_EMLITE_TYPE(SpeechSynthesisErrorEvent, SpeechSynthesisEvent);


SpeechSynthesisErrorEvent SpeechSynthesisErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : SpeechSynthesisEvent(em_Val_global("SpeechSynthesisErrorEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return SpeechSynthesisErrorEvent(em_Val_new(em_Val_global("SpeechSynthesisErrorEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


SpeechSynthesisErrorCode SpeechSynthesisErrorEvent_error(const SpeechSynthesisErrorEvent *self) {
    return em_Val_as(SpeechSynthesisErrorCode, em_Val_get(SpeechSynthesisEvent_as_val(self->inner), "error"));
}

