#include <webbind/CSSMatrixComponent.h>
#include <webbind/DOMMatrix.h>
#include <webbind/DOMMatrixReadOnly.h>


DEFINE_EMLITE_TYPE(CSSMatrixComponent, CSSTransformComponent);


CSSMatrixComponent CSSMatrixComponent_new(const DOMMatrixReadOnly* matrix) : CSSTransformComponent(em_Val_global("CSSMatrixComponent").new_(em_Val_from(matrix))) {
        return CSSMatrixComponent(em_Val_new(em_Val_global("CSSMatrixComponent", em_Val_from(matrix)));
      }


CSSMatrixComponent CSSMatrixComponent_new(const DOMMatrixReadOnly* matrix, const jb_Any* options) : CSSTransformComponent(em_Val_global("CSSMatrixComponent").new_(em_Val_from(matrix), em_Val_from(options))) {
        return CSSMatrixComponent(em_Val_new(em_Val_global("CSSMatrixComponent", em_Val_from(matrix), em_Val_from(options)));
      }


DOMMatrix CSSMatrixComponent_matrix(const CSSMatrixComponent *self) {
    return em_Val_as(DOMMatrix, em_Val_get(CSSTransformComponent_as_val(self->inner), "matrix"));
}


void CSSMatrixComponent_set_matrix(CSSMatrixComponent* self, const DOMMatrix* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "matrix", value);
}

