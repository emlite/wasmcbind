#include <webbind/PerformanceElementTiming.h>

#include <webbind/DOMRectReadOnly.h>
#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(PerformanceElementTiming, PerformanceEntry);


jb_Any PerformanceElementTiming_renderTime(const PerformanceElementTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("renderTime")));
}


jb_Any PerformanceElementTiming_loadTime(const PerformanceElementTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("loadTime")));
}


DOMRectReadOnly PerformanceElementTiming_intersectionRect(const PerformanceElementTiming *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("intersectionRect")));
}


jb_String PerformanceElementTiming_identifier(const PerformanceElementTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("identifier")));
}


unsigned long PerformanceElementTiming_naturalWidth(const PerformanceElementTiming *self) {
    return em_Val_as(unsigned long, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("naturalWidth")));
}


unsigned long PerformanceElementTiming_naturalHeight(const PerformanceElementTiming *self) {
    return em_Val_as(unsigned long, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("naturalHeight")));
}


jb_String PerformanceElementTiming_id(const PerformanceElementTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("id")));
}


Element PerformanceElementTiming_element(const PerformanceElementTiming *self) {
    return em_Val_as(Element, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("element")));
}


jb_String PerformanceElementTiming_url(const PerformanceElementTiming *self) {
    return em_Val_as(jb_String, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("url")));
}


jb_Object PerformanceElementTiming_toJSON(PerformanceElementTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}


jb_Any PerformanceElementTiming_paintTime(const PerformanceElementTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("paintTime")));
}


jb_Any PerformanceElementTiming_presentationTime(const PerformanceElementTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("presentationTime")));
}

