#include <webcbind/NavigateEventInit.h>

#include <webcbind/NavigationDestination.h>
#include <webcbind/AbortSignal.h>
#include <webcbind/FormData.h>
#include <webcbind/Element.h>

DEFINE_EMLITE_TYPE(NavigateEventInit, EventInit);


NavigationType NavigateEventInit_navigationType(const NavigateEventInit *self) {
    return em_Val_as(NavigationType, em_Val_get(EventInit_as_val(self->inner), em_Val_from("navigationType")));
}


void NavigateEventInit_set_navigationType(NavigateEventInit* self, NavigationType * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("navigationType"), em_Val_from(value));
}


NavigationDestination NavigateEventInit_destination(const NavigateEventInit *self) {
    return em_Val_as(NavigationDestination, em_Val_get(EventInit_as_val(self->inner), em_Val_from("destination")));
}


void NavigateEventInit_set_destination(NavigateEventInit* self, NavigationDestination * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("destination"), em_Val_from(value));
}


bool NavigateEventInit_canIntercept(const NavigateEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("canIntercept")));
}


void NavigateEventInit_set_canIntercept(NavigateEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("canIntercept"), em_Val_from(value));
}


bool NavigateEventInit_userInitiated(const NavigateEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("userInitiated")));
}


void NavigateEventInit_set_userInitiated(NavigateEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("userInitiated"), em_Val_from(value));
}


bool NavigateEventInit_hashChange(const NavigateEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("hashChange")));
}


void NavigateEventInit_set_hashChange(NavigateEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("hashChange"), em_Val_from(value));
}


AbortSignal NavigateEventInit_signal(const NavigateEventInit *self) {
    return em_Val_as(AbortSignal, em_Val_get(EventInit_as_val(self->inner), em_Val_from("signal")));
}


void NavigateEventInit_set_signal(NavigateEventInit* self, AbortSignal * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


FormData NavigateEventInit_formData(const NavigateEventInit *self) {
    return em_Val_as(FormData, em_Val_get(EventInit_as_val(self->inner), em_Val_from("formData")));
}


void NavigateEventInit_set_formData(NavigateEventInit* self, FormData * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("formData"), em_Val_from(value));
}


jb_String NavigateEventInit_downloadRequest(const NavigateEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("downloadRequest")));
}


void NavigateEventInit_set_downloadRequest(NavigateEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("downloadRequest"), em_Val_from(value));
}


jb_Any NavigateEventInit_info(const NavigateEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("info")));
}


void NavigateEventInit_set_info(NavigateEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("info"), em_Val_from(value));
}


bool NavigateEventInit_hasUAVisualTransition(const NavigateEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("hasUAVisualTransition")));
}


void NavigateEventInit_set_hasUAVisualTransition(NavigateEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("hasUAVisualTransition"), em_Val_from(value));
}


Element NavigateEventInit_sourceElement(const NavigateEventInit *self) {
    return em_Val_as(Element, em_Val_get(EventInit_as_val(self->inner), em_Val_from("sourceElement")));
}


void NavigateEventInit_set_sourceElement(NavigateEventInit* self, Element * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("sourceElement"), em_Val_from(value));
}


NavigateEventInit NavigateEventInit_new() {
    em_Val obj = em_Val_object();
    return NavigateEventInit_from_val(&obj);
}

