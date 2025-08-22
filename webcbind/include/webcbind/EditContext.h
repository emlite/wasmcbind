#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EditContextInit EditContextInit;
typedef struct DOMRect DOMRect;
typedef struct HTMLElement HTMLElement;


/**
 * @brief Interface EditContext
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/EditContext)
 */
DECLARE_EMLITE_TYPE(EditContext, EventTarget);

/**
 * @brief Creates a new `EditContext` object. 
*/
EditContext EditContext_new0();

/**
 * @brief Creates a new `EditContext` object. 
*/
EditContext EditContext_new1(EditContextInit * options);

/**
 * @brief Calls the `updateText` method. 
*/
jb_Undefined EditContext_updateText(EditContext* self , unsigned long rangeStart, unsigned long rangeEnd, jb_String * text);

/**
 * @brief Calls the `updateSelection` method. 
*/
jb_Undefined EditContext_updateSelection(EditContext* self , unsigned long start, unsigned long end);

/**
 * @brief Calls the `updateControlBounds` method. 
*/
jb_Undefined EditContext_updateControlBounds(EditContext* self , DOMRect * controlBounds);

/**
 * @brief Calls the `updateSelectionBounds` method. 
*/
jb_Undefined EditContext_updateSelectionBounds(EditContext* self , DOMRect * selectionBounds);

/**
 * @brief Calls the `updateCharacterBounds` method. 
*/
jb_Undefined EditContext_updateCharacterBounds(EditContext* self , unsigned long rangeStart, jb_Array * characterBounds);

/**
 * @brief Calls the `attachedElements` method. 
*/
jb_Array EditContext_attachedElements(EditContext* self );

/**
 * @brief Gets the `text` property. 
*/
jb_String EditContext_text(const EditContext *self);

/**
 * @brief Gets the `selectionStart` property. 
*/
unsigned long EditContext_selectionStart(const EditContext *self);

/**
 * @brief Gets the `selectionEnd` property. 
*/
unsigned long EditContext_selectionEnd(const EditContext *self);

/**
 * @brief Gets the `characterBoundsRangeStart` property. 
*/
unsigned long EditContext_characterBoundsRangeStart(const EditContext *self);

/**
 * @brief Calls the `characterBounds` method. 
*/
jb_Array EditContext_characterBounds(EditContext* self );

/**
 * @brief Gets the `ontextupdate` property. 
*/
jb_Any EditContext_ontextupdate(const EditContext *self);

/**
 * @brief Sets the `ontextupdate` property. 
*/
void EditContext_set_ontextupdate(EditContext* self, jb_Any * value);

/**
 * @brief Gets the `ontextformatupdate` property. 
*/
jb_Any EditContext_ontextformatupdate(const EditContext *self);

/**
 * @brief Sets the `ontextformatupdate` property. 
*/
void EditContext_set_ontextformatupdate(EditContext* self, jb_Any * value);

/**
 * @brief Gets the `oncharacterboundsupdate` property. 
*/
jb_Any EditContext_oncharacterboundsupdate(const EditContext *self);

/**
 * @brief Sets the `oncharacterboundsupdate` property. 
*/
void EditContext_set_oncharacterboundsupdate(EditContext* self, jb_Any * value);

/**
 * @brief Gets the `oncompositionstart` property. 
*/
jb_Any EditContext_oncompositionstart(const EditContext *self);

/**
 * @brief Sets the `oncompositionstart` property. 
*/
void EditContext_set_oncompositionstart(EditContext* self, jb_Any * value);

/**
 * @brief Gets the `oncompositionend` property. 
*/
jb_Any EditContext_oncompositionend(const EditContext *self);

/**
 * @brief Sets the `oncompositionend` property. 
*/
void EditContext_set_oncompositionend(EditContext* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
