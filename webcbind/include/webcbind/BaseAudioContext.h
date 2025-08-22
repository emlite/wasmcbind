#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

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


/**
 * @brief Interface BaseAudioContext
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext)
 */
DECLARE_EMLITE_TYPE(BaseAudioContext, EventTarget);

/**
 * @brief Gets the `destination` property. 
*/
AudioDestinationNode BaseAudioContext_destination(const BaseAudioContext *self);

/**
 * @brief Gets the `sampleRate` property. 
*/
float BaseAudioContext_sampleRate(const BaseAudioContext *self);

/**
 * @brief Gets the `currentTime` property. 
*/
double BaseAudioContext_currentTime(const BaseAudioContext *self);

/**
 * @brief Gets the `listener` property. 
*/
AudioListener BaseAudioContext_listener(const BaseAudioContext *self);

/**
 * @brief Gets the `state` property. 
*/
AudioContextState BaseAudioContext_state(const BaseAudioContext *self);

/**
 * @brief Gets the `renderQuantumSize` property. 
*/
unsigned long BaseAudioContext_renderQuantumSize(const BaseAudioContext *self);

/**
 * @brief Gets the `audioWorklet` property. 
*/
AudioWorklet BaseAudioContext_audioWorklet(const BaseAudioContext *self);

/**
 * @brief Gets the `onstatechange` property. 
*/
jb_Any BaseAudioContext_onstatechange(const BaseAudioContext *self);

/**
 * @brief Sets the `onstatechange` property. 
*/
void BaseAudioContext_set_onstatechange(BaseAudioContext* self, jb_Any * value);

/**
 * @brief Calls the `createAnalyser` method. 
*/
AnalyserNode BaseAudioContext_createAnalyser(BaseAudioContext* self );

/**
 * @brief Calls the `createBiquadFilter` method. 
*/
BiquadFilterNode BaseAudioContext_createBiquadFilter(BaseAudioContext* self );

/**
 * @brief Calls the `createBuffer` method. 
*/
AudioBuffer BaseAudioContext_createBuffer(BaseAudioContext* self , unsigned long numberOfChannels, unsigned long length, float sampleRate);

/**
 * @brief Calls the `createBufferSource` method. 
*/
AudioBufferSourceNode BaseAudioContext_createBufferSource(BaseAudioContext* self );

/**
 * @brief Calls the `createChannelMerger` method. 
*/
ChannelMergerNode BaseAudioContext_createChannelMerger0(BaseAudioContext* self );

/**
 * @brief Calls the `createChannelMerger` method. 
*/
ChannelMergerNode BaseAudioContext_createChannelMerger1(BaseAudioContext* self , unsigned long numberOfInputs);

/**
 * @brief Calls the `createChannelSplitter` method. 
*/
ChannelSplitterNode BaseAudioContext_createChannelSplitter0(BaseAudioContext* self );

/**
 * @brief Calls the `createChannelSplitter` method. 
*/
ChannelSplitterNode BaseAudioContext_createChannelSplitter1(BaseAudioContext* self , unsigned long numberOfOutputs);

/**
 * @brief Calls the `createConstantSource` method. 
*/
ConstantSourceNode BaseAudioContext_createConstantSource(BaseAudioContext* self );

/**
 * @brief Calls the `createConvolver` method. 
*/
ConvolverNode BaseAudioContext_createConvolver(BaseAudioContext* self );

/**
 * @brief Calls the `createDelay` method. 
*/
DelayNode BaseAudioContext_createDelay0(BaseAudioContext* self );

/**
 * @brief Calls the `createDelay` method. 
*/
DelayNode BaseAudioContext_createDelay1(BaseAudioContext* self , double maxDelayTime);

/**
 * @brief Calls the `createDynamicsCompressor` method. 
*/
DynamicsCompressorNode BaseAudioContext_createDynamicsCompressor(BaseAudioContext* self );

/**
 * @brief Calls the `createGain` method. 
*/
GainNode BaseAudioContext_createGain(BaseAudioContext* self );

/**
 * @brief Calls the `createIIRFilter` method. 
*/
IIRFilterNode BaseAudioContext_createIIRFilter(BaseAudioContext* self , jb_Array * feedforward, jb_Array * feedback);

/**
 * @brief Calls the `createOscillator` method. 
*/
OscillatorNode BaseAudioContext_createOscillator(BaseAudioContext* self );

/**
 * @brief Calls the `createPanner` method. 
*/
PannerNode BaseAudioContext_createPanner(BaseAudioContext* self );

/**
 * @brief Calls the `createPeriodicWave` method. 
*/
PeriodicWave BaseAudioContext_createPeriodicWave0(BaseAudioContext* self , jb_Array * real, jb_Array * imag);

/**
 * @brief Calls the `createPeriodicWave` method. 
*/
PeriodicWave BaseAudioContext_createPeriodicWave1(BaseAudioContext* self , jb_Array * real, jb_Array * imag, PeriodicWaveConstraints * constraints);

/**
 * @brief Calls the `createScriptProcessor` method. 
*/
ScriptProcessorNode BaseAudioContext_createScriptProcessor0(BaseAudioContext* self );

/**
 * @brief Calls the `createScriptProcessor` method. 
*/
ScriptProcessorNode BaseAudioContext_createScriptProcessor1(BaseAudioContext* self , unsigned long bufferSize);

/**
 * @brief Calls the `createScriptProcessor` method. 
*/
ScriptProcessorNode BaseAudioContext_createScriptProcessor2(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels);

/**
 * @brief Calls the `createScriptProcessor` method. 
*/
ScriptProcessorNode BaseAudioContext_createScriptProcessor3(BaseAudioContext* self , unsigned long bufferSize, unsigned long numberOfInputChannels, unsigned long numberOfOutputChannels);

/**
 * @brief Calls the `createStereoPanner` method. 
*/
StereoPannerNode BaseAudioContext_createStereoPanner(BaseAudioContext* self );

/**
 * @brief Calls the `createWaveShaper` method. 
*/
WaveShaperNode BaseAudioContext_createWaveShaper(BaseAudioContext* self );

/**
 * @brief Calls the `decodeAudioData` method. 
*/
jb_Promise BaseAudioContext_decodeAudioData0(BaseAudioContext* self , jb_ArrayBuffer * audioData);

/**
 * @brief Calls the `decodeAudioData` method. 
*/
jb_Promise BaseAudioContext_decodeAudioData1(BaseAudioContext* self , jb_ArrayBuffer * audioData, jb_Function * successCallback);

/**
 * @brief Calls the `decodeAudioData` method. 
*/
jb_Promise BaseAudioContext_decodeAudioData2(BaseAudioContext* self , jb_ArrayBuffer * audioData, jb_Function * successCallback, jb_Function * errorCallback);

#ifdef __cplusplus
}
#endif
