#include <webbind/IDBVersionChangeEvent.h>

#include <webbind/IDBVersionChangeEventInit.h>

DEFINE_EMLITE_TYPE(IDBVersionChangeEvent, Event);


IDBVersionChangeEvent IDBVersionChangeEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("IDBVersionChangeEvent") , em_Val_from(type));
        return IDBVersionChangeEvent_from_val(&vv);
      }


IDBVersionChangeEvent IDBVersionChangeEvent_new1(jb_String * type, IDBVersionChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("IDBVersionChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return IDBVersionChangeEvent_from_val(&vv);
      }


long long IDBVersionChangeEvent_oldVersion(const IDBVersionChangeEvent *self) {
    return em_Val_as(long long, em_Val_get(Event_as_val(self->inner), em_Val_from("oldVersion")));
}


long long IDBVersionChangeEvent_newVersion(const IDBVersionChangeEvent *self) {
    return em_Val_as(long long, em_Val_get(Event_as_val(self->inner), em_Val_from("newVersion")));
}

