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
    return em_Val_as(ShadowRootMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void ShadowRootInit_set_mode(ShadowRootInit* self, ShadowRootMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


bool ShadowRootInit_delegatesFocus(const ShadowRootInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("delegatesFocus")));
}


void ShadowRootInit_set_delegatesFocus(ShadowRootInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("delegatesFocus"), em_Val_from(value));
}


SlotAssignmentMode ShadowRootInit_slotAssignment(const ShadowRootInit *self) {
    return em_Val_as(SlotAssignmentMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("slotAssignment")));
}


void ShadowRootInit_set_slotAssignment(ShadowRootInit* self, SlotAssignmentMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("slotAssignment"), em_Val_from(value));
}


bool ShadowRootInit_clonable(const ShadowRootInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clonable")));
}


void ShadowRootInit_set_clonable(ShadowRootInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clonable"), em_Val_from(value));
}


bool ShadowRootInit_serializable(const ShadowRootInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serializable")));
}


void ShadowRootInit_set_serializable(ShadowRootInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("serializable"), em_Val_from(value));
}


CustomElementRegistry ShadowRootInit_customElementRegistry(const ShadowRootInit *self) {
    return em_Val_as(CustomElementRegistry, em_Val_get(em_Val_as_val(self->inner), em_Val_from("customElementRegistry")));
}


void ShadowRootInit_set_customElementRegistry(ShadowRootInit* self, CustomElementRegistry * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("customElementRegistry"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(FocusableAreasOption, em_Val);


FocusableAreaSearchMode FocusableAreasOption_mode(const FocusableAreasOption *self) {
    return em_Val_as(FocusableAreaSearchMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void FocusableAreasOption_set_mode(FocusableAreasOption* self, FocusableAreaSearchMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SpatialNavigationSearchOptions, em_Val);


jb_Sequence SpatialNavigationSearchOptions_candidates(const SpatialNavigationSearchOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("candidates")));
}


void SpatialNavigationSearchOptions_set_candidates(SpatialNavigationSearchOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("candidates"), em_Val_from(value));
}


Node SpatialNavigationSearchOptions_container(const SpatialNavigationSearchOptions *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("container")));
}


void SpatialNavigationSearchOptions_set_container(SpatialNavigationSearchOptions* self, Node * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("container"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(CheckVisibilityOptions, em_Val);


bool CheckVisibilityOptions_checkOpacity(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("checkOpacity")));
}


void CheckVisibilityOptions_set_checkOpacity(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("checkOpacity"), em_Val_from(value));
}


bool CheckVisibilityOptions_checkVisibilityCSS(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("checkVisibilityCSS")));
}


void CheckVisibilityOptions_set_checkVisibilityCSS(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("checkVisibilityCSS"), em_Val_from(value));
}


bool CheckVisibilityOptions_contentVisibilityAuto(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contentVisibilityAuto")));
}


void CheckVisibilityOptions_set_contentVisibilityAuto(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contentVisibilityAuto"), em_Val_from(value));
}


bool CheckVisibilityOptions_opacityProperty(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("opacityProperty")));
}


void CheckVisibilityOptions_set_opacityProperty(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("opacityProperty"), em_Val_from(value));
}


bool CheckVisibilityOptions_visibilityProperty(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("visibilityProperty")));
}


