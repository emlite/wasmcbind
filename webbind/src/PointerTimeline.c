#include <webbind/PointerTimeline.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(PointerTimeline, AnimationTimeline);


PointerTimeline PointerTimeline_new0() {
        em_Val vv = em_Val_new(em_Val_global("PointerTimeline") );
        return PointerTimeline_from_val(&vv);
      }


PointerTimeline PointerTimeline_new1(jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("PointerTimeline") , em_Val_from(options));
        return PointerTimeline_from_val(&vv);
      }


Element PointerTimeline_source(const PointerTimeline *self) {
    return em_Val_as(Element, em_Val_get(AnimationTimeline_as_val(self->inner), em_Val_from("source")));
}


PointerAxis PointerTimeline_axis(const PointerTimeline *self) {
    return em_Val_as(PointerAxis, em_Val_get(AnimationTimeline_as_val(self->inner), em_Val_from("axis")));
}

