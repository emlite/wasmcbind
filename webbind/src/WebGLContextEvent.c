#include <webbind/WebGLContextEvent.h>


DEFINE_EMLITE_TYPE(WebGLContextEvent, Event);


WebGLContextEvent WebGLContextEvent_new(const jb_DOMString* type) : Event(em_Val_global("WebGLContextEvent").new_(em_Val_from(type))) {
        return WebGLContextEvent(em_Val_new(em_Val_global("WebGLContextEvent", em_Val_from(type)));
      }


WebGLContextEvent WebGLContextEvent_new(const jb_DOMString* type, const jb_Any* eventInit) : Event(em_Val_global("WebGLContextEvent").new_(em_Val_from(type), em_Val_from(eventInit))) {
        return WebGLContextEvent(em_Val_new(em_Val_global("WebGLContextEvent", em_Val_from(type), em_Val_from(eventInit)));
      }


jb_DOMString WebGLContextEvent_statusMessage(const WebGLContextEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "statusMessage"));
}

