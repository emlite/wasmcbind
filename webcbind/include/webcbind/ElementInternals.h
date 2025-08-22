#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ShadowRoot ShadowRoot;
typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityStateFlags ValidityStateFlags;
typedef struct HTMLElement HTMLElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;
typedef struct CustomStateSet CustomStateSet;
typedef struct Element Element;


/**
 * @brief Interface ElementInternals
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ElementInternals)
 */
DECLARE_EMLITE_TYPE(ElementInternals, em_Val);

/**
 * @brief Gets the `shadowRoot` property. 
*/
ShadowRoot ElementInternals_shadowRoot(const ElementInternals *self);

/**
 * @brief Calls the `setFormValue` method. 
*/
jb_Undefined ElementInternals_setFormValue0(ElementInternals* self , jb_Any * value);

/**
 * @brief Calls the `setFormValue` method. 
*/
jb_Undefined ElementInternals_setFormValue1(ElementInternals* self , jb_Any * value, jb_Any * state);

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement ElementInternals_form(const ElementInternals *self);

/**
 * @brief Calls the `setValidity` method. 
*/
jb_Undefined ElementInternals_setValidity0(ElementInternals* self );

/**
 * @brief Calls the `setValidity` method. 
*/
jb_Undefined ElementInternals_setValidity1(ElementInternals* self , ValidityStateFlags * flags);

/**
 * @brief Calls the `setValidity` method. 
*/
jb_Undefined ElementInternals_setValidity2(ElementInternals* self , ValidityStateFlags * flags, jb_String * message);

/**
 * @brief Calls the `setValidity` method. 
*/
jb_Undefined ElementInternals_setValidity3(ElementInternals* self , ValidityStateFlags * flags, jb_String * message, HTMLElement * anchor);

/**
 * @brief Gets the `willValidate` property. 
*/
bool ElementInternals_willValidate(const ElementInternals *self);

/**
 * @brief Gets the `validity` property. 
*/
ValidityState ElementInternals_validity(const ElementInternals *self);

/**
 * @brief Gets the `validationMessage` property. 
*/
jb_String ElementInternals_validationMessage(const ElementInternals *self);

/**
 * @brief Calls the `checkValidity` method. 
*/
bool ElementInternals_checkValidity(ElementInternals* self );

/**
 * @brief Calls the `reportValidity` method. 
*/
bool ElementInternals_reportValidity(ElementInternals* self );

/**
 * @brief Gets the `labels` property. 
*/
NodeList ElementInternals_labels(const ElementInternals *self);

/**
 * @brief Gets the `states` property. 
*/
CustomStateSet ElementInternals_states(const ElementInternals *self);

/**
 * @brief Gets the `role` property. 
*/
jb_String ElementInternals_role(const ElementInternals *self);

