#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct NavigationHistoryEntry NavigationHistoryEntry;
typedef struct NavigationUpdateCurrentEntryOptions NavigationUpdateCurrentEntryOptions;
typedef struct NavigationTransition NavigationTransition;
typedef struct NavigationActivation NavigationActivation;
typedef struct NavigationResult NavigationResult;
typedef struct NavigationNavigateOptions NavigationNavigateOptions;
typedef struct NavigationReloadOptions NavigationReloadOptions;
typedef struct NavigationOptions NavigationOptions;


typedef struct {
  em_Val inner;
} NavigationUpdateCurrentEntryOptions;


DECLARE_EMLITE_TYPE(NavigationUpdateCurrentEntryOptions, em_Val);

jb_Any NavigationUpdateCurrentEntryOptions_state( const NavigationUpdateCurrentEntryOptions *self);

void NavigationUpdateCurrentEntryOptions_set_state(NavigationUpdateCurrentEntryOptions* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} NavigationResult;


DECLARE_EMLITE_TYPE(NavigationResult, em_Val);

jb_Promise NavigationResult_committed( const NavigationResult *self);

void NavigationResult_set_committed(NavigationResult* self, const jb_Promise* value);

jb_Promise NavigationResult_finished( const NavigationResult *self);

void NavigationResult_set_finished(NavigationResult* self, const jb_Promise* value);
typedef struct {
  em_Val inner;
} NavigationNavigateOptions;


DECLARE_EMLITE_TYPE(NavigationNavigateOptions, em_Val);

jb_Any NavigationNavigateOptions_state( const NavigationNavigateOptions *self);

void NavigationNavigateOptions_set_state(NavigationNavigateOptions* self, const jb_Any* value);

NavigationHistoryBehavior NavigationNavigateOptions_history( const NavigationNavigateOptions *self);

void NavigationNavigateOptions_set_history(NavigationNavigateOptions* self, const NavigationHistoryBehavior* value);
typedef struct {
  em_Val inner;
} NavigationReloadOptions;


DECLARE_EMLITE_TYPE(NavigationReloadOptions, em_Val);

jb_Any NavigationReloadOptions_state( const NavigationReloadOptions *self);

void NavigationReloadOptions_set_state(NavigationReloadOptions* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} NavigationOptions;


DECLARE_EMLITE_TYPE(NavigationOptions, em_Val);

jb_Any NavigationOptions_info( const NavigationOptions *self);

void NavigationOptions_set_info(NavigationOptions* self, const jb_Any* value);
typedef struct {
  EventTarget inner;
} Navigation;


DECLARE_EMLITE_TYPE(Navigation, EventTarget);

jb_Sequence Navigation_entries(Navigation* self );

NavigationHistoryEntry Navigation_currentEntry( const Navigation *self);

jb_Undefined Navigation_updateCurrentEntry(Navigation* self , const NavigationUpdateCurrentEntryOptions* options);

NavigationTransition Navigation_transition( const Navigation *self);

NavigationActivation Navigation_activation( const Navigation *self);

bool Navigation_canGoBack( const Navigation *self);

bool Navigation_canGoForward( const Navigation *self);

NavigationResult Navigation_navigate(Navigation* self , const jb_USVString* url);

NavigationResult Navigation_navigate(Navigation* self , const jb_USVString* url, const NavigationNavigateOptions* options);

NavigationResult Navigation_reload(Navigation* self );

NavigationResult Navigation_reload(Navigation* self , const NavigationReloadOptions* options);

NavigationResult Navigation_traverseTo(Navigation* self , const jb_DOMString* key);

NavigationResult Navigation_traverseTo(Navigation* self , const jb_DOMString* key, const NavigationOptions* options);

NavigationResult Navigation_back(Navigation* self );

NavigationResult Navigation_back(Navigation* self , const NavigationOptions* options);

NavigationResult Navigation_forward(Navigation* self );

NavigationResult Navigation_forward(Navigation* self , const NavigationOptions* options);

jb_Any Navigation_onnavigate( const Navigation *self);

void Navigation_set_onnavigate(Navigation* self, const jb_Any* value);

jb_Any Navigation_onnavigatesuccess( const Navigation *self);

void Navigation_set_onnavigatesuccess(Navigation* self, const jb_Any* value);

jb_Any Navigation_onnavigateerror( const Navigation *self);

void Navigation_set_onnavigateerror(Navigation* self, const jb_Any* value);

jb_Any Navigation_oncurrententrychange( const Navigation *self);

void Navigation_set_oncurrententrychange(Navigation* self, const jb_Any* value);
