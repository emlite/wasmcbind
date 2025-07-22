#include <webbind/LayoutShiftAttribution.h>
#include <webbind/Node.h>
#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(LayoutShiftAttribution, em_Val);


Node LayoutShiftAttribution_node(const LayoutShiftAttribution *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("node")));
}


DOMRectReadOnly LayoutShiftAttribution_previousRect(const LayoutShiftAttribution *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("previousRect")));
}


DOMRectReadOnly LayoutShiftAttribution_currentRect(const LayoutShiftAttribution *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("currentRect")));
}

