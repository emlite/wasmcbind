#include <webcbind/DelegatedInkTrailPresenter.h>

#include <webcbind/Element.h>
#include <webcbind/PointerEvent.h>
#include <webcbind/InkTrailStyle.h>

DEFINE_EMLITE_TYPE(DelegatedInkTrailPresenter, em_Val);


Element DelegatedInkTrailPresenter_presentationArea(const DelegatedInkTrailPresenter *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("presentationArea")));
}


jb_Undefined DelegatedInkTrailPresenter_updateInkTrailStartPoint(DelegatedInkTrailPresenter* self , PointerEvent * event, InkTrailStyle * style) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateInkTrailStartPoint", em_Val_from(event), em_Val_from(style)));
}

