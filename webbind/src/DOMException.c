#include <webbind/DOMException.h>


DEFINE_EMLITE_TYPE(DOMException, em_Val);


DOMException DOMException_new() : em_Val(em_Val_global("DOMException").new_()) {
        return DOMException(em_Val_new(em_Val_global("DOMException", ));
      }


DOMException DOMException_new(const jb_DOMString* message) : em_Val(em_Val_global("DOMException").new_(em_Val_from(message))) {
        return DOMException(em_Val_new(em_Val_global("DOMException", em_Val_from(message)));
      }


DOMException DOMException_new(const jb_DOMString* message, const jb_DOMString* name) : em_Val(em_Val_global("DOMException").new_(em_Val_from(message), em_Val_from(name))) {
        return DOMException(em_Val_new(em_Val_global("DOMException", em_Val_from(message), em_Val_from(name)));
      }


jb_DOMString DOMException_name(const DOMException *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


jb_DOMString DOMException_message(const DOMException *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "message"));
}


unsigned short DOMException_code(const DOMException *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "code"));
}

