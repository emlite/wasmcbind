#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLMarqueeElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMarqueeElement)
 */
DECLARE_EMLITE_TYPE(HTMLMarqueeElement, HTMLElement);

/**
 * @brief Creates a new `HTMLMarqueeElement` object. 
*/
HTMLMarqueeElement HTMLMarqueeElement_new();

/**
 * @brief Gets the `behavior` property. 
*/
jb_String HTMLMarqueeElement_behavior(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `behavior` property. 
*/
void HTMLMarqueeElement_set_behavior(HTMLMarqueeElement* self, jb_String * value);

/**
 * @brief Gets the `bgColor` property. 
*/
jb_String HTMLMarqueeElement_bgColor(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `bgColor` property. 
*/
void HTMLMarqueeElement_set_bgColor(HTMLMarqueeElement* self, jb_String * value);

/**
 * @brief Gets the `direction` property. 
*/
jb_String HTMLMarqueeElement_direction(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `direction` property. 
*/
void HTMLMarqueeElement_set_direction(HTMLMarqueeElement* self, jb_String * value);

/**
 * @brief Gets the `height` property. 
*/
jb_String HTMLMarqueeElement_height(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLMarqueeElement_set_height(HTMLMarqueeElement* self, jb_String * value);

/**
 * @brief Gets the `hspace` property. 
*/
unsigned long HTMLMarqueeElement_hspace(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `hspace` property. 
*/
void HTMLMarqueeElement_set_hspace(HTMLMarqueeElement* self, unsigned long value);

/**
 * @brief Gets the `loop` property. 
*/
long HTMLMarqueeElement_loop(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `loop` property. 
*/
void HTMLMarqueeElement_set_loop(HTMLMarqueeElement* self, long value);

/**
 * @brief Gets the `scrollAmount` property. 
*/
unsigned long HTMLMarqueeElement_scrollAmount(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `scrollAmount` property. 
*/
void HTMLMarqueeElement_set_scrollAmount(HTMLMarqueeElement* self, unsigned long value);

/**
 * @brief Gets the `scrollDelay` property. 
*/
unsigned long HTMLMarqueeElement_scrollDelay(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `scrollDelay` property. 
*/
void HTMLMarqueeElement_set_scrollDelay(HTMLMarqueeElement* self, unsigned long value);

/**
 * @brief Gets the `trueSpeed` property. 
*/
bool HTMLMarqueeElement_trueSpeed(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `trueSpeed` property. 
*/
void HTMLMarqueeElement_set_trueSpeed(HTMLMarqueeElement* self, bool value);

/**
 * @brief Gets the `vspace` property. 
*/
unsigned long HTMLMarqueeElement_vspace(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `vspace` property. 
*/
void HTMLMarqueeElement_set_vspace(HTMLMarqueeElement* self, unsigned long value);

/**
 * @brief Gets the `width` property. 
*/
jb_String HTMLMarqueeElement_width(const HTMLMarqueeElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLMarqueeElement_set_width(HTMLMarqueeElement* self, jb_String * value);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined HTMLMarqueeElement_start(HTMLMarqueeElement* self );

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined HTMLMarqueeElement_stop(HTMLMarqueeElement* self );

#ifdef __cplusplus
}
#endif
