#include <webbind/Element.h>
#include <webbind/DOMTokenList.h>
#include <webbind/NamedNodeMap.h>
#include <webbind/Attr.h>
#include <webbind/ShadowRoot.h>
#include <webbind/CustomElementRegistry.h>
#include <webbind/HTMLCollection.h>
#include <webbind/CSSPseudoElement.h>
#include <webbind/StylePropertyMapReadOnly.h>
#include <webbind/DOMRectList.h>
#include <webbind/DOMRect.h>
#include <webbind/Range.h>
#include <webbind/DOMQuad.h>
#include <webbind/Document.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPoint.h>
#include <webbind/SVGGeometryElement.h>
#include <webbind/NodeList.h>
#include <webbind/HTMLSlotElement.h>
#include <webbind/Animation.h>
#include <webbind/ScreenDetailed.h>


DEFINE_EMLITE_TYPE(ShadowRootInit, em_Val);


ShadowRootMode ShadowRootInit_mode(const ShadowRootInit *self) {
    return em_Val_as(ShadowRootMode, em_Val_get(em_Val_as_val(self->inner), "mode"));
}


void ShadowRootInit_set_mode(ShadowRootInit* self, const ShadowRootMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "mode", value);
}


bool ShadowRootInit_delegatesFocus(const ShadowRootInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "delegatesFocus"));
}


void ShadowRootInit_set_delegatesFocus(ShadowRootInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "delegatesFocus", value);
}


SlotAssignmentMode ShadowRootInit_slotAssignment(const ShadowRootInit *self) {
    return em_Val_as(SlotAssignmentMode, em_Val_get(em_Val_as_val(self->inner), "slotAssignment"));
}


void ShadowRootInit_set_slotAssignment(ShadowRootInit* self, const SlotAssignmentMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "slotAssignment", value);
}


bool ShadowRootInit_clonable(const ShadowRootInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "clonable"));
}


void ShadowRootInit_set_clonable(ShadowRootInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "clonable", value);
}


bool ShadowRootInit_serializable(const ShadowRootInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "serializable"));
}


void ShadowRootInit_set_serializable(ShadowRootInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "serializable", value);
}


CustomElementRegistry ShadowRootInit_customElementRegistry(const ShadowRootInit *self) {
    return em_Val_as(CustomElementRegistry, em_Val_get(em_Val_as_val(self->inner), "customElementRegistry"));
}


void ShadowRootInit_set_customElementRegistry(ShadowRootInit* self, const CustomElementRegistry* value) {
    em_Val_set(em_Val_as_val(self->inner), "customElementRegistry", value);
}

DEFINE_EMLITE_TYPE(FocusableAreasOption, em_Val);


FocusableAreaSearchMode FocusableAreasOption_mode(const FocusableAreasOption *self) {
    return em_Val_as(FocusableAreaSearchMode, em_Val_get(em_Val_as_val(self->inner), "mode"));
}


void FocusableAreasOption_set_mode(FocusableAreasOption* self, const FocusableAreaSearchMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "mode", value);
}

DEFINE_EMLITE_TYPE(SpatialNavigationSearchOptions, em_Val);


jb_Sequence SpatialNavigationSearchOptions_candidates(const SpatialNavigationSearchOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "candidates"));
}


void SpatialNavigationSearchOptions_set_candidates(SpatialNavigationSearchOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "candidates", value);
}


Node SpatialNavigationSearchOptions_container(const SpatialNavigationSearchOptions *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), "container"));
}


void SpatialNavigationSearchOptions_set_container(SpatialNavigationSearchOptions* self, const Node* value) {
    em_Val_set(em_Val_as_val(self->inner), "container", value);
}

DEFINE_EMLITE_TYPE(CheckVisibilityOptions, em_Val);


bool CheckVisibilityOptions_checkOpacity(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "checkOpacity"));
}


void CheckVisibilityOptions_set_checkOpacity(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "checkOpacity", value);
}


bool CheckVisibilityOptions_checkVisibilityCSS(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "checkVisibilityCSS"));
}


void CheckVisibilityOptions_set_checkVisibilityCSS(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "checkVisibilityCSS", value);
}


bool CheckVisibilityOptions_contentVisibilityAuto(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "contentVisibilityAuto"));
}


