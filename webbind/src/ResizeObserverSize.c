#include <webbind/ResizeObserverSize.h>

DEFINE_EMLITE_TYPE(ResizeObserverSize, em_Val);


double ResizeObserverSize_inlineSize(const ResizeObserverSize *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineSize")));
}


double ResizeObserverSize_blockSize(const ResizeObserverSize *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockSize")));
}

