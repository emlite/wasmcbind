#include <webbind/SpeechRecognition.h>
#include <webbind/SpeechGrammarList.h>
#include <webbind/SpeechRecognitionPhraseList.h>
#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(SpeechRecognitionOptions, em_Val);


jb_Sequence SpeechRecognitionOptions_langs(const SpeechRecognitionOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("langs")));
}


void SpeechRecognitionOptions_set_langs(SpeechRecognitionOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("langs"), em_Val_from(value));
}


bool SpeechRecognitionOptions_processLocally(const SpeechRecognitionOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("processLocally")));
}


void SpeechRecognitionOptions_set_processLocally(SpeechRecognitionOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("processLocally"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SpeechRecognition, EventTarget);


SpeechRecognition SpeechRecognition_new() {
        em_Val vv = em_Val_new(em_Val_global("SpeechRecognition") );
        return SpeechRecognition_from_val(&vv);
      }


SpeechGrammarList SpeechRecognition_grammars(const SpeechRecognition *self) {
    return em_Val_as(SpeechGrammarList, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("grammars")));
}


void SpeechRecognition_set_grammars(SpeechRecognition* self, SpeechGrammarList * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("grammars"), em_Val_from(value));
}


jb_DOMString SpeechRecognition_lang(const SpeechRecognition *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("lang")));
}


void SpeechRecognition_set_lang(SpeechRecognition* self, jb_DOMString * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("lang"), em_Val_from(value));
}


bool SpeechRecognition_continuous(const SpeechRecognition *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("continuous")));
}


void SpeechRecognition_set_continuous(SpeechRecognition* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("continuous"), em_Val_from(value));
}


bool SpeechRecognition_interimResults(const SpeechRecognition *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("interimResults")));
}


void SpeechRecognition_set_interimResults(SpeechRecognition* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("interimResults"), em_Val_from(value));
}


unsigned long SpeechRecognition_maxAlternatives(const SpeechRecognition *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("maxAlternatives")));
}


void SpeechRecognition_set_maxAlternatives(SpeechRecognition* self, unsigned long value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("maxAlternatives"), em_Val_from(value));
}


bool SpeechRecognition_processLocally(const SpeechRecognition *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("processLocally")));
}


void SpeechRecognition_set_processLocally(SpeechRecognition* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("processLocally"), em_Val_from(value));
}


jb_ObservableArray SpeechRecognition_phrases(const SpeechRecognition *self) {
    return em_Val_as(jb_ObservableArray, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("phrases")));
}


void SpeechRecognition_set_phrases(SpeechRecognition* self, jb_ObservableArray * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("phrases"), em_Val_from(value));
}


jb_Undefined SpeechRecognition_start(SpeechRecognition* self , MediaStreamTrack * audioTrack) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start", em_Val_from(audioTrack)));
}


jb_Undefined SpeechRecognition_stop(SpeechRecognition* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}


jb_Undefined SpeechRecognition_abort(SpeechRecognition* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


jb_Promise SpeechRecognition_available(SpeechRecognition* self , SpeechRecognitionOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("speechrecognition"), "available", em_Val_from(options)));
}


jb_Promise SpeechRecognition_install(SpeechRecognition* self , SpeechRecognitionOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("speechrecognition"), "install", em_Val_from(options)));
}


jb_Any SpeechRecognition_onaudiostart(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onaudiostart")));
}


void SpeechRecognition_set_onaudiostart(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onaudiostart"), em_Val_from(value));
}


jb_Any SpeechRecognition_onsoundstart(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsoundstart")));
}


void SpeechRecognition_set_onsoundstart(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsoundstart"), em_Val_from(value));
}


jb_Any SpeechRecognition_onspeechstart(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onspeechstart")));
}


void SpeechRecognition_set_onspeechstart(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onspeechstart"), em_Val_from(value));
}


jb_Any SpeechRecognition_onspeechend(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onspeechend")));
}


void SpeechRecognition_set_onspeechend(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onspeechend"), em_Val_from(value));
}


jb_Any SpeechRecognition_onsoundend(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsoundend")));
}


void SpeechRecognition_set_onsoundend(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsoundend"), em_Val_from(value));
}


jb_Any SpeechRecognition_onaudioend(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onaudioend")));
}


void SpeechRecognition_set_onaudioend(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onaudioend"), em_Val_from(value));
}


jb_Any SpeechRecognition_onresult(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onresult")));
}


void SpeechRecognition_set_onresult(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onresult"), em_Val_from(value));
}


jb_Any SpeechRecognition_onnomatch(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onnomatch")));
}


void SpeechRecognition_set_onnomatch(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onnomatch"), em_Val_from(value));
}


jb_Any SpeechRecognition_onerror(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void SpeechRecognition_set_onerror(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any SpeechRecognition_onstart(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstart")));
}


void SpeechRecognition_set_onstart(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstart"), em_Val_from(value));
}


jb_Any SpeechRecognition_onend(const SpeechRecognition *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onend")));
}


void SpeechRecognition_set_onend(SpeechRecognition* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onend"), em_Val_from(value));
}

