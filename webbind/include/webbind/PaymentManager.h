#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PaymentManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PaymentManager)
 */
DECLARE_EMLITE_TYPE(PaymentManager, em_Val);

/**
 * @brief Gets the `userHint` property. 
*/
jb_String PaymentManager_userHint(const PaymentManager *self);

/**
 * @brief Sets the `userHint` property. 
*/
void PaymentManager_set_userHint(PaymentManager* self, jb_String * value);

/**
 * @brief Calls the `enableDelegations` method. 
*/
jb_Promise PaymentManager_enableDelegations(PaymentManager* self , jb_Array * delegations);

#ifdef __cplusplus
}
#endif
