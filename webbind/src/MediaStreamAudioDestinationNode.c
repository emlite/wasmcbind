#include <webbind/MediaStreamAudioDestinationNode.h>
#include <webbind/MediaStream.h>
#include <webbind/AudioContext.h>


DEFINE_EMLITE_TYPE(MediaStreamAudioDestinationNode, AudioNode);


MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new0(AudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("MediaStreamAudioDestinationNode") , em_Val_from(context));
        return MediaStreamAudioDestinationNode_from_val(&vv);
      }


MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new1(AudioContext * context, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("MediaStreamAudioDestinationNode") , em_Val_from(context), em_Val_from(options));
        return MediaStreamAudioDestinationNode_from_val(&vv);
      }


MediaStream MediaStreamAudioDestinationNode_stream(const MediaStreamAudioDestinationNode *self) {
    return em_Val_as(MediaStream, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("stream")));
}

