#include <webbind/ViewTimeline.h>

#include <webbind/ViewTimelineOptions.h>
#include <webbind/Element.h>
#include <webbind/CSSNumericValue.h>

DEFINE_EMLITE_TYPE(ViewTimeline, ScrollTimeline);


ViewTimeline ViewTimeline_new0() {
        em_Val vv = em_Val_new(em_Val_global("ViewTimeline") );
        return ViewTimeline_from_val(&vv);
      }


ViewTimeline ViewTimeline_new1(ViewTimelineOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("ViewTimeline") , em_Val_from(options));
        return ViewTimeline_from_val(&vv);
      }


Element ViewTimeline_subject(const ViewTimeline *self) {
    return em_Val_as(Element, em_Val_get(ScrollTimeline_as_val(self->inner), em_Val_from("subject")));
}


CSSNumericValue ViewTimeline_startOffset(const ViewTimeline *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(ScrollTimeline_as_val(self->inner), em_Val_from("startOffset")));
}


CSSNumericValue ViewTimeline_endOffset(const ViewTimeline *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(ScrollTimeline_as_val(self->inner), em_Val_from("endOffset")));
}