void CheckVisibilityOptions_set_contentVisibilityAuto(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "contentVisibilityAuto", value);
}


bool CheckVisibilityOptions_opacityProperty(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "opacityProperty"));
}


void CheckVisibilityOptions_set_opacityProperty(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "opacityProperty", value);
}


bool CheckVisibilityOptions_visibilityProperty(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "visibilityProperty"));
}


void CheckVisibilityOptions_set_visibilityProperty(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "visibilityProperty", value);
}

DEFINE_EMLITE_TYPE(FullscreenOptions, em_Val);


ScreenDetailed FullscreenOptions_screen(const FullscreenOptions *self) {
    return em_Val_as(ScreenDetailed, em_Val_get(em_Val_as_val(self->inner), "screen"));
}


void FullscreenOptions_set_screen(FullscreenOptions* self, const ScreenDetailed* value) {
    em_Val_set(em_Val_as_val(self->inner), "screen", value);
}

DEFINE_EMLITE_TYPE(GetHTMLOptions, em_Val);


bool GetHTMLOptions_serializableShadowRoots(const GetHTMLOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "serializableShadowRoots"));
}


void GetHTMLOptions_set_serializableShadowRoots(GetHTMLOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "serializableShadowRoots", value);
}


jb_Sequence GetHTMLOptions_shadowRoots(const GetHTMLOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "shadowRoots"));
}


void GetHTMLOptions_set_shadowRoots(GetHTMLOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "shadowRoots", value);
}

DEFINE_EMLITE_TYPE(PointerLockOptions, em_Val);


bool PointerLockOptions_unadjustedMovement(const PointerLockOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "unadjustedMovement"));
}


void PointerLockOptions_set_unadjustedMovement(PointerLockOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "unadjustedMovement", value);
}

DEFINE_EMLITE_TYPE(GetAnimationsOptions, em_Val);


bool GetAnimationsOptions_subtree(const GetAnimationsOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "subtree"));
}


void GetAnimationsOptions_set_subtree(GetAnimationsOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "subtree", value);
}


jb_CSSOMString GetAnimationsOptions_pseudoElement(const GetAnimationsOptions *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "pseudoElement"));
}


void GetAnimationsOptions_set_pseudoElement(GetAnimationsOptions* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "pseudoElement", value);
}

DEFINE_EMLITE_TYPE(Element, Node);


jb_DOMString Element_namespaceURI(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "namespaceURI"));
}


jb_DOMString Element_prefix(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "prefix"));
}


jb_DOMString Element_localName(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "localName"));
}


jb_DOMString Element_tagName(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "tagName"));
}


jb_DOMString Element_id(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "id"));
}


void Element_set_id(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "id", value);
}


jb_DOMString Element_className(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "className"));
}


void Element_set_className(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "className", value);
}


DOMTokenList Element_classList(const Element *self) {
    return em_Val_as(DOMTokenList, em_Val_get(Node_as_val(self->inner), "classList"));
}


jb_DOMString Element_slot(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "slot"));
}


void Element_set_slot(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "slot", value);
}


bool Element_hasAttributes(Element* self ) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "hasAttributes"));
}


NamedNodeMap Element_attributes(const Element *self) {
    return em_Val_as(NamedNodeMap, em_Val_get(Node_as_val(self->inner), "attributes"));
}


jb_Sequence Element_getAttributeNames(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getAttributeNames"));
}


jb_DOMString Element_getAttribute(Element* self , const jb_DOMString* qualifiedName) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "getAttribute", em_Val_from(qualifiedName)));
}


jb_DOMString Element_getAttributeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "getAttributeNS", em_Val_from(namespace_), em_Val_from(localName)));
}


jb_Undefined Element_setAttribute(Element* self , const jb_DOMString* qualifiedName, const jb_DOMString* value) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "setAttribute", em_Val_from(qualifiedName), em_Val_from(value)));
}


jb_Undefined Element_setAttributeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName, const jb_DOMString* value) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "setAttributeNS", em_Val_from(namespace_), em_Val_from(qualifiedName), em_Val_from(value)));
}


jb_Undefined Element_removeAttribute(Element* self , const jb_DOMString* qualifiedName) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "removeAttribute", em_Val_from(qualifiedName)));
}


