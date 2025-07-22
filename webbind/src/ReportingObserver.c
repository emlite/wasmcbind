#include <webbind/ReportingObserver.h>


DEFINE_EMLITE_TYPE(ReportingObserver, em_Val);


ReportingObserver ReportingObserver_new(const jb_Function* callback) : em_Val(em_Val_global("ReportingObserver").new_(em_Val_from(callback))) {
        return ReportingObserver(em_Val_new(em_Val_global("ReportingObserver", em_Val_from(callback)));
      }


ReportingObserver ReportingObserver_new(const jb_Function* callback, const jb_Any* options) : em_Val(em_Val_global("ReportingObserver").new_(em_Val_from(callback), em_Val_from(options))) {
        return ReportingObserver(em_Val_new(em_Val_global("ReportingObserver", em_Val_from(callback), em_Val_from(options)));
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