void CheckVisibilityOptions_set_visibilityProperty(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("visibilityProperty"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(FullscreenOptions, em_Val);


ScreenDetailed FullscreenOptions_screen(const FullscreenOptions *self) {
    return em_Val_as(ScreenDetailed, em_Val_get(em_Val_as_val(self->inner), em_Val_from("screen")));
}


void FullscreenOptions_set_screen(FullscreenOptions* self, ScreenDetailed * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("screen"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GetHTMLOptions, em_Val);


bool GetHTMLOptions_serializableShadowRoots(const GetHTMLOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serializableShadowRoots")));
}


void GetHTMLOptions_set_serializableShadowRoots(GetHTMLOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("serializableShadowRoots"), em_Val_from(value));
}


jb_Sequence GetHTMLOptions_shadowRoots(const GetHTMLOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowRoots")));
}


void GetHTMLOptions_set_shadowRoots(GetHTMLOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowRoots"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PointerLockOptions, em_Val);


bool PointerLockOptions_unadjustedMovement(const PointerLockOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unadjustedMovement")));
}


void PointerLockOptions_set_unadjustedMovement(PointerLockOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unadjustedMovement"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GetAnimationsOptions, em_Val);


bool GetAnimationsOptions_subtree(const GetAnimationsOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subtree")));
}


void GetAnimationsOptions_set_subtree(GetAnimationsOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("subtree"), em_Val_from(value));
}


jb_CSSOMString GetAnimationsOptions_pseudoElement(const GetAnimationsOptions *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pseudoElement")));
}


void GetAnimationsOptions_set_pseudoElement(GetAnimationsOptions* self, jb_CSSOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pseudoElement"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Element, Node);


jb_DOMString Element_namespaceURI(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("namespaceURI")));
}


jb_DOMString Element_prefix(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("prefix")));
}


jb_DOMString Element_localName(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("localName")));
}


jb_DOMString Element_tagName(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("tagName")));
}


jb_DOMString Element_id(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("id")));
}


void Element_set_id(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_DOMString Element_className(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("className")));
}


void Element_set_className(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("className"), em_Val_from(value));
}


DOMTokenList Element_classList(const Element *self) {
    return em_Val_as(DOMTokenList, em_Val_get(Node_as_val(self->inner), em_Val_from("classList")));
}


jb_DOMString Element_slot(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("slot")));
}


void Element_set_slot(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("slot"), em_Val_from(value));
}


bool Element_hasAttributes(Element* self ) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "hasAttributes"));
}


NamedNodeMap Element_attributes(const Element *self) {
    return em_Val_as(NamedNodeMap, em_Val_get(Node_as_val(self->inner), em_Val_from("attributes")));
}


jb_Sequence Element_getAttributeNames(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getAttributeNames"));
}


jb_DOMString Element_getAttribute(Element* self , jb_DOMString * qualifiedName) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "getAttribute", em_Val_from(qualifiedName)));
}


jb_DOMString Element_getAttributeNS(Element* self , jb_DOMString * namespace_, jb_DOMString * localName) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "getAttributeNS", em_Val_from(namespace_), em_Val_from(localName)));
}


jb_Undefined Element_setAttribute(Element* self , jb_DOMString * qualifiedName, jb_DOMString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "setAttribute", em_Val_from(qualifiedName), em_Val_from(value)));
}


jb_Undefined Element_setAttributeNS(Element* self , jb_DOMString * namespace_, jb_DOMString * qualifiedName, jb_DOMString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "setAttributeNS", em_Val_from(namespace_), em_Val_from(qualifiedName), em_Val_from(value)));
}


jb_Undefined Element_removeAttribute(Element* self , jb_DOMString * qualifiedName) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "removeAttribute", em_Val_from(qualifiedName)));
}


jb_Undefined Element_removeAttributeNS(Element* self , jb_DOMString * namespace_, jb_DOMString * localName) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "removeAttributeNS", em_Val_from(namespace_), em_Val_from(localName)));
}


bool Element_toggleAttribute0(Element* self , jb_DOMString * qualifiedName) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "toggleAttribute", em_Val_from(qualifiedName)));
}


bool Element_toggleAttribute1(Element* self , jb_DOMString * qualifiedName, bool force) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "toggleAttribute", em_Val_from(qualifiedName), em_Val_from(force)));
}


bool Element_hasAttribute(Element* self , jb_DOMString * qualifiedName) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "hasAttribute", em_Val_from(qualifiedName)));
}


bool Element_hasAttributeNS(Element* self , jb_DOMString * namespace_, jb_DOMString * localName) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "hasAttributeNS", em_Val_from(namespace_), em_Val_from(localName)));
}