jb_Undefined Element_removeAttributeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "removeAttributeNS", em_Val_from(namespace_), em_Val_from(localName)));
}


bool Element_toggleAttribute(Element* self , const jb_DOMString* qualifiedName) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "toggleAttribute", em_Val_from(qualifiedName)));
}


bool Element_toggleAttribute(Element* self , const jb_DOMString* qualifiedName, bool force) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "toggleAttribute", em_Val_from(qualifiedName), em_Val_from(force)));
}


bool Element_hasAttribute(Element* self , const jb_DOMString* qualifiedName) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "hasAttribute", em_Val_from(qualifiedName)));
}


bool Element_hasAttributeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "hasAttributeNS", em_Val_from(namespace_), em_Val_from(localName)));
}


Attr Element_getAttributeNode(Element* self , const jb_DOMString* qualifiedName) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "getAttributeNode", em_Val_from(qualifiedName)));
}


Attr Element_getAttributeNodeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "getAttributeNodeNS", em_Val_from(namespace_), em_Val_from(localName)));
}


Attr Element_setAttributeNode(Element* self , const Attr* attr) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "setAttributeNode", em_Val_from(attr)));
}


Attr Element_setAttributeNodeNS(Element* self , const Attr* attr) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "setAttributeNodeNS", em_Val_from(attr)));
}


Attr Element_removeAttributeNode(Element* self , const Attr* attr) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "removeAttributeNode", em_Val_from(attr)));
}


ShadowRoot Element_attachShadow(Element* self , const ShadowRootInit* init) {
    return em_Val_as(ShadowRoot, em_Val_call(Node_as_val(self->inner), "attachShadow", em_Val_from(init)));
}


ShadowRoot Element_shadowRoot(const Element *self) {
    return em_Val_as(ShadowRoot, em_Val_get(Node_as_val(self->inner), "shadowRoot"));
}


CustomElementRegistry Element_customElementRegistry(const Element *self) {
    return em_Val_as(CustomElementRegistry, em_Val_get(Node_as_val(self->inner), "customElementRegistry"));
}


Element Element_closest(Element* self , const jb_DOMString* selectors) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "closest", em_Val_from(selectors)));
}


bool Element_matches(Element* self , const jb_DOMString* selectors) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "matches", em_Val_from(selectors)));
}


bool Element_webkitMatchesSelector(Element* self , const jb_DOMString* selectors) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "webkitMatchesSelector", em_Val_from(selectors)));
}


HTMLCollection Element_getElementsByTagName(Element* self , const jb_DOMString* qualifiedName) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByTagName", em_Val_from(qualifiedName)));
}


HTMLCollection Element_getElementsByTagNameNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByTagNameNS", em_Val_from(namespace_), em_Val_from(localName)));
}


HTMLCollection Element_getElementsByClassName(Element* self , const jb_DOMString* classNames) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByClassName", em_Val_from(classNames)));
}


Element Element_insertAdjacentElement(Element* self , const jb_DOMString* where, const Element* element) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "insertAdjacentElement", em_Val_from(where), em_Val_from(element)));
}


jb_Undefined Element_insertAdjacentText(Element* self , const jb_DOMString* where, const jb_DOMString* data) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "insertAdjacentText", em_Val_from(where), em_Val_from(data)));
}


Node Element_getSpatialNavigationContainer(Element* self ) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "getSpatialNavigationContainer"));
}


jb_Sequence Element_focusableAreas(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "focusableAreas"));
}


jb_Sequence Element_focusableAreas(Element* self , const FocusableAreasOption* option) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "focusableAreas", em_Val_from(option)));
}


Node Element_spatialNavigationSearch(Element* self , const SpatialNavigationDirection* dir) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "spatialNavigationSearch", em_Val_from(dir)));
}


Node Element_spatialNavigationSearch(Element* self , const SpatialNavigationDirection* dir, const SpatialNavigationSearchOptions* options) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "spatialNavigationSearch", em_Val_from(dir), em_Val_from(options)));
}


CSSPseudoElement Element_pseudo(Element* self , const jb_CSSOMString* type) {
    return em_Val_as(CSSPseudoElement, em_Val_call(Node_as_val(self->inner), "pseudo", em_Val_from(type)));
}


