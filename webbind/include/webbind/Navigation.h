#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationHistoryEntry NavigationHistoryEntry;
typedef struct NavigationUpdateCurrentEntryOptions NavigationUpdateCurrentEntryOptions;
typedef struct NavigationTransition NavigationTransition;
typedef struct NavigationActivation NavigationActivation;
typedef struct NavigationResult NavigationResult;
typedef struct NavigationNavigateOptions NavigationNavigateOptions;
typedef struct NavigationReloadOptions NavigationReloadOptions;
typedef struct NavigationOptions NavigationOptions;


/**
 * @brief Interface Navigation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Navigation)
 */
DECLARE_EMLITE_TYPE(Navigation, EventTarget);

/**
 * @brief Calls the `entries` method. 
*/
jb_Array Navigation_entries(Navigation* self );

/**
 * @brief Gets the `currentEntry` property. 
*/
NavigationHistoryEntry Navigation_currentEntry(const Navigation *self);

/**
 * @brief Calls the `updateCurrentEntry` method. 
*/
jb_Undefined Navigation_updateCurrentEntry(Navigation* self , NavigationUpdateCurrentEntryOptions * options);

/**
 * @brief Gets the `transition` property. 
*/
NavigationTransition Navigation_transition(const Navigation *self);

/**
 * @brief Gets the `activation` property. 
*/
NavigationActivation Navigation_activation(const Navigation *self);

/**
 * @brief Gets the `canGoBack` property. 
*/
bool Navigation_canGoBack(const Navigation *self);

/**
 * @brief Gets the `canGoForward` property. 
*/
bool Navigation_canGoForward(const Navigation *self);

/**
 * @brief Calls the `navigate` method. 
*/
NavigationResult Navigation_navigate0(Navigation* self , jb_String * url);

/**
 * @brief Calls the `navigate` method. 
*/
NavigationResult Navigation_navigate1(Navigation* self , jb_String * url, NavigationNavigateOptions * options);

/**
 * @brief Calls the `reload` method. 
*/
NavigationResult Navigation_reload0(Navigation* self );

/**
 * @brief Calls the `reload` method. 
*/
NavigationResult Navigation_reload1(Navigation* self , NavigationReloadOptions * options);

/**
 * @brief Calls the `traverseTo` method. 
*/
NavigationResult Navigation_traverseTo0(Navigation* self , jb_String * key);

/**
 * @brief Calls the `traverseTo` method. 
*/
NavigationResult Navigation_traverseTo1(Navigation* self , jb_String * key, NavigationOptions * options);

/**
 * @brief Calls the `back` method. 
*/
NavigationResult Navigation_back0(Navigation* self );

/**
 * @brief Calls the `back` method. 
*/
NavigationResult Navigation_back1(Navigation* self , NavigationOptions * options);

/**
 * @brief Calls the `forward` method. 
*/
NavigationResult Navigation_forward0(Navigation* self );

/**
 * @brief Calls the `forward` method. 
*/
NavigationResult Navigation_forward1(Navigation* self , NavigationOptions * options);

/**
 * @brief Gets the `onnavigate` property. 
*/
jb_Any Navigation_onnavigate(const Navigation *self);

/**
 * @brief Sets the `onnavigate` property. 
*/
void Navigation_set_onnavigate(Navigation* self, jb_Any * value);

/**
 * @brief Gets the `onnavigatesuccess` property. 
*/
jb_Any Navigation_onnavigatesuccess(const Navigation *self);

/**
 * @brief Sets the `onnavigatesuccess` property. 
*/
void Navigation_set_onnavigatesuccess(Navigation* self, jb_Any * value);

/**
 * @brief Gets the `onnavigateerror` property. 
*/
jb_Any Navigation_onnavigateerror(const Navigation *self);

/**
 * @brief Sets the `onnavigateerror` property. 
*/
void Navigation_set_onnavigateerror(Navigation* self, jb_Any * value);

/**
 * @brief Gets the `oncurrententrychange` property. 
*/
jb_Any Navigation_oncurrententrychange(const Navigation *self);

/**
 * @brief Sets the `oncurrententrychange` property. 
*/
void Navigation_set_oncurrententrychange(Navigation* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
