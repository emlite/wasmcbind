#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ShadowRoot ShadowRoot;
typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityStateFlags ValidityStateFlags;
typedef struct HTMLElement HTMLElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;
typedef struct CustomStateSet CustomStateSet;
typedef struct Element Element;


typedef struct {
  em_Val inner;
} ValidityStateFlags;


DECLARE_EMLITE_TYPE(ValidityStateFlags, em_Val);

bool ValidityStateFlags_valueMissing( const ValidityStateFlags *self);

void ValidityStateFlags_set_valueMissing(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_typeMismatch( const ValidityStateFlags *self);

void ValidityStateFlags_set_typeMismatch(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_patternMismatch( const ValidityStateFlags *self);

void ValidityStateFlags_set_patternMismatch(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_tooLong( const ValidityStateFlags *self);

void ValidityStateFlags_set_tooLong(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_tooShort( const ValidityStateFlags *self);

void ValidityStateFlags_set_tooShort(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_rangeUnderflow( const ValidityStateFlags *self);

void ValidityStateFlags_set_rangeUnderflow(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_rangeOverflow( const ValidityStateFlags *self);

void ValidityStateFlags_set_rangeOverflow(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_stepMismatch( const ValidityStateFlags *self);

void ValidityStateFlags_set_stepMismatch(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_badInput( const ValidityStateFlags *self);

void ValidityStateFlags_set_badInput(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_customError( const ValidityStateFlags *self);

void ValidityStateFlags_set_customError(ValidityStateFlags* self, bool value);
typedef struct {
  em_Val inner;
} ElementInternals;


DECLARE_EMLITE_TYPE(ElementInternals, em_Val);

ShadowRoot ElementInternals_shadowRoot( const ElementInternals *self);

jb_Undefined ElementInternals_setFormValue(ElementInternals* self , const jb_Any* value);

jb_Undefined ElementInternals_setFormValue(ElementInternals* self , const jb_Any* value, const jb_Any* state);

HTMLFormElement ElementInternals_form( const ElementInternals *self);

jb_Undefined ElementInternals_setValidity(ElementInternals* self );

jb_Undefined ElementInternals_setValidity(ElementInternals* self , const ValidityStateFlags* flags);

jb_Undefined ElementInternals_setValidity(ElementInternals* self , const ValidityStateFlags* flags, const jb_DOMString* message);

jb_Undefined ElementInternals_setValidity(ElementInternals* self , const ValidityStateFlags* flags, const jb_DOMString* message, const HTMLElement* anchor);

bool ElementInternals_willValidate( const ElementInternals *self);

ValidityState ElementInternals_validity( const ElementInternals *self);

jb_DOMString ElementInternals_validationMessage( const ElementInternals *self);

bool ElementInternals_checkValidity(ElementInternals* self );

bool ElementInternals_reportValidity(ElementInternals* self );

NodeList ElementInternals_labels( const ElementInternals *self);

CustomStateSet ElementInternals_states( const ElementInternals *self);

jb_DOMString ElementInternals_role( const ElementInternals *self);

void ElementInternals_set_role(ElementInternals* self, const jb_DOMString* value);

Element ElementInternals_ariaActiveDescendantElement( const ElementInternals *self);

void ElementInternals_set_ariaActiveDescendantElement(ElementInternals* self, const Element* value);

jb_DOMString ElementInternals_ariaAtomic( const ElementInternals *self);

void ElementInternals_set_ariaAtomic(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaAutoComplete( const ElementInternals *self);

void ElementInternals_set_ariaAutoComplete(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaBrailleLabel( const ElementInternals *self);

void ElementInternals_set_ariaBrailleLabel(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaBrailleRoleDescription( const ElementInternals *self);

void ElementInternals_set_ariaBrailleRoleDescription(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaBusy( const ElementInternals *self);

void ElementInternals_set_ariaBusy(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaChecked( const ElementInternals *self);

void ElementInternals_set_ariaChecked(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaColCount( const ElementInternals *self);

void ElementInternals_set_ariaColCount(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaColIndex( const ElementInternals *self);

void ElementInternals_set_ariaColIndex(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaColIndexText( const ElementInternals *self);

void ElementInternals_set_ariaColIndexText(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaColSpan( const ElementInternals *self);

void ElementInternals_set_ariaColSpan(ElementInternals* self, const jb_DOMString* value);

jb_FrozenArray ElementInternals_ariaControlsElements( const ElementInternals *self);

void ElementInternals_set_ariaControlsElements(ElementInternals* self, const jb_FrozenArray* value);

jb_DOMString ElementInternals_ariaCurrent( const ElementInternals *self);

void ElementInternals_set_ariaCurrent(ElementInternals* self, const jb_DOMString* value);

jb_FrozenArray ElementInternals_ariaDescribedByElements( const ElementInternals *self);

void ElementInternals_set_ariaDescribedByElements(ElementInternals* self, const jb_FrozenArray* value);

jb_DOMString ElementInternals_ariaDescription( const ElementInternals *self);

void ElementInternals_set_ariaDescription(ElementInternals* self, const jb_DOMString* value);

jb_FrozenArray ElementInternals_ariaDetailsElements( const ElementInternals *self);

void ElementInternals_set_ariaDetailsElements(ElementInternals* self, const jb_FrozenArray* value);

jb_DOMString ElementInternals_ariaDisabled( const ElementInternals *self);

void ElementInternals_set_ariaDisabled(ElementInternals* self, const jb_DOMString* value);

jb_FrozenArray ElementInternals_ariaErrorMessageElements( const ElementInternals *self);

void ElementInternals_set_ariaErrorMessageElements(ElementInternals* self, const jb_FrozenArray* value);

jb_DOMString ElementInternals_ariaExpanded( const ElementInternals *self);

void ElementInternals_set_ariaExpanded(ElementInternals* self, const jb_DOMString* value);

jb_FrozenArray ElementInternals_ariaFlowToElements( const ElementInternals *self);

void ElementInternals_set_ariaFlowToElements(ElementInternals* self, const jb_FrozenArray* value);

jb_DOMString ElementInternals_ariaHasPopup( const ElementInternals *self);

void ElementInternals_set_ariaHasPopup(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaHidden( const ElementInternals *self);

void ElementInternals_set_ariaHidden(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaInvalid( const ElementInternals *self);

void ElementInternals_set_ariaInvalid(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaKeyShortcuts( const ElementInternals *self);

void ElementInternals_set_ariaKeyShortcuts(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaLabel( const ElementInternals *self);

void ElementInternals_set_ariaLabel(ElementInternals* self, const jb_DOMString* value);

jb_FrozenArray ElementInternals_ariaLabelledByElements( const ElementInternals *self);

void ElementInternals_set_ariaLabelledByElements(ElementInternals* self, const jb_FrozenArray* value);

jb_DOMString ElementInternals_ariaLevel( const ElementInternals *self);

void ElementInternals_set_ariaLevel(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaLive( const ElementInternals *self);

void ElementInternals_set_ariaLive(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaModal( const ElementInternals *self);

void ElementInternals_set_ariaModal(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaMultiLine( const ElementInternals *self);

void ElementInternals_set_ariaMultiLine(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaMultiSelectable( const ElementInternals *self);

void ElementInternals_set_ariaMultiSelectable(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaOrientation( const ElementInternals *self);

void ElementInternals_set_ariaOrientation(ElementInternals* self, const jb_DOMString* value);

jb_FrozenArray ElementInternals_ariaOwnsElements( const ElementInternals *self);

void ElementInternals_set_ariaOwnsElements(ElementInternals* self, const jb_FrozenArray* value);

jb_DOMString ElementInternals_ariaPlaceholder( const ElementInternals *self);

void ElementInternals_set_ariaPlaceholder(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaPosInSet( const ElementInternals *self);

void ElementInternals_set_ariaPosInSet(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaPressed( const ElementInternals *self);

void ElementInternals_set_ariaPressed(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaReadOnly( const ElementInternals *self);

void ElementInternals_set_ariaReadOnly(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaRelevant( const ElementInternals *self);

void ElementInternals_set_ariaRelevant(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaRequired( const ElementInternals *self);

void ElementInternals_set_ariaRequired(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaRoleDescription( const ElementInternals *self);

void ElementInternals_set_ariaRoleDescription(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaRowCount( const ElementInternals *self);

void ElementInternals_set_ariaRowCount(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaRowIndex( const ElementInternals *self);

void ElementInternals_set_ariaRowIndex(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaRowIndexText( const ElementInternals *self);

void ElementInternals_set_ariaRowIndexText(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaRowSpan( const ElementInternals *self);

void ElementInternals_set_ariaRowSpan(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaSelected( const ElementInternals *self);

void ElementInternals_set_ariaSelected(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaSetSize( const ElementInternals *self);

void ElementInternals_set_ariaSetSize(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaSort( const ElementInternals *self);

void ElementInternals_set_ariaSort(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaValueMax( const ElementInternals *self);

void ElementInternals_set_ariaValueMax(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaValueMin( const ElementInternals *self);

void ElementInternals_set_ariaValueMin(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaValueNow( const ElementInternals *self);

void ElementInternals_set_ariaValueNow(ElementInternals* self, const jb_DOMString* value);

jb_DOMString ElementInternals_ariaValueText( const ElementInternals *self);

void ElementInternals_set_ariaValueText(ElementInternals* self, const jb_DOMString* value);
