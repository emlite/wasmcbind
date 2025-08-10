#include <webbind/GainNode.h>

#include <webbind/BaseAudioContext.h>
#include <webbind/GainOptions.h>
#include <webbind/AudioParam.h>

DEFINE_EMLITE_TYPE(GainNode, AudioNode);


GainNode GainNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("GainNode") , em_Val_from(context));
        return GainNode_from_val(&vv);
      }


GainNode GainNode_new1(BaseAudioContext * context, GainOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("GainNode") , em_Val_from(context), em_Val_from(options));
        return GainNode_from_val(&vv);
      }


AudioParam GainNode_gain(const GainNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("gain")));
}

