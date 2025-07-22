#include <webbind/PerformanceElementTiming.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(PerformanceElementTiming, PerformanceEntry);


jb_Any PerformanceElementTiming_renderTime(const PerformanceElementTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "renderTime"));
}


jb_Any PerformanceElementTiming_loadTime(const PerformanceElementTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "loadTime"));
}


DOMRectReadOnly PerformanceElementTiming_intersectionRect(const PerformanceElementTiming *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(PerformanceEntry_as_val(self->inner), "intersectionRect"));
}


jb_DOMString PerformanceElementTiming_identifier(const PerformanceElementTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "identifier"));
}


unsigned long PerformanceElementTiming_naturalWidth(const PerformanceElementTiming *self) {
    return em_Val_as(unsigned long, em_Val_get(PerformanceEntry_as_val(self->inner), "naturalWidth"));
}


unsigned long PerformanceElementTiming_naturalHeight(const PerformanceElementTiming *self) {
    return em_Val_as(unsigned long, em_Val_get(PerformanceEntry_as_val(self->inner), "naturalHeight"));
}


jb_DOMString PerformanceElementTiming_id(const PerformanceElementTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PerformanceEntry_as_val(self->inner), "id"));
}


Element PerformanceElementTiming_element(const PerformanceElementTiming *self) {
    return em_Val_as(Element, em_Val_get(PerformanceEntry_as_val(self->inner), "element"));
}


jb_USVString PerformanceElementTiming_url(const PerformanceElementTiming *self) {
    return em_Val_as(jb_USVString, em_Val_get(PerformanceEntry_as_val(self->inner), "url"));
}


jb_Object PerformanceElementTiming_toJSON(PerformanceElementTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceEntry_as_val(self->inner), "toJSON"));
}


jb_Any PerformanceElementTiming_paintTime(const PerformanceElementTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "paintTime"));
}


jb_Any PerformanceElementTiming_presentationTime(const PerformanceElementTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "presentationTime"));
}

