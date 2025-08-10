#include <webbind/PerformanceObserverEntryList.h>

DEFINE_EMLITE_TYPE(PerformanceObserverEntryList, em_Val);


jb_Any PerformanceObserverEntryList_getEntries(PerformanceObserverEntryList* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getEntries"));
}


jb_Any PerformanceObserverEntryList_getEntriesByType(PerformanceObserverEntryList* self , jb_String * type) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getEntriesByType", em_Val_from(type)));
}


jb_Any PerformanceObserverEntryList_getEntriesByName0(PerformanceObserverEntryList* self , jb_String * name) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getEntriesByName", em_Val_from(name)));
}


jb_Any PerformanceObserverEntryList_getEntriesByName1(PerformanceObserverEntryList* self , jb_String * name, jb_String * type) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getEntriesByName", em_Val_from(name), em_Val_from(type)));
}

