#include <webbind/DynamicsCompressorNode.h>

#include <webbind/BaseAudioContext.h>
#include <webbind/DynamicsCompressorOptions.h>
#include <webbind/AudioParam.h>

DEFINE_EMLITE_TYPE(DynamicsCompressorNode, AudioNode);


DynamicsCompressorNode DynamicsCompressorNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("DynamicsCompressorNode") , em_Val_from(context));
        return DynamicsCompressorNode_from_val(&vv);
      }


DynamicsCompressorNode DynamicsCompressorNode_new1(BaseAudioContext * context, DynamicsCompressorOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("DynamicsCompressorNode") , em_Val_from(context), em_Val_from(options));
        return DynamicsCompressorNode_from_val(&vv);
      }


AudioParam DynamicsCompressorNode_threshold(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("threshold")));
}


AudioParam DynamicsCompressorNode_knee(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("knee")));
}


AudioParam DynamicsCompressorNode_ratio(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("ratio")));
}


float DynamicsCompressorNode_reduction(const DynamicsCompressorNode *self) {
    return em_Val_as(float, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("reduction")));
}


AudioParam DynamicsCompressorNode_attack(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("attack")));
}


AudioParam DynamicsCompressorNode_release(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("release")));
}

