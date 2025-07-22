#include <webbind/CSSScale.h>


DEFINE_EMLITE_TYPE(CSSScale, CSSTransformComponent);


CSSScale CSSScale_new(const jb_Any* x, const jb_Any* y) : CSSTransformComponent(em_Val_global("CSSScale").new_(em_Val_from(x), em_Val_from(y))) {
        return CSSScale(em_Val_new(em_Val_global("CSSScale", em_Val_from(x), em_Val_from(y)));
      }


CSSScale CSSScale_new(const jb_Any* x, const jb_Any* y, const jb_Any* z) : CSSTransformComponent(em_Val_global("CSSScale").new_(em_Val_from(x), em_Val_from(y), em_Val_from(z))) {
        return CSSScale(em_Val_new(em_Val_global("CSSScale", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
      }


jb_Any CSSScale_x(const CSSScale *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), "x"));
}


void CSSScale_set_x(CSSScale* self, const jb_Any* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "x", value);
}


jb_Any CSSScale_y(const CSSScale *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), "y"));
}


void CSSScale_set_y(CSSScale* self, const jb_Any* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "y", value);
}


jb_Any CSSScale_z(const CSSScale *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), "z"));
}


void CSSScale_set_z(CSSScale* self, const jb_Any* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "z", value);
}

