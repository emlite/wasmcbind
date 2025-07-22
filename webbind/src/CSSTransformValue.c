#include <webbind/CSSTransformValue.h>
#include <webbind/CSSTransformComponent.h>
#include <webbind/DOMMatrix.h>


DEFINE_EMLITE_TYPE(CSSTransformValue, CSSStyleValue);


CSSTransformValue CSSTransformValue_new(const jb_Sequence* transforms) : CSSStyleValue(em_Val_global("CSSTransformValue").new_(em_Val_from(transforms))) {
        return CSSTransformValue(em_Val_new(em_Val_global("CSSTransformValue", em_Val_from(transforms)));
      }


unsigned long CSSTransformValue_length(const CSSTransformValue *self) {
    return em_Val_as(unsigned long, em_Val_get(CSSStyleValue_as_val(self->inner), "length"));
}


bool CSSTransformValue_is2D(const CSSTransformValue *self) {
    return em_Val_as(bool, em_Val_get(CSSStyleValue_as_val(self->inner), "is2D"));
}


DOMMatrix CSSTransformValue_toMatrix(CSSTransformValue* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(CSSStyleValue_as_val(self->inner), "toMatrix"));
}

