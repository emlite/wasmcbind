#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

typedef struct Window Window;


typedef struct {
  UIEvent inner;
} KeyboardEvent;


DECLARE_EMLITE_TYPE(KeyboardEvent, UIEvent);

KeyboardEvent KeyboardEvent_new(const jb_DOMString* type);

KeyboardEvent KeyboardEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_DOMString KeyboardEvent_key( const KeyboardEvent *self);

jb_DOMString KeyboardEvent_code( const KeyboardEvent *self);

unsigned long KeyboardEvent_location( const KeyboardEvent *self);

bool KeyboardEvent_ctrlKey( const KeyboardEvent *self);

bool KeyboardEvent_shiftKey( const KeyboardEvent *self);

bool KeyboardEvent_altKey( const KeyboardEvent *self);

bool KeyboardEvent_metaKey( const KeyboardEvent *self);

bool KeyboardEvent_repeat( const KeyboardEvent *self);

bool KeyboardEvent_isComposing( const KeyboardEvent *self);

bool KeyboardEvent_getModifierState(KeyboardEvent* self , const jb_DOMString* keyArg);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg, bool ctrlKey);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg, bool ctrlKey, bool altKey);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey);

jb_Undefined KeyboardEvent_initKeyboardEvent(KeyboardEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, const jb_DOMString* keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey, bool metaKey);

unsigned long KeyboardEvent_charCode( const KeyboardEvent *self);

unsigned long KeyboardEvent_keyCode( const KeyboardEvent *self);
