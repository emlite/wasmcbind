#include <webcbind/VideoConfiguration.h>

DEFINE_EMLITE_TYPE(VideoConfiguration, em_Val);


jb_String VideoConfiguration_contentType(const VideoConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contentType")));
}


void VideoConfiguration_set_contentType(VideoConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contentType"), em_Val_from(value));
}


unsigned long VideoConfiguration_width(const VideoConfiguration *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void VideoConfiguration_set_width(VideoConfiguration* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned long VideoConfiguration_height(const VideoConfiguration *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void VideoConfiguration_set_height(VideoConfiguration* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


long long VideoConfiguration_bitrate(const VideoConfiguration *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitrate")));
}


void VideoConfiguration_set_bitrate(VideoConfiguration* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitrate"), em_Val_from(value));
}


double VideoConfiguration_framerate(const VideoConfiguration *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("framerate")));
}


void VideoConfiguration_set_framerate(VideoConfiguration* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("framerate"), em_Val_from(value));
}


bool VideoConfiguration_hasAlphaChannel(const VideoConfiguration *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hasAlphaChannel")));
}


void VideoConfiguration_set_hasAlphaChannel(VideoConfiguration* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hasAlphaChannel"), em_Val_from(value));
}


HdrMetadataType VideoConfiguration_hdrMetadataType(const VideoConfiguration *self) {
    return em_Val_as(HdrMetadataType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hdrMetadataType")));
}


void VideoConfiguration_set_hdrMetadataType(VideoConfiguration* self, HdrMetadataType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hdrMetadataType"), em_Val_from(value));
}


ColorGamut VideoConfiguration_colorGamut(const VideoConfiguration *self) {
    return em_Val_as(ColorGamut, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorGamut")));
}


void VideoConfiguration_set_colorGamut(VideoConfiguration* self, ColorGamut * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorGamut"), em_Val_from(value));
}


TransferFunction VideoConfiguration_transferFunction(const VideoConfiguration *self) {
    return em_Val_as(TransferFunction, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transferFunction")));
}


void VideoConfiguration_set_transferFunction(VideoConfiguration* self, TransferFunction * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transferFunction"), em_Val_from(value));
}


jb_String VideoConfiguration_scalabilityMode(const VideoConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scalabilityMode")));
}


void VideoConfiguration_set_scalabilityMode(VideoConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scalabilityMode"), em_Val_from(value));
}


bool VideoConfiguration_spatialScalability(const VideoConfiguration *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("spatialScalability")));
}


void VideoConfiguration_set_spatialScalability(VideoConfiguration* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("spatialScalability"), em_Val_from(value));
}


VideoConfiguration VideoConfiguration_new() {
    em_Val obj = em_Val_object();
    return VideoConfiguration_from_val(&obj);
}

