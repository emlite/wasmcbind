#include <webbind/BiquadFilterNode.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(BiquadFilterNode, AudioNode);


BiquadFilterNode BiquadFilterNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("BiquadFilterNode").new_(em_Val_from(context))) {
        return BiquadFilterNode(em_Val_new(em_Val_global("BiquadFilterNode", em_Val_from(context)));
      }


BiquadFilterNode BiquadFilterNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("BiquadFilterNode").new_(em_Val_from(context), em_Val_from(options))) {
        return BiquadFilterNode(em_Val_new(em_Val_global("BiquadFilterNode", em_Val_from(context), em_Val_from(options)));
      }


BiquadFilterType BiquadFilterNode_type(const BiquadFilterNode *self) {
    return em_Val_as(BiquadFilterType, em_Val_get(AudioNode_as_val(self->inner), "type"));
}


void BiquadFilterNode_set_type(BiquadFilterNode* self, const BiquadFilterType* value) {
    em_Val_set(AudioNode_as_val(self->inner), "type", value);
}


AudioParam BiquadFilterNode_frequency(const BiquadFilterNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "frequency"));
}


AudioParam BiquadFilterNode_detune(const BiquadFilterNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "detune"));
}


AudioParam BiquadFilterNode_Q(const BiquadFilterNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "Q"));
}


AudioParam BiquadFilterNode_gain(const BiquadFilterNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "gain"));
}


jb_Undefined BiquadFilterNode_getFrequencyResponse(BiquadFilterNode* self , const jb_Float32Array* frequencyHz, const jb_Float32Array* magResponse, const jb_Float32Array* phaseResponse) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getFrequencyResponse", em_Val_from(frequencyHz), em_Val_from(magResponse), em_Val_from(phaseResponse)));
}

