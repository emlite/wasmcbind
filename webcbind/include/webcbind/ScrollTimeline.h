#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AnimationTimeline.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ScrollTimelineOptions ScrollTimelineOptions;
typedef struct Element Element;


/**
 * @brief Interface ScrollTimeline
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimeline)
 */
DECLARE_EMLITE_TYPE(ScrollTimeline, AnimationTimeline);

/**
 * @brief Creates a new `ScrollTimeline` object. 
*/
ScrollTimeline ScrollTimeline_new0();

/**
 * @brief Creates a new `ScrollTimeline` object. 
*/
ScrollTimeline ScrollTimeline_new1(ScrollTimelineOptions * options);

/**
 * @brief Gets the `source` property. 
*/
Element ScrollTimeline_source(const ScrollTimeline *self);

/**
 * @brief Gets the `axis` property. 
*/
ScrollAxis ScrollTimeline_axis(const ScrollTimeline *self);

#ifdef __cplusplus
}
#endif
