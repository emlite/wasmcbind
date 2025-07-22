#include <webbind/BiquadFilterNode.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(BiquadFilterNode, AudioNode);


BiquadFilterNode BiquadFilterNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("BiquadFilterNode") , em_Val_from(context));
        return BiquadFilterNode_from_val(&vv);
      }


BiquadFilterNode BiquadFilterNode_new1(BaseAudioContext * context, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("BiquadFilterNode") , em_Val_from(context), em_Val_from(options));
        return BiquadFilterNode_from_val(&vv);
      }


BiquadFilterType BiquadFilterNode_type(const BiquadFilterNode *self) {
    return em_Val_as(BiquadFilterType, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("type")));
}


void BiquadFilterNode_set_type(BiquadFilterNode* self, BiquadFilterType * value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


AudioParam BiquadFilterNode_frequency(const BiquadFilterNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("frequency")));
}


AudioParam BiquadFilterNode_detune(const BiquadFilterNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("detune")));
}


AudioParam BiquadFilterNode_Q(const BiquadFilterNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("Q")));
}


AudioParam BiquadFilterNode_gain(const BiquadFilterNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("gain")));
}


jb_Undefined BiquadFilterNode_getFrequencyResponse(BiquadFilterNode* self , jb_Float32Array * frequencyHz, jb_Float32Array * magResponse, jb_Float32Array * phaseResponse) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getFrequencyResponse", em_Val_from(frequencyHz), em_Val_from(magResponse), em_Val_from(phaseResponse)));
}

