#include <webbind/ViewTimeline.h>
#include <webbind/Element.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(ViewTimeline, ScrollTimeline);


ViewTimeline ViewTimeline_new() : ScrollTimeline(em_Val_global("ViewTimeline").new_()) {
        return ViewTimeline(em_Val_new(em_Val_global("ViewTimeline", ));
      }


ViewTimeline ViewTimeline_new(const jb_Any* options) : ScrollTimeline(em_Val_global("ViewTimeline").new_(em_Val_from(options))) {
        return ViewTimeline(em_Val_new(em_Val_global("ViewTimeline", em_Val_from(options)));
      }


Element ViewTimeline_subject(const ViewTimeline *self) {
    return em_Val_as(Element, em_Val_get(ScrollTimeline_as_val(self->inner), "subject"));
}


CSSNumericValue ViewTimeline_startOffset(const ViewTimeline *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(ScrollTimeline_as_val(self->inner), "startOffset"));
}


CSSNumericValue ViewTimeline_endOffset(const ViewTimeline *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(ScrollTimeline_as_val(self->inner), "endOffset"));
}

