#include <webbind/MediaError.h>


DEFINE_EMLITE_TYPE(MediaError, em_Val);


unsigned short MediaError_code(const MediaError *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("code")));
}


jb_DOMString MediaError_message(const MediaError *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("message")));
}

