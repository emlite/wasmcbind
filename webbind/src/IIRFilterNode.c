#include <webbind/IIRFilterNode.h>

#include <webbind/BaseAudioContext.h>
#include <webbind/IIRFilterOptions.h>

DEFINE_EMLITE_TYPE(IIRFilterNode, AudioNode);


IIRFilterNode IIRFilterNode_new(BaseAudioContext * context, IIRFilterOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("IIRFilterNode") , em_Val_from(context), em_Val_from(options));
        return IIRFilterNode_from_val(&vv);
      }


jb_Undefined IIRFilterNode_getFrequencyResponse(IIRFilterNode* self , jb_Float32Array * frequencyHz, jb_Float32Array * magResponse, jb_Float32Array * phaseResponse) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getFrequencyResponse", em_Val_from(frequencyHz), em_Val_from(magResponse), em_Val_from(phaseResponse)));
}

