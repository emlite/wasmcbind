#include <webcbind/CSSMatrixComponent.h>

#include <webcbind/DOMMatrixReadOnly.h>
#include <webcbind/CSSMatrixComponentOptions.h>
#include <webcbind/DOMMatrix.h>

DEFINE_EMLITE_TYPE(CSSMatrixComponent, CSSTransformComponent);


CSSMatrixComponent CSSMatrixComponent_new0(DOMMatrixReadOnly * matrix) {
        em_Val vv = em_Val_new(em_Val_global("CSSMatrixComponent") , em_Val_from(matrix));
        return CSSMatrixComponent_from_val(&vv);
      }


CSSMatrixComponent CSSMatrixComponent_new1(DOMMatrixReadOnly * matrix, CSSMatrixComponentOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("CSSMatrixComponent") , em_Val_from(matrix), em_Val_from(options));
        return CSSMatrixComponent_from_val(&vv);
      }


DOMMatrix CSSMatrixComponent_matrix(const CSSMatrixComponent *self) {
    return em_Val_as(DOMMatrix, em_Val_get(CSSTransformComponent_as_val(self->inner), em_Val_from("matrix")));
}


void CSSMatrixComponent_set_matrix(CSSMatrixComponent* self, DOMMatrix * value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), em_Val_from("matrix"), em_Val_from(value));
}

