#include <webbind/LanguageDetector.h>

#include <webbind/LanguageDetectorCreateOptions.h>
#include <webbind/LanguageDetectorCreateCoreOptions.h>
#include <webbind/LanguageDetectionResult.h>
#include <webbind/LanguageDetectorDetectOptions.h>

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

