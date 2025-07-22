#include <webbind/IIRFilterNode.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(IIRFilterNode, AudioNode);


IIRFilterNode IIRFilterNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("IIRFilterNode").new_(em_Val_from(context), em_Val_from(options))) {
        return IIRFilterNode(em_Val_new(em_Val_global("IIRFilterNode", em_Val_from(context), em_Val_from(options)));
      }


jb_Undefined IIRFilterNode_getFrequencyResponse(IIRFilterNode* self , const jb_Float32Array* frequencyHz, const jb_Float32Array* magResponse, const jb_Float32Array* phaseResponse) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getFrequencyResponse", em_Val_from(frequencyHz), em_Val_from(magResponse), em_Val_from(phaseResponse)));
}

