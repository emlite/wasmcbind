#include <webbind/NavigateEvent.h>
#include <webbind/NavigationDestination.h>
#include <webbind/AbortSignal.h>
#include <webbind/FormData.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(NavigationInterceptOptions, em_Val);


jb_Function NavigationInterceptOptions_handler(const NavigationInterceptOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "handler"));
}


void NavigationInterceptOptions_set_handler(NavigationInterceptOptions* self, const jb_Function* value) {
    em_Val_set(em_Val_as_val(self->inner), "handler", value);
}


NavigationFocusReset NavigationInterceptOptions_focusReset(const NavigationInterceptOptions *self) {
    return em_Val_as(NavigationFocusReset, em_Val_get(em_Val_as_val(self->inner), "focusReset"));
}


void NavigationInterceptOptions_set_focusReset(NavigationInterceptOptions* self, const NavigationFocusReset* value) {
    em_Val_set(em_Val_as_val(self->inner), "focusReset", value);
}


NavigationScrollBehavior NavigationInterceptOptions_scroll(const NavigationInterceptOptions *self) {
    return em_Val_as(NavigationScrollBehavior, em_Val_get(em_Val_as_val(self->inner), "scroll"));
}


void NavigationInterceptOptions_set_scroll(NavigationInterceptOptions* self, const NavigationScrollBehavior* value) {
    em_Val_set(em_Val_as_val(self->inner), "scroll", value);
}

DEFINE_EMLITE_TYPE(NavigateEvent, Event);


NavigateEvent NavigateEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("NavigateEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return NavigateEvent(em_Val_new(em_Val_global("NavigateEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


NavigationType NavigateEvent_navigationType(const NavigateEvent *self) {
    return em_Val_as(NavigationType, em_Val_get(Event_as_val(self->inner), "navigationType"));
}


NavigationDestination NavigateEvent_destination(const NavigateEvent *self) {
    return em_Val_as(NavigationDestination, em_Val_get(Event_as_val(self->inner), "destination"));
}


bool NavigateEvent_canIntercept(const NavigateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "canIntercept"));
}


bool NavigateEvent_userInitiated(const NavigateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "userInitiated"));
}


bool NavigateEvent_hashChange(const NavigateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "hashChange"));
}


AbortSignal NavigateEvent_signal(const NavigateEvent *self) {
    return em_Val_as(AbortSignal, em_Val_get(Event_as_val(self->inner), "signal"));
}


FormData NavigateEvent_formData(const NavigateEvent *self) {
    return em_Val_as(FormData, em_Val_get(Event_as_val(self->inner), "formData"));
}


jb_DOMString NavigateEvent_downloadRequest(const NavigateEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "downloadRequest"));
}


jb_Any NavigateEvent_info(const NavigateEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "info"));
}


bool NavigateEvent_hasUAVisualTransition(const NavigateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "hasUAVisualTransition"));
}


Element NavigateEvent_sourceElement(const NavigateEvent *self) {
    return em_Val_as(Element, em_Val_get(Event_as_val(self->inner), "sourceElement"));
}


jb_Undefined NavigateEvent_intercept(NavigateEvent* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "intercept"));
}


jb_Undefined NavigateEvent_intercept(NavigateEvent* self , const NavigationInterceptOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "intercept", em_Val_from(options)));
}


jb_Undefined NavigateEvent_scroll(NavigateEvent* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "scroll"));
}

