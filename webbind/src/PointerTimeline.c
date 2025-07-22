#include <webbind/PointerTimeline.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(PointerTimeline, AnimationTimeline);


PointerTimeline PointerTimeline_new() : AnimationTimeline(em_Val_global("PointerTimeline").new_()) {
        return PointerTimeline(em_Val_new(em_Val_global("PointerTimeline", ));
      }


PointerTimeline PointerTimeline_new(const jb_Any* options) : AnimationTimeline(em_Val_global("PointerTimeline").new_(em_Val_from(options))) {
        return PointerTimeline(em_Val_new(em_Val_global("PointerTimeline", em_Val_from(options)));
      }


Element PointerTimeline_source(const PointerTimeline *self) {
    return em_Val_as(Element, em_Val_get(AnimationTimeline_as_val(self->inner), "source"));
}


PointerAxis PointerTimeline_axis(const PointerTimeline *self) {
    return em_Val_as(PointerAxis, em_Val_get(AnimationTimeline_as_val(self->inner), "axis"));
}