DOMTokenList Element_part(const Element *self) {
    return em_Val_as(DOMTokenList, em_Val_get(Node_as_val(self->inner), "part"));
}


StylePropertyMapReadOnly Element_computedStyleMap(Element* self ) {
    return em_Val_as(StylePropertyMapReadOnly, em_Val_call(Node_as_val(self->inner), "computedStyleMap"));
}


DOMRectList Element_getClientRects(Element* self ) {
    return em_Val_as(DOMRectList, em_Val_call(Node_as_val(self->inner), "getClientRects"));
}


DOMRect Element_getBoundingClientRect(Element* self ) {
    return em_Val_as(DOMRect, em_Val_call(Node_as_val(self->inner), "getBoundingClientRect"));
}


bool Element_checkVisibility(Element* self ) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "checkVisibility"));
}


bool Element_checkVisibility(Element* self , const CheckVisibilityOptions* options) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "checkVisibility", em_Val_from(options)));
}


jb_Undefined Element_scrollIntoView(Element* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "scrollIntoView"));
}


jb_Undefined Element_scrollIntoView(Element* self , const jb_Any* arg) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "scrollIntoView", em_Val_from(arg)));
}


jb_Undefined Element_scroll(Element* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "scroll", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Element_scrollTo(Element* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "scrollTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Element_scrollBy(Element* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "scrollBy", em_Val_from(x), em_Val_from(y)));
}


double Element_scrollTop(const Element *self) {
    return em_Val_as(double, em_Val_get(Node_as_val(self->inner), "scrollTop"));
}


void Element_set_scrollTop(Element* self, double value) {
    em_Val_set(Node_as_val(self->inner), "scrollTop", value);
}


double Element_scrollLeft(const Element *self) {
    return em_Val_as(double, em_Val_get(Node_as_val(self->inner), "scrollLeft"));
}


void Element_set_scrollLeft(Element* self, double value) {
    em_Val_set(Node_as_val(self->inner), "scrollLeft", value);
}


long Element_scrollWidth(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), "scrollWidth"));
}


long Element_scrollHeight(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), "scrollHeight"));
}


long Element_clientTop(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), "clientTop"));
}


long Element_clientLeft(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), "clientLeft"));
}


long Element_clientWidth(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), "clientWidth"));
}


long Element_clientHeight(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), "clientHeight"));
}


double Element_currentCSSZoom(const Element *self) {
    return em_Val_as(double, em_Val_get(Node_as_val(self->inner), "currentCSSZoom"));
}


jb_DOMString Element_elementTiming(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "elementTiming"));
}


void Element_set_elementTiming(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "elementTiming", value);
}


jb_Promise Element_requestFullscreen(Element* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestFullscreen"));
}


jb_Promise Element_requestFullscreen(Element* self , const FullscreenOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestFullscreen", em_Val_from(options)));
}


jb_Any Element_onfullscreenchange(const Element *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onfullscreenchange"));
}


void Element_set_onfullscreenchange(Element* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onfullscreenchange", value);
}


jb_Any Element_onfullscreenerror(const Element *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onfullscreenerror"));
}


void Element_set_onfullscreenerror(Element* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onfullscreenerror", value);
}


jb_Undefined Element_setHTMLUnsafe(Element* self , const jb_Any* html) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "setHTMLUnsafe", em_Val_from(html)));
}


jb_DOMString Element_getHTML(Element* self ) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "getHTML"));
}


jb_DOMString Element_getHTML(Element* self , const GetHTMLOptions* options) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "getHTML", em_Val_from(options)));
}


jb_Any Element_innerHTML(const Element *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "innerHTML"));
}


void Element_set_innerHTML(Element* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "innerHTML", value);
}


jb_Any Element_outerHTML(const Element *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "outerHTML"));
}


void Element_set_outerHTML(Element* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "outerHTML", value);
}


jb_Undefined Element_insertAdjacentHTML(Element* self , const jb_DOMString* position, const jb_Any* string) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "insertAdjacentHTML", em_Val_from(position), em_Val_from(string)));
}


jb_Undefined Element_setPointerCapture(Element* self , long pointerId) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "setPointerCapture", em_Val_from(pointerId)));
}


