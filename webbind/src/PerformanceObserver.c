#include <webbind/PerformanceObserver.h>


DEFINE_EMLITE_TYPE(PerformanceObserverInit, em_Val);


jb_Sequence PerformanceObserverInit_entryTypes(const PerformanceObserverInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "entryTypes"));
}


void PerformanceObserverInit_set_entryTypes(PerformanceObserverInit* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "entryTypes", value);
}


jb_DOMString PerformanceObserverInit_type(const PerformanceObserverInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void PerformanceObserverInit_set_type(PerformanceObserverInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


bool PerformanceObserverInit_buffered(const PerformanceObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "buffered"));
}


void PerformanceObserverInit_set_buffered(PerformanceObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "buffered", value);
}

DEFINE_EMLITE_TYPE(PerformanceObserver, em_Val);


PerformanceObserver PerformanceObserver_new(const jb_Function* callback) : em_Val(em_Val_global("PerformanceObserver").new_(em_Val_from(callback))) {
        return PerformanceObserver(em_Val_new(em_Val_global("PerformanceObserver", em_Val_from(callback)));
      }


jb_Undefined PerformanceObserver_observe(PerformanceObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe"));
}


jb_Undefined PerformanceObserver_observe(PerformanceObserver* self , const PerformanceObserverInit* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(options)));
}


jb_Undefined PerformanceObserver_disconnect(PerformanceObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Any PerformanceObserver_takeRecords(PerformanceObserver* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}


jb_FrozenArray PerformanceObserver_supportedEntryTypes() {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_global("performanceobserver", "supportedEntryTypes")));
}

