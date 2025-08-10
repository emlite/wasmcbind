#include <webbind/URLPatternComponentResult.h>

DEFINE_EMLITE_TYPE(URLPatternComponentResult, em_Val);


jb_String URLPatternComponentResult_input(const URLPatternComponentResult *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("input")));
}


void URLPatternComponentResult_set_input(URLPatternComponentResult* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("input"), em_Val_from(value));
}


jb_Object URLPatternComponentResult_groups(const URLPatternComponentResult *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("groups")));
}


void URLPatternComponentResult_set_groups(URLPatternComponentResult* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("groups"), em_Val_from(value));
}


URLPatternComponentResult URLPatternComponentResult_new() {
    em_Val obj = em_Val_object();
    return URLPatternComponentResult_from_val(&obj);
}

