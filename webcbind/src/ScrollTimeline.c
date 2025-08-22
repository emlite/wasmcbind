#include <webcbind/ScrollTimeline.h>

#include <webcbind/ScrollTimelineOptions.h>
#include <webcbind/Element.h>

DEFINE_EMLITE_TYPE(ScrollTimeline, AnimationTimeline);


ScrollTimeline ScrollTimeline_new0() {
        em_Val vv = em_Val_new(em_Val_global("ScrollTimeline") );
        return ScrollTimeline_from_val(&vv);
      }


ScrollTimeline ScrollTimeline_new1(ScrollTimelineOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("ScrollTimeline") , em_Val_from(options));
        return ScrollTimeline_from_val(&vv);
      }


Element ScrollTimeline_source(const ScrollTimeline *self) {
    return em_Val_as(Element, em_Val_get(AnimationTimeline_as_val(self->inner), em_Val_from("source")));
}


ScrollAxis ScrollTimeline_axis(const ScrollTimeline *self) {
    return em_Val_as(ScrollAxis, em_Val_get(AnimationTimeline_as_val(self->inner), em_Val_from("axis")));
}

