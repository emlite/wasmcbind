#include <webbind/CSSTransformComponent.h>
#include <webbind/DOMMatrix.h>


DEFINE_EMLITE_TYPE(CSSTransformComponent, em_Val);


bool CSSTransformComponent_is2D(const CSSTransformComponent *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "is2D"));
}


void CSSTransformComponent_set_is2D(CSSTransformComponent* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "is2D", value);
}


DOMMatrix CSSTransformComponent_toMatrix(CSSTransformComponent* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "toMatrix"));
}

