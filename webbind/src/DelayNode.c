#include <webbind/DelayNode.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(DelayNode, AudioNode);


DelayNode DelayNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("DelayNode").new_(em_Val_from(context))) {
        return DelayNode(em_Val_new(em_Val_global("DelayNode", em_Val_from(context)));
      }


DelayNode DelayNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("DelayNode").new_(em_Val_from(context), em_Val_from(options))) {
        return DelayNode(em_Val_new(em_Val_global("DelayNode", em_Val_from(context), em_Val_from(options)));
      }


AudioParam DelayNode_delayTime(const DelayNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "delayTime"));
}

