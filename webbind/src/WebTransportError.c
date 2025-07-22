#include <webbind/WebTransportError.h>


DEFINE_EMLITE_TYPE(WebTransportError, DOMException);


WebTransportError WebTransportError_new() : DOMException(em_Val_global("WebTransportError").new_()) {
        return WebTransportError(em_Val_new(em_Val_global("WebTransportError", ));
      }


WebTransportError WebTransportError_new(const jb_DOMString* message) : DOMException(em_Val_global("WebTransportError").new_(em_Val_from(message))) {
        return WebTransportError(em_Val_new(em_Val_global("WebTransportError", em_Val_from(message)));
      }


WebTransportError WebTransportError_new(const jb_DOMString* message, const jb_Any* options) : DOMException(em_Val_global("WebTransportError").new_(em_Val_from(message), em_Val_from(options))) {
        return WebTransportError(em_Val_new(em_Val_global("WebTransportError", em_Val_from(message), em_Val_from(options)));
      }


WebTransportErrorSource WebTransportError_source(const WebTransportError *self) {
    return em_Val_as(WebTransportErrorSource, em_Val_get(DOMException_as_val(self->inner), "source"));
}


unsigned long WebTransportError_streamErrorCode(const WebTransportError *self) {
    return em_Val_as(unsigned long, em_Val_get(DOMException_as_val(self->inner), "streamErrorCode"));
}

