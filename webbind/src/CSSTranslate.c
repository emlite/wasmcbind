#include <webbind/CSSTranslate.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSTranslate, CSSTransformComponent);


CSSTranslate CSSTranslate_new0(CSSNumericValue * x, CSSNumericValue * y) {
        em_Val vv = em_Val_new(em_Val_global("CSSTranslate") , em_Val_from(x), em_Val_from(y));
        return CSSTranslate_from_val(&vv);
      }


CSSTranslate CSSTranslate_new1(CSSNumericValue * x, CSSNumericValue * y, CSSNumericValue * z) {
        em_Val vv = em_Val_new(em_Val_global("CSSTranslate") , em_Val_from(x), em_Val_from(y), em_Val_from(z));
        return CSSTranslate_from_val(&vv);
      }


CSSNumericValue CSSTranslate_x(const CSSTranslate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("x")));
}


void CSSTranslate_set_x(CSSTranslate* self, CSSNumericValue * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


CSSNumericValue CSSTranslate_y(const CSSTranslate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("y")));
}


void CSSTranslate_set_y(CSSTranslate* self, CSSNumericValue * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


CSSNumericValue CSSTranslate_z(const CSSTranslate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("z")));
}


void CSSTranslate_set_z(CSSTranslate* self, CSSNumericValue * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("z"), em_Val_from(value));
}

