#include <webbind/ElementInternals.h>
#include <webbind/ShadowRoot.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/HTMLElement.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>
#include <webbind/CustomStateSet.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(ValidityStateFlags, em_Val);


bool ValidityStateFlags_valueMissing(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "valueMissing"));
}


void ValidityStateFlags_set_valueMissing(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "valueMissing", value);
}


bool ValidityStateFlags_typeMismatch(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "typeMismatch"));
}


void ValidityStateFlags_set_typeMismatch(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "typeMismatch", value);
}


bool ValidityStateFlags_patternMismatch(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "patternMismatch"));
}


void ValidityStateFlags_set_patternMismatch(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "patternMismatch", value);
}


bool ValidityStateFlags_tooLong(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "tooLong"));
}


void ValidityStateFlags_set_tooLong(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "tooLong", value);
}


bool ValidityStateFlags_tooShort(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "tooShort"));
}


void ValidityStateFlags_set_tooShort(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "tooShort", value);
}


bool ValidityStateFlags_rangeUnderflow(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "rangeUnderflow"));
}


void ValidityStateFlags_set_rangeUnderflow(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "rangeUnderflow", value);
}


bool ValidityStateFlags_rangeOverflow(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "rangeOverflow"));
}


void ValidityStateFlags_set_rangeOverflow(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "rangeOverflow", value);
}


bool ValidityStateFlags_stepMismatch(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "stepMismatch"));
}


void ValidityStateFlags_set_stepMismatch(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "stepMismatch", value);
}


bool ValidityStateFlags_badInput(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "badInput"));
}


void ValidityStateFlags_set_badInput(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "badInput", value);
}


bool ValidityStateFlags_customError(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "customError"));
}


void ValidityStateFlags_set_customError(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "customError", value);
}

DEFINE_EMLITE_TYPE(ElementInternals, em_Val);


ShadowRoot ElementInternals_shadowRoot(const ElementInternals *self) {
    return em_Val_as(ShadowRoot, em_Val_get(em_Val_as_val(self->inner), "shadowRoot"));
}


jb_Undefined ElementInternals_setFormValue(ElementInternals* self , const jb_Any* value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setFormValue", em_Val_from(value)));
}


jb_Undefined ElementInternals_setFormValue(ElementInternals* self , const jb_Any* value, const jb_Any* state) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setFormValue", em_Val_from(value), em_Val_from(state)));
}


HTMLFormElement ElementInternals_form(const ElementInternals *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(em_Val_as_val(self->inner), "form"));
}


jb_Undefined ElementInternals_setValidity(ElementInternals* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setValidity"));
}


jb_Undefined ElementInternals_setValidity(ElementInternals* self , const ValidityStateFlags* flags) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setValidity", em_Val_from(flags)));
}


jb_Undefined ElementInternals_setValidity(ElementInternals* self , const ValidityStateFlags* flags, const jb_DOMString* message) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setValidity", em_Val_from(flags), em_Val_from(message)));
}


jb_Undefined ElementInternals_setValidity(ElementInternals* self , const ValidityStateFlags* flags, const jb_DOMString* message, const HTMLElement* anchor) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setValidity", em_Val_from(flags), em_Val_from(message), em_Val_from(anchor)));
}


bool ElementInternals_willValidate(const ElementInternals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "willValidate"));
}


ValidityState ElementInternals_validity(const ElementInternals *self) {
    return em_Val_as(ValidityState, em_Val_get(em_Val_as_val(self->inner), "validity"));
}


jb_DOMString ElementInternals_validationMessage(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "validationMessage"));
}


bool ElementInternals_checkValidity(ElementInternals* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "checkValidity"));
}


bool ElementInternals_reportValidity(ElementInternals* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "reportValidity"));
}


NodeList ElementInternals_labels(const ElementInternals *self) {
    return em_Val_as(NodeList, em_Val_get(em_Val_as_val(self->inner), "labels"));
}


CustomStateSet ElementInternals_states(const ElementInternals *self) {
    return em_Val_as(CustomStateSet, em_Val_get(em_Val_as_val(self->inner), "states"));
}


jb_DOMString ElementInternals_role(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "role"));
}


void ElementInternals_set_role(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "role", value);
}


Element ElementInternals_ariaActiveDescendantElement(const ElementInternals *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), "ariaActiveDescendantElement"));
}


void ElementInternals_set_ariaActiveDescendantElement(ElementInternals* self, const Element* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaActiveDescendantElement", value);
}


