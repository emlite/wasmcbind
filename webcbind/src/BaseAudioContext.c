#include <webcbind/BaseAudioContext.h>

#include <webcbind/AudioDestinationNode.h>
#include <webcbind/AudioListener.h>
#include <webcbind/AudioWorklet.h>
#include <webcbind/AnalyserNode.h>
#include <webcbind/BiquadFilterNode.h>
#include <webcbind/AudioBuffer.h>
#include <webcbind/AudioBufferSourceNode.h>
#include <webcbind/ChannelMergerNode.h>
#include <webcbind/ChannelSplitterNode.h>
#include <webcbind/ConstantSourceNode.h>
#include <webcbind/ConvolverNode.h>
#include <webcbind/DelayNode.h>
#include <webcbind/DynamicsCompressorNode.h>
#include <webcbind/GainNode.h>
#include <webcbind/IIRFilterNode.h>
#include <webcbind/OscillatorNode.h>
#include <webcbind/PannerNode.h>
#include <webcbind/PeriodicWave.h>
#include <webcbind/PeriodicWaveConstraints.h>
#include <webcbind/ScriptProcessorNode.h>
#include <webcbind/StereoPannerNode.h>
#include <webcbind/WaveShaperNode.h>

DEFINE_EMLITE_TYPE(BaseAudioContext, EventTarget);


AudioDestinationNode BaseAudioContext_destination(const BaseAudioContext *self) {
    return em_Val_as(AudioDestinationNode, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("destination")));
}


float BaseAudioContext_sampleRate(const BaseAudioContext *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sampleRate")));
}


double BaseAudioContext_currentTime(const BaseAudioContext *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("currentTime")));
}


AudioListener BaseAudioContext_listener(const BaseAudioContext *self) {
    return em_Val_as(AudioListener, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("listener")));
}


AudioContextState BaseAudioContext_state(const BaseAudioContext *self) {
    return em_Val_as(AudioContextState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


unsigned long BaseAudioContext_renderQuantumSize(const BaseAudioContext *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("renderQuantumSize")));
}


AudioWorklet BaseAudioContext_audioWorklet(const BaseAudioContext *self) {
    return em_Val_as(AudioWorklet, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("audioWorklet")));
}


jb_Any BaseAudioContext_onstatechange(const BaseAudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstatechange")));
}


void BaseAudioContext_set_onstatechange(BaseAudioContext* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstatechange"), em_Val_from(value));
}


AnalyserNode BaseAudioContext_createAnalyser(BaseAudioContext* self ) {
    return em_Val_as(AnalyserNode, em_Val_call(EventTarget_as_val(self->inner), "createAnalyser"));
}


BiquadFilterNode BaseAudioContext_createBiquadFilter(BaseAudioContext* self ) {
    return em_Val_as(BiquadFilterNode, em_Val_call(EventTarget_as_val(self->inner), "createBiquadFilter"));
}


AudioBuffer BaseAudioContext_createBuffer(BaseAudioContext* self , unsigned long numberOfChannels, unsigned long length, float sampleRate) {
    return em_Val_as(AudioBuffer, em_Val_call(EventTarget_as_val(self->inner), "createBuffer", em_Val_from(numberOfChannels), em_Val_from(length), em_Val_from(sampleRate)));
}


AudioBufferSourceNode BaseAudioContext_createBufferSource(BaseAudioContext* self ) {
    return em_Val_as(AudioBufferSourceNode, em_Val_call(EventTarget_as_val(self->inner), "createBufferSource"));
}


ChannelMergerNode BaseAudioContext_createChannelMerger0(BaseAudioContext* self ) {
    return em_Val_as(ChannelMergerNode, em_Val_call(EventTarget_as_val(self->inner), "createChannelMerger"));
}


ChannelMergerNode BaseAudioContext_createChannelMerger1(BaseAudioContext* self , unsigned long numberOfInputs) {
    return em_Val_as(ChannelMergerNode, em_Val_call(EventTarget_as_val(self->inner), "createChannelMerger", em_Val_from(numberOfInputs)));
}


ChannelSplitterNode BaseAudioContext_createChannelSplitter0(BaseAudioContext* self ) {
    return em_Val_as(ChannelSplitterNode, em_Val_call(EventTarget_as_val(self->inner), "createChannelSplitter"));
}


ChannelSplitterNode BaseAudioContext_createChannelSplitter1(BaseAudioContext* self , unsigned long numberOfOutputs) {
    return em_Val_as(ChannelSplitterNode, em_Val_call(EventTarget_as_val(self->inner), "createChannelSplitter", em_Val_from(numberOfOutputs)));
}


ConstantSourceNode BaseAudioContext_createConstantSource(BaseAudioContext* self ) {
    return em_Val_as(ConstantSourceNode, em_Val_call(EventTarget_as_val(self->inner), "createConstantSource"));
}


