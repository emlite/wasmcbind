#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ScrollTimeline.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ViewTimelineOptions ViewTimelineOptions;
typedef struct Element Element;
typedef struct CSSNumericValue CSSNumericValue;


/**
 * @brief Interface ViewTimeline
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline)
 */
DECLARE_EMLITE_TYPE(ViewTimeline, ScrollTimeline);

/**
 * @brief Creates a new `ViewTimeline` object. 
*/
ViewTimeline ViewTimeline_new0();

/**
 * @brief Creates a new `ViewTimeline` object. 
*/
ViewTimeline ViewTimeline_new1(ViewTimelineOptions * options);

/**
 * @brief Gets the `subject` property. 
*/
Element ViewTimeline_subject(const ViewTimeline *self);

/**
 * @brief Gets the `startOffset` property. 
*/
CSSNumericValue ViewTimeline_startOffset(const ViewTimeline *self);

/**
 * @brief Gets the `endOffset` property. 
*/
CSSNumericValue ViewTimeline_endOffset(const ViewTimeline *self);

#ifdef __cplusplus
}
#endif
