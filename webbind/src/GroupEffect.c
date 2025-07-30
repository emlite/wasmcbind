#include <webbind/GroupEffect.h>
#include <webbind/AnimationNodeList.h>
#include <webbind/AnimationEffect.h>


DEFINE_EMLITE_TYPE(GroupEffect, em_Val);


GroupEffect GroupEffect_new0(jb_Array * children) {
        em_Val vv = em_Val_new(em_Val_global("GroupEffect") , em_Val_from(children));
        return GroupEffect_from_val(&vv);
      }


GroupEffect GroupEffect_new1(jb_Array * children, jb_Any * timing) {
        em_Val vv = em_Val_new(em_Val_global("GroupEffect") , em_Val_from(children), em_Val_from(timing));
        return GroupEffect_from_val(&vv);
      }


AnimationNodeList GroupEffect_children(const GroupEffect *self) {
    return em_Val_as(AnimationNodeList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("children")));
}


AnimationEffect GroupEffect_firstChild(const GroupEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("firstChild")));
}


AnimationEffect GroupEffect_lastChild(const GroupEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lastChild")));
}


GroupEffect GroupEffect_clone(GroupEffect* self ) {
    return em_Val_as(GroupEffect, em_Val_call(em_Val_as_val(self->inner), "clone"));
}


jb_Undefined GroupEffect_prepend(GroupEffect* self , AnimationEffect * effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "prepend", em_Val_from(effects)));
}


jb_Undefined GroupEffect_append(GroupEffect* self , AnimationEffect * effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(effects)));
}

