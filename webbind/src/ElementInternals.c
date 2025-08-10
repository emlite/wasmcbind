#include <webbind/ElementInternals.h>

#include <webbind/ShadowRoot.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/ValidityStateFlags.h>
#include <webbind/HTMLElement.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>
#include <webbind/CustomStateSet.h>
#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(ElementInternals, em_Val);


ShadowRoot ElementInternals_shadowRoot(const ElementInternals *self) {
    return em_Val_as(ShadowRoot, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowRoot")));
}


jb_Undefined ElementInternals_setFormValue0(ElementInternals* self , jb_Any * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setFormValue", em_Val_from(value)));
}


jb_Undefined ElementInternals_setFormValue1(ElementInternals* self , jb_Any * value, jb_Any * state) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setFormValue", em_Val_from(value), em_Val_from(state)));
}


HTMLFormElement ElementInternals_form(const ElementInternals *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("form")));
}


jb_Undefined ElementInternals_setValidity0(ElementInternals* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setValidity"));
}


jb_Undefined ElementInternals_setValidity1(ElementInternals* self , ValidityStateFlags * flags) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setValidity", em_Val_from(flags)));
}


jb_Undefined ElementInternals_setValidity2(ElementInternals* self , ValidityStateFlags * flags, jb_String * message) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setValidity", em_Val_from(flags), em_Val_from(message)));
}


jb_Undefined ElementInternals_setValidity3(ElementInternals* self , ValidityStateFlags * flags, jb_String * message, HTMLElement * anchor) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setValidity", em_Val_from(flags), em_Val_from(message), em_Val_from(anchor)));
}


bool ElementInternals_willValidate(const ElementInternals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("willValidate")));
}


ValidityState ElementInternals_validity(const ElementInternals *self) {
    return em_Val_as(ValidityState, em_Val_get(em_Val_as_val(self->inner), em_Val_from("validity")));
}


jb_String ElementInternals_validationMessage(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("validationMessage")));
}


bool ElementInternals_checkValidity(ElementInternals* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "checkValidity"));
}


bool ElementInternals_reportValidity(ElementInternals* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "reportValidity"));
}


NodeList ElementInternals_labels(const ElementInternals *self) {
    return em_Val_as(NodeList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("labels")));
}


CustomStateSet ElementInternals_states(const ElementInternals *self) {
    return em_Val_as(CustomStateSet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("states")));
}


jb_String ElementInternals_role(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("role")));
}


void ElementInternals_set_role(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("role"), em_Val_from(value));
}


Element ElementInternals_ariaActiveDescendantElement(const ElementInternals *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaActiveDescendantElement")));
}


void ElementInternals_set_ariaActiveDescendantElement(ElementInternals* self, Element * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaActiveDescendantElement"), em_Val_from(value));
}


jb_String ElementInternals_ariaAtomic(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaAtomic")));
}


void ElementInternals_set_ariaAtomic(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaAtomic"), em_Val_from(value));
}


jb_String ElementInternals_ariaAutoComplete(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaAutoComplete")));
}


void ElementInternals_set_ariaAutoComplete(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaAutoComplete"), em_Val_from(value));
}


jb_String ElementInternals_ariaBrailleLabel(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaBrailleLabel")));
}


void ElementInternals_set_ariaBrailleLabel(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaBrailleLabel"), em_Val_from(value));
}


jb_String ElementInternals_ariaBrailleRoleDescription(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaBrailleRoleDescription")));
}


void ElementInternals_set_ariaBrailleRoleDescription(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaBrailleRoleDescription"), em_Val_from(value));
}


jb_String ElementInternals_ariaBusy(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaBusy")));
}


void ElementInternals_set_ariaBusy(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaBusy"), em_Val_from(value));
}


jb_String ElementInternals_ariaChecked(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaChecked")));
}


void ElementInternals_set_ariaChecked(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaChecked"), em_Val_from(value));
}


jb_String ElementInternals_ariaColCount(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaColCount")));
}


