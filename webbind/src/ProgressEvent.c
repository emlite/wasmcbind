#include <webbind/ProgressEvent.h>


DEFINE_EMLITE_TYPE(ProgressEvent, Event);


ProgressEvent ProgressEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("ProgressEvent") , em_Val_from(type));
        return ProgressEvent_from_val(&vv);
      }


ProgressEvent ProgressEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ProgressEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ProgressEvent_from_val(&vv);
      }


bool ProgressEvent_lengthComputable(const ProgressEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("lengthComputable")));
}


double ProgressEvent_loaded(const ProgressEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("loaded")));
}


double ProgressEvent_total(const ProgressEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("total")));
}

