#include <webbind/WebTransportError.h>

#include <webbind/WebTransportErrorOptions.h>

DEFINE_EMLITE_TYPE(WebTransportError, DOMException);


WebTransportError WebTransportError_new0() {
        em_Val vv = em_Val_new(em_Val_global("WebTransportError") );
        return WebTransportError_from_val(&vv);
      }


WebTransportError WebTransportError_new1(jb_String * message) {
        em_Val vv = em_Val_new(em_Val_global("WebTransportError") , em_Val_from(message));
        return WebTransportError_from_val(&vv);
      }


WebTransportError WebTransportError_new2(jb_String * message, WebTransportErrorOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("WebTransportError") , em_Val_from(message), em_Val_from(options));
        return WebTransportError_from_val(&vv);
      }


WebTransportErrorSource WebTransportError_source(const WebTransportError *self) {
    return em_Val_as(WebTransportErrorSource, em_Val_get(DOMException_as_val(self->inner), em_Val_from("source")));
}


unsigned long WebTransportError_streamErrorCode(const WebTransportError *self) {
    return em_Val_as(unsigned long, em_Val_get(DOMException_as_val(self->inner), em_Val_from("streamErrorCode")));
}