jb_Undefined Element_releasePointerCapture(Element* self , long pointerId) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "releasePointerCapture", em_Val_from(pointerId)));
}


bool Element_hasPointerCapture(Element* self , long pointerId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "hasPointerCapture", em_Val_from(pointerId)));
}


jb_Promise Element_requestPointerLock(Element* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestPointerLock"));
}


jb_Promise Element_requestPointerLock(Element* self , const PointerLockOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestPointerLock", em_Val_from(options)));
}


jb_CSSOMString Element_regionOverset(const Element *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Node_as_val(self->inner), "regionOverset"));
}


jb_Sequence Element_getRegionFlowRanges(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getRegionFlowRanges"));
}


jb_Sequence Element_getBoxQuads(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getBoxQuads"));
}


jb_Sequence Element_getBoxQuads(Element* self , const BoxQuadOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getBoxQuads", em_Val_from(options)));
}


DOMQuad Element_convertQuadFromNode(Element* self , const DOMQuadInit* quad, const jb_Any* from) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from)));
}


DOMQuad Element_convertQuadFromNode(Element* self , const DOMQuadInit* quad, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from), em_Val_from(options)));
}


DOMQuad Element_convertRectFromNode(Element* self , const DOMRectReadOnly* rect, const jb_Any* from) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from)));
}


DOMQuad Element_convertRectFromNode(Element* self , const DOMRectReadOnly* rect, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from), em_Val_from(options)));
}


DOMPoint Element_convertPointFromNode(Element* self , const DOMPointInit* point, const jb_Any* from) {
    return em_Val_as(DOMPoint, em_Val_call(Node_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from)));
}


DOMPoint Element_convertPointFromNode(Element* self , const DOMPointInit* point, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMPoint, em_Val_call(Node_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from), em_Val_from(options)));
}


HTMLCollection Element_children(const Element *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "children"));
}


Element Element_firstElementChild(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "firstElementChild"));
}


Element Element_lastElementChild(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "lastElementChild"));
}


unsigned long Element_childElementCount(const Element *self) {
    return em_Val_as(unsigned long, em_Val_get(Node_as_val(self->inner), "childElementCount"));
}


jb_Undefined Element_prepend(Element* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "prepend", em_Val_from(nodes)));
}


jb_Undefined Element_append(Element* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "append", em_Val_from(nodes)));
}


jb_Undefined Element_replaceChildren(Element* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceChildren", em_Val_from(nodes)));
}


jb_Undefined Element_moveBefore(Element* self , const Node* node, const Node* child) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "moveBefore", em_Val_from(node), em_Val_from(child)));
}


Element Element_querySelector(Element* self , const jb_DOMString* selectors) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "querySelector", em_Val_from(selectors)));
}


NodeList Element_querySelectorAll(Element* self , const jb_DOMString* selectors) {
    return em_Val_as(NodeList, em_Val_call(Node_as_val(self->inner), "querySelectorAll", em_Val_from(selectors)));
}


Element Element_previousElementSibling(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "previousElementSibling"));
}


Element Element_nextElementSibling(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "nextElementSibling"));
}


jb_Undefined Element_before(Element* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "before", em_Val_from(nodes)));
}


jb_Undefined Element_after(Element* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "after", em_Val_from(nodes)));
}


jb_Undefined Element_replaceWith(Element* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceWith", em_Val_from(nodes)));
}


jb_Undefined Element_remove(Element* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "remove"));
}


HTMLSlotElement Element_assignedSlot(const Element *self) {
    return em_Val_as(HTMLSlotElement, em_Val_get(Node_as_val(self->inner), "assignedSlot"));
}


jb_DOMString Element_role(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "role"));
}


void Element_set_role(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "role", value);
}


Element Element_ariaActiveDescendantElement(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "ariaActiveDescendantElement"));
}


void Element_set_ariaActiveDescendantElement(Element* self, const Element* value) {
    em_Val_set(Node_as_val(self->inner), "ariaActiveDescendantElement", value);
}


jb_DOMString Element_ariaAtomic(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaAtomic"));
}


void Element_set_ariaAtomic(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaAtomic", value);
}


jb_DOMString Element_ariaAutoComplete(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaAutoComplete"));
}


void Element_set_ariaAutoComplete(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaAutoComplete", value);
}


