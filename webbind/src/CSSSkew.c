#include <webbind/CSSSkew.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSSkew, CSSTransformComponent);


CSSSkew CSSSkew_new(const CSSNumericValue* ax, const CSSNumericValue* ay) : CSSTransformComponent(em_Val_global("CSSSkew").new_(em_Val_from(ax), em_Val_from(ay))) {
        return CSSSkew(em_Val_new(em_Val_global("CSSSkew", em_Val_from(ax), em_Val_from(ay)));
      }


CSSNumericValue CSSSkew_ax(const CSSSkew *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), "ax"));
}


void CSSSkew_set_ax(CSSSkew* self, const CSSNumericValue* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "ax", value);
}


CSSNumericValue CSSSkew_ay(const CSSSkew *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), "ay"));
}


void CSSSkew_set_ay(CSSSkew* self, const CSSNumericValue* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "ay", value);
}

