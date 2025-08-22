#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DocumentFragment.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;
typedef struct GetHTMLOptions GetHTMLOptions;
typedef struct Animation Animation;


/**
 * @brief Interface ShadowRoot
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRoot)
 */
DECLARE_EMLITE_TYPE(ShadowRoot, DocumentFragment);

/**
 * @brief Gets the `mode` property. 
*/
ShadowRootMode ShadowRoot_mode(const ShadowRoot *self);

/**
 * @brief Gets the `delegatesFocus` property. 
*/
bool ShadowRoot_delegatesFocus(const ShadowRoot *self);

/**
 * @brief Gets the `slotAssignment` property. 
*/
SlotAssignmentMode ShadowRoot_slotAssignment(const ShadowRoot *self);

/**
 * @brief Gets the `clonable` property. 
*/
bool ShadowRoot_clonable(const ShadowRoot *self);

/**
 * @brief Gets the `serializable` property. 
*/
bool ShadowRoot_serializable(const ShadowRoot *self);

/**
 * @brief Gets the `host` property. 
*/
Element ShadowRoot_host(const ShadowRoot *self);

/**
 * @brief Gets the `onslotchange` property. 
*/
jb_Any ShadowRoot_onslotchange(const ShadowRoot *self);

/**
 * @brief Sets the `onslotchange` property. 
*/
void ShadowRoot_set_onslotchange(ShadowRoot* self, jb_Any * value);

/**
 * @brief Calls the `setHTMLUnsafe` method. 
*/
jb_Undefined ShadowRoot_setHTMLUnsafe(ShadowRoot* self , jb_Any * html);

/**
 * @brief Calls the `getHTML` method. 
*/
jb_String ShadowRoot_getHTML0(ShadowRoot* self );

/**
 * @brief Calls the `getHTML` method. 
*/
jb_String ShadowRoot_getHTML1(ShadowRoot* self , GetHTMLOptions * options);

/**
 * @brief Gets the `innerHTML` property. 
*/
jb_Any ShadowRoot_innerHTML(const ShadowRoot *self);

/**
 * @brief Sets the `innerHTML` property. 
*/
void ShadowRoot_set_innerHTML(ShadowRoot* self, jb_Any * value);

/**
 * @brief Calls the `getAnimations` method. 
*/
jb_Array ShadowRoot_getAnimations(ShadowRoot* self );

#ifdef __cplusplus
}
#endif
