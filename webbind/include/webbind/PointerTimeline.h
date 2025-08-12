#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AnimationTimeline.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PointerTimelineOptions PointerTimelineOptions;
typedef struct Element Element;


/**
 * @brief Interface PointerTimeline
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PointerTimeline)
 */
DECLARE_EMLITE_TYPE(PointerTimeline, AnimationTimeline);

/**
 * @brief Creates a new `PointerTimeline` object. 
*/
PointerTimeline PointerTimeline_new0();

/**
 * @brief Creates a new `PointerTimeline` object. 
*/
PointerTimeline PointerTimeline_new1(PointerTimelineOptions * options);

/**
 * @brief Gets the `source` property. 
*/
Element PointerTimeline_source(const PointerTimeline *self);

/**
 * @brief Gets the `axis` property. 
*/
PointerAxis PointerTimeline_axis(const PointerTimeline *self);

#ifdef __cplusplus
}
#endif
