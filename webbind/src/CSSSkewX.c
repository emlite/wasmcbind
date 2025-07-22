#include <webbind/CSSSkewX.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSSkewX, CSSTransformComponent);


CSSSkewX CSSSkewX_new(const CSSNumericValue* ax) : CSSTransformComponent(em_Val_global("CSSSkewX").new_(em_Val_from(ax))) {
        return CSSSkewX(em_Val_new(em_Val_global("CSSSkewX", em_Val_from(ax)));
      }


CSSNumericValue CSSSkewX_ax(const CSSSkewX *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), "ax"));
}


void CSSSkewX_set_ax(CSSSkewX* self, const CSSNumericValue* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "ax", value);
}