Attr Element_getAttributeNode(Element* self , jb_DOMString * qualifiedName) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "getAttributeNode", em_Val_from(qualifiedName)));
}


Attr Element_getAttributeNodeNS(Element* self , jb_DOMString * namespace_, jb_DOMString * localName) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "getAttributeNodeNS", em_Val_from(namespace_), em_Val_from(localName)));
}


Attr Element_setAttributeNode(Element* self , Attr * attr) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "setAttributeNode", em_Val_from(attr)));
}


Attr Element_setAttributeNodeNS(Element* self , Attr * attr) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "setAttributeNodeNS", em_Val_from(attr)));
}


Attr Element_removeAttributeNode(Element* self , Attr * attr) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "removeAttributeNode", em_Val_from(attr)));
}


ShadowRoot Element_attachShadow(Element* self , ShadowRootInit * init) {
    return em_Val_as(ShadowRoot, em_Val_call(Node_as_val(self->inner), "attachShadow", em_Val_from(init)));
}


ShadowRoot Element_shadowRoot(const Element *self) {
    return em_Val_as(ShadowRoot, em_Val_get(Node_as_val(self->inner), em_Val_from("shadowRoot")));
}


CustomElementRegistry Element_customElementRegistry(const Element *self) {
    return em_Val_as(CustomElementRegistry, em_Val_get(Node_as_val(self->inner), em_Val_from("customElementRegistry")));
}


Element Element_closest(Element* self , jb_DOMString * selectors) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "closest", em_Val_from(selectors)));
}


bool Element_matches(Element* self , jb_DOMString * selectors) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "matches", em_Val_from(selectors)));
}


bool Element_webkitMatchesSelector(Element* self , jb_DOMString * selectors) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "webkitMatchesSelector", em_Val_from(selectors)));
}


HTMLCollection Element_getElementsByTagName(Element* self , jb_DOMString * qualifiedName) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByTagName", em_Val_from(qualifiedName)));
}


HTMLCollection Element_getElementsByTagNameNS(Element* self , jb_DOMString * namespace_, jb_DOMString * localName) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByTagNameNS", em_Val_from(namespace_), em_Val_from(localName)));
}


HTMLCollection Element_getElementsByClassName(Element* self , jb_DOMString * classNames) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByClassName", em_Val_from(classNames)));
}


Element Element_insertAdjacentElement(Element* self , jb_DOMString * where, Element * element) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "insertAdjacentElement", em_Val_from(where), em_Val_from(element)));
}


jb_Undefined Element_insertAdjacentText(Element* self , jb_DOMString * where, jb_DOMString * data) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "insertAdjacentText", em_Val_from(where), em_Val_from(data)));
}


Node Element_getSpatialNavigationContainer(Element* self ) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "getSpatialNavigationContainer"));
}


jb_Sequence Element_focusableAreas0(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "focusableAreas"));
}


jb_Sequence Element_focusableAreas1(Element* self , FocusableAreasOption * option) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "focusableAreas", em_Val_from(option)));
}


Node Element_spatialNavigationSearch0(Element* self , SpatialNavigationDirection * dir) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "spatialNavigationSearch", em_Val_from(dir)));
}


Node Element_spatialNavigationSearch1(Element* self , SpatialNavigationDirection * dir, SpatialNavigationSearchOptions * options) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "spatialNavigationSearch", em_Val_from(dir), em_Val_from(options)));
}


CSSPseudoElement Element_pseudo(Element* self , jb_CSSOMString * type) {
    return em_Val_as(CSSPseudoElement, em_Val_call(Node_as_val(self->inner), "pseudo", em_Val_from(type)));
}


DOMTokenList Element_part(const Element *self) {
    return em_Val_as(DOMTokenList, em_Val_get(Node_as_val(self->inner), em_Val_from("part")));
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


bool Element_checkVisibility0(Element* self ) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "checkVisibility"));
}


bool Element_checkVisibility1(Element* self , CheckVisibilityOptions * options) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "checkVisibility", em_Val_from(options)));
}


