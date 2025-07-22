#include <webbind/HashChangeEvent.h>


DEFINE_EMLITE_TYPE(HashChangeEvent, Event);


HashChangeEvent HashChangeEvent_new(const jb_DOMString* type) : Event(em_Val_global("HashChangeEvent").new_(em_Val_from(type))) {
        return HashChangeEvent(em_Val_new(em_Val_global("HashChangeEvent", em_Val_from(type)));
      }


HashChangeEvent HashChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("HashChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return HashChangeEvent(em_Val_new(em_Val_global("HashChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_USVString HashChangeEvent_oldURL(const HashChangeEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "oldURL"));
}


jb_USVString HashChangeEvent_newURL(const HashChangeEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "newURL"));
}

