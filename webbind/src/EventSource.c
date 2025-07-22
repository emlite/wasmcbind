#include <webbind/EventSource.h>


DEFINE_EMLITE_TYPE(EventSource, EventTarget);


EventSource EventSource_new(const jb_USVString* url) : EventTarget(em_Val_global("EventSource").new_(em_Val_from(url))) {
        return EventSource(em_Val_new(em_Val_global("EventSource", em_Val_from(url)));
      }


EventSource EventSource_new(const jb_USVString* url, const jb_Any* eventSourceInitDict) : EventTarget(em_Val_global("EventSource").new_(em_Val_from(url), em_Val_from(eventSourceInitDict))) {
        return EventSource(em_Val_new(em_Val_global("EventSource", em_Val_from(url), em_Val_from(eventSourceInitDict)));
      }


jb_USVString EventSource_url(const EventSource *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "url"));
}


bool EventSource_withCredentials(const EventSource *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "withCredentials"));
}


unsigned short EventSource_readyState(const EventSource *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "readyState"));
}


jb_Any EventSource_onopen(const EventSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onopen"));
}


void EventSource_set_onopen(EventSource* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onopen", value);
}


jb_Any EventSource_onmessage(const EventSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void EventSource_set_onmessage(EventSource* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


jb_Any EventSource_onerror(const EventSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void EventSource_set_onerror(EventSource* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Undefined EventSource_close(EventSource* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}

