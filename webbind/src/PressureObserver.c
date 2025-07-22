#include <webbind/PressureObserver.h>
#include <webbind/PressureRecord.h>


DEFINE_EMLITE_TYPE(PressureObserverOptions, em_Val);


unsigned long PressureObserverOptions_sampleInterval(const PressureObserverOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "sampleInterval"));
}


void PressureObserverOptions_set_sampleInterval(PressureObserverOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "sampleInterval", value);
}

DEFINE_EMLITE_TYPE(PressureObserver, em_Val);


PressureObserver PressureObserver_new(const jb_Function* callback) : em_Val(em_Val_global("PressureObserver").new_(em_Val_from(callback))) {
        return PressureObserver(em_Val_new(em_Val_global("PressureObserver", em_Val_from(callback)));
      }


jb_Promise PressureObserver_observe(PressureObserver* self , const PressureSource* source) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(source)));
}


jb_Promise PressureObserver_observe(PressureObserver* self , const PressureSource* source, const PressureObserverOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(source), em_Val_from(options)));
}


jb_Undefined PressureObserver_unobserve(PressureObserver* self , const PressureSource* source) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unobserve", em_Val_from(source)));
}


jb_Undefined PressureObserver_disconnect(PressureObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Sequence PressureObserver_takeRecords(PressureObserver* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}


jb_FrozenArray PressureObserver_knownSources() {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_global("pressureobserver", "knownSources")));
}

