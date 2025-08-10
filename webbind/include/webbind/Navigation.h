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

DECLARE_EMLITE_TYPE(Navigation, EventTarget);

jb_Array Navigation_entries(Navigation* self );

NavigationHistoryEntry Navigation_currentEntry(const Navigation *self);

jb_Undefined Navigation_updateCurrentEntry(Navigation* self , NavigationUpdateCurrentEntryOptions * options);

NavigationTransition Navigation_transition(const Navigation *self);

NavigationActivation Navigation_activation(const Navigation *self);

bool Navigation_canGoBack(const Navigation *self);

bool Navigation_canGoForward(const Navigation *self);

NavigationResult Navigation_navigate0(Navigation* self , jb_String * url);

NavigationResult Navigation_navigate1(Navigation* self , jb_String * url, NavigationNavigateOptions * options);

NavigationResult Navigation_reload0(Navigation* self );

NavigationResult Navigation_reload1(Navigation* self , NavigationReloadOptions * options);

NavigationResult Navigation_traverseTo0(Navigation* self , jb_String * key);

NavigationResult Navigation_traverseTo1(Navigation* self , jb_String * key, NavigationOptions * options);

NavigationResult Navigation_back0(Navigation* self );

NavigationResult Navigation_back1(Navigation* self , NavigationOptions * options);

NavigationResult Navigation_forward0(Navigation* self );

NavigationResult Navigation_forward1(Navigation* self , NavigationOptions * options);

jb_Any Navigation_onnavigate(const Navigation *self);

void Navigation_set_onnavigate(Navigation* self, jb_Any * value);

jb_Any Navigation_onnavigatesuccess(const Navigation *self);

void Navigation_set_onnavigatesuccess(Navigation* self, jb_Any * value);

jb_Any Navigation_onnavigateerror(const Navigation *self);

void Navigation_set_onnavigateerror(Navigation* self, jb_Any * value);

jb_Any Navigation_oncurrententrychange(const Navigation *self);

void Navigation_set_oncurrententrychange(Navigation* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
