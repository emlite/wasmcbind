#include <webbind/EventModifierInit.h>

DEFINE_EMLITE_TYPE(EventModifierInit, UIEventInit);


bool EventModifierInit_ctrlKey(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("ctrlKey")));
}


void EventModifierInit_set_ctrlKey(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("ctrlKey"), em_Val_from(value));
}


bool EventModifierInit_shiftKey(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("shiftKey")));
}


void EventModifierInit_set_shiftKey(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("shiftKey"), em_Val_from(value));
}


bool EventModifierInit_altKey(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("altKey")));
}


void EventModifierInit_set_altKey(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("altKey"), em_Val_from(value));
}


bool EventModifierInit_metaKey(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("metaKey")));
}


void EventModifierInit_set_metaKey(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("metaKey"), em_Val_from(value));
}


bool EventModifierInit_modifierAltGraph(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierAltGraph")));
}


void EventModifierInit_set_modifierAltGraph(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierAltGraph"), em_Val_from(value));
}


bool EventModifierInit_modifierCapsLock(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierCapsLock")));
}


void EventModifierInit_set_modifierCapsLock(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierCapsLock"), em_Val_from(value));
}


bool EventModifierInit_modifierFn(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierFn")));
}


void EventModifierInit_set_modifierFn(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierFn"), em_Val_from(value));
}


bool EventModifierInit_modifierFnLock(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierFnLock")));
}


void EventModifierInit_set_modifierFnLock(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierFnLock"), em_Val_from(value));
}


bool EventModifierInit_modifierHyper(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierHyper")));
}


void EventModifierInit_set_modifierHyper(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierHyper"), em_Val_from(value));
}


bool EventModifierInit_modifierNumLock(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierNumLock")));
}


void EventModifierInit_set_modifierNumLock(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierNumLock"), em_Val_from(value));
}


bool EventModifierInit_modifierScrollLock(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierScrollLock")));
}


void EventModifierInit_set_modifierScrollLock(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierScrollLock"), em_Val_from(value));
}


bool EventModifierInit_modifierSuper(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierSuper")));
}


void EventModifierInit_set_modifierSuper(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierSuper"), em_Val_from(value));
}


bool EventModifierInit_modifierSymbol(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierSymbol")));
}


void EventModifierInit_set_modifierSymbol(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierSymbol"), em_Val_from(value));
}


bool EventModifierInit_modifierSymbolLock(const EventModifierInit *self) {
    return em_Val_as(bool, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("modifierSymbolLock")));
}


void EventModifierInit_set_modifierSymbolLock(EventModifierInit* self, bool value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("modifierSymbolLock"), em_Val_from(value));
}


EventModifierInit EventModifierInit_new() {
    em_Val obj = em_Val_object();
    return EventModifierInit_from_val(&obj);
}

