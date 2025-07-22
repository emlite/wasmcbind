#include <webbind/WaveShaperNode.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(WaveShaperNode, AudioNode);


WaveShaperNode WaveShaperNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("WaveShaperNode").new_(em_Val_from(context))) {
        return WaveShaperNode(em_Val_new(em_Val_global("WaveShaperNode", em_Val_from(context)));
      }


WaveShaperNode WaveShaperNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("WaveShaperNode").new_(em_Val_from(context), em_Val_from(options))) {
        return WaveShaperNode(em_Val_new(em_Val_global("WaveShaperNode", em_Val_from(context), em_Val_from(options)));
      }


jb_Float32Array WaveShaperNode_curve(const WaveShaperNode *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(AudioNode_as_val(self->inner), "curve"));
}


void WaveShaperNode_set_curve(WaveShaperNode* self, const jb_Float32Array* value) {
    em_Val_set(AudioNode_as_val(self->inner), "curve", value);
}


OverSampleType WaveShaperNode_oversample(const WaveShaperNode *self) {
    return em_Val_as(OverSampleType, em_Val_get(AudioNode_as_val(self->inner), "oversample"));
}


void WaveShaperNode_set_oversample(WaveShaperNode* self, const OverSampleType* value) {
    em_Val_set(AudioNode_as_val(self->inner), "oversample", value);
}

