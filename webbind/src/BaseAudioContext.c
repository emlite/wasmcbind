#include <webbind/BaseAudioContext.h>
#include <webbind/AudioDestinationNode.h>
#include <webbind/AudioListener.h>
#include <webbind/AudioWorklet.h>
#include <webbind/AnalyserNode.h>
#include <webbind/BiquadFilterNode.h>
#include <webbind/AudioBuffer.h>
#include <webbind/AudioBufferSourceNode.h>
#include <webbind/ChannelMergerNode.h>
#include <webbind/ChannelSplitterNode.h>
#include <webbind/ConstantSourceNode.h>
#include <webbind/ConvolverNode.h>
#include <webbind/DelayNode.h>
#include <webbind/DynamicsCompressorNode.h>
#include <webbind/GainNode.h>
#include <webbind/IIRFilterNode.h>
#include <webbind/OscillatorNode.h>
#include <webbind/PannerNode.h>
#include <webbind/PeriodicWave.h>
#include <webbind/ScriptProcessorNode.h>
#include <webbind/StereoPannerNode.h>
#include <webbind/WaveShaperNode.h>


DEFINE_EMLITE_TYPE(PeriodicWaveConstraints, em_Val);


bool PeriodicWaveConstraints_disableNormalization(const PeriodicWaveConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "disableNormalization"));
}


void PeriodicWaveConstraints_set_disableNormalization(PeriodicWaveConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "disableNormalization", value);
}

DEFINE_EMLITE_TYPE(BaseAudioContext, EventTarget);


AudioDestinationNode BaseAudioContext_destination(const BaseAudioContext *self) {
    return em_Val_as(AudioDestinationNode, em_Val_get(EventTarget_as_val(self->inner), "destination"));
}


float BaseAudioContext_sampleRate(const BaseAudioContext *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), "sampleRate"));
}


double BaseAudioContext_currentTime(const BaseAudioContext *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "currentTime"));
}


AudioListener BaseAudioContext_listener(const BaseAudioContext *self) {
    return em_Val_as(AudioListener, em_Val_get(EventTarget_as_val(self->inner), "listener"));
}


AudioContextState BaseAudioContext_state(const BaseAudioContext *self) {
    return em_Val_as(AudioContextState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


unsigned long BaseAudioContext_renderQuantumSize(const BaseAudioContext *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "renderQuantumSize"));
}


AudioWorklet BaseAudioContext_audioWorklet(const BaseAudioContext *self) {
    return em_Val_as(AudioWorklet, em_Val_get(EventTarget_as_val(self->inner), "audioWorklet"));
}


jb_Any BaseAudioContext_onstatechange(const BaseAudioContext *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstatechange"));
}


