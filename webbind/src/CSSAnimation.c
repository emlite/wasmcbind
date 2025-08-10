#include <webbind/CSSAnimation.h>

DEFINE_EMLITE_TYPE(CSSAnimation, Animation);


jb_String CSSAnimation_animationName(const CSSAnimation *self) {
    return em_Val_as(jb_String, em_Val_get(Animation_as_val(self->inner), em_Val_from("animationName")));
}

