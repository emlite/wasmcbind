#include <webbind/DelegatedInkTrailPresenter.h>
#include <webbind/Element.h>
#include <webbind/PointerEvent.h>


DEFINE_EMLITE_TYPE(InkTrailStyle, em_Val);


jb_DOMString InkTrailStyle_color(const InkTrailStyle *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "color"));
}


void InkTrailStyle_set_color(InkTrailStyle* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "color", value);
}


double InkTrailStyle_diameter(const InkTrailStyle *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "diameter"));
}


void InkTrailStyle_set_diameter(InkTrailStyle* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "diameter", value);
}

DEFINE_EMLITE_TYPE(DelegatedInkTrailPresenter, em_Val);


Element DelegatedInkTrailPresenter_presentationArea(const DelegatedInkTrailPresenter *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), "presentationArea"));
}


jb_Undefined DelegatedInkTrailPresenter_updateInkTrailStartPoint(DelegatedInkTrailPresenter* self , const PointerEvent* event, const InkTrailStyle* style) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateInkTrailStartPoint", em_Val_from(event), em_Val_from(style)));
}