jb_DOMString Element_ariaBrailleLabel(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaBrailleLabel"));
}


void Element_set_ariaBrailleLabel(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaBrailleLabel", value);
}


jb_DOMString Element_ariaBrailleRoleDescription(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaBrailleRoleDescription"));
}


void Element_set_ariaBrailleRoleDescription(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaBrailleRoleDescription", value);
}


jb_DOMString Element_ariaBusy(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaBusy"));
}


void Element_set_ariaBusy(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaBusy", value);
}


jb_DOMString Element_ariaChecked(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaChecked"));
}


void Element_set_ariaChecked(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaChecked", value);
}


jb_DOMString Element_ariaColCount(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaColCount"));
}


void Element_set_ariaColCount(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaColCount", value);
}


jb_DOMString Element_ariaColIndex(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaColIndex"));
}


void Element_set_ariaColIndex(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaColIndex", value);
}


jb_DOMString Element_ariaColIndexText(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaColIndexText"));
}


void Element_set_ariaColIndexText(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaColIndexText", value);
}


jb_DOMString Element_ariaColSpan(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaColSpan"));
}


void Element_set_ariaColSpan(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaColSpan", value);
}


jb_FrozenArray Element_ariaControlsElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), "ariaControlsElements"));
}


void Element_set_ariaControlsElements(Element* self, const jb_FrozenArray* value) {
    em_Val_set(Node_as_val(self->inner), "ariaControlsElements", value);
}


jb_DOMString Element_ariaCurrent(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaCurrent"));
}


void Element_set_ariaCurrent(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaCurrent", value);
}


jb_FrozenArray Element_ariaDescribedByElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), "ariaDescribedByElements"));
}


void Element_set_ariaDescribedByElements(Element* self, const jb_FrozenArray* value) {
    em_Val_set(Node_as_val(self->inner), "ariaDescribedByElements", value);
}


jb_DOMString Element_ariaDescription(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaDescription"));
}


void Element_set_ariaDescription(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaDescription", value);
}


jb_FrozenArray Element_ariaDetailsElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), "ariaDetailsElements"));
}


void Element_set_ariaDetailsElements(Element* self, const jb_FrozenArray* value) {
    em_Val_set(Node_as_val(self->inner), "ariaDetailsElements", value);
}


jb_DOMString Element_ariaDisabled(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaDisabled"));
}


void Element_set_ariaDisabled(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaDisabled", value);
}


jb_FrozenArray Element_ariaErrorMessageElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), "ariaErrorMessageElements"));
}


void Element_set_ariaErrorMessageElements(Element* self, const jb_FrozenArray* value) {
    em_Val_set(Node_as_val(self->inner), "ariaErrorMessageElements", value);
}


jb_DOMString Element_ariaExpanded(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaExpanded"));
}


void Element_set_ariaExpanded(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaExpanded", value);
}


jb_FrozenArray Element_ariaFlowToElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), "ariaFlowToElements"));
}


void Element_set_ariaFlowToElements(Element* self, const jb_FrozenArray* value) {
    em_Val_set(Node_as_val(self->inner), "ariaFlowToElements", value);
}


jb_DOMString Element_ariaHasPopup(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaHasPopup"));
}


void Element_set_ariaHasPopup(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaHasPopup", value);
}


jb_DOMString Element_ariaHidden(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaHidden"));
}


void Element_set_ariaHidden(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaHidden", value);
}


jb_DOMString Element_ariaInvalid(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaInvalid"));
}


void Element_set_ariaInvalid(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaInvalid", value);
}


jb_DOMString Element_ariaKeyShortcuts(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaKeyShortcuts"));
}


void Element_set_ariaKeyShortcuts(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaKeyShortcuts", value);
}


jb_DOMString Element_ariaLabel(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaLabel"));
}


void Element_set_ariaLabel(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaLabel", value);
}


jb_FrozenArray Element_ariaLabelledByElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), "ariaLabelledByElements"));
}


void Element_set_ariaLabelledByElements(Element* self, const jb_FrozenArray* value) {
    em_Val_set(Node_as_val(self->inner), "ariaLabelledByElements", value);
}


jb_DOMString Element_ariaLevel(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaLevel"));
}


