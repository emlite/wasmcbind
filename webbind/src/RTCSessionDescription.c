#include <webbind/RTCSessionDescription.h>
#include <webbind/RTCPeerConnection.h>


DEFINE_EMLITE_TYPE(RTCSessionDescription, em_Val);


RTCSessionDescription RTCSessionDescription_new(const RTCSessionDescriptionInit* descriptionInitDict) : em_Val(em_Val_global("RTCSessionDescription").new_(em_Val_from(descriptionInitDict))) {
        return RTCSessionDescription(em_Val_new(em_Val_global("RTCSessionDescription", em_Val_from(descriptionInitDict)));
      }


RTCSdpType RTCSessionDescription_type(const RTCSessionDescription *self) {
    return em_Val_as(RTCSdpType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


jb_DOMString RTCSessionDescription_sdp(const RTCSessionDescription *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sdp"));
}


RTCSessionDescriptionInit RTCSessionDescription_toJSON(RTCSessionDescription* self ) {
    return em_Val_as(RTCSessionDescriptionInit, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