void ElementInternals_set_ariaColCount(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaColCount"), em_Val_from(value));
}


jb_String ElementInternals_ariaColIndex(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaColIndex")));
}


void ElementInternals_set_ariaColIndex(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaColIndex"), em_Val_from(value));
}


jb_String ElementInternals_ariaColIndexText(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaColIndexText")));
}


void ElementInternals_set_ariaColIndexText(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaColIndexText"), em_Val_from(value));
}


jb_String ElementInternals_ariaColSpan(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaColSpan")));
}


void ElementInternals_set_ariaColSpan(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaColSpan"), em_Val_from(value));
}


jb_Array ElementInternals_ariaControlsElements(const ElementInternals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaControlsElements")));
}


void ElementInternals_set_ariaControlsElements(ElementInternals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaControlsElements"), em_Val_from(value));
}


jb_String ElementInternals_ariaCurrent(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaCurrent")));
}


void ElementInternals_set_ariaCurrent(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaCurrent"), em_Val_from(value));
}


jb_Array ElementInternals_ariaDescribedByElements(const ElementInternals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaDescribedByElements")));
}


void ElementInternals_set_ariaDescribedByElements(ElementInternals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaDescribedByElements"), em_Val_from(value));
}


jb_String ElementInternals_ariaDescription(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaDescription")));
}


void ElementInternals_set_ariaDescription(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaDescription"), em_Val_from(value));
}


jb_Array ElementInternals_ariaDetailsElements(const ElementInternals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaDetailsElements")));
}


void ElementInternals_set_ariaDetailsElements(ElementInternals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaDetailsElements"), em_Val_from(value));
}


jb_String ElementInternals_ariaDisabled(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaDisabled")));
}


void ElementInternals_set_ariaDisabled(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaDisabled"), em_Val_from(value));
}


jb_Array ElementInternals_ariaErrorMessageElements(const ElementInternals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaErrorMessageElements")));
}


void ElementInternals_set_ariaErrorMessageElements(ElementInternals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaErrorMessageElements"), em_Val_from(value));
}


jb_String ElementInternals_ariaExpanded(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaExpanded")));
}


void ElementInternals_set_ariaExpanded(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaExpanded"), em_Val_from(value));
}


jb_Array ElementInternals_ariaFlowToElements(const ElementInternals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaFlowToElements")));
}


void ElementInternals_set_ariaFlowToElements(ElementInternals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaFlowToElements"), em_Val_from(value));
}


jb_String ElementInternals_ariaHasPopup(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaHasPopup")));
}


void ElementInternals_set_ariaHasPopup(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaHasPopup"), em_Val_from(value));
}


jb_String ElementInternals_ariaHidden(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaHidden")));
}


void ElementInternals_set_ariaHidden(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaHidden"), em_Val_from(value));
}


jb_String ElementInternals_ariaInvalid(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaInvalid")));
}


void ElementInternals_set_ariaInvalid(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaInvalid"), em_Val_from(value));
}


jb_String ElementInternals_ariaKeyShortcuts(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaKeyShortcuts")));
}


void ElementInternals_set_ariaKeyShortcuts(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaKeyShortcuts"), em_Val_from(value));
}


jb_String ElementInternals_ariaLabel(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaLabel")));
}


void ElementInternals_set_ariaLabel(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaLabel"), em_Val_from(value));
}


jb_Array ElementInternals_ariaLabelledByElements(const ElementInternals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaLabelledByElements")));
}


void ElementInternals_set_ariaLabelledByElements(ElementInternals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaLabelledByElements"), em_Val_from(value));
}


jb_String ElementInternals_ariaLevel(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaLevel")));
}


void ElementInternals_set_ariaLevel(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaLevel"), em_Val_from(value));
}


jb_String ElementInternals_ariaLive(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaLive")));
}


void ElementInternals_set_ariaLive(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaLive"), em_Val_from(value));
}


jb_String ElementInternals_ariaModal(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaModal")));
}


void ElementInternals_set_ariaModal(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaModal"), em_Val_from(value));
}


