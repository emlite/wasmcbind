#include <webbind/MediaElementAudioSourceNode.h>

#include <webbind/AudioContext.h>
#include <webbind/MediaElementAudioSourceOptions.h>
#include <webbind/HTMLMediaElement.h>

DEFINE_EMLITE_TYPE(MediaElementAudioSourceNode, AudioNode);


MediaElementAudioSourceNode MediaElementAudioSourceNode_new(AudioContext * context, MediaElementAudioSourceOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("MediaElementAudioSourceNode") , em_Val_from(context), em_Val_from(options));
        return MediaElementAudioSourceNode_from_val(&vv);
      }


HTMLMediaElement MediaElementAudioSourceNode_mediaElement(const MediaElementAudioSourceNode *self) {
    return em_Val_as(HTMLMediaElement, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("mediaElement")));
}

