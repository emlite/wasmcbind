#include <webbind/Translator.h>

#include <webbind/TranslatorCreateOptions.h>
#include <webbind/TranslatorCreateCoreOptions.h>
#include <webbind/TranslatorTranslateOptions.h>
#include <webbind/ReadableStream.h>

DEFINE_EMLITE_TYPE(Translator, em_Val);


jb_Promise Translator_create(Translator* self , TranslatorCreateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("translator"), "create", em_Val_from(options)));
}


jb_Promise Translator_availability(Translator* self , TranslatorCreateCoreOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("translator"), "availability", em_Val_from(options)));
}


jb_Promise Translator_translate0(Translator* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(input)));
}


jb_Promise Translator_translate1(Translator* self , jb_String * input, TranslatorTranslateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(input), em_Val_from(options)));
}


ReadableStream Translator_translateStreaming0(Translator* self , jb_String * input) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "translateStreaming", em_Val_from(input)));
}


ReadableStream Translator_translateStreaming1(Translator* self , jb_String * input, TranslatorTranslateOptions * options) {
    return em_Val_as(ReadableStream, em_Val_call(em_Val_as_val(self->inner), "translateStreaming", em_Val_from(input), em_Val_from(options)));
}


jb_String Translator_sourceLanguage(const Translator *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sourceLanguage")));
}


jb_String Translator_targetLanguage(const Translator *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("targetLanguage")));
}


jb_Promise Translator_measureInputUsage0(Translator* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise Translator_measureInputUsage1(Translator* self , jb_String * input, TranslatorTranslateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double Translator_inputQuota(const Translator *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputQuota")));
}


jb_Undefined Translator_destroy(Translator* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

