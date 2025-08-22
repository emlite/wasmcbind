#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigatorUABrandVersion NavigatorUABrandVersion;
typedef struct UADataValues UADataValues;
typedef struct UALowEntropyJSON UALowEntropyJSON;


/**
 * @brief Interface NavigatorUAData
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData)
 */
DECLARE_EMLITE_TYPE(NavigatorUAData, em_Val);

/**
 * @brief Gets the `brands` property. 
*/
jb_Array NavigatorUAData_brands(const NavigatorUAData *self);

/**
 * @brief Gets the `mobile` property. 
*/
bool NavigatorUAData_mobile(const NavigatorUAData *self);

/**
 * @brief Gets the `platform` property. 
*/
jb_String NavigatorUAData_platform(const NavigatorUAData *self);

/**
 * @brief Calls the `getHighEntropyValues` method. 
*/
jb_Promise NavigatorUAData_getHighEntropyValues(NavigatorUAData* self , jb_Array * hints);

/**
 * @brief Calls the `toJSON` method. 
*/
UALowEntropyJSON NavigatorUAData_toJSON(NavigatorUAData* self );

#ifdef __cplusplus
}
#endif
