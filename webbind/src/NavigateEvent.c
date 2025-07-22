#include <webbind/NavigateEvent.h>
#include <webbind/NavigationDestination.h>
#include <webbind/AbortSignal.h>
#include <webbind/FormData.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(NavigationInterceptOptions, em_Val);


jb_Function NavigationInterceptOptions_handler(const NavigationInterceptOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("handler")));
}


void NavigationInterceptOptions_set_handler(NavigationInterceptOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("handler"), em_Val_from(value));
}


NavigationFocusReset NavigationInterceptOptions_focusReset(const NavigationInterceptOptions *self) {
    return em_Val_as(NavigationFocusReset, em_Val_get(em_Val_as_val(self->inner), em_Val_from("focusReset")));
}


void NavigationInterceptOptions_set_focusReset(NavigationInterceptOptions* self, NavigationFocusReset * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("focusReset"), em_Val_from(value));
}


NavigationScrollBehavior NavigationInterceptOptions_scroll(const NavigationInterceptOptions *self) {
    return em_Val_as(NavigationScrollBehavior, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scroll")));
}


void NavigationInterceptOptions_set_scroll(NavigationInterceptOptions* self, NavigationScrollBehavior * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scroll"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(NavigateEvent, Event);


NavigateEvent NavigateEvent_new(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("NavigateEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return NavigateEvent_from_val(&vv);
      }


NavigationType NavigateEvent_navigationType(const NavigateEvent *self) {
    return em_Val_as(NavigationType, em_Val_get(Event_as_val(self->inner), em_Val_from("navigationType")));
}


NavigationDestination NavigateEvent_destination(const NavigateEvent *self) {
    return em_Val_as(NavigationDestination, em_Val_get(Event_as_val(self->inner), em_Val_from("destination")));
}


bool NavigateEvent_canIntercept(const NavigateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("canIntercept")));
}


bool NavigateEvent_userInitiated(const NavigateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("userInitiated")));
}


bool NavigateEvent_hashChange(const NavigateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("hashChange")));
}


AbortSignal NavigateEvent_signal(const NavigateEvent *self) {
    return em_Val_as(AbortSignal, em_Val_get(Event_as_val(self->inner), em_Val_from("signal")));
}


FormData NavigateEvent_formData(const NavigateEvent *self) {
    return em_Val_as(FormData, em_Val_get(Event_as_val(self->inner), em_Val_from("formData")));
}


jb_DOMString NavigateEvent_downloadRequest(const NavigateEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("downloadRequest")));
}


jb_Any NavigateEvent_info(const NavigateEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("info")));
}


bool NavigateEvent_hasUAVisualTransition(const NavigateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("hasUAVisualTransition")));
}


Element NavigateEvent_sourceElement(const NavigateEvent *self) {
    return em_Val_as(Element, em_Val_get(Event_as_val(self->inner), em_Val_from("sourceElement")));
}


jb_Undefined NavigateEvent_intercept0(NavigateEvent* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "intercept"));
}


jb_Undefined NavigateEvent_intercept1(NavigateEvent* self , NavigationInterceptOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "intercept", em_Val_from(options)));
}


jb_Undefined NavigateEvent_scroll(NavigateEvent* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "scroll"));
}

