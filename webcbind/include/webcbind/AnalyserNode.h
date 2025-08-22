#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct AnalyserOptions AnalyserOptions;


/**
 * @brief Interface AnalyserNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode)
 */
DECLARE_EMLITE_TYPE(AnalyserNode, AudioNode);

/**
 * @brief Creates a new `AnalyserNode` object. 
*/
AnalyserNode AnalyserNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `AnalyserNode` object. 
*/
AnalyserNode AnalyserNode_new1(BaseAudioContext * context, AnalyserOptions * options);

/**
 * @brief Calls the `getFloatFrequencyData` method. 
*/
jb_Undefined AnalyserNode_getFloatFrequencyData(AnalyserNode* self , jb_Float32Array * array);

/**
 * @brief Calls the `getByteFrequencyData` method. 
*/
jb_Undefined AnalyserNode_getByteFrequencyData(AnalyserNode* self , jb_Uint8Array * array);

/**
 * @brief Calls the `getFloatTimeDomainData` method. 
*/
jb_Undefined AnalyserNode_getFloatTimeDomainData(AnalyserNode* self , jb_Float32Array * array);

/**
 * @brief Calls the `getByteTimeDomainData` method. 
*/
jb_Undefined AnalyserNode_getByteTimeDomainData(AnalyserNode* self , jb_Uint8Array * array);

/**
 * @brief Gets the `fftSize` property. 
*/
unsigned long AnalyserNode_fftSize(const AnalyserNode *self);

/**
 * @brief Sets the `fftSize` property. 
*/
void AnalyserNode_set_fftSize(AnalyserNode* self, unsigned long value);

/**
 * @brief Gets the `frequencyBinCount` property. 
*/
unsigned long AnalyserNode_frequencyBinCount(const AnalyserNode *self);

/**
 * @brief Gets the `minDecibels` property. 
*/
double AnalyserNode_minDecibels(const AnalyserNode *self);

/**
 * @brief Sets the `minDecibels` property. 
*/
void AnalyserNode_set_minDecibels(AnalyserNode* self, double value);

/**
 * @brief Gets the `maxDecibels` property. 
*/
double AnalyserNode_maxDecibels(const AnalyserNode *self);

/**
 * @brief Sets the `maxDecibels` property. 
*/
void AnalyserNode_set_maxDecibels(AnalyserNode* self, double value);

/**
 * @brief Gets the `smoothingTimeConstant` property. 
*/
double AnalyserNode_smoothingTimeConstant(const AnalyserNode *self);

/**
 * @brief Sets the `smoothingTimeConstant` property. 
*/
void AnalyserNode_set_smoothingTimeConstant(AnalyserNode* self, double value);

#ifdef __cplusplus
}
#endif
