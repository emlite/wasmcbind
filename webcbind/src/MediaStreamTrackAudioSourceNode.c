#include <webcbind/MediaStreamTrackAudioSourceNode.h>

#include <webcbind/AudioContext.h>
#include <webcbind/MediaStreamTrackAudioSourceOptions.h>

DEFINE_EMLITE_TYPE(MediaStreamTrackAudioSourceNode, AudioNode);


MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode_new(AudioContext * context, MediaStreamTrackAudioSourceOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("MediaStreamTrackAudioSourceNode") , em_Val_from(context), em_Val_from(options));
        return MediaStreamTrackAudioSourceNode_from_val(&vv);
      }

