#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGStringList SVGStringList;


/**
 * @brief Interface SVGAnimationElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement)
 */
DECLARE_EMLITE_TYPE(SVGAnimationElement, SVGElement);

/**
 * @brief Gets the `targetElement` property. 
*/
SVGElement SVGAnimationElement_targetElement(const SVGAnimationElement *self);

/**
 * @brief Gets the `onbegin` property. 
*/
jb_Any SVGAnimationElement_onbegin(const SVGAnimationElement *self);

/**
 * @brief Sets the `onbegin` property. 
*/
void SVGAnimationElement_set_onbegin(SVGAnimationElement* self, jb_Any * value);

/**
 * @brief Gets the `onend` property. 
*/
jb_Any SVGAnimationElement_onend(const SVGAnimationElement *self);

/**
 * @brief Sets the `onend` property. 
*/
void SVGAnimationElement_set_onend(SVGAnimationElement* self, jb_Any * value);

/**
 * @brief Gets the `onrepeat` property. 
*/
jb_Any SVGAnimationElement_onrepeat(const SVGAnimationElement *self);

/**
 * @brief Sets the `onrepeat` property. 
*/
void SVGAnimationElement_set_onrepeat(SVGAnimationElement* self, jb_Any * value);

/**
 * @brief Calls the `getStartTime` method. 
*/
float SVGAnimationElement_getStartTime(SVGAnimationElement* self );

/**
 * @brief Calls the `getCurrentTime` method. 
*/
float SVGAnimationElement_getCurrentTime(SVGAnimationElement* self );

/**
 * @brief Calls the `getSimpleDuration` method. 
*/
float SVGAnimationElement_getSimpleDuration(SVGAnimationElement* self );

/**
 * @brief Calls the `beginElement` method. 
*/
jb_Undefined SVGAnimationElement_beginElement(SVGAnimationElement* self );

/**
 * @brief Calls the `beginElementAt` method. 
*/
jb_Undefined SVGAnimationElement_beginElementAt(SVGAnimationElement* self , float offset);

/**
 * @brief Calls the `endElement` method. 
*/
jb_Undefined SVGAnimationElement_endElement(SVGAnimationElement* self );

/**
 * @brief Calls the `endElementAt` method. 
*/
jb_Undefined SVGAnimationElement_endElementAt(SVGAnimationElement* self , float offset);

/**
 * @brief Gets the `requiredExtensions` property. 
*/
SVGStringList SVGAnimationElement_requiredExtensions(const SVGAnimationElement *self);

/**
 * @brief Gets the `systemLanguage` property. 
*/
SVGStringList SVGAnimationElement_systemLanguage(const SVGAnimationElement *self);

#ifdef __cplusplus
}
#endif
