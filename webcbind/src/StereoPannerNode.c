#include <webcbind/StereoPannerNode.h>

#include <webcbind/BaseAudioContext.h>
#include <webcbind/StereoPannerOptions.h>
#include <webcbind/AudioParam.h>

DEFINE_EMLITE_TYPE(StereoPannerNode, AudioNode);


StereoPannerNode StereoPannerNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("StereoPannerNode") , em_Val_from(context));
        return StereoPannerNode_from_val(&vv);
      }


StereoPannerNode StereoPannerNode_new1(BaseAudioContext * context, StereoPannerOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("StereoPannerNode") , em_Val_from(context), em_Val_from(options));
        return StereoPannerNode_from_val(&vv);
      }


AudioParam StereoPannerNode_pan(const StereoPannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("pan")));
}

