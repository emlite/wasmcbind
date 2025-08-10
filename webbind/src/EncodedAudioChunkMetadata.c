#include <webbind/EncodedAudioChunkMetadata.h>

DEFINE_EMLITE_TYPE(EncodedAudioChunkMetadata, em_Val);


AudioDecoderConfig EncodedAudioChunkMetadata_decoderConfig(const EncodedAudioChunkMetadata *self) {
    return em_Val_as(AudioDecoderConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("decoderConfig")));
}


void EncodedAudioChunkMetadata_set_decoderConfig(EncodedAudioChunkMetadata* self, AudioDecoderConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("decoderConfig"), em_Val_from(value));
}


EncodedAudioChunkMetadata EncodedAudioChunkMetadata_new() {
    em_Val obj = em_Val_object();
    return EncodedAudioChunkMetadata_from_val(&obj);
}

