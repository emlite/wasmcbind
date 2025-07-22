#include <webbind/MediaStreamTrackAudioSourceNode.h>
#include <webbind/AudioContext.h>


DEFINE_EMLITE_TYPE(MediaStreamTrackAudioSourceNode, AudioNode);


MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode_new(const AudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("MediaStreamTrackAudioSourceNode").new_(em_Val_from(context), em_Val_from(options))) {
        return MediaStreamTrackAudioSourceNode(em_Val_new(em_Val_global("MediaStreamTrackAudioSourceNode", em_Val_from(context), em_Val_from(options)));
      }

