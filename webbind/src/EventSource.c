#include <webbind/EventSource.h>

#include <webbind/EventSourceInit.h>

DEFINE_EMLITE_TYPE(EventSource, EventTarget);


EventSource EventSource_new0(jb_String * url) {
        em_Val vv = em_Val_new(em_Val_global("EventSource") , em_Val_from(url));
        return EventSource_from_val(&vv);
      }


EventSource EventSource_new1(jb_String * url, EventSourceInit * eventSourceInitDict) {
        em_Val vv = em_Val_new(em_Val_global("EventSource") , em_Val_from(url), em_Val_from(eventSourceInitDict));
        return EventSource_from_val(&vv);
      }


jb_String EventSource_url(const EventSource *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("url")));
}


bool EventSource_withCredentials(const EventSource *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("withCredentials")));
}


unsigned short EventSource_readyState(const EventSource *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readyState")));
}


jb_Any EventSource_onopen(const EventSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onopen")));
}


void EventSource_set_onopen(EventSource* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onopen"), em_Val_from(value));
}


jb_Any EventSource_onmessage(const EventSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void EventSource_set_onmessage(EventSource* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Any EventSource_onerror(const EventSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void EventSource_set_onerror(EventSource* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Undefined EventSource_close(EventSource* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}

