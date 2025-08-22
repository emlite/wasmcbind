#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct StereoPannerOptions StereoPannerOptions;
typedef struct AudioParam AudioParam;


/**
 * @brief Interface StereoPannerNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StereoPannerNode)
 */
DECLARE_EMLITE_TYPE(StereoPannerNode, AudioNode);

/**
 * @brief Creates a new `StereoPannerNode` object. 
*/
StereoPannerNode StereoPannerNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `StereoPannerNode` object. 
*/
StereoPannerNode StereoPannerNode_new1(BaseAudioContext * context, StereoPannerOptions * options);

/**
 * @brief Gets the `pan` property. 
*/
AudioParam StereoPannerNode_pan(const StereoPannerNode *self);

#ifdef __cplusplus
}
#endif
