#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleProperties CSSStyleProperties;
typedef struct DOMStringMap DOMStringMap;
typedef struct FocusOptions FocusOptions;


/**
 * @brief Interface MathMLElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement)
 */
DECLARE_EMLITE_TYPE(MathMLElement, Element);

/**
 * @brief Gets the `style` property. 
*/
CSSStyleProperties MathMLElement_style(const MathMLElement *self);

/**
 * @brief Gets the `onbeforexrselect` property. 
*/
jb_Any MathMLElement_onbeforexrselect(const MathMLElement *self);

/**
 * @brief Sets the `onbeforexrselect` property. 
*/
void MathMLElement_set_onbeforexrselect(MathMLElement* self, jb_Any * value);

/**
 * @brief Gets the `dataset` property. 
*/
DOMStringMap MathMLElement_dataset(const MathMLElement *self);

/**
 * @brief Gets the `nonce` property. 
*/
jb_String MathMLElement_nonce(const MathMLElement *self);

/**
 * @brief Sets the `nonce` property. 
*/
void MathMLElement_set_nonce(MathMLElement* self, jb_String * value);

/**
 * @brief Gets the `autofocus` property. 
*/
bool MathMLElement_autofocus(const MathMLElement *self);

/**
 * @brief Sets the `autofocus` property. 
*/
void MathMLElement_set_autofocus(MathMLElement* self, bool value);

/**
 * @brief Gets the `tabIndex` property. 
*/
long MathMLElement_tabIndex(const MathMLElement *self);

/**
 * @brief Sets the `tabIndex` property. 
*/
void MathMLElement_set_tabIndex(MathMLElement* self, long value);

/**
 * @brief Calls the `focus` method. 
*/
jb_Undefined MathMLElement_focus0(MathMLElement* self );

/**
 * @brief Calls the `focus` method. 
*/
jb_Undefined MathMLElement_focus1(MathMLElement* self , FocusOptions * options);

/**
 * @brief Calls the `blur` method. 
*/
jb_Undefined MathMLElement_blur(MathMLElement* self );

#ifdef __cplusplus
}
#endif
