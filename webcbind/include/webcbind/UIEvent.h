#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct UIEventInit UIEventInit;
typedef struct Window Window;
typedef struct InputDeviceCapabilities InputDeviceCapabilities;


/**
 * @brief Interface UIEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent)
 */
DECLARE_EMLITE_TYPE(UIEvent, Event);

/**
 * @brief Creates a new `UIEvent` object. 
*/
UIEvent UIEvent_new0(jb_String * type);

/**
 * @brief Creates a new `UIEvent` object. 
*/
UIEvent UIEvent_new1(jb_String * type, UIEventInit * eventInitDict);

/**
 * @brief Gets the `view` property. 
*/
Window UIEvent_view(const UIEvent *self);

/**
 * @brief Gets the `detail` property. 
*/
long UIEvent_detail(const UIEvent *self);

/**
 * @brief Gets the `sourceCapabilities` property. 
*/
InputDeviceCapabilities UIEvent_sourceCapabilities(const UIEvent *self);

/**
 * @brief Calls the `initUIEvent` method. 
*/
jb_Undefined UIEvent_initUIEvent0(UIEvent* self , jb_String * typeArg);

/**
 * @brief Calls the `initUIEvent` method. 
*/
jb_Undefined UIEvent_initUIEvent1(UIEvent* self , jb_String * typeArg, bool bubblesArg);

/**
 * @brief Calls the `initUIEvent` method. 
*/
jb_Undefined UIEvent_initUIEvent2(UIEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg);

/**
 * @brief Calls the `initUIEvent` method. 
*/
jb_Undefined UIEvent_initUIEvent3(UIEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg);

/**
 * @brief Calls the `initUIEvent` method. 
*/
jb_Undefined UIEvent_initUIEvent4(UIEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg);

/**
 * @brief Gets the `which` property. 
*/
unsigned long UIEvent_which(const UIEvent *self);

#ifdef __cplusplus
}
#endif
