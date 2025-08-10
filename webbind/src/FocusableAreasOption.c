#include <webbind/FocusableAreasOption.h>

DEFINE_EMLITE_TYPE(FocusableAreasOption, em_Val);


FocusableAreaSearchMode FocusableAreasOption_mode(const FocusableAreasOption *self) {
    return em_Val_as(FocusableAreaSearchMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void FocusableAreasOption_set_mode(FocusableAreasOption* self, FocusableAreaSearchMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


FocusableAreasOption FocusableAreasOption_new() {
    em_Val obj = em_Val_object();
    return FocusableAreasOption_from_val(&obj);
}

