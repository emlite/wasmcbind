#include <webbind/LayoutEdges.h>


DEFINE_EMLITE_TYPE(LayoutEdges, em_Val);


double LayoutEdges_inlineStart(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "inlineStart"));
}


double LayoutEdges_inlineEnd(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "inlineEnd"));
}


double LayoutEdges_blockStart(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "blockStart"));
}


double LayoutEdges_blockEnd(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "blockEnd"));
}


double LayoutEdges_inline_(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "inline"));
}


double LayoutEdges_block(const LayoutEdges *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "block"));
}

