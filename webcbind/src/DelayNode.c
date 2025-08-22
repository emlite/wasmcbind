#include <webcbind/DelayNode.h>

#include <webcbind/BaseAudioContext.h>
#include <webcbind/DelayOptions.h>
#include <webcbind/AudioParam.h>

DEFINE_EMLITE_TYPE(DelayNode, AudioNode);


DelayNode DelayNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("DelayNode") , em_Val_from(context));
        return DelayNode_from_val(&vv);
      }


DelayNode DelayNode_new1(BaseAudioContext * context, DelayOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("DelayNode") , em_Val_from(context), em_Val_from(options));
        return DelayNode_from_val(&vv);
      }


AudioParam DelayNode_delayTime(const DelayNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("delayTime")));
}

