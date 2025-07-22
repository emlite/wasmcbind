#include <webbind/SpeechRecognition.h>
#include <webbind/SpeechGrammarList.h>
#include <webbind/SpeechRecognitionPhraseList.h>
#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(SpeechRecognitionOptions, em_Val);


jb_Sequence SpeechRecognitionOptions_langs(const SpeechRecognitionOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "langs"));
}


void SpeechRecognitionOptions_set_langs(SpeechRecognitionOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "langs", value);
}


bool SpeechRecognitionOptions_processLocally(const SpeechRecognitionOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "processLocally"));
}


void SpeechRecognitionOptions_set_processLocally(SpeechRecognitionOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "processLocally", value);
}

DEFINE_EMLITE_TYPE(SpeechRecognition, EventTarget);


SpeechRecognition SpeechRecognition_new() : EventTarget(em_Val_global("SpeechRecognition").new_()) {
        return SpeechRecognition(em_Val_new(em_Val_global("SpeechRecognition", ));
      }


SpeechGrammarList SpeechRecognition_grammars(const SpeechRecognition *self) {
    return em_Val_as(SpeechGrammarList, em_Val_get(EventTarget_as_val(self->inner), "grammars"));
}


void SpeechRecognition_set_grammars(SpeechRecognition* self, const SpeechGrammarList* value) {
    em_Val_set(EventTarget_as_val(self->inner), "grammars", value);
}


jb_DOMString SpeechRecognition_lang(const SpeechRecognition *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "lang"));
}


void SpeechRecognition_set_lang(SpeechRecognition* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "lang", value);
}


bool SpeechRecognition_continuous(const SpeechRecognition *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "continuous"));
}


void SpeechRecognition_set_continuous(SpeechRecognition* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), "continuous", value);
}


bool SpeechRecognition_interimResults(const SpeechRecognition *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "interimResults"));
}


void SpeechRecognition_set_interimResults(SpeechRecognition* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), "interimResults", value);
}


unsigned long SpeechRecognition_maxAlternatives(const SpeechRecognition *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "maxAlternatives"));
}


void SpeechRecognition_set_maxAlternatives(SpeechRecognition* self, unsigned long value) {
    em_Val_set(EventTarget_as_val(self->inner), "maxAlternatives", value);
}


bool SpeechRecognition_processLocally(const SpeechRecognition *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "processLocally"));
}


void SpeechRecognition_set_processLocally(SpeechRecognition* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), "processLocally", value);
}


jb_ObservableArray SpeechRecognition_phrases(const SpeechRecognition *self) {
    return em_Val_as(jb_ObservableArray, em_Val_get(EventTarget_as_val(self->inner), "phrases"));
}


void SpeechRecognition_set_phrases(SpeechRecognition* self, const jb_ObservableArray* value) {
    em_Val_set(EventTarget_as_val(self->inner), "phrases", value);
}


jb_Undefined SpeechRecognition_start(SpeechRecognition* self , const MediaStreamTrack* audioTrack) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start", em_Val_from(audioTrack)));
}


jb_Undefined SpeechRecognition_stop(SpeechRecognition* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}


jb_Undefined SpeechRecognition_abort(SpeechRecognition* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


jb_Promise SpeechRecognition_available(SpeechRecognition* self , const SpeechRecognitionOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("speechrecognition"), "available", em_Val_from(options)));
}


jb_Promise SpeechRecognition_install(SpeechRecognition* self , const SpeechRecognitionOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("speechrecognition"), "install", em_Val_from(options)));
}


jb_Any SpeechRecognition_onaudiostart(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onaudiostart"));
}


void SpeechRecognition_set_onaudiostart(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onaudiostart", value);
}


jb_Any SpeechRecognition_onsoundstart(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsoundstart"));
}


void SpeechRecognition_set_onsoundstart(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsoundstart", value);
}


jb_Any SpeechRecognition_onspeechstart(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onspeechstart"));
}


void SpeechRecognition_set_onspeechstart(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onspeechstart", value);
}


jb_Any SpeechRecognition_onspeechend(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onspeechend"));
}


void SpeechRecognition_set_onspeechend(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onspeechend", value);
}


jb_Any SpeechRecognition_onsoundend(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsoundend"));
}


void SpeechRecognition_set_onsoundend(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsoundend", value);
}


jb_Any SpeechRecognition_onaudioend(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onaudioend"));
}


void SpeechRecognition_set_onaudioend(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onaudioend", value);
}


jb_Any SpeechRecognition_onresult(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onresult"));
}


void SpeechRecognition_set_onresult(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onresult", value);
}


jb_Any SpeechRecognition_onnomatch(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onnomatch"));
}


void SpeechRecognition_set_onnomatch(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onnomatch", value);
}


jb_Any SpeechRecognition_onerror(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void SpeechRecognition_set_onerror(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any SpeechRecognition_onstart(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstart"));
}


void SpeechRecognition_set_onstart(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstart", value);
}


jb_Any SpeechRecognition_onend(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onend"));
}


void SpeechRecognition_set_onend(SpeechRecognition* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onend", value);
}

