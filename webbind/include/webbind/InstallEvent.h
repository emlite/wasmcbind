#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ExtendableEventInit ExtendableEventInit;


/**
 * @brief Interface InstallEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/InstallEvent)
 */
DECLARE_EMLITE_TYPE(InstallEvent, ExtendableEvent);

/**
 * @brief Creates a new `InstallEvent` object. 
*/
InstallEvent InstallEvent_new0(jb_String * type);

/**
 * @brief Creates a new `InstallEvent` object. 
*/
InstallEvent InstallEvent_new1(jb_String * type, ExtendableEventInit * eventInitDict);

/**
 * @brief Calls the `addRoutes` method. 
*/
jb_Promise InstallEvent_addRoutes(InstallEvent* self , jb_Any * rules);

#ifdef __cplusplus
}
#endif
