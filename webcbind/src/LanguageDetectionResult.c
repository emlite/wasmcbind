#include <webcbind/LanguageDetectionResult.h>

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


LanguageDetectionResult LanguageDetectionResult_new() {
    em_Val obj = em_Val_object();
    return LanguageDetectionResult_from_val(&obj);
}

