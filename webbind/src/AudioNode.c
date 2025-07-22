#include <webbind/AudioNode.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(AudioNode, EventTarget);


jb_Undefined AudioNode_connect(AudioNode* self , const AudioParam* destinationParam) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "connect", em_Val_from(destinationParam)));
}


jb_Undefined AudioNode_connect(AudioNode* self , const AudioParam* destinationParam, unsigned long output) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "connect", em_Val_from(destinationParam), em_Val_from(output)));
}


jb_Undefined AudioNode_disconnect(AudioNode* self , const AudioParam* destinationParam, unsigned long output) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "disconnect", em_Val_from(destinationParam), em_Val_from(output)));
}


BaseAudioContext AudioNode_context(const AudioNode *self) {
    return em_Val_as(BaseAudioContext, em_Val_get(EventTarget_as_val(self->inner), "context"));
}


unsigned long AudioNode_numberOfInputs(const AudioNode *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "numberOfInputs"));
}


unsigned long AudioNode_numberOfOutputs(const AudioNode *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "numberOfOutputs"));
}


unsigned long AudioNode_channelCount(const AudioNode *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "channelCount"));
}


void AudioNode_set_channelCount(AudioNode* self, unsigned long value) {
    em_Val_set(EventTarget_as_val(self->inner), "channelCount", value);
}


ChannelCountMode AudioNode_channelCountMode(const AudioNode *self) {
    return em_Val_as(ChannelCountMode, em_Val_get(EventTarget_as_val(self->inner), "channelCountMode"));
}


void AudioNode_set_channelCountMode(AudioNode* self, const ChannelCountMode* value) {
    em_Val_set(EventTarget_as_val(self->inner), "channelCountMode", value);
}


ChannelInterpretation AudioNode_channelInterpretation(const AudioNode *self) {
    return em_Val_as(ChannelInterpretation, em_Val_get(EventTarget_as_val(self->inner), "channelInterpretation"));
}


void AudioNode_set_channelInterpretation(AudioNode* self, const ChannelInterpretation* value) {
    em_Val_set(EventTarget_as_val(self->inner), "channelInterpretation", value);
}