jb_DOMString ElementInternals_ariaAtomic(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaAtomic"));
}


void ElementInternals_set_ariaAtomic(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaAtomic", value);
}


jb_DOMString ElementInternals_ariaAutoComplete(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaAutoComplete"));
}


void ElementInternals_set_ariaAutoComplete(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaAutoComplete", value);
}


jb_DOMString ElementInternals_ariaBrailleLabel(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaBrailleLabel"));
}


void ElementInternals_set_ariaBrailleLabel(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaBrailleLabel", value);
}


jb_DOMString ElementInternals_ariaBrailleRoleDescription(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaBrailleRoleDescription"));
}


void ElementInternals_set_ariaBrailleRoleDescription(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaBrailleRoleDescription", value);
}


jb_DOMString ElementInternals_ariaBusy(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaBusy"));
}


void ElementInternals_set_ariaBusy(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaBusy", value);
}


jb_DOMString ElementInternals_ariaChecked(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaChecked"));
}


void ElementInternals_set_ariaChecked(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaChecked", value);
}


jb_DOMString ElementInternals_ariaColCount(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaColCount"));
}


void ElementInternals_set_ariaColCount(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaColCount", value);
}


jb_DOMString ElementInternals_ariaColIndex(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaColIndex"));
}


void ElementInternals_set_ariaColIndex(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaColIndex", value);
}


jb_DOMString ElementInternals_ariaColIndexText(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaColIndexText"));
}


void ElementInternals_set_ariaColIndexText(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaColIndexText", value);
}


jb_DOMString ElementInternals_ariaColSpan(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaColSpan"));
}


void ElementInternals_set_ariaColSpan(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaColSpan", value);
}


jb_FrozenArray ElementInternals_ariaControlsElements(const ElementInternals *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "ariaControlsElements"));
}


void ElementInternals_set_ariaControlsElements(ElementInternals* self, const jb_FrozenArray* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaControlsElements", value);
}


jb_DOMString ElementInternals_ariaCurrent(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaCurrent"));
}


void ElementInternals_set_ariaCurrent(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaCurrent", value);
}


jb_FrozenArray ElementInternals_ariaDescribedByElements(const ElementInternals *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "ariaDescribedByElements"));
}


void ElementInternals_set_ariaDescribedByElements(ElementInternals* self, const jb_FrozenArray* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaDescribedByElements", value);
}


jb_DOMString ElementInternals_ariaDescription(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaDescription"));
}


void ElementInternals_set_ariaDescription(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaDescription", value);
}


jb_FrozenArray ElementInternals_ariaDetailsElements(const ElementInternals *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "ariaDetailsElements"));
}


void ElementInternals_set_ariaDetailsElements(ElementInternals* self, const jb_FrozenArray* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaDetailsElements", value);
}


jb_DOMString ElementInternals_ariaDisabled(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaDisabled"));
}


void ElementInternals_set_ariaDisabled(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaDisabled", value);
}


jb_FrozenArray ElementInternals_ariaErrorMessageElements(const ElementInternals *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "ariaErrorMessageElements"));
}


void ElementInternals_set_ariaErrorMessageElements(ElementInternals* self, const jb_FrozenArray* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaErrorMessageElements", value);
}


jb_DOMString ElementInternals_ariaExpanded(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaExpanded"));
}


void ElementInternals_set_ariaExpanded(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaExpanded", value);
}


jb_FrozenArray ElementInternals_ariaFlowToElements(const ElementInternals *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "ariaFlowToElements"));
}


void ElementInternals_set_ariaFlowToElements(ElementInternals* self, const jb_FrozenArray* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaFlowToElements", value);
}


jb_DOMString ElementInternals_ariaHasPopup(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaHasPopup"));
}


void ElementInternals_set_ariaHasPopup(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaHasPopup", value);
}


jb_DOMString ElementInternals_ariaHidden(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaHidden"));
}


void ElementInternals_set_ariaHidden(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaHidden", value);
}


jb_DOMString ElementInternals_ariaInvalid(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaInvalid"));
}


void ElementInternals_set_ariaInvalid(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaInvalid", value);
}


jb_DOMString ElementInternals_ariaKeyShortcuts(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaKeyShortcuts"));
}


void ElementInternals_set_ariaKeyShortcuts(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaKeyShortcuts", value);
}


jb_DOMString ElementInternals_ariaLabel(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaLabel"));
}


void ElementInternals_set_ariaLabel(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaLabel", value);
}


