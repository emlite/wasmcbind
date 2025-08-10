#include <webbind/BreakTokenOptions.h>

#include <webbind/ChildBreakToken.h>

DEFINE_EMLITE_TYPE(BreakTokenOptions, em_Val);


jb_Array BreakTokenOptions_childBreakTokens(const BreakTokenOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("childBreakTokens")));
}


void BreakTokenOptions_set_childBreakTokens(BreakTokenOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("childBreakTokens"), em_Val_from(value));
}


jb_Any BreakTokenOptions_data(const BreakTokenOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void BreakTokenOptions_set_data(BreakTokenOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


BreakTokenOptions BreakTokenOptions_new() {
    em_Val obj = em_Val_object();
    return BreakTokenOptions_from_val(&obj);
}

