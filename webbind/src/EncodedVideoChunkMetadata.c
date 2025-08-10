#include <webbind/EncodedVideoChunkMetadata.h>

DEFINE_EMLITE_TYPE(EncodedVideoChunkMetadata, em_Val);


VideoDecoderConfig EncodedVideoChunkMetadata_decoderConfig(const EncodedVideoChunkMetadata *self) {
    return em_Val_as(VideoDecoderConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("decoderConfig")));
}


void EncodedVideoChunkMetadata_set_decoderConfig(EncodedVideoChunkMetadata* self, VideoDecoderConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("decoderConfig"), em_Val_from(value));
}


SvcOutputMetadata EncodedVideoChunkMetadata_svc(const EncodedVideoChunkMetadata *self) {
    return em_Val_as(SvcOutputMetadata, em_Val_get(em_Val_as_val(self->inner), em_Val_from("svc")));
}


void EncodedVideoChunkMetadata_set_svc(EncodedVideoChunkMetadata* self, SvcOutputMetadata * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("svc"), em_Val_from(value));
}


jb_Any EncodedVideoChunkMetadata_alphaSideData(const EncodedVideoChunkMetadata *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alphaSideData")));
}


void EncodedVideoChunkMetadata_set_alphaSideData(EncodedVideoChunkMetadata* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alphaSideData"), em_Val_from(value));
}


EncodedVideoChunkMetadata EncodedVideoChunkMetadata_new() {
    em_Val obj = em_Val_object();
    return EncodedVideoChunkMetadata_from_val(&obj);
}

