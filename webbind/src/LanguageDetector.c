#include <webbind/LanguageDetector.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(LanguageDetectorCreateOptions, em_Val);


AbortSignal LanguageDetectorCreateOptions_signal(const LanguageDetectorCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void LanguageDetectorCreateOptions_set_signal(LanguageDetectorCreateOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


jb_Function LanguageDetectorCreateOptions_monitor(const LanguageDetectorCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("monitor")));
}


void LanguageDetectorCreateOptions_set_monitor(LanguageDetectorCreateOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("monitor"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(LanguageDetectorCreateCoreOptions, em_Val);


jb_Array LanguageDetectorCreateCoreOptions_expectedInputLanguages(const LanguageDetectorCreateCoreOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages")));
}


void LanguageDetectorCreateCoreOptions_set_expectedInputLanguages(LanguageDetectorCreateCoreOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(LanguageDetectionResult, em_Val);


jb_String LanguageDetectionResult_detectedLanguage(const LanguageDetectionResult *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("detectedLanguage")));
}


void LanguageDetectionResult_set_detectedLanguage(LanguageDetectionResult* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("detectedLanguage"), em_Val_from(value));
}


double LanguageDetectionResult_confidence(const LanguageDetectionResult *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("confidence")));
}


void LanguageDetectionResult_set_confidence(LanguageDetectionResult* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("confidence"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(LanguageDetectorDetectOptions, em_Val);


AbortSignal LanguageDetectorDetectOptions_signal(const LanguageDetectorDetectOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void LanguageDetectorDetectOptions_set_signal(LanguageDetectorDetectOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(LanguageDetector, em_Val);


jb_Promise LanguageDetector_create0(LanguageDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("languagedetector"), "create"));
}


jb_Promise LanguageDetector_create1(LanguageDetector* self , LanguageDetectorCreateOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("languagedetector"), "create", em_Val_from(options)));
}


jb_Promise LanguageDetector_availability0(LanguageDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("languagedetector"), "availability"));
}


jb_Promise LanguageDetector_availability1(LanguageDetector* self , LanguageDetectorCreateCoreOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("languagedetector"), "availability", em_Val_from(options)));
}


jb_Promise LanguageDetector_detect0(LanguageDetector* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(input)));
}


jb_Promise LanguageDetector_detect1(LanguageDetector* self , jb_String * input, LanguageDetectorDetectOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(input), em_Val_from(options)));
}


jb_Array LanguageDetector_expectedInputLanguages(const LanguageDetector *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedInputLanguages")));
}


jb_Promise LanguageDetector_measureInputUsage0(LanguageDetector* self , jb_String * input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise LanguageDetector_measureInputUsage1(LanguageDetector* self , jb_String * input, LanguageDetectorDetectOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double LanguageDetector_inputQuota(const LanguageDetector *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputQuota")));
}


jb_Undefined LanguageDetector_destroy(LanguageDetector* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

