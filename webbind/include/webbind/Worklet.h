#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WorkletOptions WorkletOptions;


/**
 * @brief Interface Worklet
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Worklet)
 */
DECLARE_EMLITE_TYPE(Worklet, em_Val);

/**
 * @brief Calls the `addModule` method. 
*/
jb_Promise Worklet_addModule0(Worklet* self , jb_String * moduleURL);

/**
 * @brief Calls the `addModule` method. 
*/
jb_Promise Worklet_addModule1(Worklet* self , jb_String * moduleURL, WorkletOptions * options);

#ifdef __cplusplus
}
#endif
