#include <webbind/DynamicsCompressorNode.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(DynamicsCompressorNode, AudioNode);


DynamicsCompressorNode DynamicsCompressorNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("DynamicsCompressorNode").new_(em_Val_from(context))) {
        return DynamicsCompressorNode(em_Val_new(em_Val_global("DynamicsCompressorNode", em_Val_from(context)));
      }


DynamicsCompressorNode DynamicsCompressorNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("DynamicsCompressorNode").new_(em_Val_from(context), em_Val_from(options))) {
        return DynamicsCompressorNode(em_Val_new(em_Val_global("DynamicsCompressorNode", em_Val_from(context), em_Val_from(options)));
      }


AudioParam DynamicsCompressorNode_threshold(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "threshold"));
}


AudioParam DynamicsCompressorNode_knee(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "knee"));
}


AudioParam DynamicsCompressorNode_ratio(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "ratio"));
}


float DynamicsCompressorNode_reduction(const DynamicsCompressorNode *self) {
    return em_Val_as(float, em_Val_get(AudioNode_as_val(self->inner), "reduction"));
}


AudioParam DynamicsCompressorNode_attack(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "attack"));
}


AudioParam DynamicsCompressorNode_release(const DynamicsCompressorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "release"));
}

