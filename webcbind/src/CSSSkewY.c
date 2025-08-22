#include <webcbind/CSSSkewY.h>

#include <webcbind/CSSNumericValue.h>

DEFINE_EMLITE_TYPE(CSSSkewY, CSSTransformComponent);


CSSSkewY CSSSkewY_new(CSSNumericValue * ay) {
        em_Val vv = em_Val_new(em_Val_global("CSSSkewY") , em_Val_from(ay));
        return CSSSkewY_from_val(&vv);
      }


CSSNumericValue CSSSkewY_ay(const CSSSkewY *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("ay")));
}


void CSSSkewY_set_ay(CSSSkewY* self, CSSNumericValue * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("ay"), em_Val_from(value));
}