/**
 * @brief Sets the `role` property. 
*/
void ElementInternals_set_role(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaActiveDescendantElement` property. 
*/
Element ElementInternals_ariaActiveDescendantElement(const ElementInternals *self);

/**
 * @brief Sets the `ariaActiveDescendantElement` property. 
*/
void ElementInternals_set_ariaActiveDescendantElement(ElementInternals* self, Element * value);

/**
 * @brief Gets the `ariaAtomic` property. 
*/
jb_String ElementInternals_ariaAtomic(const ElementInternals *self);

/**
 * @brief Sets the `ariaAtomic` property. 
*/
void ElementInternals_set_ariaAtomic(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaAutoComplete` property. 
*/
jb_String ElementInternals_ariaAutoComplete(const ElementInternals *self);

/**
 * @brief Sets the `ariaAutoComplete` property. 
*/
void ElementInternals_set_ariaAutoComplete(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaBrailleLabel` property. 
*/
jb_String ElementInternals_ariaBrailleLabel(const ElementInternals *self);

/**
 * @brief Sets the `ariaBrailleLabel` property. 
*/
void ElementInternals_set_ariaBrailleLabel(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaBrailleRoleDescription` property. 
*/
jb_String ElementInternals_ariaBrailleRoleDescription(const ElementInternals *self);

/**
 * @brief Sets the `ariaBrailleRoleDescription` property. 
*/
void ElementInternals_set_ariaBrailleRoleDescription(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaBusy` property. 
*/
jb_String ElementInternals_ariaBusy(const ElementInternals *self);

/**
 * @brief Sets the `ariaBusy` property. 
*/
void ElementInternals_set_ariaBusy(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaChecked` property. 
*/
jb_String ElementInternals_ariaChecked(const ElementInternals *self);

/**
 * @brief Sets the `ariaChecked` property. 
*/
void ElementInternals_set_ariaChecked(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaColCount` property. 
*/
jb_String ElementInternals_ariaColCount(const ElementInternals *self);

/**
 * @brief Sets the `ariaColCount` property. 
*/
void ElementInternals_set_ariaColCount(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaColIndex` property. 
*/
jb_String ElementInternals_ariaColIndex(const ElementInternals *self);

/**
 * @brief Sets the `ariaColIndex` property. 
*/
void ElementInternals_set_ariaColIndex(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaColIndexText` property. 
*/
jb_String ElementInternals_ariaColIndexText(const ElementInternals *self);

/**
 * @brief Sets the `ariaColIndexText` property. 
*/
void ElementInternals_set_ariaColIndexText(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaColSpan` property. 
*/
jb_String ElementInternals_ariaColSpan(const ElementInternals *self);

/**
 * @brief Sets the `ariaColSpan` property. 
*/
void ElementInternals_set_ariaColSpan(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaControlsElements` property. 
*/
jb_Array ElementInternals_ariaControlsElements(const ElementInternals *self);

/**
 * @brief Sets the `ariaControlsElements` property. 
*/
void ElementInternals_set_ariaControlsElements(ElementInternals* self, jb_Array * value);

/**
 * @brief Gets the `ariaCurrent` property. 
*/
jb_String ElementInternals_ariaCurrent(const ElementInternals *self);

/**
 * @brief Sets the `ariaCurrent` property. 
*/
void ElementInternals_set_ariaCurrent(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaDescribedByElements` property. 
*/
jb_Array ElementInternals_ariaDescribedByElements(const ElementInternals *self);

/**
 * @brief Sets the `ariaDescribedByElements` property. 
*/
void ElementInternals_set_ariaDescribedByElements(ElementInternals* self, jb_Array * value);

/**
 * @brief Gets the `ariaDescription` property. 
*/
jb_String ElementInternals_ariaDescription(const ElementInternals *self);

/**
 * @brief Sets the `ariaDescription` property. 
*/
void ElementInternals_set_ariaDescription(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaDetailsElements` property. 
*/
jb_Array ElementInternals_ariaDetailsElements(const ElementInternals *self);

/**
 * @brief Sets the `ariaDetailsElements` property. 
*/
void ElementInternals_set_ariaDetailsElements(ElementInternals* self, jb_Array * value);

/**
 * @brief Gets the `ariaDisabled` property. 
*/
jb_String ElementInternals_ariaDisabled(const ElementInternals *self);

/**
 * @brief Sets the `ariaDisabled` property. 
*/
void ElementInternals_set_ariaDisabled(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaErrorMessageElements` property. 
*/
jb_Array ElementInternals_ariaErrorMessageElements(const ElementInternals *self);

/**
 * @brief Sets the `ariaErrorMessageElements` property. 
*/
void ElementInternals_set_ariaErrorMessageElements(ElementInternals* self, jb_Array * value);

/**
 * @brief Gets the `ariaExpanded` property. 
*/
jb_String ElementInternals_ariaExpanded(const ElementInternals *self);

/**
 * @brief Sets the `ariaExpanded` property. 
*/
void ElementInternals_set_ariaExpanded(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaFlowToElements` property. 
*/
jb_Array ElementInternals_ariaFlowToElements(const ElementInternals *self);

/**
 * @brief Sets the `ariaFlowToElements` property. 
*/
void ElementInternals_set_ariaFlowToElements(ElementInternals* self, jb_Array * value);

/**
 * @brief Gets the `ariaHasPopup` property. 
*/
jb_String ElementInternals_ariaHasPopup(const ElementInternals *self);

/**
 * @brief Sets the `ariaHasPopup` property. 
*/
void ElementInternals_set_ariaHasPopup(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaHidden` property. 
*/
jb_String ElementInternals_ariaHidden(const ElementInternals *self);

/**
 * @brief Sets the `ariaHidden` property. 
*/
void ElementInternals_set_ariaHidden(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaInvalid` property. 
*/
jb_String ElementInternals_ariaInvalid(const ElementInternals *self);

/**
 * @brief Sets the `ariaInvalid` property. 
*/
void ElementInternals_set_ariaInvalid(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaKeyShortcuts` property. 
*/
jb_String ElementInternals_ariaKeyShortcuts(const ElementInternals *self);

/**
 * @brief Sets the `ariaKeyShortcuts` property. 
*/
void ElementInternals_set_ariaKeyShortcuts(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaLabel` property. 
*/
jb_String ElementInternals_ariaLabel(const ElementInternals *self);

/**
 * @brief Sets the `ariaLabel` property. 
*/
void ElementInternals_set_ariaLabel(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaLabelledByElements` property. 
*/
jb_Array ElementInternals_ariaLabelledByElements(const ElementInternals *self);

/**
 * @brief Sets the `ariaLabelledByElements` property. 
*/
void ElementInternals_set_ariaLabelledByElements(ElementInternals* self, jb_Array * value);

/**
 * @brief Gets the `ariaLevel` property. 
*/
jb_String ElementInternals_ariaLevel(const ElementInternals *self);

/**
 * @brief Sets the `ariaLevel` property. 
*/
void ElementInternals_set_ariaLevel(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaLive` property. 
*/
jb_String ElementInternals_ariaLive(const ElementInternals *self);

/**
 * @brief Sets the `ariaLive` property. 
*/
void ElementInternals_set_ariaLive(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaModal` property. 
*/
jb_String ElementInternals_ariaModal(const ElementInternals *self);

/**
 * @brief Sets the `ariaModal` property. 
*/
void ElementInternals_set_ariaModal(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaMultiLine` property. 
*/
jb_String ElementInternals_ariaMultiLine(const ElementInternals *self);

/**
 * @brief Sets the `ariaMultiLine` property. 
*/
void ElementInternals_set_ariaMultiLine(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaMultiSelectable` property. 
*/
jb_String ElementInternals_ariaMultiSelectable(const ElementInternals *self);

/**
 * @brief Sets the `ariaMultiSelectable` property. 
*/
void ElementInternals_set_ariaMultiSelectable(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaOrientation` property. 
*/
jb_String ElementInternals_ariaOrientation(const ElementInternals *self);

/**
 * @brief Sets the `ariaOrientation` property. 
*/
void ElementInternals_set_ariaOrientation(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaOwnsElements` property. 
*/
jb_Array ElementInternals_ariaOwnsElements(const ElementInternals *self);

/**
 * @brief Sets the `ariaOwnsElements` property. 
*/
void ElementInternals_set_ariaOwnsElements(ElementInternals* self, jb_Array * value);

/**
 * @brief Gets the `ariaPlaceholder` property. 
*/
jb_String ElementInternals_ariaPlaceholder(const ElementInternals *self);

/**
 * @brief Sets the `ariaPlaceholder` property. 
*/
void ElementInternals_set_ariaPlaceholder(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaPosInSet` property. 
*/
jb_String ElementInternals_ariaPosInSet(const ElementInternals *self);

/**
 * @brief Sets the `ariaPosInSet` property. 
*/
void ElementInternals_set_ariaPosInSet(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaPressed` property. 
*/
jb_String ElementInternals_ariaPressed(const ElementInternals *self);

/**
 * @brief Sets the `ariaPressed` property. 
*/
void ElementInternals_set_ariaPressed(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaReadOnly` property. 
*/
jb_String ElementInternals_ariaReadOnly(const ElementInternals *self);

/**
 * @brief Sets the `ariaReadOnly` property. 
*/
void ElementInternals_set_ariaReadOnly(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaRelevant` property. 
*/
jb_String ElementInternals_ariaRelevant(const ElementInternals *self);

/**
 * @brief Sets the `ariaRelevant` property. 
*/
void ElementInternals_set_ariaRelevant(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaRequired` property. 
*/
jb_String ElementInternals_ariaRequired(const ElementInternals *self);

/**
 * @brief Sets the `ariaRequired` property. 
*/
void ElementInternals_set_ariaRequired(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaRoleDescription` property. 
*/
jb_String ElementInternals_ariaRoleDescription(const ElementInternals *self);

/**
 * @brief Sets the `ariaRoleDescription` property. 
*/
void ElementInternals_set_ariaRoleDescription(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaRowCount` property. 
*/
jb_String ElementInternals_ariaRowCount(const ElementInternals *self);

/**
 * @brief Sets the `ariaRowCount` property. 
*/
void ElementInternals_set_ariaRowCount(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaRowIndex` property. 
*/
jb_String ElementInternals_ariaRowIndex(const ElementInternals *self);

/**
 * @brief Sets the `ariaRowIndex` property. 
*/
void ElementInternals_set_ariaRowIndex(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaRowIndexText` property. 
*/
jb_String ElementInternals_ariaRowIndexText(const ElementInternals *self);

/**
 * @brief Sets the `ariaRowIndexText` property. 
*/
void ElementInternals_set_ariaRowIndexText(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaRowSpan` property. 
*/
jb_String ElementInternals_ariaRowSpan(const ElementInternals *self);

/**
 * @brief Sets the `ariaRowSpan` property. 
*/
void ElementInternals_set_ariaRowSpan(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaSelected` property. 
*/
jb_String ElementInternals_ariaSelected(const ElementInternals *self);

/**
 * @brief Sets the `ariaSelected` property. 
*/
void ElementInternals_set_ariaSelected(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaSetSize` property. 
*/
jb_String ElementInternals_ariaSetSize(const ElementInternals *self);

/**
 * @brief Sets the `ariaSetSize` property. 
*/
void ElementInternals_set_ariaSetSize(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaSort` property. 
*/
jb_String ElementInternals_ariaSort(const ElementInternals *self);

/**
 * @brief Sets the `ariaSort` property. 
*/
void ElementInternals_set_ariaSort(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaValueMax` property. 
*/
jb_String ElementInternals_ariaValueMax(const ElementInternals *self);

/**
 * @brief Sets the `ariaValueMax` property. 
*/
void ElementInternals_set_ariaValueMax(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaValueMin` property. 
*/
jb_String ElementInternals_ariaValueMin(const ElementInternals *self);

/**
 * @brief Sets the `ariaValueMin` property. 
*/
void ElementInternals_set_ariaValueMin(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaValueNow` property. 
*/
jb_String ElementInternals_ariaValueNow(const ElementInternals *self);

/**
 * @brief Sets the `ariaValueNow` property. 
*/
void ElementInternals_set_ariaValueNow(ElementInternals* self, jb_String * value);

/**
 * @brief Gets the `ariaValueText` property. 
*/
jb_String ElementInternals_ariaValueText(const ElementInternals *self);

/**
 * @brief Sets the `ariaValueText` property. 
*/
void ElementInternals_set_ariaValueText(ElementInternals* self, jb_String * value);

#ifdef __cplusplus
}
#endif
