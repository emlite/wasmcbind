#include <webcbind/AudioNode.h>

#include <webcbind/AudioParam.h>
#include <webcbind/BaseAudioContext.h>

DEFINE_EMLITE_TYPE(AudioNode, EventTarget);


jb_Undefined AudioNode_connect0(AudioNode* self , AudioParam * destinationParam) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "connect", em_Val_from(destinationParam)));
}


jb_Undefined AudioNode_connect1(AudioNode* self , AudioParam * destinationParam, unsigned long output) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "connect", em_Val_from(destinationParam), em_Val_from(output)));
}


jb_Undefined AudioNode_disconnect(AudioNode* self , AudioParam * destinationParam, unsigned long output) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "disconnect", em_Val_from(destinationParam), em_Val_from(output)));
}


BaseAudioContext AudioNode_context(const AudioNode *self) {
    return em_Val_as(BaseAudioContext, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("context")));
}


unsigned long AudioNode_numberOfInputs(const AudioNode *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("numberOfInputs")));
}


unsigned long AudioNode_numberOfOutputs(const AudioNode *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("numberOfOutputs")));
}


unsigned long AudioNode_channelCount(const AudioNode *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("channelCount")));
}


void AudioNode_set_channelCount(AudioNode* self, unsigned long value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("channelCount"), em_Val_from(value));
}


ChannelCountMode AudioNode_channelCountMode(const AudioNode *self) {
    return em_Val_as(ChannelCountMode, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("channelCountMode")));
}


void AudioNode_set_channelCountMode(AudioNode* self, ChannelCountMode * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("channelCountMode"), em_Val_from(value));
}


ChannelInterpretation AudioNode_channelInterpretation(const AudioNode *self) {
    return em_Val_as(ChannelInterpretation, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("channelInterpretation")));
}


void AudioNode_set_channelInterpretation(AudioNode* self, ChannelInterpretation * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("channelInterpretation"), em_Val_from(value));
}

