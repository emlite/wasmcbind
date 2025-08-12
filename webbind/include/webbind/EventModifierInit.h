#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EventModifierInit */
DECLARE_EMLITE_TYPE(EventModifierInit, UIEventInit);

/** @brief Getter of the ctrlKey property */
bool EventModifierInit_ctrlKey(const EventModifierInit *self);

/** @brief Setter of the ctrlKey property */
void EventModifierInit_set_ctrlKey(EventModifierInit* self, bool value);

/** @brief Getter of the shiftKey property */
bool EventModifierInit_shiftKey(const EventModifierInit *self);

/** @brief Setter of the shiftKey property */
void EventModifierInit_set_shiftKey(EventModifierInit* self, bool value);

/** @brief Getter of the altKey property */
bool EventModifierInit_altKey(const EventModifierInit *self);

/** @brief Setter of the altKey property */
void EventModifierInit_set_altKey(EventModifierInit* self, bool value);

/** @brief Getter of the metaKey property */
bool EventModifierInit_metaKey(const EventModifierInit *self);

/** @brief Setter of the metaKey property */
void EventModifierInit_set_metaKey(EventModifierInit* self, bool value);

/** @brief Getter of the modifierAltGraph property */
bool EventModifierInit_modifierAltGraph(const EventModifierInit *self);

/** @brief Setter of the modifierAltGraph property */
void EventModifierInit_set_modifierAltGraph(EventModifierInit* self, bool value);

/** @brief Getter of the modifierCapsLock property */
bool EventModifierInit_modifierCapsLock(const EventModifierInit *self);

/** @brief Setter of the modifierCapsLock property */
void EventModifierInit_set_modifierCapsLock(EventModifierInit* self, bool value);

/** @brief Getter of the modifierFn property */
bool EventModifierInit_modifierFn(const EventModifierInit *self);

/** @brief Setter of the modifierFn property */
void EventModifierInit_set_modifierFn(EventModifierInit* self, bool value);

/** @brief Getter of the modifierFnLock property */
bool EventModifierInit_modifierFnLock(const EventModifierInit *self);

/** @brief Setter of the modifierFnLock property */
void EventModifierInit_set_modifierFnLock(EventModifierInit* self, bool value);

/** @brief Getter of the modifierHyper property */
bool EventModifierInit_modifierHyper(const EventModifierInit *self);

/** @brief Setter of the modifierHyper property */
void EventModifierInit_set_modifierHyper(EventModifierInit* self, bool value);

/** @brief Getter of the modifierNumLock property */
bool EventModifierInit_modifierNumLock(const EventModifierInit *self);

/** @brief Setter of the modifierNumLock property */
void EventModifierInit_set_modifierNumLock(EventModifierInit* self, bool value);

/** @brief Getter of the modifierScrollLock property */
bool EventModifierInit_modifierScrollLock(const EventModifierInit *self);

/** @brief Setter of the modifierScrollLock property */
void EventModifierInit_set_modifierScrollLock(EventModifierInit* self, bool value);

/** @brief Getter of the modifierSuper property */
bool EventModifierInit_modifierSuper(const EventModifierInit *self);

/** @brief Setter of the modifierSuper property */
void EventModifierInit_set_modifierSuper(EventModifierInit* self, bool value);

/** @brief Getter of the modifierSymbol property */
bool EventModifierInit_modifierSymbol(const EventModifierInit *self);

/** @brief Setter of the modifierSymbol property */
void EventModifierInit_set_modifierSymbol(EventModifierInit* self, bool value);

/** @brief Getter of the modifierSymbolLock property */
bool EventModifierInit_modifierSymbolLock(const EventModifierInit *self);

/** @brief Setter of the modifierSymbolLock property */
void EventModifierInit_set_modifierSymbolLock(EventModifierInit* self, bool value);

/** @brief Constructor of the EventModifierInit dictionary type */
EventModifierInit EventModifierInit_new();

#ifdef __cplusplus
}
#endif