jb_Undefined Element_scrollIntoView0(Element* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "scrollIntoView"));
}


jb_Undefined Element_scrollIntoView1(Element* self , jb_Any * arg) {
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
    return em_Val_as(double, em_Val_get(Node_as_val(self->inner), em_Val_from("scrollTop")));
}


void Element_set_scrollTop(Element* self, double value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("scrollTop"), em_Val_from(value));
}


double Element_scrollLeft(const Element *self) {
    return em_Val_as(double, em_Val_get(Node_as_val(self->inner), em_Val_from("scrollLeft")));
}


void Element_set_scrollLeft(Element* self, double value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("scrollLeft"), em_Val_from(value));
}


long Element_scrollWidth(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), em_Val_from("scrollWidth")));
}


long Element_scrollHeight(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), em_Val_from("scrollHeight")));
}


long Element_clientTop(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), em_Val_from("clientTop")));
}


long Element_clientLeft(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), em_Val_from("clientLeft")));
}


long Element_clientWidth(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), em_Val_from("clientWidth")));
}


long Element_clientHeight(const Element *self) {
    return em_Val_as(long, em_Val_get(Node_as_val(self->inner), em_Val_from("clientHeight")));
}


double Element_currentCSSZoom(const Element *self) {
    return em_Val_as(double, em_Val_get(Node_as_val(self->inner), em_Val_from("currentCSSZoom")));
}


jb_DOMString Element_elementTiming(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("elementTiming")));
}


void Element_set_elementTiming(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("elementTiming"), em_Val_from(value));
}


jb_Promise Element_requestFullscreen0(Element* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestFullscreen"));
}


jb_Promise Element_requestFullscreen1(Element* self , FullscreenOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestFullscreen", em_Val_from(options)));
}


jb_Any Element_onfullscreenchange(const Element *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onfullscreenchange")));
}


void Element_set_onfullscreenchange(Element* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onfullscreenchange"), em_Val_from(value));
}


jb_Any Element_onfullscreenerror(const Element *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onfullscreenerror")));
}


void Element_set_onfullscreenerror(Element* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onfullscreenerror"), em_Val_from(value));
}


jb_Undefined Element_setHTMLUnsafe(Element* self , jb_Any * html) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "setHTMLUnsafe", em_Val_from(html)));
}


jb_DOMString Element_getHTML0(Element* self ) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "getHTML"));
}


jb_DOMString Element_getHTML1(Element* self , GetHTMLOptions * options) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "getHTML", em_Val_from(options)));
}


jb_Any Element_innerHTML(const Element *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("innerHTML")));
}


void Element_set_innerHTML(Element* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("innerHTML"), em_Val_from(value));
}


jb_Any Element_outerHTML(const Element *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("outerHTML")));
}


void Element_set_outerHTML(Element* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("outerHTML"), em_Val_from(value));
}


jb_Undefined Element_insertAdjacentHTML(Element* self , jb_DOMString * position, jb_Any * string) {
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


jb_Promise Element_requestPointerLock0(Element* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestPointerLock"));
}


jb_Promise Element_requestPointerLock1(Element* self , PointerLockOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestPointerLock", em_Val_from(options)));
}


jb_CSSOMString Element_regionOverset(const Element *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("regionOverset")));
}


jb_Sequence Element_getRegionFlowRanges(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getRegionFlowRanges"));
}


jb_Sequence Element_getBoxQuads0(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getBoxQuads"));
}


jb_Sequence Element_getBoxQuads1(Element* self , BoxQuadOptions * options) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getBoxQuads", em_Val_from(options)));
}


DOMQuad Element_convertQuadFromNode0(Element* self , DOMQuadInit * quad, jb_Any * from) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from)));
}


DOMQuad Element_convertQuadFromNode1(Element* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from), em_Val_from(options)));
}


DOMQuad Element_convertRectFromNode0(Element* self , DOMRectReadOnly * rect, jb_Any * from) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from)));
}


