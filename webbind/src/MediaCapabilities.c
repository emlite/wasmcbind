#include <webbind/MediaCapabilities.h>

#include <webbind/MediaCapabilitiesDecodingInfo.h>
#include <webbind/MediaDecodingConfiguration.h>
#include <webbind/MediaCapabilitiesEncodingInfo.h>
#include <webbind/MediaEncodingConfiguration.h>

DEFINE_EMLITE_TYPE(MediaCapabilities, em_Val);


jb_Promise MediaCapabilities_decodingInfo(MediaCapabilities* self , MediaDecodingConfiguration * configuration) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "decodingInfo", em_Val_from(configuration)));
}


jb_Promise MediaCapabilities_encodingInfo(MediaCapabilities* self , MediaEncodingConfiguration * configuration) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "encodingInfo", em_Val_from(configuration)));
}

