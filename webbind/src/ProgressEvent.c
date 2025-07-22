#include <webbind/ProgressEvent.h>


DEFINE_EMLITE_TYPE(ProgressEvent, Event);


ProgressEvent ProgressEvent_new(const jb_DOMString* type) : Event(em_Val_global("ProgressEvent").new_(em_Val_from(type))) {
        return ProgressEvent(em_Val_new(em_Val_global("ProgressEvent", em_Val_from(type)));
      }


ProgressEvent ProgressEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("ProgressEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return ProgressEvent(em_Val_new(em_Val_global("ProgressEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


bool ProgressEvent_lengthComputable(const ProgressEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "lengthComputable"));
}


double ProgressEvent_loaded(const ProgressEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), "loaded"));
}


double ProgressEvent_total(const ProgressEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), "total"));
}

