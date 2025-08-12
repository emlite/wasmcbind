#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AnimationTimeline.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DocumentTimelineOptions DocumentTimelineOptions;


/**
 * @brief Interface DocumentTimeline
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DocumentTimeline)
 */
DECLARE_EMLITE_TYPE(DocumentTimeline, AnimationTimeline);

/**
 * @brief Creates a new `DocumentTimeline` object. 
*/
DocumentTimeline DocumentTimeline_new0();

/**
 * @brief Creates a new `DocumentTimeline` object. 
*/
DocumentTimeline DocumentTimeline_new1(DocumentTimelineOptions * options);

#ifdef __cplusplus
}
#endif
