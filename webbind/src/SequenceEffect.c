#include <webbind/SequenceEffect.h>

#include <webbind/AnimationEffect.h>

DEFINE_EMLITE_TYPE(SequenceEffect, GroupEffect);


SequenceEffect SequenceEffect_new0(jb_Array * children) {
        em_Val vv = em_Val_new(em_Val_global("SequenceEffect") , em_Val_from(children));
        return SequenceEffect_from_val(&vv);
      }


SequenceEffect SequenceEffect_new1(jb_Array * children, jb_Any * timing) {
        em_Val vv = em_Val_new(em_Val_global("SequenceEffect") , em_Val_from(children), em_Val_from(timing));
        return SequenceEffect_from_val(&vv);
      }


SequenceEffect SequenceEffect_clone(SequenceEffect* self ) {
    return em_Val_as(SequenceEffect, em_Val_call(GroupEffect_as_val(self->inner), "clone"));
}

