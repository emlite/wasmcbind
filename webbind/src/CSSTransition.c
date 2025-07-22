#include <webbind/CSSTransition.h>


DEFINE_EMLITE_TYPE(CSSTransition, Animation);


jb_CSSOMString CSSTransition_transitionProperty(const CSSTransition *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Animation_as_val(self->inner), "transitionProperty"));
}