jb_String ElementInternals_ariaMultiLine(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaMultiLine")));
}


void ElementInternals_set_ariaMultiLine(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaMultiLine"), em_Val_from(value));
}


jb_String ElementInternals_ariaMultiSelectable(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaMultiSelectable")));
}


void ElementInternals_set_ariaMultiSelectable(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaMultiSelectable"), em_Val_from(value));
}


jb_String ElementInternals_ariaOrientation(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaOrientation")));
}


void ElementInternals_set_ariaOrientation(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaOrientation"), em_Val_from(value));
}


jb_Array ElementInternals_ariaOwnsElements(const ElementInternals *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaOwnsElements")));
}


void ElementInternals_set_ariaOwnsElements(ElementInternals* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaOwnsElements"), em_Val_from(value));
}


jb_String ElementInternals_ariaPlaceholder(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaPlaceholder")));
}


void ElementInternals_set_ariaPlaceholder(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaPlaceholder"), em_Val_from(value));
}


jb_String ElementInternals_ariaPosInSet(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaPosInSet")));
}


void ElementInternals_set_ariaPosInSet(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaPosInSet"), em_Val_from(value));
}


jb_String ElementInternals_ariaPressed(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaPressed")));
}


void ElementInternals_set_ariaPressed(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaPressed"), em_Val_from(value));
}


jb_String ElementInternals_ariaReadOnly(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaReadOnly")));
}


void ElementInternals_set_ariaReadOnly(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaReadOnly"), em_Val_from(value));
}


jb_String ElementInternals_ariaRelevant(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaRelevant")));
}


void ElementInternals_set_ariaRelevant(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaRelevant"), em_Val_from(value));
}


jb_String ElementInternals_ariaRequired(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaRequired")));
}


void ElementInternals_set_ariaRequired(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaRequired"), em_Val_from(value));
}


jb_String ElementInternals_ariaRoleDescription(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaRoleDescription")));
}


void ElementInternals_set_ariaRoleDescription(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaRoleDescription"), em_Val_from(value));
}


jb_String ElementInternals_ariaRowCount(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaRowCount")));
}


void ElementInternals_set_ariaRowCount(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaRowCount"), em_Val_from(value));
}


jb_String ElementInternals_ariaRowIndex(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaRowIndex")));
}


void ElementInternals_set_ariaRowIndex(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaRowIndex"), em_Val_from(value));
}


jb_String ElementInternals_ariaRowIndexText(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaRowIndexText")));
}


void ElementInternals_set_ariaRowIndexText(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaRowIndexText"), em_Val_from(value));
}


jb_String ElementInternals_ariaRowSpan(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaRowSpan")));
}


void ElementInternals_set_ariaRowSpan(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaRowSpan"), em_Val_from(value));
}


jb_String ElementInternals_ariaSelected(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaSelected")));
}


void ElementInternals_set_ariaSelected(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaSelected"), em_Val_from(value));
}


jb_String ElementInternals_ariaSetSize(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaSetSize")));
}


void ElementInternals_set_ariaSetSize(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaSetSize"), em_Val_from(value));
}


jb_String ElementInternals_ariaSort(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaSort")));
}


void ElementInternals_set_ariaSort(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaSort"), em_Val_from(value));
}


jb_String ElementInternals_ariaValueMax(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaValueMax")));
}


void ElementInternals_set_ariaValueMax(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaValueMax"), em_Val_from(value));
}


jb_String ElementInternals_ariaValueMin(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaValueMin")));
}


void ElementInternals_set_ariaValueMin(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaValueMin"), em_Val_from(value));
}


jb_String ElementInternals_ariaValueNow(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaValueNow")));
}


void ElementInternals_set_ariaValueNow(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaValueNow"), em_Val_from(value));
}


jb_String ElementInternals_ariaValueText(const ElementInternals *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ariaValueText")));
}


void ElementInternals_set_ariaValueText(ElementInternals* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ariaValueText"), em_Val_from(value));
}

