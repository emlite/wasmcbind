#include <webbind/InkPresenterParam.h>

#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(InkPresenterParam, em_Val);


Element InkPresenterParam_presentationArea(const InkPresenterParam *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("presentationArea")));
}


void InkPresenterParam_set_presentationArea(InkPresenterParam* self, Element * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("presentationArea"), em_Val_from(value));
}


InkPresenterParam InkPresenterParam_new() {
    em_Val obj = em_Val_object();
    return InkPresenterParam_from_val(&obj);
}

