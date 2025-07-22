#include <webbind/StereoPannerNode.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(StereoPannerNode, AudioNode);


StereoPannerNode StereoPannerNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("StereoPannerNode").new_(em_Val_from(context))) {
        return StereoPannerNode(em_Val_new(em_Val_global("StereoPannerNode", em_Val_from(context)));
      }


StereoPannerNode StereoPannerNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("StereoPannerNode").new_(em_Val_from(context), em_Val_from(options))) {
        return StereoPannerNode(em_Val_new(em_Val_global("StereoPannerNode", em_Val_from(context), em_Val_from(options)));
      }


AudioParam StereoPannerNode_pan(const StereoPannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "pan"));
}

