#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct WaveShaperOptions WaveShaperOptions;


/**
 * @brief Interface WaveShaperNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WaveShaperNode)
 */
DECLARE_EMLITE_TYPE(WaveShaperNode, AudioNode);

/**
 * @brief Creates a new `WaveShaperNode` object. 
*/
WaveShaperNode WaveShaperNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `WaveShaperNode` object. 
*/
WaveShaperNode WaveShaperNode_new1(BaseAudioContext * context, WaveShaperOptions * options);

/**
 * @brief Gets the `curve` property. 
*/
jb_Float32Array WaveShaperNode_curve(const WaveShaperNode *self);

/**
 * @brief Sets the `curve` property. 
*/
void WaveShaperNode_set_curve(WaveShaperNode* self, jb_Float32Array * value);

/**
 * @brief Gets the `oversample` property. 
*/
OverSampleType WaveShaperNode_oversample(const WaveShaperNode *self);

/**
 * @brief Sets the `oversample` property. 
*/
void WaveShaperNode_set_oversample(WaveShaperNode* self, OverSampleType * value);

#ifdef __cplusplus
}
#endif
