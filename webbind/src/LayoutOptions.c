#include <webbind/LayoutOptions.h>

DEFINE_EMLITE_TYPE(LayoutOptions, em_Val);


ChildDisplayType LayoutOptions_childDisplay(const LayoutOptions *self) {
    return em_Val_as(ChildDisplayType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("childDisplay")));
}


void LayoutOptions_set_childDisplay(LayoutOptions* self, ChildDisplayType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("childDisplay"), em_Val_from(value));
}


LayoutSizingMode LayoutOptions_sizing(const LayoutOptions *self) {
    return em_Val_as(LayoutSizingMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sizing")));
}


void LayoutOptions_set_sizing(LayoutOptions* self, LayoutSizingMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sizing"), em_Val_from(value));
}


LayoutOptions LayoutOptions_new() {
    em_Val obj = em_Val_object();
    return LayoutOptions_from_val(&obj);
}

