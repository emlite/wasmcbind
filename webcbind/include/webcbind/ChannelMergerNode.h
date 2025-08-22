#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct ChannelMergerOptions ChannelMergerOptions;


/**
 * @brief Interface ChannelMergerNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ChannelMergerNode)
 */
DECLARE_EMLITE_TYPE(ChannelMergerNode, AudioNode);

/**
 * @brief Creates a new `ChannelMergerNode` object. 
*/
ChannelMergerNode ChannelMergerNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `ChannelMergerNode` object. 
*/
ChannelMergerNode ChannelMergerNode_new1(BaseAudioContext * context, ChannelMergerOptions * options);

#ifdef __cplusplus
}
#endif
