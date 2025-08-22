#include <webcbind/WorkletAnimation.h>

#include <webcbind/AnimationTimeline.h>

DEFINE_EMLITE_TYPE(WorkletAnimation, Animation);


WorkletAnimation WorkletAnimation_new0(jb_String * animatorName) {
        em_Val vv = em_Val_new(em_Val_global("WorkletAnimation") , em_Val_from(animatorName));
        return WorkletAnimation_from_val(&vv);
      }


WorkletAnimation WorkletAnimation_new1(jb_String * animatorName, jb_Any * effects) {
        em_Val vv = em_Val_new(em_Val_global("WorkletAnimation") , em_Val_from(animatorName), em_Val_from(effects));
        return WorkletAnimation_from_val(&vv);
      }


WorkletAnimation WorkletAnimation_new2(jb_String * animatorName, jb_Any * effects, AnimationTimeline * timeline) {
        em_Val vv = em_Val_new(em_Val_global("WorkletAnimation") , em_Val_from(animatorName), em_Val_from(effects), em_Val_from(timeline));
        return WorkletAnimation_from_val(&vv);
      }


WorkletAnimation WorkletAnimation_new3(jb_String * animatorName, jb_Any * effects, AnimationTimeline * timeline, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("WorkletAnimation") , em_Val_from(animatorName), em_Val_from(effects), em_Val_from(timeline), em_Val_from(options));
        return WorkletAnimation_from_val(&vv);
      }


jb_String WorkletAnimation_animatorName(const WorkletAnimation *self) {
    return em_Val_as(jb_String, em_Val_get(Animation_as_val(self->inner), em_Val_from("animatorName")));
}

