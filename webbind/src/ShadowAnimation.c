#include <webbind/ShadowAnimation.h>


DEFINE_EMLITE_TYPE(ShadowAnimation, Animation);


ShadowAnimation ShadowAnimation_new(const Animation* source, const jb_Any* newTarget) : Animation(em_Val_global("ShadowAnimation").new_(em_Val_from(source), em_Val_from(newTarget))) {
        return ShadowAnimation(em_Val_new(em_Val_global("ShadowAnimation", em_Val_from(source), em_Val_from(newTarget)));
      }


Animation ShadowAnimation_sourceAnimation(const ShadowAnimation *self) {
    return em_Val_as(Animation, em_Val_get(Animation_as_val(self->inner), "sourceAnimation"));
}