void BaseAudioContext_set_onstatechange(BaseAudioContext* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstatechange", value);
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


ChannelMergerNode BaseAudioContext_createChannelMerger(BaseAudioContext* self ) {
    return em_Val_as(ChannelMergerNode, em_Val_call(EventTarget_as_val(self->inner), "createChannelMerger"));
}


ChannelMergerNode BaseAudioContext_createChannelMerger(BaseAudioContext* self , unsigned long numberOfInputs) {
    return em_Val_as(ChannelMergerNode, em_Val_call(EventTarget_as_val(self->inner), "createChannelMerger", em_Val_from(numberOfInputs)));
}


ChannelSplitterNode BaseAudioContext_createChannelSplitter(BaseAudioContext* self ) {
    return em_Val_as(ChannelSplitterNode, em_Val_call(EventTarget_as_val(self->inner), "createChannelSplitter"));
}


ChannelSplitterNode BaseAudioContext_createChannelSplitter(BaseAudioContext* self , unsigned long numberOfOutputs) {
    return em_Val_as(ChannelSplitterNode, em_Val_call(EventTarget_as_val(self->inner), "createChannelSplitter", em_Val_from(numberOfOutputs)));
}


ConstantSourceNode BaseAudioContext_createConstantSource(BaseAudioContext* self ) {
    return em_Val_as(ConstantSourceNode, em_Val_call(EventTarget_as_val(self->inner), "createConstantSource"));
}


ConvolverNode BaseAudioContext_createConvolver(BaseAudioContext* self ) {
    return em_Val_as(ConvolverNode, em_Val_call(EventTarget_as_val(self->inner), "createConvolver"));
}


DelayNode BaseAudioContext_createDelay(BaseAudioContext* self ) {
    return em_Val_as(DelayNode, em_Val_call(EventTarget_as_val(self->inner), "createDelay"));
}


DelayNode BaseAudioContext_createDelay(BaseAudioContext* self , double maxDelayTime) {
    return em_Val_as(DelayNode, em_Val_call(EventTarget_as_val(self->inner), "createDelay", em_Val_from(maxDelayTime)));
}


DynamicsCompressorNode BaseAudioContext_createDynamicsCompressor(BaseAudioContext* self ) {
    return em_Val_as(DynamicsCompressorNode, em_Val_call(EventTarget_as_val(self->inner), "createDynamicsCompressor"));
}


GainNode BaseAudioContext_createGain(BaseAudioContext* self ) {
    return em_Val_as(GainNode, em_Val_call(EventTarget_as_val(self->inner), "createGain"));
}


IIRFilterNode BaseAudioContext_createIIRFilter(BaseAudioContext* self , const jb_Sequence* feedforward, const jb_Sequence* feedback) {
    return em_Val_as(IIRFilterNode, em_Val_call(EventTarget_as_val(self->inner), "createIIRFilter", em_Val_from(feedforward), em_Val_from(feedback)));
}


OscillatorNode BaseAudioContext_createOscillator(BaseAudioContext* self ) {
    return em_Val_as(OscillatorNode, em_Val_call(EventTarget_as_val(self->inner), "createOscillator"));
}


PannerNode BaseAudioContext_createPanner(BaseAudioContext* self ) {
    return em_Val_as(PannerNode, em_Val_call(EventTarget_as_val(self->inner), "createPanner"));
}


PeriodicWave BaseAudioContext_createPeriodicWave(BaseAudioContext* self , const jb_Sequence* real, const jb_Sequence* imag) {
    return em_Val_as(PeriodicWave, em_Val_call(EventTarget_as_val(self->inner), "createPeriodicWave", em_Val_from(real), em_Val_from(imag)));
}


PeriodicWave BaseAudioContext_createPeriodicWave(BaseAudioContext* self , const jb_Sequence* real, const jb_Sequence* imag, const PeriodicWaveConstraints* constraints) {
    return em_Val_as(PeriodicWave, em_Val_call(EventTarget_as_val(self->inner), "createPeriodicWave", em_Val_from(real), em_Val_from(imag), em_Val_from(constraints)));
}


ScriptProcessorNode BaseAudioContext_createScriptProcessor(BaseAudioContext* self ) {
    return em_Val_as(ScriptProcessorNode, em_Val_call(EventTarget_as_val(self->inner), "createScriptProcessor"));
}


ScriptProcessorNode BaseAudioContext_createScriptProcessor(BaseAudioContext* self , unsigned long bufferSize) {
    return em_Val_as(ScriptProcessorNode, em_Val_call(EventTarget_as_val(self->inner), "createScriptProcessor", em_Val_from(bufferSize)));
}


ScriptProcessorNode BaseAudioContext_createScriptProcessor(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels) {
    return em_Val_as(ScriptProcessorNode, em_Val_call(EventTarget_as_val(self->inner), "createScriptProcessor", em_Val_from(bufferSize), em_Val_from(numberOfInputChannels)));
}


ScriptProcessorNode BaseAudioContext_createScriptProcessor(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels, unsigned long numberOfOutputChannels) {
    return em_Val_as(ScriptProcessorNode, em_Val_call(EventTarget_as_val(self->inner), "createScriptProcessor", em_Val_from(bufferSize), em_Val_from(numberOfInputChannels), em_Val_from(numberOfOutputChannels)));
}


StereoPannerNode BaseAudioContext_createStereoPanner(BaseAudioContext* self ) {
    return em_Val_as(StereoPannerNode, em_Val_call(EventTarget_as_val(self->inner), "createStereoPanner"));
}


WaveShaperNode BaseAudioContext_createWaveShaper(BaseAudioContext* self ) {
    return em_Val_as(WaveShaperNode, em_Val_call(EventTarget_as_val(self->inner), "createWaveShaper"));
}


jb_Promise BaseAudioContext_decodeAudioData(BaseAudioContext* self , const jb_ArrayBuffer* audioData) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "decodeAudioData", em_Val_from(audioData)));
}


jb_Promise BaseAudioContext_decodeAudioData(BaseAudioContext* self , const jb_ArrayBuffer* audioData, const jb_Function* successCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "decodeAudioData", em_Val_from(audioData), em_Val_from(successCallback)));
}


jb_Promise BaseAudioContext_decodeAudioData(BaseAudioContext* self , const jb_ArrayBuffer* audioData, const jb_Function* successCallback, const jb_Function* errorCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "decodeAudioData", em_Val_from(audioData), em_Val_from(successCallback), em_Val_from(errorCallback)));
}

