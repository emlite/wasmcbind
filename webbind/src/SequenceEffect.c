#include <webbind/SequenceEffect.h>


DEFINE_EMLITE_TYPE(SequenceEffect, GroupEffect);


SequenceEffect SequenceEffect_new(const jb_Sequence* children) : GroupEffect(em_Val_global("SequenceEffect").new_(em_Val_from(children))) {
        return SequenceEffect(em_Val_new(em_Val_global("SequenceEffect", em_Val_from(children)));
      }


SequenceEffect SequenceEffect_new(const jb_Sequence* children, const jb_Any* timing) : GroupEffect(em_Val_global("SequenceEffect").new_(em_Val_from(children), em_Val_from(timing))) {
        return SequenceEffect(em_Val_new(em_Val_global("SequenceEffect", em_Val_from(children), em_Val_from(timing)));
      }


SequenceEffect SequenceEffect_clone(SequenceEffect* self ) {
    return em_Val_as(SequenceEffect, em_Val_call(GroupEffect_as_val(self->inner), "clone"));
}

