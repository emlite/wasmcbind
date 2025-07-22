#include <webbind/CSSSkewY.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSSkewY, CSSTransformComponent);


CSSSkewY CSSSkewY_new(const CSSNumericValue* ay) : CSSTransformComponent(em_Val_global("CSSSkewY").new_(em_Val_from(ay))) {
        return CSSSkewY(em_Val_new(em_Val_global("CSSSkewY", em_Val_from(ay)));
      }


CSSNumericValue CSSSkewY_ay(const CSSSkewY *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), "ay"));
}


void CSSSkewY_set_ay(CSSSkewY* self, const CSSNumericValue* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "ay", value);
}

