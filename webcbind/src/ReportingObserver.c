#include <webcbind/ReportingObserver.h>

#include <webcbind/ReportingObserverOptions.h>

DEFINE_EMLITE_TYPE(ReportingObserver, em_Val);


ReportingObserver ReportingObserver_new0(jb_Function * callback) {
        em_Val vv = em_Val_new(em_Val_global("ReportingObserver") , em_Val_from(callback));
        return ReportingObserver_from_val(&vv);
      }


ReportingObserver ReportingObserver_new1(jb_Function * callback, ReportingObserverOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("ReportingObserver") , em_Val_from(callback), em_Val_from(options));
        return ReportingObserver_from_val(&vv);
      }


jb_Undefined ReportingObserver_observe(ReportingObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe"));
}


jb_Undefined ReportingObserver_disconnect(ReportingObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Any ReportingObserver_takeRecords(ReportingObserver* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}

