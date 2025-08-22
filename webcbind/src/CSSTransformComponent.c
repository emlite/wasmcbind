#include <webcbind/CSSTransformComponent.h>

#include <webcbind/DOMMatrix.h>

DEFINE_EMLITE_TYPE(CSSTransformComponent, em_Val);


bool CSSTransformComponent_is2D(const CSSTransformComponent *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("is2D")));
}


void CSSTransformComponent_set_is2D(CSSTransformComponent* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("is2D"), em_Val_from(value));
}


DOMMatrix CSSTransformComponent_toMatrix(CSSTransformComponent* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "toMatrix"));
}

