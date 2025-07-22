#include <webbind/LargestContentfulPaint.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(LargestContentfulPaint, PerformanceEntry);


jb_Any LargestContentfulPaint_loadTime(const LargestContentfulPaint *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "loadTime"));
}


unsigned long LargestContentfulPaint_size(const LargestContentfulPaint *self) {
    return em_Val_as(unsigned long, em_Val_get(PerformanceEntry_as_val(self->inner), "size"));
}


jb_DOMString LargestContentfulPaint_id(const LargestContentfulPaint *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "id"));
}


jb_DOMString LargestContentfulPaint_url(const LargestContentfulPaint *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "url"));
}


Element LargestContentfulPaint_element(const LargestContentfulPaint *self) {
    return em_Val_as(Element, em_Val_get(PerformanceEntry_as_val(self->inner), "element"));
}


jb_Object LargestContentfulPaint_toJSON(LargestContentfulPaint* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}


jb_Any LargestContentfulPaint_paintTime(const LargestContentfulPaint *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "paintTime"));
}


jb_Any LargestContentfulPaint_presentationTime(const LargestContentfulPaint *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "presentationTime"));
}

