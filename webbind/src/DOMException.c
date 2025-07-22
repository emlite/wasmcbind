#include <webbind/DOMException.h>


DEFINE_EMLITE_TYPE(DOMException, em_Val);


DOMException DOMException_new0() {
        em_Val vv = em_Val_new(em_Val_global("DOMException") );
        return DOMException_from_val(&vv);
      }


DOMException DOMException_new1(jb_DOMString * message) {
        em_Val vv = em_Val_new(em_Val_global("DOMException") , em_Val_from(message));
        return DOMException_from_val(&vv);
      }


DOMException DOMException_new2(jb_DOMString * message, jb_DOMString * name) {
        em_Val vv = em_Val_new(em_Val_global("DOMException") , em_Val_from(message), em_Val_from(name));
        return DOMException_from_val(&vv);
      }


jb_DOMString DOMException_name(const DOMException *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


jb_DOMString DOMException_message(const DOMException *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("message")));
}


unsigned short DOMException_code(const DOMException *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("code")));
}

