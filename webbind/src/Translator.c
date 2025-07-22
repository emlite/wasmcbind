#include <webbind/Translator.h>
#include <webbind/ReadableStream.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(TranslatorCreateOptions, em_Val);


AbortSignal TranslatorCreateOptions_signal(const TranslatorCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void TranslatorCreateOptions_set_signal(TranslatorCreateOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Function TranslatorCreateOptions_monitor(const TranslatorCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("monitor")));
}


void TranslatorCreateOptions_set_monitor(TranslatorCreateOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("monitor"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(TranslatorCreateCoreOptions, em_Val);


jb_DOMString TranslatorCreateCoreOptions_sourceLanguage(const TranslatorCreateCoreOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sourceLanguage")));
}


void TranslatorCreateCoreOptions_set_sourceLanguage(TranslatorCreateCoreOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sourceLanguage"), em_Val_from(value));
}


jb_DOMString TranslatorCreateCoreOptions_targetLanguage(const TranslatorCreateCoreOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetLanguage")));
}


void TranslatorCreateCoreOptions_set_targetLanguage(TranslatorCreateCoreOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("targetLanguage"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(TranslatorTranslateOptions, em_Val);


AbortSignal TranslatorTranslateOptions_signal(const TranslatorTranslateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void TranslatorTranslateOptions_set_signal(TranslatorTranslateOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Translator, em_Val);


jb_Promise Translator_create(Translator* self , TranslatorCreateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("translator"), "create", em_Val_from(options)));
}


jb_Promise Translator_availability(Translator* self , TranslatorCreateCoreOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("translator"), "availability", em_Val_from(options)));
}


jb_Promise Translator_translate0(Translator* self , jb_DOMString * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(input)));
}


jb_Promise Translator_translate1(Translator* self , jb_DOMString * input, TranslatorTranslateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(input), em_Val_from(options)));
}


ReadableStream Translator_translateStreaming0(Translator* self , jb_DOMString * input) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "translateStreaming", em_Val_from(input)));
}


ReadableStream Translator_translateStreaming1(Translator* self , jb_DOMString * input, TranslatorTranslateOptions * options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "translateStreaming", em_Val_from(input), em_Val_from(options)));
}


jb_DOMString Translator_sourceLanguage(const Translator *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sourceLanguage")));
}


jb_DOMString Translator_targetLanguage(const Translator *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetLanguage")));
}


jb_Promise Translator_measureInputUsage0(Translator* self , jb_DOMString * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise Translator_measureInputUsage1(Translator* self , jb_DOMString * input, TranslatorTranslateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double Translator_inputQuota(const Translator *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputQuota")));
}


jb_Undefined Translator_destroy(Translator* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

