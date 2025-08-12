#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportSendStreamStats WebTransportSendStreamStats;


/**
 * @brief Interface WebTransportSendGroup
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendGroup)
 */
DECLARE_EMLITE_TYPE(WebTransportSendGroup, em_Val);

/**
 * @brief Calls the `getStats` method. 
*/
jb_Promise WebTransportSendGroup_getStats(WebTransportSendGroup* self );

#ifdef __cplusplus
}
#endif
