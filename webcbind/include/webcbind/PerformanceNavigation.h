#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PerformanceNavigation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceNavigation)
 */
DECLARE_EMLITE_TYPE(PerformanceNavigation, em_Val);

/**
 * @brief Gets the `type` property. 
*/
unsigned short PerformanceNavigation_type(const PerformanceNavigation *self);

/**
 * @brief Gets the `redirectCount` property. 
*/
unsigned short PerformanceNavigation_redirectCount(const PerformanceNavigation *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PerformanceNavigation_toJSON(PerformanceNavigation* self );

#ifdef __cplusplus
}
#endif
