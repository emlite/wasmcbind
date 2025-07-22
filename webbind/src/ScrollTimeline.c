#include <webbind/ScrollTimeline.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(ScrollTimeline, AnimationTimeline);


ScrollTimeline ScrollTimeline_new() : AnimationTimeline(em_Val_global("ScrollTimeline").new_()) {
        return ScrollTimeline(em_Val_new(em_Val_global("ScrollTimeline", ));
      }


ScrollTimeline ScrollTimeline_new(const jb_Any* options) : AnimationTimeline(em_Val_global("ScrollTimeline").new_(em_Val_from(options))) {
        return ScrollTimeline(em_Val_new(em_Val_global("ScrollTimeline", em_Val_from(options)));
      }


Element ScrollTimeline_source(const ScrollTimeline *self) {
    return em_Val_as(Element, em_Val_get(AnimationTimeline_as_val(self->inner), "source"));
}


ScrollAxis ScrollTimeline_axis(const ScrollTimeline *self) {
    return em_Val_as(ScrollAxis, em_Val_get(AnimationTimeline_as_val(self->inner), "axis"));
}

