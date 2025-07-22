#include <webbind/MediaElementAudioSourceNode.h>
#include <webbind/HTMLMediaElement.h>
#include <webbind/AudioContext.h>


DEFINE_EMLITE_TYPE(MediaElementAudioSourceNode, AudioNode);


MediaElementAudioSourceNode MediaElementAudioSourceNode_new(const AudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("MediaElementAudioSourceNode").new_(em_Val_from(context), em_Val_from(options))) {
        return MediaElementAudioSourceNode(em_Val_new(em_Val_global("MediaElementAudioSourceNode", em_Val_from(context), em_Val_from(options)));
      }


HTMLMediaElement MediaElementAudioSourceNode_mediaElement(const MediaElementAudioSourceNode *self) {
    return em_Val_as(HTMLMediaElement, em_Val_get(AudioNode_as_val(self->inner), "mediaElement"));
}

