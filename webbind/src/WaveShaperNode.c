#include <webbind/WaveShaperNode.h>

#include <webbind/BaseAudioContext.h>
#include <webbind/WaveShaperOptions.h>

DEFINE_EMLITE_TYPE(WaveShaperNode, AudioNode);


WaveShaperNode WaveShaperNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("WaveShaperNode") , em_Val_from(context));
        return WaveShaperNode_from_val(&vv);
      }


WaveShaperNode WaveShaperNode_new1(BaseAudioContext * context, WaveShaperOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("WaveShaperNode") , em_Val_from(context), em_Val_from(options));
        return WaveShaperNode_from_val(&vv);
      }


jb_Float32Array WaveShaperNode_curve(const WaveShaperNode *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("curve")));
}


void WaveShaperNode_set_curve(WaveShaperNode* self, jb_Float32Array * value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("curve"), em_Val_from(value));
}


OverSampleType WaveShaperNode_oversample(const WaveShaperNode *self) {
    return em_Val_as(OverSampleType, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("oversample")));
}


void WaveShaperNode_set_oversample(WaveShaperNode* self, OverSampleType * value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("oversample"), em_Val_from(value));
}

