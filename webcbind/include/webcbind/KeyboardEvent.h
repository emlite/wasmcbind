#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct KeyboardEventInit KeyboardEventInit;
typedef struct Window Window;


/**
 * @brief Interface KeyboardEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent)
 */
DECLARE_EMLITE_TYPE(KeyboardEvent, UIEvent);

/**
 * @brief Creates a new `KeyboardEvent` object. 
*/
KeyboardEvent KeyboardEvent_new0(jb_String * type);

/**
 * @brief Creates a new `KeyboardEvent` object. 
*/
KeyboardEvent KeyboardEvent_new1(jb_String * type, KeyboardEventInit * eventInitDict);

/**
 * @brief Gets the `key` property. 
*/
jb_String KeyboardEvent_key(const KeyboardEvent *self);

/**
 * @brief Gets the `code` property. 
*/
jb_String KeyboardEvent_code(const KeyboardEvent *self);

/**
 * @brief Gets the `location` property. 
*/
unsigned long KeyboardEvent_location(const KeyboardEvent *self);

/**
 * @brief Gets the `ctrlKey` property. 
*/
bool KeyboardEvent_ctrlKey(const KeyboardEvent *self);

/**
 * @brief Gets the `shiftKey` property. 
*/
bool KeyboardEvent_shiftKey(const KeyboardEvent *self);

/**
 * @brief Gets the `altKey` property. 
*/
bool KeyboardEvent_altKey(const KeyboardEvent *self);

/**
 * @brief Gets the `metaKey` property. 
*/
bool KeyboardEvent_metaKey(const KeyboardEvent *self);

/**
 * @brief Gets the `repeat` property. 
*/
bool KeyboardEvent_repeat(const KeyboardEvent *self);

/**
 * @brief Gets the `isComposing` property. 
*/
bool KeyboardEvent_isComposing(const KeyboardEvent *self);

/**
 * @brief Calls the `getModifierState` method. 
*/
bool KeyboardEvent_getModifierState(KeyboardEvent* self , jb_String * keyArg);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent0(KeyboardEvent* self , jb_String * typeArg);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent1(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent2(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent3(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent4(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent5(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent6(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg, bool ctrlKey);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent7(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg, bool ctrlKey, bool altKey);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent8(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey);

/**
 * @brief Calls the `initKeyboardEvent` method. 
*/
jb_Undefined KeyboardEvent_initKeyboardEvent9(KeyboardEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, jb_String * keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey, bool metaKey);

/**
 * @brief Gets the `charCode` property. 
*/
unsigned long KeyboardEvent_charCode(const KeyboardEvent *self);

/**
 * @brief Gets the `keyCode` property. 
*/
unsigned long KeyboardEvent_keyCode(const KeyboardEvent *self);

#ifdef __cplusplus
}
#endif
