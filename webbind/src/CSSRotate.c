#include <webbind/CSSRotate.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSRotate, CSSTransformComponent);


CSSRotate CSSRotate_new(const jb_Any* x, const jb_Any* y, const jb_Any* z, const CSSNumericValue* angle) : CSSTransformComponent(em_Val_global("CSSRotate").new_(em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(angle))) {
        return CSSRotate(em_Val_new(em_Val_global("CSSRotate", em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(angle)));
      }


jb_Any CSSRotate_x(const CSSRotate *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), "x"));
}


void CSSRotate_set_x(CSSRotate* self, const jb_Any* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "x", value);
}


jb_Any CSSRotate_y(const CSSRotate *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), "y"));
}


void CSSRotate_set_y(CSSRotate* self, const jb_Any* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "y", value);
}


jb_Any CSSRotate_z(const CSSRotate *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), "z"));
}


void CSSRotate_set_z(CSSRotate* self, const jb_Any* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "z", value);
}


CSSNumericValue CSSRotate_angle(const CSSRotate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSTransformComponent_as_val(self->inner), "angle"));
}


void CSSRotate_set_angle(CSSRotate* self, const CSSNumericValue* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "angle", value);
}

