#include <webbind/PressureObserver.h>

#include <webbind/PressureObserverOptions.h>
#include <webbind/PressureRecord.h>

DEFINE_EMLITE_TYPE(PressureObserver, em_Val);


PressureObserver PressureObserver_new(jb_Function * callback) {
        em_Val vv = em_Val_new(em_Val_global("PressureObserver") , em_Val_from(callback));
        return PressureObserver_from_val(&vv);
      }


jb_Promise PressureObserver_observe0(PressureObserver* self , PressureSource * source) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(source)));
}


jb_Promise PressureObserver_observe1(PressureObserver* self , PressureSource * source, PressureObserverOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(source), em_Val_from(options)));
}


jb_Undefined PressureObserver_unobserve(PressureObserver* self , PressureSource * source) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unobserve", em_Val_from(source)));
}


jb_Undefined PressureObserver_disconnect(PressureObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Array PressureObserver_takeRecords(PressureObserver* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}


jb_Array PressureObserver_knownSources(const PressureObserver *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_global("pressureobserver"), em_Val_from("knownSources")));
}

