#include <webbind/CSSScale.h>


DEFINE_EMLITE_TYPE(CSSScale, CSSTransformComponent);


CSSScale CSSScale_new0(jb_Any * x, jb_Any * y) {
        em_Val vv = em_Val_new(em_Val_global("CSSScale") , em_Val_from(x), em_Val_from(y));
        return CSSScale_from_val(&vv);
      }


CSSScale CSSScale_new1(jb_Any * x, jb_Any * y, jb_Any * z) {
        em_Val vv = em_Val_new(em_Val_global("CSSScale") , em_Val_from(x), em_Val_from(y), em_Val_from(z));
        return CSSScale_from_val(&vv);
      }


jb_Any CSSScale_x(const CSSScale *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("x")));
}


void CSSScale_set_x(CSSScale* self, jb_Any * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


jb_Any CSSScale_y(const CSSScale *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("y")));
}


void CSSScale_set_y(CSSScale* self, jb_Any * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


jb_Any CSSScale_z(const CSSScale *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("z")));
}


void CSSScale_set_z(CSSScale* self, jb_Any * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("z"), em_Val_from(value));
}

