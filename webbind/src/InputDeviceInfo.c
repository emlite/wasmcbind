#include <webbind/InputDeviceInfo.h>
#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(InputDeviceInfo, MediaDeviceInfo);


MediaTrackCapabilities InputDeviceInfo_getCapabilities(InputDeviceInfo* self ) {
    return em_Val_as(MediaTrackCapabilities, em_Val_call(MediaDeviceInfo_as_val(self->inner), "getCapabilities"));
}