DOMQuad Element_convertRectFromNode1(Element* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from), em_Val_from(options)));
}


DOMPoint Element_convertPointFromNode0(Element* self , DOMPointInit * point, jb_Any * from) {
    return em_Val_as(DOMPoint, em_Val_call(Node_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from)));
}


DOMPoint Element_convertPointFromNode1(Element* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMPoint, em_Val_call(Node_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from), em_Val_from(options)));
}


HTMLCollection Element_children(const Element *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("children")));
}


Element Element_firstElementChild(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("firstElementChild")));
}


Element Element_lastElementChild(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("lastElementChild")));
}


unsigned long Element_childElementCount(const Element *self) {
    return em_Val_as(unsigned long, em_Val_get(Node_as_val(self->inner), em_Val_from("childElementCount")));
}


jb_Undefined Element_prepend(Element* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "prepend", em_Val_from(nodes)));
}


jb_Undefined Element_append(Element* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "append", em_Val_from(nodes)));
}


jb_Undefined Element_replaceChildren(Element* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceChildren", em_Val_from(nodes)));
}


jb_Undefined Element_moveBefore(Element* self , Node * node, Node * child) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "moveBefore", em_Val_from(node), em_Val_from(child)));
}


Element Element_querySelector(Element* self , jb_DOMString * selectors) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "querySelector", em_Val_from(selectors)));
}


NodeList Element_querySelectorAll(Element* self , jb_DOMString * selectors) {
    return em_Val_as(NodeList, em_Val_call(Node_as_val(self->inner), "querySelectorAll", em_Val_from(selectors)));
}


Element Element_previousElementSibling(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("previousElementSibling")));
}


Element Element_nextElementSibling(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("nextElementSibling")));
}


jb_Undefined Element_before(Element* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "before", em_Val_from(nodes)));
}


jb_Undefined Element_after(Element* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "after", em_Val_from(nodes)));
}


jb_Undefined Element_replaceWith(Element* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceWith", em_Val_from(nodes)));
}


jb_Undefined Element_remove(Element* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "remove"));
}


HTMLSlotElement Element_assignedSlot(const Element *self) {
    return em_Val_as(HTMLSlotElement, em_Val_get(Node_as_val(self->inner), em_Val_from("assignedSlot")));
}


jb_DOMString Element_role(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("role")));
}


void Element_set_role(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("role"), em_Val_from(value));
}


Element Element_ariaActiveDescendantElement(const Element *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaActiveDescendantElement")));
}


void Element_set_ariaActiveDescendantElement(Element* self, Element * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaActiveDescendantElement"), em_Val_from(value));
}


jb_DOMString Element_ariaAtomic(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaAtomic")));
}


void Element_set_ariaAtomic(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaAtomic"), em_Val_from(value));
}


jb_DOMString Element_ariaAutoComplete(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaAutoComplete")));
}


void Element_set_ariaAutoComplete(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaAutoComplete"), em_Val_from(value));
}


jb_DOMString Element_ariaBrailleLabel(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaBrailleLabel")));
}


void Element_set_ariaBrailleLabel(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaBrailleLabel"), em_Val_from(value));
}


jb_DOMString Element_ariaBrailleRoleDescription(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaBrailleRoleDescription")));
}


void Element_set_ariaBrailleRoleDescription(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaBrailleRoleDescription"), em_Val_from(value));
}


jb_DOMString Element_ariaBusy(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaBusy")));
}


void Element_set_ariaBusy(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaBusy"), em_Val_from(value));
}


jb_DOMString Element_ariaChecked(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaChecked")));
}


void Element_set_ariaChecked(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaChecked"), em_Val_from(value));
}


jb_DOMString Element_ariaColCount(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaColCount")));
}


void Element_set_ariaColCount(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaColCount"), em_Val_from(value));
}


jb_DOMString Element_ariaColIndex(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaColIndex")));
}


void Element_set_ariaColIndex(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaColIndex"), em_Val_from(value));
}