jb_FrozenArray ElementInternals_ariaLabelledByElements(const ElementInternals *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "ariaLabelledByElements"));
}


void ElementInternals_set_ariaLabelledByElements(ElementInternals* self, const jb_FrozenArray* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaLabelledByElements", value);
}


jb_DOMString ElementInternals_ariaLevel(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaLevel"));
}


void ElementInternals_set_ariaLevel(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaLevel", value);
}


jb_DOMString ElementInternals_ariaLive(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaLive"));
}


void ElementInternals_set_ariaLive(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaLive", value);
}


jb_DOMString ElementInternals_ariaModal(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaModal"));
}


void ElementInternals_set_ariaModal(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaModal", value);
}


jb_DOMString ElementInternals_ariaMultiLine(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaMultiLine"));
}


void ElementInternals_set_ariaMultiLine(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaMultiLine", value);
}


jb_DOMString ElementInternals_ariaMultiSelectable(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaMultiSelectable"));
}


void ElementInternals_set_ariaMultiSelectable(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaMultiSelectable", value);
}


jb_DOMString ElementInternals_ariaOrientation(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaOrientation"));
}


void ElementInternals_set_ariaOrientation(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaOrientation", value);
}


jb_FrozenArray ElementInternals_ariaOwnsElements(const ElementInternals *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "ariaOwnsElements"));
}


void ElementInternals_set_ariaOwnsElements(ElementInternals* self, const jb_FrozenArray* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaOwnsElements", value);
}


jb_DOMString ElementInternals_ariaPlaceholder(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaPlaceholder"));
}


void ElementInternals_set_ariaPlaceholder(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaPlaceholder", value);
}


jb_DOMString ElementInternals_ariaPosInSet(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaPosInSet"));
}


void ElementInternals_set_ariaPosInSet(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaPosInSet", value);
}


jb_DOMString ElementInternals_ariaPressed(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaPressed"));
}


void ElementInternals_set_ariaPressed(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaPressed", value);
}


jb_DOMString ElementInternals_ariaReadOnly(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaReadOnly"));
}


void ElementInternals_set_ariaReadOnly(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaReadOnly", value);
}


jb_DOMString ElementInternals_ariaRelevant(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaRelevant"));
}


void ElementInternals_set_ariaRelevant(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaRelevant", value);
}


jb_DOMString ElementInternals_ariaRequired(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaRequired"));
}


void ElementInternals_set_ariaRequired(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaRequired", value);
}


jb_DOMString ElementInternals_ariaRoleDescription(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaRoleDescription"));
}


void ElementInternals_set_ariaRoleDescription(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaRoleDescription", value);
}


jb_DOMString ElementInternals_ariaRowCount(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaRowCount"));
}


void ElementInternals_set_ariaRowCount(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaRowCount", value);
}


jb_DOMString ElementInternals_ariaRowIndex(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaRowIndex"));
}


void ElementInternals_set_ariaRowIndex(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaRowIndex", value);
}


jb_DOMString ElementInternals_ariaRowIndexText(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaRowIndexText"));
}


void ElementInternals_set_ariaRowIndexText(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaRowIndexText", value);
}


jb_DOMString ElementInternals_ariaRowSpan(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaRowSpan"));
}


void ElementInternals_set_ariaRowSpan(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaRowSpan", value);
}


jb_DOMString ElementInternals_ariaSelected(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaSelected"));
}


void ElementInternals_set_ariaSelected(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaSelected", value);
}


jb_DOMString ElementInternals_ariaSetSize(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaSetSize"));
}


void ElementInternals_set_ariaSetSize(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaSetSize", value);
}


jb_DOMString ElementInternals_ariaSort(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaSort"));
}


void ElementInternals_set_ariaSort(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaSort", value);
}


jb_DOMString ElementInternals_ariaValueMax(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaValueMax"));
}


void ElementInternals_set_ariaValueMax(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaValueMax", value);
}


jb_DOMString ElementInternals_ariaValueMin(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaValueMin"));
}


void ElementInternals_set_ariaValueMin(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaValueMin", value);
}


jb_DOMString ElementInternals_ariaValueNow(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaValueNow"));
}


void ElementInternals_set_ariaValueNow(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaValueNow", value);
}


jb_DOMString ElementInternals_ariaValueText(const ElementInternals *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "ariaValueText"));
}


void ElementInternals_set_ariaValueText(ElementInternals* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ariaValueText", value);
}

