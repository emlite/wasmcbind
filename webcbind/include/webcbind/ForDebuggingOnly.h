#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ForDebuggingOnly
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ForDebuggingOnly)
 */
DECLARE_EMLITE_TYPE(ForDebuggingOnly, em_Val);

/**
 * @brief Calls the `reportAdAuctionWin` method. 
*/
jb_Undefined ForDebuggingOnly_reportAdAuctionWin(ForDebuggingOnly* self , jb_String * url);

/**
 * @brief Calls the `reportAdAuctionLoss` method. 
*/
jb_Undefined ForDebuggingOnly_reportAdAuctionLoss(ForDebuggingOnly* self , jb_String * url);

#ifdef __cplusplus
}
#endif
