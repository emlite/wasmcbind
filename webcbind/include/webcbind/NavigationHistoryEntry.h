#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface NavigationHistoryEntry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryEntry)
 */
DECLARE_EMLITE_TYPE(NavigationHistoryEntry, EventTarget);

/**
 * @brief Gets the `url` property. 
*/
jb_String NavigationHistoryEntry_url(const NavigationHistoryEntry *self);

/**
 * @brief Gets the `key` property. 
*/
jb_String NavigationHistoryEntry_key(const NavigationHistoryEntry *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String NavigationHistoryEntry_id(const NavigationHistoryEntry *self);

/**
 * @brief Gets the `index` property. 
*/
long long NavigationHistoryEntry_index(const NavigationHistoryEntry *self);

/**
 * @brief Gets the `sameDocument` property. 
*/
bool NavigationHistoryEntry_sameDocument(const NavigationHistoryEntry *self);

/**
 * @brief Calls the `getState` method. 
*/
jb_Any NavigationHistoryEntry_getState(NavigationHistoryEntry* self );

/**
 * @brief Gets the `ondispose` property. 
*/
jb_Any NavigationHistoryEntry_ondispose(const NavigationHistoryEntry *self);

/**
 * @brief Sets the `ondispose` property. 
*/
void NavigationHistoryEntry_set_ondispose(NavigationHistoryEntry* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
