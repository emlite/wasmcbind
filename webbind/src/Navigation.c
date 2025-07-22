#include <webbind/Navigation.h>
#include <webbind/NavigationHistoryEntry.h>
#include <webbind/NavigationTransition.h>
#include <webbind/NavigationActivation.h>


DEFINE_EMLITE_TYPE(NavigationUpdateCurrentEntryOptions, em_Val);


jb_Any NavigationUpdateCurrentEntryOptions_state(const NavigationUpdateCurrentEntryOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "state"));
}


void NavigationUpdateCurrentEntryOptions_set_state(NavigationUpdateCurrentEntryOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "state", value);
}

DEFINE_EMLITE_TYPE(NavigationResult, em_Val);


jb_Promise NavigationResult_committed(const NavigationResult *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "committed"));
}


void NavigationResult_set_committed(NavigationResult* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "committed", value);
}


jb_Promise NavigationResult_finished(const NavigationResult *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "finished"));
}


void NavigationResult_set_finished(NavigationResult* self, const jb_Promise* value) {
    em_Val_set(em_Val_as_val(self->inner), "finished", value);
}

DEFINE_EMLITE_TYPE(NavigationNavigateOptions, em_Val);


jb_Any NavigationNavigateOptions_state(const NavigationNavigateOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "state"));
}


void NavigationNavigateOptions_set_state(NavigationNavigateOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "state", value);
}


NavigationHistoryBehavior NavigationNavigateOptions_history(const NavigationNavigateOptions *self) {
    return em_Val_as(NavigationHistoryBehavior, em_Val_get(em_Val_as_val(self->inner), "history"));
}


void NavigationNavigateOptions_set_history(NavigationNavigateOptions* self, const NavigationHistoryBehavior* value) {
    em_Val_set(em_Val_as_val(self->inner), "history", value);
}

DEFINE_EMLITE_TYPE(NavigationReloadOptions, em_Val);


jb_Any NavigationReloadOptions_state(const NavigationReloadOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "state"));
}


void NavigationReloadOptions_set_state(NavigationReloadOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "state", value);
}

DEFINE_EMLITE_TYPE(NavigationOptions, em_Val);


jb_Any NavigationOptions_info(const NavigationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "info"));
}


void NavigationOptions_set_info(NavigationOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "info", value);
}

DEFINE_EMLITE_TYPE(Navigation, EventTarget);


jb_Sequence Navigation_entries(Navigation* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "entries"));
}


NavigationHistoryEntry Navigation_currentEntry(const Navigation *self) {
    return em_Val_as(NavigationHistoryEntry, em_Val_get(EventTarget_as_val(self->inner), "currentEntry"));
}


jb_Undefined Navigation_updateCurrentEntry(Navigation* self , const NavigationUpdateCurrentEntryOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateCurrentEntry", em_Val_from(options)));
}


NavigationTransition Navigation_transition(const Navigation *self) {
    return em_Val_as(NavigationTransition, em_Val_get(EventTarget_as_val(self->inner), "transition"));
}


NavigationActivation Navigation_activation(const Navigation *self) {
    return em_Val_as(NavigationActivation, em_Val_get(EventTarget_as_val(self->inner), "activation"));
}


bool Navigation_canGoBack(const Navigation *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "canGoBack"));
}


bool Navigation_canGoForward(const Navigation *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "canGoForward"));
}


NavigationResult Navigation_navigate(Navigation* self , const jb_USVString* url) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "navigate", em_Val_from(url)));
}


NavigationResult Navigation_navigate(Navigation* self , const jb_USVString* url, const NavigationNavigateOptions* options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "navigate", em_Val_from(url), em_Val_from(options)));
}


NavigationResult Navigation_reload(Navigation* self ) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "reload"));
}


NavigationResult Navigation_reload(Navigation* self , const NavigationReloadOptions* options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "reload", em_Val_from(options)));
}


NavigationResult Navigation_traverseTo(Navigation* self , const jb_DOMString* key) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "traverseTo", em_Val_from(key)));
}


NavigationResult Navigation_traverseTo(Navigation* self , const jb_DOMString* key, const NavigationOptions* options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "traverseTo", em_Val_from(key), em_Val_from(options)));
}


NavigationResult Navigation_back(Navigation* self ) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "back"));
}


NavigationResult Navigation_back(Navigation* self , const NavigationOptions* options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "back", em_Val_from(options)));
}


NavigationResult Navigation_forward(Navigation* self ) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "forward"));
}


NavigationResult Navigation_forward(Navigation* self , const NavigationOptions* options) {
    return em_Val_as(NavigationResult, em_Val_call(EventTarget_as_val(self->inner), "forward", em_Val_from(options)));
}


jb_Any Navigation_onnavigate(const Navigation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onnavigate"));
}


void Navigation_set_onnavigate(Navigation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onnavigate", value);
}


jb_Any Navigation_onnavigatesuccess(const Navigation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onnavigatesuccess"));
}


void Navigation_set_onnavigatesuccess(Navigation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onnavigatesuccess", value);
}


jb_Any Navigation_onnavigateerror(const Navigation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onnavigateerror"));
}


void Navigation_set_onnavigateerror(Navigation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onnavigateerror", value);
}


jb_Any Navigation_oncurrententrychange(const Navigation *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncurrententrychange"));
}


void Navigation_set_oncurrententrychange(Navigation* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncurrententrychange", value);
}

