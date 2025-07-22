#include <webbind/OscillatorNode.h>
#include <webbind/AudioParam.h>
#include <webbind/PeriodicWave.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(OscillatorNode, AudioScheduledSourceNode);


OscillatorNode OscillatorNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("OscillatorNode") , em_Val_from(context));
        return OscillatorNode_from_val(&vv);
      }


OscillatorNode OscillatorNode_new1(BaseAudioContext * context, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("OscillatorNode") , em_Val_from(context), em_Val_from(options));
        return OscillatorNode_from_val(&vv);
      }


OscillatorType OscillatorNode_type(const OscillatorNode *self) {
    return em_Val_as(OscillatorType, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("type")));
}


void OscillatorNode_set_type(OscillatorNode* self, OscillatorType * value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


AudioParam OscillatorNode_frequency(const OscillatorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("frequency")));
}


AudioParam OscillatorNode_detune(const OscillatorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("detune")));
}


jb_Undefined OscillatorNode_setPeriodicWave(OscillatorNode* self , PeriodicWave * periodicWave) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "setPeriodicWave", em_Val_from(periodicWave)));
}

