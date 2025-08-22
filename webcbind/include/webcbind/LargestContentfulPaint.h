#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;


/**
 * @brief Interface LargestContentfulPaint
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint)
 */
DECLARE_EMLITE_TYPE(LargestContentfulPaint, PerformanceEntry);

/**
 * @brief Gets the `loadTime` property. 
*/
jb_Any LargestContentfulPaint_loadTime(const LargestContentfulPaint *self);

/**
 * @brief Gets the `size` property. 
*/
unsigned long LargestContentfulPaint_size(const LargestContentfulPaint *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String LargestContentfulPaint_id(const LargestContentfulPaint *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String LargestContentfulPaint_url(const LargestContentfulPaint *self);

/**
 * @brief Gets the `element` property. 
*/
Element LargestContentfulPaint_element(const LargestContentfulPaint *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object LargestContentfulPaint_toJSON(LargestContentfulPaint* self );

/**
 * @brief Gets the `paintTime` property. 
*/
jb_Any LargestContentfulPaint_paintTime(const LargestContentfulPaint *self);

/**
 * @brief Gets the `presentationTime` property. 
*/
jb_Any LargestContentfulPaint_presentationTime(const LargestContentfulPaint *self);

#ifdef __cplusplus
}
#endif
