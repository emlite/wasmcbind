#include <webbind/CSSRotate.h>

#include <webbind/CSSNumericValue.h>

DEFINE_EMLITE_TYPE(CSSRotate, CSSTransformComponent);


CSSRotate CSSRotate_new(jb_Any * x, jb_Any * y, jb_Any * z, CSSNumericValue * angle) {
        em_Val vv = em_Val_new(em_Val_global("CSSRotate") , em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(angle));
        return CSSRotate_from_val(&vv);
      }


jb_Any CSSRotate_x(const CSSRotate *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("x")));
}


void CSSRotate_set_x(CSSRotate* self, jb_Any * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


jb_Any CSSRotate_y(const CSSRotate *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("y")));
}


void CSSRotate_set_y(CSSRotate* self, jb_Any * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


jb_Any CSSRotate_z(const CSSRotate *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("z")));
}


void CSSRotate_set_z(CSSRotate* self, jb_Any * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("z"), em_Val_from(value));
}


CSSNumericValue CSSRotate_angle(const CSSRotate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("angle")));
}


void CSSRotate_set_angle(CSSRotate* self, CSSNumericValue * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("angle"), em_Val_from(value));
}

