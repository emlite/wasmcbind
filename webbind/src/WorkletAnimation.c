#include <webbind/WorkletAnimation.h>
#include <webbind/AnimationTimeline.h>


DEFINE_EMLITE_TYPE(WorkletAnimation, Animation);


WorkletAnimation WorkletAnimation_new(const jb_DOMString* animatorName) : Animation(em_Val_global("WorkletAnimation").new_(em_Val_from(animatorName))) {
        return WorkletAnimation(em_Val_new(em_Val_global("WorkletAnimation", em_Val_from(animatorName)));
      }


WorkletAnimation WorkletAnimation_new(const jb_DOMString* animatorName, const jb_Any* effects) : Animation(em_Val_global("WorkletAnimation").new_(em_Val_from(animatorName), em_Val_from(effects))) {
        return WorkletAnimation(em_Val_new(em_Val_global("WorkletAnimation", em_Val_from(animatorName), em_Val_from(effects)));
      }


WorkletAnimation WorkletAnimation_new(const jb_DOMString* animatorName, const jb_Any* effects, const AnimationTimeline* timeline) : Animation(em_Val_global("WorkletAnimation").new_(em_Val_from(animatorName), em_Val_from(effects), em_Val_from(timeline))) {
        return WorkletAnimation(em_Val_new(em_Val_global("WorkletAnimation", em_Val_from(animatorName), em_Val_from(effects), em_Val_from(timeline)));
      }


WorkletAnimation WorkletAnimation_new(const jb_DOMString* animatorName, const jb_Any* effects, const AnimationTimeline* timeline, const jb_Any* options) : Animation(em_Val_global("WorkletAnimation").new_(em_Val_from(animatorName), em_Val_from(effects), em_Val_from(timeline), em_Val_from(options))) {
        return WorkletAnimation(em_Val_new(em_Val_global("WorkletAnimation", em_Val_from(animatorName), em_Val_from(effects), em_Val_from(timeline), em_Val_from(options)));
      }


jb_DOMString WorkletAnimation_animatorName(const WorkletAnimation *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Animation_as_val(self->inner), "animatorName"));
}

