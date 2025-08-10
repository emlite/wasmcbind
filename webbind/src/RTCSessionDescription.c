#include <webbind/RTCSessionDescription.h>

#include <webbind/RTCSessionDescriptionInit.h>

DEFINE_EMLITE_TYPE(RTCSessionDescription, em_Val);


RTCSessionDescription RTCSessionDescription_new(RTCSessionDescriptionInit * descriptionInitDict) {
        em_Val vv = em_Val_new(em_Val_global("RTCSessionDescription") , em_Val_from(descriptionInitDict));
        return RTCSessionDescription_from_val(&vv);
      }


RTCSdpType RTCSessionDescription_type(const RTCSessionDescription *self) {
    return em_Val_as(RTCSdpType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


jb_String RTCSessionDescription_sdp(const RTCSessionDescription *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdp")));
}


RTCSessionDescriptionInit RTCSessionDescription_toJSON(RTCSessionDescription* self ) {
    return em_Val_as(RTCSessionDescriptionInit, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

