#include <webbind/BarProp.h>


DEFINE_EMLITE_TYPE(BarProp, em_Val);


bool BarProp_visible(const BarProp *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "visible"));
}

