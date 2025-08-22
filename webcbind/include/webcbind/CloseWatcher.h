#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CloseWatcherOptions CloseWatcherOptions;


/**
 * @brief Interface CloseWatcher
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CloseWatcher)
 */
DECLARE_EMLITE_TYPE(CloseWatcher, EventTarget);

/**
 * @brief Creates a new `CloseWatcher` object. 
*/
CloseWatcher CloseWatcher_new0();

/**
 * @brief Creates a new `CloseWatcher` object. 
*/
CloseWatcher CloseWatcher_new1(CloseWatcherOptions * options);

/**
 * @brief Calls the `requestClose` method. 
*/
jb_Undefined CloseWatcher_requestClose(CloseWatcher* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined CloseWatcher_close(CloseWatcher* self );

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined CloseWatcher_destroy(CloseWatcher* self );

/**
 * @brief Gets the `oncancel` property. 
*/
jb_Any CloseWatcher_oncancel(const CloseWatcher *self);

/**
 * @brief Sets the `oncancel` property. 
*/
void CloseWatcher_set_oncancel(CloseWatcher* self, jb_Any * value);

/**
 * @brief Gets the `onclose` property. 
*/
jb_Any CloseWatcher_onclose(const CloseWatcher *self);

/**
 * @brief Sets the `onclose` property. 
*/
void CloseWatcher_set_onclose(CloseWatcher* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