ConvolverNode BaseAudioContext_createConvolver(BaseAudioContext* self ) {
    return em_Val_as(ConvolverNode, em_Val_call(EventTarget_as_val(self->inner), "createConvolver"));
}


DelayNode BaseAudioContext_createDelay0(BaseAudioContext* self ) {
    return em_Val_as(DelayNode, em_Val_call(EventTarget_as_val(self->inner), "createDelay"));
}


DelayNode BaseAudioContext_createDelay1(BaseAudioContext* self , double maxDelayTime) {
    return em_Val_as(DelayNode, em_Val_call(EventTarget_as_val(self->inner), "createDelay", em_Val_from(maxDelayTime)));
}


DynamicsCompressorNode BaseAudioContext_createDynamicsCompressor(BaseAudioContext* self ) {
    return em_Val_as(DynamicsCompressorNode, em_Val_call(EventTarget_as_val(self->inner), "createDynamicsCompressor"));
}


GainNode BaseAudioContext_createGain(BaseAudioContext* self ) {
    return em_Val_as(GainNode, em_Val_call(EventTarget_as_val(self->inner), "createGain"));
}


IIRFilterNode BaseAudioContext_createIIRFilter(BaseAudioContext* self , jb_Array * feedforward, jb_Array * feedback) {
    return em_Val_as(IIRFilterNode, em_Val_call(EventTarget_as_val(self->inner), "createIIRFilter", em_Val_from(feedforward), em_Val_from(feedback)));
}


OscillatorNode BaseAudioContext_createOscillator(BaseAudioContext* self ) {
    return em_Val_as(OscillatorNode, em_Val_call(EventTarget_as_val(self->inner), "createOscillator"));
}


PannerNode BaseAudioContext_createPanner(BaseAudioContext* self ) {
    return em_Val_as(PannerNode, em_Val_call(EventTarget_as_val(self->inner), "createPanner"));
}


PeriodicWave BaseAudioContext_createPeriodicWave0(BaseAudioContext* self , jb_Array * real, jb_Array * imag) {
    return em_Val_as(PeriodicWave, em_Val_call(EventTarget_as_val(self->inner), "createPeriodicWave", em_Val_from(real), em_Val_from(imag)));
}


PeriodicWave BaseAudioContext_createPeriodicWave1(BaseAudioContext* self , jb_Array * real, jb_Array * imag, PeriodicWaveConstraints * constraints) {
    return em_Val_as(PeriodicWave, em_Val_call(EventTarget_as_val(self->inner), "createPeriodicWave", em_Val_from(real), em_Val_from(imag), em_Val_from(constraints)));
}


ScriptProcessorNode BaseAudioContext_createScriptProcessor0(BaseAudioContext* self ) {
    return em_Val_as(ScriptProcessorNode, em_Val_call(EventTarget_as_val(self->inner), "createScriptProcessor"));
}


ScriptProcessorNode BaseAudioContext_createScriptProcessor1(BaseAudioContext* self , unsigned long bufferSize) {
    return em_Val_as(ScriptProcessorNode, em_Val_call(EventTarget_as_val(self->inner), "createScriptProcessor", em_Val_from(bufferSize)));
}


ScriptProcessorNode BaseAudioContext_createScriptProcessor2(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels) {
    return em_Val_as(ScriptProcessorNode, em_Val_call(EventTarget_as_val(self->inner), "createScriptProcessor", em_Val_from(bufferSize), em_Val_from(numberOfInputChannels)));
}


ScriptProcessorNode BaseAudioContext_createScriptProcessor3(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels, unsigned long numberOfOutputChannels) {
    return em_Val_as(ScriptProcessorNode, em_Val_call(EventTarget_as_val(self->inner), "createScriptProcessor", em_Val_from(bufferSize), em_Val_from(numberOfInputChannels), em_Val_from(numberOfOutputChannels)));
}


StereoPannerNode BaseAudioContext_createStereoPanner(BaseAudioContext* self ) {
    return em_Val_as(StereoPannerNode, em_Val_call(EventTarget_as_val(self->inner), "createStereoPanner"));
}


WaveShaperNode BaseAudioContext_createWaveShaper(BaseAudioContext* self ) {
    return em_Val_as(WaveShaperNode, em_Val_call(EventTarget_as_val(self->inner), "createWaveShaper"));
}


jb_Promise BaseAudioContext_decodeAudioData0(BaseAudioContext* self , jb_ArrayBuffer * audioData) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "decodeAudioData", em_Val_from(audioData)));
}


jb_Promise BaseAudioContext_decodeAudioData1(BaseAudioContext* self , jb_ArrayBuffer * audioData, jb_Function * successCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "decodeAudioData", em_Val_from(audioData), em_Val_from(successCallback)));
}


jb_Promise BaseAudioContext_decodeAudioData2(BaseAudioContext* self , jb_ArrayBuffer * audioData, jb_Function * successCallback, jb_Function * errorCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "decodeAudioData", em_Val_from(audioData), em_Val_from(successCallback), em_Val_from(errorCallback)));
}

