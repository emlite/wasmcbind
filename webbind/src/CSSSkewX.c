#include <webbind/CSSSkewX.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSSkewX, CSSTransformComponent);


CSSSkewX CSSSkewX_new(CSSNumericValue * ax) {
        em_Val vv = em_Val_new(em_Val_global("CSSSkewX") , em_Val_from(ax));
        return CSSSkewX_from_val(&vv);
      }


CSSNumericValue CSSSkewX_ax(const CSSSkewX *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("ax")));
}


void CSSSkewX_set_ax(CSSSkewX* self, CSSNumericValue * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("ax"), em_Val_from(value));
}

