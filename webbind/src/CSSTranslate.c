#include <webbind/CSSTranslate.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSTranslate, CSSTransformComponent);


CSSTranslate CSSTranslate_new(const CSSNumericValue* x, const CSSNumericValue* y) : CSSTransformComponent(em_Val_global("CSSTranslate").new_(em_Val_from(x), em_Val_from(y))) {
        return CSSTranslate(em_Val_new(em_Val_global("CSSTranslate", em_Val_from(x), em_Val_from(y)));
      }


CSSTranslate CSSTranslate_new(const CSSNumericValue* x, const CSSNumericValue* y, const CSSNumericValue* z) : CSSTransformComponent(em_Val_global("CSSTranslate").new_(em_Val_from(x), em_Val_from(y), em_Val_from(z))) {
        return CSSTranslate(em_Val_new(em_Val_global("CSSTranslate", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
      }


CSSNumericValue CSSTranslate_x(const CSSTranslate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), "x"));
}


void CSSTranslate_set_x(CSSTranslate* self, const CSSNumericValue* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "x", value);
}


CSSNumericValue CSSTranslate_y(const CSSTranslate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), "y"));
}


void CSSTranslate_set_y(CSSTranslate* self, const CSSNumericValue* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "y", value);
}


CSSNumericValue CSSTranslate_z(const CSSTranslate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), "z"));
}


void CSSTranslate_set_z(CSSTranslate* self, const CSSNumericValue* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "z", value);
}

