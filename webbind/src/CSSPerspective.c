#include <webbind/CSSPerspective.h>


DEFINE_EMLITE_TYPE(CSSPerspective, CSSTransformComponent);


CSSPerspective CSSPerspective_new(jb_Any * length) {
        em_Val vv = em_Val_new(em_Val_global("CSSPerspective") , em_Val_from(length));
        return CSSPerspective_from_val(&vv);
      }


jb_Any CSSPerspective_length(const CSSPerspective *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("length")));
}


void CSSPerspective_set_length(CSSPerspective* self, jb_Any * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}

