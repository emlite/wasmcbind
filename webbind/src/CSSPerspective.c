#include <webbind/CSSPerspective.h>


DEFINE_EMLITE_TYPE(CSSPerspective, CSSTransformComponent);


CSSPerspective CSSPerspective_new(const jb_Any* length) : CSSTransformComponent(em_Val_global("CSSPerspective").new_(em_Val_from(length))) {
        return CSSPerspective(em_Val_new(em_Val_global("CSSPerspective", em_Val_from(length)));
      }


jb_Any CSSPerspective_length(const CSSPerspective *self) {
    return em_Val_as(jb_Any, em_Val_get(CSSTransformComponent_as_val(self->inner), "length"));
}


void CSSPerspective_set_length(CSSPerspective* self, const jb_Any* value) {
    em_Val_set(CSSTransformComponent_as_val(self->inner), "length", value);
}

