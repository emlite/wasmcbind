#include <webbind/Ink.h>
#include <webbind/DelegatedInkTrailPresenter.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(InkPresenterParam, em_Val);


Element InkPresenterParam_presentationArea(const InkPresenterParam *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), "presentationArea"));
}


void InkPresenterParam_set_presentationArea(InkPresenterParam* self, const Element* value) {
    em_Val_set(em_Val_as_val(self->inner), "presentationArea", value);
}

DEFINE_EMLITE_TYPE(Ink, em_Val);


jb_Promise Ink_requestPresenter(Ink* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPresenter"));
}


jb_Promise Ink_requestPresenter(Ink* self , const InkPresenterParam* param) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPresenter", em_Val_from(param)));
}