void Element_set_ariaLevel(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaLevel", value);
}


jb_DOMString Element_ariaLive(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaLive"));
}


void Element_set_ariaLive(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaLive", value);
}


jb_DOMString Element_ariaModal(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaModal"));
}


void Element_set_ariaModal(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaModal", value);
}


jb_DOMString Element_ariaMultiLine(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaMultiLine"));
}


void Element_set_ariaMultiLine(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaMultiLine", value);
}


jb_DOMString Element_ariaMultiSelectable(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaMultiSelectable"));
}


void Element_set_ariaMultiSelectable(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaMultiSelectable", value);
}


jb_DOMString Element_ariaOrientation(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaOrientation"));
}


void Element_set_ariaOrientation(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaOrientation", value);
}


jb_FrozenArray Element_ariaOwnsElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), "ariaOwnsElements"));
}


void Element_set_ariaOwnsElements(Element* self, const jb_FrozenArray* value) {
    em_Val_set(Node_as_val(self->inner), "ariaOwnsElements", value);
}


jb_DOMString Element_ariaPlaceholder(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaPlaceholder"));
}


void Element_set_ariaPlaceholder(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaPlaceholder", value);
}


jb_DOMString Element_ariaPosInSet(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaPosInSet"));
}


void Element_set_ariaPosInSet(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaPosInSet", value);
}


jb_DOMString Element_ariaPressed(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaPressed"));
}


void Element_set_ariaPressed(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaPressed", value);
}


jb_DOMString Element_ariaReadOnly(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaReadOnly"));
}


void Element_set_ariaReadOnly(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaReadOnly", value);
}


jb_DOMString Element_ariaRelevant(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaRelevant"));
}


void Element_set_ariaRelevant(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaRelevant", value);
}


jb_DOMString Element_ariaRequired(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaRequired"));
}


void Element_set_ariaRequired(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaRequired", value);
}


jb_DOMString Element_ariaRoleDescription(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaRoleDescription"));
}


void Element_set_ariaRoleDescription(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaRoleDescription", value);
}


jb_DOMString Element_ariaRowCount(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaRowCount"));
}


void Element_set_ariaRowCount(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaRowCount", value);
}


jb_DOMString Element_ariaRowIndex(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaRowIndex"));
}


void Element_set_ariaRowIndex(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaRowIndex", value);
}


jb_DOMString Element_ariaRowIndexText(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaRowIndexText"));
}


void Element_set_ariaRowIndexText(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaRowIndexText", value);
}


jb_DOMString Element_ariaRowSpan(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaRowSpan"));
}


void Element_set_ariaRowSpan(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaRowSpan", value);
}


jb_DOMString Element_ariaSelected(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaSelected"));
}


void Element_set_ariaSelected(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaSelected", value);
}


jb_DOMString Element_ariaSetSize(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaSetSize"));
}


void Element_set_ariaSetSize(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaSetSize", value);
}


jb_DOMString Element_ariaSort(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaSort"));
}


void Element_set_ariaSort(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaSort", value);
}


jb_DOMString Element_ariaValueMax(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaValueMax"));
}


void Element_set_ariaValueMax(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaValueMax", value);
}


jb_DOMString Element_ariaValueMin(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaValueMin"));
}


void Element_set_ariaValueMin(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaValueMin", value);
}


jb_DOMString Element_ariaValueNow(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaValueNow"));
}


void Element_set_ariaValueNow(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaValueNow", value);
}


jb_DOMString Element_ariaValueText(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "ariaValueText"));
}


void Element_set_ariaValueText(Element* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "ariaValueText", value);
}


Animation Element_animate(Element* self , const jb_Object* keyframes) {
    return em_Val_as(Animation, em_Val_call(Node_as_val(self->inner), "animate", em_Val_from(keyframes)));
}


Animation Element_animate(Element* self , const jb_Object* keyframes, const jb_Any* options) {
    return em_Val_as(Animation, em_Val_call(Node_as_val(self->inner), "animate", em_Val_from(keyframes), em_Val_from(options)));
}


jb_Sequence Element_getAnimations(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getAnimations"));
}


jb_Sequence Element_getAnimations(Element* self , const GetAnimationsOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getAnimations", em_Val_from(options)));
}

