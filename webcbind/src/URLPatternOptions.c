#include <webcbind/URLPatternOptions.h>

DEFINE_EMLITE_TYPE(URLPatternOptions, em_Val);


bool URLPatternOptions_ignoreCase(const URLPatternOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreCase")));
}


void URLPatternOptions_set_ignoreCase(URLPatternOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreCase"), em_Val_from(value));
}


URLPatternOptions URLPatternOptions_new() {
    em_Val obj = em_Val_object();
    return URLPatternOptions_from_val(&obj);
}

