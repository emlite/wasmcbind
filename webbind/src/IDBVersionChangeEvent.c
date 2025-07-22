#include <webbind/IDBVersionChangeEvent.h>


DEFINE_EMLITE_TYPE(IDBVersionChangeEvent, Event);


IDBVersionChangeEvent IDBVersionChangeEvent_new(const jb_DOMString* type) : Event(em_Val_global("IDBVersionChangeEvent").new_(em_Val_from(type))) {
        return IDBVersionChangeEvent(em_Val_new(em_Val_global("IDBVersionChangeEvent", em_Val_from(type)));
      }


IDBVersionChangeEvent IDBVersionChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("IDBVersionChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return IDBVersionChangeEvent(em_Val_new(em_Val_global("IDBVersionChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


long long IDBVersionChangeEvent_oldVersion(const IDBVersionChangeEvent *self) {
    return em_Val_as(long long, em_Val_get(Event_as_val(self->inner), "oldVersion"));
}


long long IDBVersionChangeEvent_newVersion(const IDBVersionChangeEvent *self) {
    return em_Val_as(long long, em_Val_get(Event_as_val(self->inner), "newVersion"));
}

