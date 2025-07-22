#include <webbind/AnalyserNode.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(AnalyserNode, AudioNode);


AnalyserNode AnalyserNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("AnalyserNode") , em_Val_from(context));
        return AnalyserNode_from_val(&vv);
      }


AnalyserNode AnalyserNode_new1(BaseAudioContext * context, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("AnalyserNode") , em_Val_from(context), em_Val_from(options));
        return AnalyserNode_from_val(&vv);
      }


jb_Undefined AnalyserNode_getFloatFrequencyData(AnalyserNode* self , jb_Float32Array * array) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getFloatFrequencyData", em_Val_from(array)));
}


jb_Undefined AnalyserNode_getByteFrequencyData(AnalyserNode* self , jb_Uint8Array * array) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getByteFrequencyData", em_Val_from(array)));
}


jb_Undefined AnalyserNode_getFloatTimeDomainData(AnalyserNode* self , jb_Float32Array * array) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getFloatTimeDomainData", em_Val_from(array)));
}


jb_Undefined AnalyserNode_getByteTimeDomainData(AnalyserNode* self , jb_Uint8Array * array) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getByteTimeDomainData", em_Val_from(array)));
}


unsigned long AnalyserNode_fftSize(const AnalyserNode *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("fftSize")));
}


void AnalyserNode_set_fftSize(AnalyserNode* self, unsigned long value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("fftSize"), em_Val_from(value));
}


unsigned long AnalyserNode_frequencyBinCount(const AnalyserNode *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("frequencyBinCount")));
}


double AnalyserNode_minDecibels(const AnalyserNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("minDecibels")));
}


void AnalyserNode_set_minDecibels(AnalyserNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("minDecibels"), em_Val_from(value));
}


double AnalyserNode_maxDecibels(const AnalyserNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("maxDecibels")));
}


void AnalyserNode_set_maxDecibels(AnalyserNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("maxDecibels"), em_Val_from(value));
}


double AnalyserNode_smoothingTimeConstant(const AnalyserNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("smoothingTimeConstant")));
}


void AnalyserNode_set_smoothingTimeConstant(AnalyserNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("smoothingTimeConstant"), em_Val_from(value));
}

