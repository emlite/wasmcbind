#include <webbind/Navigation.h>
#include <webbind/NavigationHistoryEntry.h>
#include <webbind/NavigationTransition.h>
#include <webbind/NavigationActivation.h>


DEFINE_EMLITE_TYPE(NavigationUpdateCurrentEntryOptions, em_Val);


jb_Any NavigationUpdateCurrentEntryOptions_state(const NavigationUpdateCurrentEntryOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("state")));
}


void NavigationUpdateCurrentEntryOptions_set_state(NavigationUpdateCurrentEntryOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(NavigationResult, em_Val);


jb_Promise NavigationResult_committed(const NavigationResult *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("committed")));
}


void NavigationResult_set_committed(NavigationResult* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("committed"), em_Val_from(value));
}


jb_Promise NavigationResult_finished(const NavigationResult *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("finished")));
}


void NavigationResult_set_finished(NavigationResult* self, jb_Promise * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("finished"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(NavigationNavigateOptions, em_Val);


jb_Any NavigationNavigateOptions_state(const NavigationNavigateOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("state")));
}


void NavigationNavigateOptions_set_state(NavigationNavigateOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}


NavigationHistoryBehavior NavigationNavigateOptions_history(const NavigationNavigateOptions *self) {
    return em_Val_as(NavigationHistoryBehavior, em_Val_get(em_Val_as_val(self->inner), em_Val_from("history")));
}


void NavigationNavigateOptions_set_history(NavigationNavigateOptions* self, NavigationHistoryBehavior * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("history"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(NavigationReloadOptions, em_Val);


jb_Any NavigationReloadOptions_state(const NavigationReloadOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("state")));
}


void NavigationReloadOptions_set_state(NavigationReloadOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(NavigationOptions, em_Val);


jb_Any NavigationOptions_info(const NavigationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("info")));
}


void NavigationOptions_set_info(NavigationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("info"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Navigation, EventTarget);


jb_Array Navigation_entries(Navigation* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "entries"));
}


NavigationHistoryEntry Navigation_currentEntry(const Navigation *self) {
    return em_Val_as(NavigationHistoryEntry, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("currentEntry")));
}


jb_Undefined Navigation_updateCurrentEntry(Navigation* self , NavigationUpdateCurrentEntryOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateCurrentEntry", em_Val_from(options)));
}


NavigationTransition Navigation_transition(const Navigation *self) {
    return em_Val_as(NavigationTransition, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("transition")));
}


NavigationActivation Navigation_activation(const Navigation *self) {
    return em_Val_as(NavigationActivation, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("activation")));
}


bool Navigation_canGoBack(const Navigation *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("canGoBack")));
}


bool Navigation_canGoForward(const Navigation *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("canGoForward")));
}


NavigationResult Navigation_navigate0(Navigation* self , jb_String * url) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "navigate", em_Val_from(url)));
}


NavigationResult Navigation_navigate1(Navigation* self , jb_String * url, NavigationNavigateOptions * options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "navigate", em_Val_from(url), em_Val_from(options)));
}


NavigationResult Navigation_reload0(Navigation* self ) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "reload"));
}


NavigationResult Navigation_reload1(Navigation* self , NavigationReloadOptions * options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "reload", em_Val_from(options)));
}


NavigationResult Navigation_traverseTo0(Navigation* self , jb_String * key) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "traverseTo", em_Val_from(key)));
}


NavigationResult Navigation_traverseTo1(Navigation* self , jb_String * key, NavigationOptions * options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "traverseTo", em_Val_from(key), em_Val_from(options)));
}


NavigationResult Navigation_back0(Navigation* self ) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "back"));
}


NavigationResult Navigation_back1(Navigation* self , NavigationOptions * options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "back", em_Val_from(options)));
}


NavigationResult Navigation_forward0(Navigation* self ) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "forward"));
}


NavigationResult Navigation_forward1(Navigation* self , NavigationOptions * options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "forward", em_Val_from(options)));
}


jb_Any Navigation_onnavigate(const Navigation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onnavigate")));
}


void Navigation_set_onnavigate(Navigation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onnavigate"), em_Val_from(value));
}


jb_Any Navigation_onnavigatesuccess(const Navigation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onnavigatesuccess")));
}


void Navigation_set_onnavigatesuccess(Navigation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onnavigatesuccess"), em_Val_from(value));
}


jb_Any Navigation_onnavigateerror(const Navigation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onnavigateerror")));
}


void Navigation_set_onnavigateerror(Navigation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onnavigateerror"), em_Val_from(value));
}


jb_Any Navigation_oncurrententrychange(const Navigation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncurrententrychange")));
}


void Navigation_set_oncurrententrychange(Navigation* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncurrententrychange"), em_Val_from(value));
}

