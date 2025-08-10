#include <webbind/CSSTransition.h>

DEFINE_EMLITE_TYPE(CSSTransition, Animation);


jb_String CSSTransition_transitionProperty(const CSSTransition *self) {
    return em_Val_as(jb_String, em_Val_get(Animation_as_val(self->inner), em_Val_from("transitionProperty")));
}

