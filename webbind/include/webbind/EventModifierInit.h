#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EventModifierInit, UIEventInit);

bool EventModifierInit_ctrlKey(const EventModifierInit *self);

void EventModifierInit_set_ctrlKey(EventModifierInit* self, bool value);

bool EventModifierInit_shiftKey(const EventModifierInit *self);

void EventModifierInit_set_shiftKey(EventModifierInit* self, bool value);

bool EventModifierInit_altKey(const EventModifierInit *self);

void EventModifierInit_set_altKey(EventModifierInit* self, bool value);

bool EventModifierInit_metaKey(const EventModifierInit *self);

void EventModifierInit_set_metaKey(EventModifierInit* self, bool value);

bool EventModifierInit_modifierAltGraph(const EventModifierInit *self);

void EventModifierInit_set_modifierAltGraph(EventModifierInit* self, bool value);

bool EventModifierInit_modifierCapsLock(const EventModifierInit *self);

void EventModifierInit_set_modifierCapsLock(EventModifierInit* self, bool value);

bool EventModifierInit_modifierFn(const EventModifierInit *self);

void EventModifierInit_set_modifierFn(EventModifierInit* self, bool value);

bool EventModifierInit_modifierFnLock(const EventModifierInit *self);

void EventModifierInit_set_modifierFnLock(EventModifierInit* self, bool value);

bool EventModifierInit_modifierHyper(const EventModifierInit *self);

void EventModifierInit_set_modifierHyper(EventModifierInit* self, bool value);

bool EventModifierInit_modifierNumLock(const EventModifierInit *self);

void EventModifierInit_set_modifierNumLock(EventModifierInit* self, bool value);

bool EventModifierInit_modifierScrollLock(const EventModifierInit *self);

void EventModifierInit_set_modifierScrollLock(EventModifierInit* self, bool value);

bool EventModifierInit_modifierSuper(const EventModifierInit *self);

void EventModifierInit_set_modifierSuper(EventModifierInit* self, bool value);

bool EventModifierInit_modifierSymbol(const EventModifierInit *self);

void EventModifierInit_set_modifierSymbol(EventModifierInit* self, bool value);

bool EventModifierInit_modifierSymbolLock(const EventModifierInit *self);

void EventModifierInit_set_modifierSymbolLock(EventModifierInit* self, bool value);

EventModifierInit EventModifierInit_new();

#ifdef __cplusplus
}
#endif
