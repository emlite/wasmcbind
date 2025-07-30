#include <webbind/WebGLContextEvent.h>


DEFINE_EMLITE_TYPE(WebGLContextEvent, Event);


WebGLContextEvent WebGLContextEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("WebGLContextEvent") , em_Val_from(type));
        return WebGLContextEvent_from_val(&vv);
      }


WebGLContextEvent WebGLContextEvent_new1(jb_String * type, jb_Any * eventInit) {
        em_Val vv = em_Val_new(em_Val_global("WebGLContextEvent") , em_Val_from(type), em_Val_from(eventInit));
        return WebGLContextEvent_from_val(&vv);
      }


jb_String WebGLContextEvent_statusMessage(const WebGLContextEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("statusMessage")));
}

