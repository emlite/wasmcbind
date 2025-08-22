#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbstractRange AbstractRange;


/**
 * @brief Interface Highlight
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Highlight)
 */
DECLARE_EMLITE_TYPE(Highlight, em_Val);

/**
 * @brief Creates a new `Highlight` object. 
*/
Highlight Highlight_new(AbstractRange * initialRanges);

/**
 * @brief Gets the `priority` property. 
*/
long Highlight_priority(const Highlight *self);

/**
 * @brief Sets the `priority` property. 
*/
void Highlight_set_priority(Highlight* self, long value);

/**
 * @brief Gets the `type` property. 
*/
HighlightType Highlight_type(const Highlight *self);

/**
 * @brief Sets the `type` property. 
*/
void Highlight_set_type(Highlight* self, HighlightType * value);

#ifdef __cplusplus
}
#endif