jb_DOMString Element_ariaColIndexText(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaColIndexText")));
}


void Element_set_ariaColIndexText(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaColIndexText"), em_Val_from(value));
}


jb_DOMString Element_ariaColSpan(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaColSpan")));
}


void Element_set_ariaColSpan(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaColSpan"), em_Val_from(value));
}


jb_FrozenArray Element_ariaControlsElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaControlsElements")));
}


void Element_set_ariaControlsElements(Element* self, jb_FrozenArray * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaControlsElements"), em_Val_from(value));
}


jb_DOMString Element_ariaCurrent(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaCurrent")));
}


void Element_set_ariaCurrent(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaCurrent"), em_Val_from(value));
}


jb_FrozenArray Element_ariaDescribedByElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaDescribedByElements")));
}


void Element_set_ariaDescribedByElements(Element* self, jb_FrozenArray * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaDescribedByElements"), em_Val_from(value));
}


jb_DOMString Element_ariaDescription(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaDescription")));
}


void Element_set_ariaDescription(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaDescription"), em_Val_from(value));
}


jb_FrozenArray Element_ariaDetailsElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaDetailsElements")));
}


void Element_set_ariaDetailsElements(Element* self, jb_FrozenArray * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaDetailsElements"), em_Val_from(value));
}


jb_DOMString Element_ariaDisabled(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaDisabled")));
}


void Element_set_ariaDisabled(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaDisabled"), em_Val_from(value));
}


jb_FrozenArray Element_ariaErrorMessageElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaErrorMessageElements")));
}


void Element_set_ariaErrorMessageElements(Element* self, jb_FrozenArray * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaErrorMessageElements"), em_Val_from(value));
}


jb_DOMString Element_ariaExpanded(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaExpanded")));
}


void Element_set_ariaExpanded(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaExpanded"), em_Val_from(value));
}


jb_FrozenArray Element_ariaFlowToElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaFlowToElements")));
}


void Element_set_ariaFlowToElements(Element* self, jb_FrozenArray * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaFlowToElements"), em_Val_from(value));
}


jb_DOMString Element_ariaHasPopup(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaHasPopup")));
}


void Element_set_ariaHasPopup(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaHasPopup"), em_Val_from(value));
}


jb_DOMString Element_ariaHidden(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaHidden")));
}


void Element_set_ariaHidden(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaHidden"), em_Val_from(value));
}


jb_DOMString Element_ariaInvalid(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaInvalid")));
}


void Element_set_ariaInvalid(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaInvalid"), em_Val_from(value));
}


jb_DOMString Element_ariaKeyShortcuts(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaKeyShortcuts")));
}


void Element_set_ariaKeyShortcuts(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaKeyShortcuts"), em_Val_from(value));
}


jb_DOMString Element_ariaLabel(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaLabel")));
}


void Element_set_ariaLabel(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaLabel"), em_Val_from(value));
}


jb_FrozenArray Element_ariaLabelledByElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaLabelledByElements")));
}


void Element_set_ariaLabelledByElements(Element* self, jb_FrozenArray * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaLabelledByElements"), em_Val_from(value));
}


jb_DOMString Element_ariaLevel(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaLevel")));
}


void Element_set_ariaLevel(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaLevel"), em_Val_from(value));
}


jb_DOMString Element_ariaLive(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaLive")));
}


void Element_set_ariaLive(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaLive"), em_Val_from(value));
}


jb_DOMString Element_ariaModal(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaModal")));
}


void Element_set_ariaModal(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaModal"), em_Val_from(value));
}


jb_DOMString Element_ariaMultiLine(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaMultiLine")));
}


void Element_set_ariaMultiLine(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaMultiLine"), em_Val_from(value));
}


jb_DOMString Element_ariaMultiSelectable(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaMultiSelectable")));
}


void Element_set_ariaMultiSelectable(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaMultiSelectable"), em_Val_from(value));
}


jb_DOMString Element_ariaOrientation(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaOrientation")));
}


