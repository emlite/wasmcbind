#include <webbind/CSSSkew.h>

#include <webbind/CSSNumericValue.h>

DEFINE_EMLITE_TYPE(CSSSkew, CSSTransformComponent);


CSSSkew CSSSkew_new(CSSNumericValue * ax, CSSNumericValue * ay) {
        em_Val vv = em_Val_new(em_Val_global("CSSSkew") , em_Val_from(ax), em_Val_from(ay));
        return CSSSkew_from_val(&vv);
      }


CSSNumericValue CSSSkew_ax(const CSSSkew *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("ax")));
}


void CSSSkew_set_ax(CSSSkew* self, CSSNumericValue * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("ax"), em_Val_from(value));
}


CSSNumericValue CSSSkew_ay(const CSSSkew *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("ay")));
}


void CSSSkew_set_ay(CSSSkew* self, CSSNumericValue * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("ay"), em_Val_from(value));
}

