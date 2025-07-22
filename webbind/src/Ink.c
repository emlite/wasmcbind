#include <webbind/Ink.h>
#include <webbind/DelegatedInkTrailPresenter.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(InkPresenterParam, em_Val);


Element InkPresenterParam_presentationArea(const InkPresenterParam *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("presentationArea")));
}


void InkPresenterParam_set_presentationArea(InkPresenterParam* self, Element * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("presentationArea"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Ink, em_Val);


jb_Promise Ink_requestPresenter0(Ink* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPresenter"));
}


jb_Promise Ink_requestPresenter1(Ink* self , InkPresenterParam * param) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPresenter", em_Val_from(param)));
}

