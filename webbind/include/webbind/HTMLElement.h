#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ElementInternals ElementInternals;
typedef struct ShowPopoverOptions ShowPopoverOptions;
typedef struct EditContext EditContext;
typedef struct CSSStyleProperties CSSStyleProperties;
typedef struct DOMStringMap DOMStringMap;
typedef struct FocusOptions FocusOptions;


/**
 * @brief Interface HTMLElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLElement)
 */
DECLARE_EMLITE_TYPE(HTMLElement, Element);

/**
 * @brief Creates a new `HTMLElement` object. 
*/
HTMLElement HTMLElement_new();

/**
 * @brief Gets the `title` property. 
*/
jb_String HTMLElement_title(const HTMLElement *self);

/**
 * @brief Sets the `title` property. 
*/
void HTMLElement_set_title(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `lang` property. 
*/
jb_String HTMLElement_lang(const HTMLElement *self);

/**
 * @brief Sets the `lang` property. 
*/
void HTMLElement_set_lang(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `translate` property. 
*/
bool HTMLElement_translate(const HTMLElement *self);

/**
 * @brief Sets the `translate` property. 
*/
void HTMLElement_set_translate(HTMLElement* self, bool value);

/**
 * @brief Gets the `dir` property. 
*/
jb_String HTMLElement_dir(const HTMLElement *self);

/**
 * @brief Sets the `dir` property. 
*/
void HTMLElement_set_dir(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `hidden` property. 
*/
jb_Any HTMLElement_hidden(const HTMLElement *self);

/**
 * @brief Sets the `hidden` property. 
*/
void HTMLElement_set_hidden(HTMLElement* self, jb_Any * value);

/**
 * @brief Gets the `inert` property. 
*/
bool HTMLElement_inert(const HTMLElement *self);

/**
 * @brief Sets the `inert` property. 
*/
void HTMLElement_set_inert(HTMLElement* self, bool value);

/**
 * @brief Calls the `click` method. 
*/
jb_Undefined HTMLElement_click(HTMLElement* self );

/**
 * @brief Gets the `accessKey` property. 
*/
jb_String HTMLElement_accessKey(const HTMLElement *self);

/**
 * @brief Sets the `accessKey` property. 
*/
void HTMLElement_set_accessKey(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `accessKeyLabel` property. 
*/
jb_String HTMLElement_accessKeyLabel(const HTMLElement *self);

/**
 * @brief Gets the `draggable` property. 
*/
bool HTMLElement_draggable(const HTMLElement *self);

/**
 * @brief Sets the `draggable` property. 
*/
void HTMLElement_set_draggable(HTMLElement* self, bool value);

/**
 * @brief Gets the `spellcheck` property. 
*/
bool HTMLElement_spellcheck(const HTMLElement *self);

/**
 * @brief Sets the `spellcheck` property. 
*/
void HTMLElement_set_spellcheck(HTMLElement* self, bool value);

/**
 * @brief Gets the `writingSuggestions` property. 
*/
jb_String HTMLElement_writingSuggestions(const HTMLElement *self);

/**
 * @brief Sets the `writingSuggestions` property. 
*/
void HTMLElement_set_writingSuggestions(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `autocapitalize` property. 
*/
jb_String HTMLElement_autocapitalize(const HTMLElement *self);

/**
 * @brief Sets the `autocapitalize` property. 
*/
void HTMLElement_set_autocapitalize(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `autocorrect` property. 
*/
bool HTMLElement_autocorrect(const HTMLElement *self);

/**
 * @brief Sets the `autocorrect` property. 
*/
void HTMLElement_set_autocorrect(HTMLElement* self, bool value);

/**
 * @brief Gets the `innerText` property. 
*/
jb_String HTMLElement_innerText(const HTMLElement *self);

/**
 * @brief Sets the `innerText` property. 
*/
void HTMLElement_set_innerText(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `outerText` property. 
*/
jb_String HTMLElement_outerText(const HTMLElement *self);

/**
 * @brief Sets the `outerText` property. 
*/
void HTMLElement_set_outerText(HTMLElement* self, jb_String * value);

/**
 * @brief Calls the `attachInternals` method. 
*/
ElementInternals HTMLElement_attachInternals(HTMLElement* self );

/**
 * @brief Calls the `showPopover` method. 
*/
jb_Undefined HTMLElement_showPopover0(HTMLElement* self );

/**
 * @brief Calls the `showPopover` method. 
*/
jb_Undefined HTMLElement_showPopover1(HTMLElement* self , ShowPopoverOptions * options);

/**
 * @brief Calls the `hidePopover` method. 
*/
jb_Undefined HTMLElement_hidePopover(HTMLElement* self );

/**
 * @brief Calls the `togglePopover` method. 
*/
bool HTMLElement_togglePopover0(HTMLElement* self );

/**
 * @brief Calls the `togglePopover` method. 
*/
bool HTMLElement_togglePopover1(HTMLElement* self , jb_Any * options);

/**
 * @brief Gets the `popover` property. 
*/
jb_String HTMLElement_popover(const HTMLElement *self);

/**
 * @brief Sets the `popover` property. 
*/
void HTMLElement_set_popover(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `scrollParent` property. 
*/
Element HTMLElement_scrollParent(const HTMLElement *self);

/**
 * @brief Gets the `offsetParent` property. 
*/
Element HTMLElement_offsetParent(const HTMLElement *self);

/**
 * @brief Gets the `offsetTop` property. 
*/
long HTMLElement_offsetTop(const HTMLElement *self);

/**
 * @brief Gets the `offsetLeft` property. 
*/
long HTMLElement_offsetLeft(const HTMLElement *self);

/**
 * @brief Gets the `offsetWidth` property. 
*/
long HTMLElement_offsetWidth(const HTMLElement *self);

/**
 * @brief Gets the `offsetHeight` property. 
*/
long HTMLElement_offsetHeight(const HTMLElement *self);

/**
 * @brief Gets the `editContext` property. 
*/
EditContext HTMLElement_editContext(const HTMLElement *self);

/**
 * @brief Sets the `editContext` property. 
*/
void HTMLElement_set_editContext(HTMLElement* self, EditContext * value);

/**
 * @brief Gets the `style` property. 
*/
CSSStyleProperties HTMLElement_style(const HTMLElement *self);

/**
 * @brief Gets the `onbeforexrselect` property. 
*/
jb_Any HTMLElement_onbeforexrselect(const HTMLElement *self);

/**
 * @brief Sets the `onbeforexrselect` property. 
*/
void HTMLElement_set_onbeforexrselect(HTMLElement* self, jb_Any * value);

/**
 * @brief Gets the `virtualKeyboardPolicy` property. 
*/
jb_String HTMLElement_virtualKeyboardPolicy(const HTMLElement *self);

/**
 * @brief Sets the `virtualKeyboardPolicy` property. 
*/
void HTMLElement_set_virtualKeyboardPolicy(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `dataset` property. 
*/
DOMStringMap HTMLElement_dataset(const HTMLElement *self);

/**
 * @brief Gets the `nonce` property. 
*/
jb_String HTMLElement_nonce(const HTMLElement *self);

/**
 * @brief Sets the `nonce` property. 
*/
void HTMLElement_set_nonce(HTMLElement* self, jb_String * value);

/**
 * @brief Gets the `autofocus` property. 
*/
bool HTMLElement_autofocus(const HTMLElement *self);

/**
 * @brief Sets the `autofocus` property. 
*/
void HTMLElement_set_autofocus(HTMLElement* self, bool value);

/**
 * @brief Gets the `tabIndex` property. 
*/
long HTMLElement_tabIndex(const HTMLElement *self);

/**
 * @brief Sets the `tabIndex` property. 
*/
void HTMLElement_set_tabIndex(HTMLElement* self, long value);

/**
 * @brief Calls the `focus` method. 
*/
jb_Undefined HTMLElement_focus0(HTMLElement* self );

/**
 * @brief Calls the `focus` method. 
*/
jb_Undefined HTMLElement_focus1(HTMLElement* self , FocusOptions * options);

/**
 * @brief Calls the `blur` method. 
*/
jb_Undefined HTMLElement_blur(HTMLElement* self );

#ifdef __cplusplus
}
#endif
