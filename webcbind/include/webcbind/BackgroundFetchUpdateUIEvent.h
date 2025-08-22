#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "BackgroundFetchEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundFetchEventInit BackgroundFetchEventInit;
typedef struct BackgroundFetchUIOptions BackgroundFetchUIOptions;


/**
 * @brief Interface BackgroundFetchUpdateUIEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchUpdateUIEvent)
 */
DECLARE_EMLITE_TYPE(BackgroundFetchUpdateUIEvent, BackgroundFetchEvent);

/**
 * @brief Creates a new `BackgroundFetchUpdateUIEvent` object. 
*/
BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent_new(jb_String * type, BackgroundFetchEventInit * init);

/**
 * @brief Calls the `updateUI` method. 
*/
jb_Promise BackgroundFetchUpdateUIEvent_updateUI0(BackgroundFetchUpdateUIEvent* self );

/**
 * @brief Calls the `updateUI` method. 
*/
jb_Promise BackgroundFetchUpdateUIEvent_updateUI1(BackgroundFetchUpdateUIEvent* self , BackgroundFetchUIOptions * options);

#ifdef __cplusplus
}
#endif
