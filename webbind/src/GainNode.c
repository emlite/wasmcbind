#include <webbind/GainNode.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(GainNode, AudioNode);


GainNode GainNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("GainNode").new_(em_Val_from(context))) {
        return GainNode(em_Val_new(em_Val_global("GainNode", em_Val_from(context)));
      }


GainNode GainNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("GainNode").new_(em_Val_from(context), em_Val_from(options))) {
        return GainNode(em_Val_new(em_Val_global("GainNode", em_Val_from(context), em_Val_from(options)));
      }


AudioParam GainNode_gain(const GainNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "gain"));
}

