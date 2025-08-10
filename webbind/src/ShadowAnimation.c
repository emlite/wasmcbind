#include <webbind/ShadowAnimation.h>

DEFINE_EMLITE_TYPE(ShadowAnimation, Animation);


ShadowAnimation ShadowAnimation_new(Animation * source, jb_Any * newTarget) {
        em_Val vv = em_Val_new(em_Val_global("ShadowAnimation") , em_Val_from(source), em_Val_from(newTarget));
        return ShadowAnimation_from_val(&vv);
      }


Animation ShadowAnimation_sourceAnimation(const ShadowAnimation *self) {
    return em_Val_as(Animation, em_Val_get(Animation_as_val(self->inner), em_Val_from("sourceAnimation")));
}

