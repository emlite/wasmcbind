#include <webcbind/HashChangeEvent.h>

#include <webcbind/HashChangeEventInit.h>

DEFINE_EMLITE_TYPE(HashChangeEvent, Event);


HashChangeEvent HashChangeEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("HashChangeEvent") , em_Val_from(type));
        return HashChangeEvent_from_val(&vv);
      }


HashChangeEvent HashChangeEvent_new1(jb_String * type, HashChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("HashChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return HashChangeEvent_from_val(&vv);
      }


jb_String HashChangeEvent_oldURL(const HashChangeEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("oldURL")));
}


jb_String HashChangeEvent_newURL(const HashChangeEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("newURL")));
}

