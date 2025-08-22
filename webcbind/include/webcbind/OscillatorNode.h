#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioScheduledSourceNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct OscillatorOptions OscillatorOptions;
typedef struct AudioParam AudioParam;
typedef struct PeriodicWave PeriodicWave;


/**
 * @brief Interface OscillatorNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode)
 */
DECLARE_EMLITE_TYPE(OscillatorNode, AudioScheduledSourceNode);

/**
 * @brief Creates a new `OscillatorNode` object. 
*/
OscillatorNode OscillatorNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `OscillatorNode` object. 
*/
OscillatorNode OscillatorNode_new1(BaseAudioContext * context, OscillatorOptions * options);

/**
 * @brief Gets the `type` property. 
*/
OscillatorType OscillatorNode_type(const OscillatorNode *self);

/**
 * @brief Sets the `type` property. 
*/
void OscillatorNode_set_type(OscillatorNode* self, OscillatorType * value);

/**
 * @brief Gets the `frequency` property. 
*/
AudioParam OscillatorNode_frequency(const OscillatorNode *self);

/**
 * @brief Gets the `detune` property. 
*/
AudioParam OscillatorNode_detune(const OscillatorNode *self);

/**
 * @brief Calls the `setPeriodicWave` method. 
*/
jb_Undefined OscillatorNode_setPeriodicWave(OscillatorNode* self , PeriodicWave * periodicWave);

#ifdef __cplusplus
}
#endif
