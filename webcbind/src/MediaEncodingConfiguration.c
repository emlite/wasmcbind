#include <webcbind/MediaEncodingConfiguration.h>

DEFINE_EMLITE_TYPE(MediaEncodingConfiguration, MediaConfiguration);


MediaEncodingType MediaEncodingConfiguration_type(const MediaEncodingConfiguration *self) {
    return em_Val_as(MediaEncodingType, em_Val_get(MediaConfiguration_as_val(self->inner), em_Val_from("type")));
}


void MediaEncodingConfiguration_set_type(MediaEncodingConfiguration* self, MediaEncodingType * value) {
    em_Val_set(MediaConfiguration_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


MediaEncodingConfiguration MediaEncodingConfiguration_new() {
    em_Val obj = em_Val_object();
    return MediaEncodingConfiguration_from_val(&obj);
}

