#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MouseEventInit MouseEventInit;
typedef struct EventTarget EventTarget;
typedef struct Window Window;


/**
 * @brief Interface MouseEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MouseEvent)
 */
DECLARE_EMLITE_TYPE(MouseEvent, UIEvent);

/**
 * @brief Creates a new `MouseEvent` object. 
*/
MouseEvent MouseEvent_new0(jb_String * type);

/**
 * @brief Creates a new `MouseEvent` object. 
*/
MouseEvent MouseEvent_new1(jb_String * type, MouseEventInit * eventInitDict);

/**
 * @brief Gets the `screenX` property. 
*/
long MouseEvent_screenX(const MouseEvent *self);

/**
 * @brief Gets the `screenY` property. 
*/
long MouseEvent_screenY(const MouseEvent *self);

/**
 * @brief Gets the `clientX` property. 
*/
long MouseEvent_clientX(const MouseEvent *self);

/**
 * @brief Gets the `clientY` property. 
*/
long MouseEvent_clientY(const MouseEvent *self);

/**
 * @brief Gets the `layerX` property. 
*/
long MouseEvent_layerX(const MouseEvent *self);

/**
 * @brief Gets the `layerY` property. 
*/
long MouseEvent_layerY(const MouseEvent *self);

/**
 * @brief Gets the `ctrlKey` property. 
*/
bool MouseEvent_ctrlKey(const MouseEvent *self);

/**
 * @brief Gets the `shiftKey` property. 
*/
bool MouseEvent_shiftKey(const MouseEvent *self);

/**
 * @brief Gets the `altKey` property. 
*/
bool MouseEvent_altKey(const MouseEvent *self);

/**
 * @brief Gets the `metaKey` property. 
*/
bool MouseEvent_metaKey(const MouseEvent *self);

/**
 * @brief Gets the `button` property. 
*/
short MouseEvent_button(const MouseEvent *self);

/**
 * @brief Gets the `buttons` property. 
*/
unsigned short MouseEvent_buttons(const MouseEvent *self);

/**
 * @brief Gets the `relatedTarget` property. 
*/
EventTarget MouseEvent_relatedTarget(const MouseEvent *self);

/**
 * @brief Calls the `getModifierState` method. 
*/
bool MouseEvent_getModifierState(MouseEvent* self , jb_String * keyArg);

/**
 * @brief Gets the `pageX` property. 
*/
double MouseEvent_pageX(const MouseEvent *self);

/**
 * @brief Gets the `pageY` property. 
*/
double MouseEvent_pageY(const MouseEvent *self);

/**
 * @brief Gets the `x` property. 
*/
double MouseEvent_x(const MouseEvent *self);

/**
 * @brief Gets the `y` property. 
*/
double MouseEvent_y(const MouseEvent *self);

/**
 * @brief Gets the `offsetX` property. 
*/
double MouseEvent_offsetX(const MouseEvent *self);

/**
 * @brief Gets the `offsetY` property. 
*/
double MouseEvent_offsetY(const MouseEvent *self);

/**
 * @brief Gets the `movementX` property. 
*/
double MouseEvent_movementX(const MouseEvent *self);

/**
 * @brief Gets the `movementY` property. 
*/
double MouseEvent_movementY(const MouseEvent *self);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent0(MouseEvent* self , jb_String * typeArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent1(MouseEvent* self , jb_String * typeArg, bool bubblesArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent2(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent3(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent4(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent5(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent6(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent7(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent8(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent9(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent10(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent11(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent12(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent13(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg);

/**
 * @brief Calls the `initMouseEvent` method. 
*/
jb_Undefined MouseEvent_initMouseEvent14(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg, EventTarget * relatedTargetArg);

#ifdef __cplusplus
}
#endif
