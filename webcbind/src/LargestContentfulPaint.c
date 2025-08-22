#include <webcbind/LargestContentfulPaint.h>

#include <webcbind/Element.h>

DEFINE_EMLITE_TYPE(LargestContentfulPaint, PerformanceEntry);


jb_Any LargestContentfulPaint_loadTime(const LargestContentfulPaint *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("loadTime")));
}


unsigned long LargestContentfulPaint_size(const LargestContentfulPaint *self) {
    return em_Val_as(unsigned long, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("size")));
}


jb_String LargestContentfulPaint_id(const LargestContentfulPaint *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("id")));
}


jb_String LargestContentfulPaint_url(const LargestContentfulPaint *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("url")));
}


Element LargestContentfulPaint_element(const LargestContentfulPaint *self) {
    return em_Val_as(Element, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("element")));
}


jb_Object LargestContentfulPaint_toJSON(LargestContentfulPaint* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}


jb_Any LargestContentfulPaint_paintTime(const LargestContentfulPaint *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("paintTime")));
}


jb_Any LargestContentfulPaint_presentationTime(const LargestContentfulPaint *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("presentationTime")));
}

