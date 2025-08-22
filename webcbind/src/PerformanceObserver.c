#include <webcbind/PerformanceObserver.h>

#include <webcbind/PerformanceObserverInit.h>

DEFINE_EMLITE_TYPE(PerformanceObserver, em_Val);


PerformanceObserver PerformanceObserver_new(jb_Function * callback) {
        em_Val vv = em_Val_new(em_Val_global("PerformanceObserver") , em_Val_from(callback));
        return PerformanceObserver_from_val(&vv);
      }


jb_Undefined PerformanceObserver_observe0(PerformanceObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe"));
}


jb_Undefined PerformanceObserver_observe1(PerformanceObserver* self , PerformanceObserverInit * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(options)));
}


jb_Undefined PerformanceObserver_disconnect(PerformanceObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Any PerformanceObserver_takeRecords(PerformanceObserver* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}


jb_Array PerformanceObserver_supportedEntryTypes(const PerformanceObserver *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_global("performanceobserver"), em_Val_from("supportedEntryTypes")));
}

