#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PerformanceEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct Element Element;


/**
 * @brief Interface PerformanceElementTiming
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming)
 */
DECLARE_EMLITE_TYPE(PerformanceElementTiming, PerformanceEntry);

/**
 * @brief Gets the `renderTime` property. 
*/
jb_Any PerformanceElementTiming_renderTime(const PerformanceElementTiming *self);

/**
 * @brief Gets the `loadTime` property. 
*/
jb_Any PerformanceElementTiming_loadTime(const PerformanceElementTiming *self);

/**
 * @brief Gets the `intersectionRect` property. 
*/
DOMRectReadOnly PerformanceElementTiming_intersectionRect(const PerformanceElementTiming *self);

/**
 * @brief Gets the `identifier` property. 
*/
jb_String PerformanceElementTiming_identifier(const PerformanceElementTiming *self);

/**
 * @brief Gets the `naturalWidth` property. 
*/
unsigned long PerformanceElementTiming_naturalWidth(const PerformanceElementTiming *self);

/**
 * @brief Gets the `naturalHeight` property. 
*/
unsigned long PerformanceElementTiming_naturalHeight(const PerformanceElementTiming *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String PerformanceElementTiming_id(const PerformanceElementTiming *self);

/**
 * @brief Gets the `element` property. 
*/
Element PerformanceElementTiming_element(const PerformanceElementTiming *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String PerformanceElementTiming_url(const PerformanceElementTiming *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceElementTiming_toJSON(PerformanceElementTiming* self );

/**
 * @brief Gets the `paintTime` property. 
*/
jb_Any PerformanceElementTiming_paintTime(const PerformanceElementTiming *self);

/**
 * @brief Gets the `presentationTime` property. 
*/
jb_Any PerformanceElementTiming_presentationTime(const PerformanceElementTiming *self);

#ifdef __cplusplus
}
#endif
