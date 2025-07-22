#include <webbind/LanguageDetector.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(LanguageDetectorCreateOptions, em_Val);


AbortSignal LanguageDetectorCreateOptions_signal(const LanguageDetectorCreateOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void LanguageDetectorCreateOptions_set_signal(LanguageDetectorCreateOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}


jb_Function LanguageDetectorCreateOptions_monitor(const LanguageDetectorCreateOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "monitor"));
}


void LanguageDetectorCreateOptions_set_monitor(LanguageDetectorCreateOptions* self, const jb_Function* value) {
    em_Val_set(em_Val_as_val(self->inner), "monitor", value);
}

DEFINE_EMLITE_TYPE(LanguageDetectorCreateCoreOptions, em_Val);


jb_Sequence LanguageDetectorCreateCoreOptions_expectedInputLanguages(const LanguageDetectorCreateCoreOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "expectedInputLanguages"));
}


void LanguageDetectorCreateCoreOptions_set_expectedInputLanguages(LanguageDetectorCreateCoreOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "expectedInputLanguages", value);
}

DEFINE_EMLITE_TYPE(LanguageDetectionResult, em_Val);


jb_DOMString LanguageDetectionResult_detectedLanguage(const LanguageDetectionResult *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "detectedLanguage"));
}


void LanguageDetectionResult_set_detectedLanguage(LanguageDetectionResult* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "detectedLanguage", value);
}


double LanguageDetectionResult_confidence(const LanguageDetectionResult *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "confidence"));
}


void LanguageDetectionResult_set_confidence(LanguageDetectionResult* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "confidence", value);
}

DEFINE_EMLITE_TYPE(LanguageDetectorDetectOptions, em_Val);


AbortSignal LanguageDetectorDetectOptions_signal(const LanguageDetectorDetectOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void LanguageDetectorDetectOptions_set_signal(LanguageDetectorDetectOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(LanguageDetector, em_Val);


jb_Promise LanguageDetector_create(LanguageDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("languagedetector"), "create"));
}


jb_Promise LanguageDetector_create(LanguageDetector* self , const LanguageDetectorCreateOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("languagedetector"), "create", em_Val_from(options)));
}


jb_Promise LanguageDetector_availability(LanguageDetector* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("languagedetector"), "availability"));
}


jb_Promise LanguageDetector_availability(LanguageDetector* self , const LanguageDetectorCreateCoreOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("languagedetector"), "availability", em_Val_from(options)));
}


jb_Promise LanguageDetector_detect(LanguageDetector* self , const jb_DOMString* input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(input)));
}


jb_Promise LanguageDetector_detect(LanguageDetector* self , const jb_DOMString* input, const LanguageDetectorDetectOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "detect", em_Val_from(input), em_Val_from(options)));
}


jb_FrozenArray LanguageDetector_expectedInputLanguages(const LanguageDetector *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "expectedInputLanguages"));
}


jb_Promise LanguageDetector_measureInputUsage(LanguageDetector* self , const jb_DOMString* input) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input)));
}


jb_Promise LanguageDetector_measureInputUsage(LanguageDetector* self , const jb_DOMString* input, const LanguageDetectorDetectOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureInputUsage", em_Val_from(input), em_Val_from(options)));
}


double LanguageDetector_inputQuota(const LanguageDetector *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "inputQuota"));
}


jb_Undefined LanguageDetector_destroy(LanguageDetector* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

