#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DocumentFragment DocumentFragment;


/**
 * @brief Interface HTMLTemplateElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTemplateElement)
 */
DECLARE_EMLITE_TYPE(HTMLTemplateElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTemplateElement` object. 
*/
HTMLTemplateElement HTMLTemplateElement_new();

/**
 * @brief Gets the `content` property. 
*/
DocumentFragment HTMLTemplateElement_content(const HTMLTemplateElement *self);

/**
 * @brief Gets the `shadowRootMode` property. 
*/
jb_String HTMLTemplateElement_shadowRootMode(const HTMLTemplateElement *self);

/**
 * @brief Sets the `shadowRootMode` property. 
*/
void HTMLTemplateElement_set_shadowRootMode(HTMLTemplateElement* self, jb_String * value);

/**
 * @brief Gets the `shadowRootDelegatesFocus` property. 
*/
bool HTMLTemplateElement_shadowRootDelegatesFocus(const HTMLTemplateElement *self);

/**
 * @brief Sets the `shadowRootDelegatesFocus` property. 
*/
void HTMLTemplateElement_set_shadowRootDelegatesFocus(HTMLTemplateElement* self, bool value);

/**
 * @brief Gets the `shadowRootClonable` property. 
*/
bool HTMLTemplateElement_shadowRootClonable(const HTMLTemplateElement *self);

/**
 * @brief Sets the `shadowRootClonable` property. 
*/
void HTMLTemplateElement_set_shadowRootClonable(HTMLTemplateElement* self, bool value);

/**
 * @brief Gets the `shadowRootSerializable` property. 
*/
bool HTMLTemplateElement_shadowRootSerializable(const HTMLTemplateElement *self);

/**
 * @brief Sets the `shadowRootSerializable` property. 
*/
void HTMLTemplateElement_set_shadowRootSerializable(HTMLTemplateElement* self, bool value);

/**
 * @brief Gets the `shadowRootCustomElementRegistry` property. 
*/
jb_String HTMLTemplateElement_shadowRootCustomElementRegistry(const HTMLTemplateElement *self);

/**
 * @brief Sets the `shadowRootCustomElementRegistry` property. 
*/
void HTMLTemplateElement_set_shadowRootCustomElementRegistry(HTMLTemplateElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
