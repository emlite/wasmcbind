#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct AudioDestinationNode AudioDestinationNode;
typedef struct AudioListener AudioListener;
typedef struct AudioWorklet AudioWorklet;
typedef struct AnalyserNode AnalyserNode;
typedef struct BiquadFilterNode BiquadFilterNode;
typedef struct AudioBuffer AudioBuffer;
typedef struct AudioBufferSourceNode AudioBufferSourceNode;
typedef struct ChannelMergerNode ChannelMergerNode;
typedef struct ChannelSplitterNode ChannelSplitterNode;
typedef struct ConstantSourceNode ConstantSourceNode;
typedef struct ConvolverNode ConvolverNode;
typedef struct DelayNode DelayNode;
typedef struct DynamicsCompressorNode DynamicsCompressorNode;
typedef struct GainNode GainNode;
typedef struct IIRFilterNode IIRFilterNode;
typedef struct OscillatorNode OscillatorNode;
typedef struct PannerNode PannerNode;
typedef struct PeriodicWave PeriodicWave;
typedef struct PeriodicWaveConstraints PeriodicWaveConstraints;
typedef struct ScriptProcessorNode ScriptProcessorNode;
typedef struct StereoPannerNode StereoPannerNode;
typedef struct WaveShaperNode WaveShaperNode;


typedef struct {
  em_Val inner;
} PeriodicWaveConstraints;


DECLARE_EMLITE_TYPE(PeriodicWaveConstraints, em_Val);

bool PeriodicWaveConstraints_disableNormalization( const PeriodicWaveConstraints *self);

void PeriodicWaveConstraints_set_disableNormalization(PeriodicWaveConstraints* self, bool value);
typedef struct {
  EventTarget inner;
} BaseAudioContext;


DECLARE_EMLITE_TYPE(BaseAudioContext, EventTarget);

AudioDestinationNode BaseAudioContext_destination( const BaseAudioContext *self);

float BaseAudioContext_sampleRate( const BaseAudioContext *self);

double BaseAudioContext_currentTime( const BaseAudioContext *self);

AudioListener BaseAudioContext_listener( const BaseAudioContext *self);

AudioContextState BaseAudioContext_state( const BaseAudioContext *self);

unsigned long BaseAudioContext_renderQuantumSize( const BaseAudioContext *self);

AudioWorklet BaseAudioContext_audioWorklet( const BaseAudioContext *self);

jb_Any BaseAudioContext_onstatechange( const BaseAudioContext *self);

void BaseAudioContext_set_onstatechange(BaseAudioContext* self, const jb_Any* value);

AnalyserNode BaseAudioContext_createAnalyser(BaseAudioContext* self );

BiquadFilterNode BaseAudioContext_createBiquadFilter(BaseAudioContext* self );

AudioBuffer BaseAudioContext_createBuffer(BaseAudioContext* self , unsigned long numberOfChannels, unsigned long length, float sampleRate);

AudioBufferSourceNode BaseAudioContext_createBufferSource(BaseAudioContext* self );

ChannelMergerNode BaseAudioContext_createChannelMerger(BaseAudioContext* self );

ChannelMergerNode BaseAudioContext_createChannelMerger(BaseAudioContext* self , unsigned long numberOfInputs);

ChannelSplitterNode BaseAudioContext_createChannelSplitter(BaseAudioContext* self );

ChannelSplitterNode BaseAudioContext_createChannelSplitter(BaseAudioContext* self , unsigned long numberOfOutputs);

ConstantSourceNode BaseAudioContext_createConstantSource(BaseAudioContext* self );

ConvolverNode BaseAudioContext_createConvolver(BaseAudioContext* self );

DelayNode BaseAudioContext_createDelay(BaseAudioContext* self );

DelayNode BaseAudioContext_createDelay(BaseAudioContext* self , double maxDelayTime);

DynamicsCompressorNode BaseAudioContext_createDynamicsCompressor(BaseAudioContext* self );

GainNode BaseAudioContext_createGain(BaseAudioContext* self );

IIRFilterNode BaseAudioContext_createIIRFilter(BaseAudioContext* self , const jb_Sequence* feedforward, const jb_Sequence* feedback);

OscillatorNode BaseAudioContext_createOscillator(BaseAudioContext* self );

PannerNode BaseAudioContext_createPanner(BaseAudioContext* self );

PeriodicWave BaseAudioContext_createPeriodicWave(BaseAudioContext* self , const jb_Sequence* real, const jb_Sequence* imag);

PeriodicWave BaseAudioContext_createPeriodicWave(BaseAudioContext* self , const jb_Sequence* real, const jb_Sequence* imag, const PeriodicWaveConstraints* constraints);

ScriptProcessorNode BaseAudioContext_createScriptProcessor(BaseAudioContext* self );

ScriptProcessorNode BaseAudioContext_createScriptProcessor(BaseAudioContext* self , unsigned long bufferSize);

ScriptProcessorNode BaseAudioContext_createScriptProcessor(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels);

ScriptProcessorNode BaseAudioContext_createScriptProcessor(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels, unsigned long numberOfOutputChannels);

StereoPannerNode BaseAudioContext_createStereoPanner(BaseAudioContext* self );

WaveShaperNode BaseAudioContext_createWaveShaper(BaseAudioContext* self );

jb_Promise BaseAudioContext_decodeAudioData(BaseAudioContext* self , const jb_ArrayBuffer* audioData);

jb_Promise BaseAudioContext_decodeAudioData(BaseAudioContext* self , const jb_ArrayBuffer* audioData, const jb_Function* successCallback);

jb_Promise BaseAudioContext_decodeAudioData(BaseAudioContext* self , const jb_ArrayBuffer* audioData, const jb_Function* successCallback, const jb_Function* errorCallback);
