#include <webbind/LayoutEdges.h>

DEFINE_EMLITE_TYPE(LayoutEdges, em_Val);


double LayoutEdges_inlineStart(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineStart")));
}


double LayoutEdges_inlineEnd(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineEnd")));
}


double LayoutEdges_blockStart(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockStart")));
}


double LayoutEdges_blockEnd(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockEnd")));
}


double LayoutEdges_inline_(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inline")));
}


double LayoutEdges_block(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("block")));
}

