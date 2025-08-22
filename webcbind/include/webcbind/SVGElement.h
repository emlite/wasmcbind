#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGSVGElement SVGSVGElement;
typedef struct SVGUseElement SVGUseElement;
typedef struct DOMStringMap DOMStringMap;
typedef struct FocusOptions FocusOptions;
typedef struct CSSStyleProperties CSSStyleProperties;


/**
 * @brief Interface SVGElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement)
 */
DECLARE_EMLITE_TYPE(SVGElement, Element);

/**
 * @brief Gets the `className` property. 
*/
SVGAnimatedString SVGElement_className(const SVGElement *self);

/**
 * @brief Gets the `ownerSVGElement` property. 
*/
SVGSVGElement SVGElement_ownerSVGElement(const SVGElement *self);

/**
 * @brief Gets the `viewportElement` property. 
*/
SVGElement SVGElement_viewportElement(const SVGElement *self);

/**
 * @brief Gets the `onbeforexrselect` property. 
*/
jb_Any SVGElement_onbeforexrselect(const SVGElement *self);

/**
 * @brief Sets the `onbeforexrselect` property. 
*/
void SVGElement_set_onbeforexrselect(SVGElement* self, jb_Any * value);

/**
 * @brief Gets the `correspondingElement` property. 
*/
SVGElement SVGElement_correspondingElement(const SVGElement *self);

/**
 * @brief Gets the `correspondingUseElement` property. 
*/
SVGUseElement SVGElement_correspondingUseElement(const SVGElement *self);

/**
 * @brief Gets the `dataset` property. 
*/
DOMStringMap SVGElement_dataset(const SVGElement *self);

/**
 * @brief Gets the `nonce` property. 
*/
jb_String SVGElement_nonce(const SVGElement *self);

/**
 * @brief Sets the `nonce` property. 
*/
void SVGElement_set_nonce(SVGElement* self, jb_String * value);

/**
 * @brief Gets the `autofocus` property. 
*/
bool SVGElement_autofocus(const SVGElement *self);

/**
 * @brief Sets the `autofocus` property. 
*/
void SVGElement_set_autofocus(SVGElement* self, bool value);

/**
 * @brief Gets the `tabIndex` property. 
*/
long SVGElement_tabIndex(const SVGElement *self);

/**
 * @brief Sets the `tabIndex` property. 
*/
void SVGElement_set_tabIndex(SVGElement* self, long value);

/**
 * @brief Calls the `focus` method. 
*/
jb_Undefined SVGElement_focus0(SVGElement* self );

/**
 * @brief Calls the `focus` method. 
*/
jb_Undefined SVGElement_focus1(SVGElement* self , FocusOptions * options);

/**
 * @brief Calls the `blur` method. 
*/
jb_Undefined SVGElement_blur(SVGElement* self );

/**
 * @brief Gets the `style` property. 
*/
CSSStyleProperties SVGElement_style(const SVGElement *self);

#ifdef __cplusplus
}
#endif
