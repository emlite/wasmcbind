#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationConnectionList PresentationConnectionList;


/**
 * @brief Interface PresentationReceiver
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PresentationReceiver)
 */
DECLARE_EMLITE_TYPE(PresentationReceiver, em_Val);

/**
 * @brief Gets the `connectionList` property. 
*/
jb_Promise PresentationReceiver_connectionList(const PresentationReceiver *self);

#ifdef __cplusplus
}
#endif
