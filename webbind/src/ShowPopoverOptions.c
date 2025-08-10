#include <webbind/ShowPopoverOptions.h>

#include <webbind/HTMLElement.h>

DEFINE_EMLITE_TYPE(ShowPopoverOptions, em_Val);


HTMLElement ShowPopoverOptions_source(const ShowPopoverOptions *self) {
    return em_Val_as(HTMLElement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void ShowPopoverOptions_set_source(ShowPopoverOptions* self, HTMLElement * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


ShowPopoverOptions ShowPopoverOptions_new() {
    em_Val obj = em_Val_object();
    return ShowPopoverOptions_from_val(&obj);
}

