#include <webbind/WebGLContextEvent.h>


DEFINE_EMLITE_TYPE(WebGLContextEvent, Event);


WebGLContextEvent WebGLContextEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("WebGLContextEvent") , em_Val_from(type));
        return WebGLContextEvent_from_val(&vv);
      }


WebGLContextEvent WebGLContextEvent_new1(jb_DOMString * type, jb_Any * eventInit) {
        em_Val vv = em_Val_new(em_Val_global("WebGLContextEvent") , em_Val_from(type), em_Val_from(eventInit));
        return WebGLContextEvent_from_val(&vv);
      }


jb_DOMString WebGLContextEvent_statusMessage(const WebGLContextEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("statusMessage")));
}

