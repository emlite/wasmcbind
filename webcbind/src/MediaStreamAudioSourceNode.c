#include <webcbind/MediaStreamAudioSourceNode.h>

#include <webcbind/AudioContext.h>
#include <webcbind/MediaStreamAudioSourceOptions.h>
#include <webcbind/MediaStream.h>

DEFINE_EMLITE_TYPE(MediaStreamAudioSourceNode, AudioNode);


MediaStreamAudioSourceNode MediaStreamAudioSourceNode_new(AudioContext * context, MediaStreamAudioSourceOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("MediaStreamAudioSourceNode") , em_Val_from(context), em_Val_from(options));
        return MediaStreamAudioSourceNode_from_val(&vv);
      }


MediaStream MediaStreamAudioSourceNode_mediaStream(const MediaStreamAudioSourceNode *self) {
    return em_Val_as(MediaStream, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("mediaStream")));
}

