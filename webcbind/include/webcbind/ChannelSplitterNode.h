#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct ChannelSplitterOptions ChannelSplitterOptions;


/**
 * @brief Interface ChannelSplitterNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ChannelSplitterNode)
 */
DECLARE_EMLITE_TYPE(ChannelSplitterNode, AudioNode);

/**
 * @brief Creates a new `ChannelSplitterNode` object. 
*/
ChannelSplitterNode ChannelSplitterNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `ChannelSplitterNode` object. 
*/
ChannelSplitterNode ChannelSplitterNode_new1(BaseAudioContext * context, ChannelSplitterOptions * options);

#ifdef __cplusplus
}
#endif
