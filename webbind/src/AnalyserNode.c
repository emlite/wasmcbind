#include <webbind/AnalyserNode.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(AnalyserNode, AudioNode);


AnalyserNode AnalyserNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("AnalyserNode").new_(em_Val_from(context))) {
        return AnalyserNode(em_Val_new(em_Val_global("AnalyserNode", em_Val_from(context)));
      }


AnalyserNode AnalyserNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("AnalyserNode").new_(em_Val_from(context), em_Val_from(options))) {
        return AnalyserNode(em_Val_new(em_Val_global("AnalyserNode", em_Val_from(context), em_Val_from(options)));
      }


jb_Undefined AnalyserNode_getFloatFrequencyData(AnalyserNode* self , const jb_Float32Array* array) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getFloatFrequencyData", em_Val_from(array)));
}


jb_Undefined AnalyserNode_getByteFrequencyData(AnalyserNode* self , const jb_Uint8Array* array) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getByteFrequencyData", em_Val_from(array)));
}


jb_Undefined AnalyserNode_getFloatTimeDomainData(AnalyserNode* self , const jb_Float32Array* array) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getFloatTimeDomainData", em_Val_from(array)));
}


jb_Undefined AnalyserNode_getByteTimeDomainData(AnalyserNode* self , const jb_Uint8Array* array) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "getByteTimeDomainData", em_Val_from(array)));
}


unsigned long AnalyserNode_fftSize(const AnalyserNode *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNode_as_val(self->inner), "fftSize"));
}


void AnalyserNode_set_fftSize(AnalyserNode* self, unsigned long value) {
    em_Val_set(AudioNode_as_val(self->inner), "fftSize", value);
}


unsigned long AnalyserNode_frequencyBinCount(const AnalyserNode *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNode_as_val(self->inner), "frequencyBinCount"));
}


double AnalyserNode_minDecibels(const AnalyserNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), "minDecibels"));
}


void AnalyserNode_set_minDecibels(AnalyserNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), "minDecibels", value);
}


double AnalyserNode_maxDecibels(const AnalyserNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), "maxDecibels"));
}


void AnalyserNode_set_maxDecibels(AnalyserNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), "maxDecibels", value);
}


double AnalyserNode_smoothingTimeConstant(const AnalyserNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), "smoothingTimeConstant"));
}


void AnalyserNode_set_smoothingTimeConstant(AnalyserNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), "smoothingTimeConstant", value);
}

