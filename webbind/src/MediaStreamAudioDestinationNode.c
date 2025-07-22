#include <webbind/MediaStreamAudioDestinationNode.h>
#include <webbind/MediaStream.h>
#include <webbind/AudioContext.h>


DEFINE_EMLITE_TYPE(MediaStreamAudioDestinationNode, AudioNode);


MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new(const AudioContext* context) : AudioNode(em_Val_global("MediaStreamAudioDestinationNode").new_(em_Val_from(context))) {
        return MediaStreamAudioDestinationNode(em_Val_new(em_Val_global("MediaStreamAudioDestinationNode", em_Val_from(context)));
      }


MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new(const AudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("MediaStreamAudioDestinationNode").new_(em_Val_from(context), em_Val_from(options))) {
        return MediaStreamAudioDestinationNode(em_Val_new(em_Val_global("MediaStreamAudioDestinationNode", em_Val_from(context), em_Val_from(options)));
      }


MediaStream MediaStreamAudioDestinationNode_stream(const MediaStreamAudioDestinationNode *self) {
    return em_Val_as(MediaStream, em_Val_get(AudioNode_as_val(self->inner), "stream"));
}

