#include <webbind/GroupEffect.h>
#include <webbind/AnimationNodeList.h>
#include <webbind/AnimationEffect.h>


DEFINE_EMLITE_TYPE(GroupEffect, em_Val);


GroupEffect GroupEffect_new(const jb_Sequence* children) : em_Val(em_Val_global("GroupEffect").new_(em_Val_from(children))) {
        return GroupEffect(em_Val_new(em_Val_global("GroupEffect", em_Val_from(children)));
      }


GroupEffect GroupEffect_new(const jb_Sequence* children, const jb_Any* timing) : em_Val(em_Val_global("GroupEffect").new_(em_Val_from(children), em_Val_from(timing))) {
        return GroupEffect(em_Val_new(em_Val_global("GroupEffect", em_Val_from(children), em_Val_from(timing)));
      }


AnimationNodeList GroupEffect_children(const GroupEffect *self) {
    return em_Val_as(AnimationNodeList, em_Val_get(em_Val_as_val(self->inner), "children"));
}


AnimationEffect GroupEffect_firstChild(const GroupEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), "firstChild"));
}


AnimationEffect GroupEffect_lastChild(const GroupEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), "lastChild"));
}


GroupEffect GroupEffect_clone(GroupEffect* self ) {
    return em_Val_as(GroupEffect, em_Val_call(em_Val_as_val(self->inner), "clone"));
}


jb_Undefined GroupEffect_prepend(GroupEffect* self , const AnimationEffect* effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "prepend", em_Val_from(effects)));
}


jb_Undefined GroupEffect_append(GroupEffect* self , const AnimationEffect* effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(effects)));
}

