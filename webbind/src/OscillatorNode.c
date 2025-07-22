#include <webbind/OscillatorNode.h>
#include <webbind/AudioParam.h>
#include <webbind/PeriodicWave.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(OscillatorNode, AudioScheduledSourceNode);


OscillatorNode OscillatorNode_new(const BaseAudioContext* context) : AudioScheduledSourceNode(em_Val_global("OscillatorNode").new_(em_Val_from(context))) {
        return OscillatorNode(em_Val_new(em_Val_global("OscillatorNode", em_Val_from(context)));
      }


OscillatorNode OscillatorNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioScheduledSourceNode(em_Val_global("OscillatorNode").new_(em_Val_from(context), em_Val_from(options))) {
        return OscillatorNode(em_Val_new(em_Val_global("OscillatorNode", em_Val_from(context), em_Val_from(options)));
      }


OscillatorType OscillatorNode_type(const OscillatorNode *self) {
    return em_Val_as(OscillatorType, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "type"));
}


void OscillatorNode_set_type(OscillatorNode* self, const OscillatorType* value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), "type", value);
}


AudioParam OscillatorNode_frequency(const OscillatorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "frequency"));
}


AudioParam OscillatorNode_detune(const OscillatorNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "detune"));
}


jb_Undefined OscillatorNode_setPeriodicWave(OscillatorNode* self , const PeriodicWave* periodicWave) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "setPeriodicWave", em_Val_from(periodicWave)));
}