void Element_set_ariaOrientation(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaOrientation"), em_Val_from(value));
}


jb_FrozenArray Element_ariaOwnsElements(const Element *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaOwnsElements")));
}


void Element_set_ariaOwnsElements(Element* self, jb_FrozenArray * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaOwnsElements"), em_Val_from(value));
}


jb_DOMString Element_ariaPlaceholder(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaPlaceholder")));
}


void Element_set_ariaPlaceholder(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaPlaceholder"), em_Val_from(value));
}


jb_DOMString Element_ariaPosInSet(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaPosInSet")));
}


void Element_set_ariaPosInSet(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaPosInSet"), em_Val_from(value));
}


jb_DOMString Element_ariaPressed(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaPressed")));
}


void Element_set_ariaPressed(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaPressed"), em_Val_from(value));
}


jb_DOMString Element_ariaReadOnly(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaReadOnly")));
}


void Element_set_ariaReadOnly(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaReadOnly"), em_Val_from(value));
}


jb_DOMString Element_ariaRelevant(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaRelevant")));
}


void Element_set_ariaRelevant(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaRelevant"), em_Val_from(value));
}


jb_DOMString Element_ariaRequired(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaRequired")));
}


void Element_set_ariaRequired(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaRequired"), em_Val_from(value));
}


jb_DOMString Element_ariaRoleDescription(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaRoleDescription")));
}


void Element_set_ariaRoleDescription(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaRoleDescription"), em_Val_from(value));
}


jb_DOMString Element_ariaRowCount(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaRowCount")));
}


void Element_set_ariaRowCount(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaRowCount"), em_Val_from(value));
}


jb_DOMString Element_ariaRowIndex(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaRowIndex")));
}


void Element_set_ariaRowIndex(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaRowIndex"), em_Val_from(value));
}


jb_DOMString Element_ariaRowIndexText(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaRowIndexText")));
}


void Element_set_ariaRowIndexText(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaRowIndexText"), em_Val_from(value));
}


jb_DOMString Element_ariaRowSpan(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaRowSpan")));
}


void Element_set_ariaRowSpan(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaRowSpan"), em_Val_from(value));
}


jb_DOMString Element_ariaSelected(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaSelected")));
}


void Element_set_ariaSelected(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaSelected"), em_Val_from(value));
}


jb_DOMString Element_ariaSetSize(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaSetSize")));
}


void Element_set_ariaSetSize(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaSetSize"), em_Val_from(value));
}


jb_DOMString Element_ariaSort(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaSort")));
}


void Element_set_ariaSort(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaSort"), em_Val_from(value));
}


jb_DOMString Element_ariaValueMax(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaValueMax")));
}


void Element_set_ariaValueMax(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaValueMax"), em_Val_from(value));
}


jb_DOMString Element_ariaValueMin(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaValueMin")));
}


void Element_set_ariaValueMin(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaValueMin"), em_Val_from(value));
}


jb_DOMString Element_ariaValueNow(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaValueNow")));
}


void Element_set_ariaValueNow(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaValueNow"), em_Val_from(value));
}


jb_DOMString Element_ariaValueText(const Element *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), em_Val_from("ariaValueText")));
}


void Element_set_ariaValueText(Element* self, jb_DOMString * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("ariaValueText"), em_Val_from(value));
}


Animation Element_animate0(Element* self , jb_Object * keyframes) {
    return em_Val_as(Animation, em_Val_call(Node_as_val(self->inner), "animate", em_Val_from(keyframes)));
}


Animation Element_animate1(Element* self , jb_Object * keyframes, jb_Any * options) {
    return em_Val_as(Animation, em_Val_call(Node_as_val(self->inner), "animate", em_Val_from(keyframes), em_Val_from(options)));
}


jb_Sequence Element_getAnimations0(Element* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getAnimations"));
}


jb_Sequence Element_getAnimations1(Element* self , GetAnimationsOptions * options) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getAnimations", em_Val_from(options)));
}

