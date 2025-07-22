#include <webbind/MediaStreamAudioSourceNode.h>
#include <webbind/MediaStream.h>
#include <webbind/AudioContext.h>


DEFINE_EMLITE_TYPE(MediaStreamAudioSourceNode, AudioNode);


MediaStreamAudioSourceNode MediaStreamAudioSourceNode_new(const AudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("MediaStreamAudioSourceNode").new_(em_Val_from(context), em_Val_from(options))) {
        return MediaStreamAudioSourceNode(em_Val_new(em_Val_global("MediaStreamAudioSourceNode", em_Val_from(context), em_Val_from(options)));
      }


MediaStream MediaStreamAudioSourceNode_mediaStream(const MediaStreamAudioSourceNode *self) {
    return em_Val_as(MediaStream, em_Val_get(AudioNode_as_val(self->inner), "mediaStream"));
}

