#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IsInputPendingOptions IsInputPendingOptions;


/**
 * @brief Interface Scheduling
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Scheduling)
 */
DECLARE_EMLITE_TYPE(Scheduling, em_Val);

/**
 * @brief Calls the `isInputPending` method. 
*/
bool Scheduling_isInputPending0(Scheduling* self );

/**
 * @brief Calls the `isInputPending` method. 
*/
bool Scheduling_isInputPending1(Scheduling* self , IsInputPendingOptions * isInputPendingOptions);

#ifdef __cplusplus
}
#endif
