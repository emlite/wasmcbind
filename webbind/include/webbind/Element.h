#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Node.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMTokenList DOMTokenList;
typedef struct NamedNodeMap NamedNodeMap;
typedef struct Attr Attr;
typedef struct ShadowRoot ShadowRoot;
typedef struct ShadowRootInit ShadowRootInit;
typedef struct CustomElementRegistry CustomElementRegistry;
typedef struct HTMLCollection HTMLCollection;
typedef struct FocusableAreasOption FocusableAreasOption;
typedef struct SpatialNavigationSearchOptions SpatialNavigationSearchOptions;
typedef struct CSSPseudoElement CSSPseudoElement;
typedef struct StylePropertyMapReadOnly StylePropertyMapReadOnly;
typedef struct DOMRectList DOMRectList;
typedef struct DOMRect DOMRect;
typedef struct CheckVisibilityOptions CheckVisibilityOptions;
typedef struct FullscreenOptions FullscreenOptions;
typedef struct GetHTMLOptions GetHTMLOptions;
typedef struct PointerLockOptions PointerLockOptions;
typedef struct Range Range;
typedef struct DOMQuad DOMQuad;
typedef struct BoxQuadOptions BoxQuadOptions;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct ConvertCoordinateOptions ConvertCoordinateOptions;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct DOMPointInit DOMPointInit;
typedef struct NodeList NodeList;
typedef struct HTMLSlotElement HTMLSlotElement;
typedef struct Animation Animation;
typedef struct GetAnimationsOptions GetAnimationsOptions;


/**
 * @brief Interface Element
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Element)
 */
DECLARE_EMLITE_TYPE(Element, Node);

/**
 * @brief Gets the `namespaceURI` property. 
*/
jb_String Element_namespaceURI(const Element *self);

/**
 * @brief Gets the `prefix` property. 
*/
jb_String Element_prefix(const Element *self);

/**
 * @brief Gets the `localName` property. 
*/
jb_String Element_localName(const Element *self);

/**
 * @brief Gets the `tagName` property. 
*/
jb_String Element_tagName(const Element *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String Element_id(const Element *self);

/**
 * @brief Sets the `id` property. 
*/
void Element_set_id(Element* self, jb_String * value);

/**
 * @brief Gets the `className` property. 
*/
jb_String Element_className(const Element *self);

/**
 * @brief Sets the `className` property. 
*/
void Element_set_className(Element* self, jb_String * value);

/**
 * @brief Gets the `classList` property. 
*/
DOMTokenList Element_classList(const Element *self);

/**
 * @brief Gets the `slot` property. 
*/
jb_String Element_slot(const Element *self);

/**
 * @brief Sets the `slot` property. 
*/
void Element_set_slot(Element* self, jb_String * value);

/**
 * @brief Calls the `hasAttributes` method. 
*/
bool Element_hasAttributes(Element* self );

/**
 * @brief Gets the `attributes` property. 
*/
NamedNodeMap Element_attributes(const Element *self);

/**
 * @brief Calls the `getAttributeNames` method. 
*/
jb_Array Element_getAttributeNames(Element* self );

/**
 * @brief Calls the `getAttribute` method. 
*/
jb_String Element_getAttribute(Element* self , jb_String * qualifiedName);

/**
 * @brief Calls the `getAttributeNS` method. 
*/
jb_String Element_getAttributeNS(Element* self , jb_String * namespace_, jb_String * localName);

/**
 * @brief Calls the `setAttribute` method. 
*/
jb_Undefined Element_setAttribute(Element* self , jb_String * qualifiedName, jb_String * value);

/**
 * @brief Calls the `setAttributeNS` method. 
*/
jb_Undefined Element_setAttributeNS(Element* self , jb_String * namespace_, jb_String * qualifiedName, jb_String * value);

/**
 * @brief Calls the `removeAttribute` method. 
*/
jb_Undefined Element_removeAttribute(Element* self , jb_String * qualifiedName);

/**
 * @brief Calls the `removeAttributeNS` method. 
*/
jb_Undefined Element_removeAttributeNS(Element* self , jb_String * namespace_, jb_String * localName);

/**
 * @brief Calls the `toggleAttribute` method. 
*/
bool Element_toggleAttribute0(Element* self , jb_String * qualifiedName);

/**
 * @brief Calls the `toggleAttribute` method. 
*/
bool Element_toggleAttribute1(Element* self , jb_String * qualifiedName, bool force);

/**
 * @brief Calls the `hasAttribute` method. 
*/
bool Element_hasAttribute(Element* self , jb_String * qualifiedName);

/**
 * @brief Calls the `hasAttributeNS` method. 
*/
bool Element_hasAttributeNS(Element* self , jb_String * namespace_, jb_String * localName);

/**
 * @brief Calls the `getAttributeNode` method. 
*/
Attr Element_getAttributeNode(Element* self , jb_String * qualifiedName);

/**
 * @brief Calls the `getAttributeNodeNS` method. 
*/
Attr Element_getAttributeNodeNS(Element* self , jb_String * namespace_, jb_String * localName);

/**
 * @brief Calls the `setAttributeNode` method. 
*/
Attr Element_setAttributeNode(Element* self , Attr * attr);

/**
 * @brief Calls the `setAttributeNodeNS` method. 
*/
Attr Element_setAttributeNodeNS(Element* self , Attr * attr);

/**
 * @brief Calls the `removeAttributeNode` method. 
*/
Attr Element_removeAttributeNode(Element* self , Attr * attr);

/**
 * @brief Calls the `attachShadow` method. 
*/
ShadowRoot Element_attachShadow(Element* self , ShadowRootInit * init);

/**
 * @brief Gets the `shadowRoot` property. 
*/
ShadowRoot Element_shadowRoot(const Element *self);

/**
 * @brief Gets the `customElementRegistry` property. 
*/
CustomElementRegistry Element_customElementRegistry(const Element *self);

/**
 * @brief Calls the `closest` method. 
*/
Element Element_closest(Element* self , jb_String * selectors);

/**
 * @brief Calls the `matches` method. 
*/
bool Element_matches(Element* self , jb_String * selectors);

/**
 * @brief Calls the `webkitMatchesSelector` method. 
*/
bool Element_webkitMatchesSelector(Element* self , jb_String * selectors);

/**
 * @brief Calls the `getElementsByTagName` method. 
*/
HTMLCollection Element_getElementsByTagName(Element* self , jb_String * qualifiedName);

/**
 * @brief Calls the `getElementsByTagNameNS` method. 
*/
HTMLCollection Element_getElementsByTagNameNS(Element* self , jb_String * namespace_, jb_String * localName);

/**
 * @brief Calls the `getElementsByClassName` method. 
*/
HTMLCollection Element_getElementsByClassName(Element* self , jb_String * classNames);

/**
 * @brief Calls the `insertAdjacentElement` method. 
*/
Element Element_insertAdjacentElement(Element* self , jb_String * where, Element * element);

/**
 * @brief Calls the `insertAdjacentText` method. 
*/
jb_Undefined Element_insertAdjacentText(Element* self , jb_String * where, jb_String * data);

/**
 * @brief Calls the `getSpatialNavigationContainer` method. 
*/
Node Element_getSpatialNavigationContainer(Element* self );

/**
 * @brief Calls the `focusableAreas` method. 
*/
jb_Array Element_focusableAreas0(Element* self );

/**
 * @brief Calls the `focusableAreas` method. 
*/
jb_Array Element_focusableAreas1(Element* self , FocusableAreasOption * option);

/**
 * @brief Calls the `spatialNavigationSearch` method. 
*/
Node Element_spatialNavigationSearch0(Element* self , SpatialNavigationDirection * dir);

/**
 * @brief Calls the `spatialNavigationSearch` method. 
*/
Node Element_spatialNavigationSearch1(Element* self , SpatialNavigationDirection * dir, SpatialNavigationSearchOptions * options);

/**
 * @brief Calls the `pseudo` method. 
*/
CSSPseudoElement Element_pseudo(Element* self , jb_String * type);

/**
 * @brief Gets the `part` property. 
*/
DOMTokenList Element_part(const Element *self);

/**
 * @brief Calls the `computedStyleMap` method. 
*/
StylePropertyMapReadOnly Element_computedStyleMap(Element* self );

/**
 * @brief Calls the `getClientRects` method. 
*/
DOMRectList Element_getClientRects(Element* self );

/**
 * @brief Calls the `getBoundingClientRect` method. 
*/
DOMRect Element_getBoundingClientRect(Element* self );

/**
 * @brief Calls the `checkVisibility` method. 
*/
bool Element_checkVisibility0(Element* self );

/**
 * @brief Calls the `checkVisibility` method. 
*/
bool Element_checkVisibility1(Element* self , CheckVisibilityOptions * options);

/**
 * @brief Calls the `scrollIntoView` method. 
*/
jb_Undefined Element_scrollIntoView0(Element* self );

/**
 * @brief Calls the `scrollIntoView` method. 
*/
jb_Undefined Element_scrollIntoView1(Element* self , jb_Any * arg);

/**
 * @brief Calls the `scroll` method. 
*/
jb_Undefined Element_scroll(Element* self , double x, double y);

/**
 * @brief Calls the `scrollTo` method. 
*/
jb_Undefined Element_scrollTo(Element* self , double x, double y);

/**
 * @brief Calls the `scrollBy` method. 
*/
jb_Undefined Element_scrollBy(Element* self , double x, double y);

/**
 * @brief Gets the `scrollTop` property. 
*/
double Element_scrollTop(const Element *self);

/**
 * @brief Sets the `scrollTop` property. 
*/
void Element_set_scrollTop(Element* self, double value);

/**
 * @brief Gets the `scrollLeft` property. 
*/
double Element_scrollLeft(const Element *self);

/**
 * @brief Sets the `scrollLeft` property. 
*/
void Element_set_scrollLeft(Element* self, double value);

/**
 * @brief Gets the `scrollWidth` property. 
*/
long Element_scrollWidth(const Element *self);

/**
 * @brief Gets the `scrollHeight` property. 
*/
long Element_scrollHeight(const Element *self);

/**
 * @brief Gets the `clientTop` property. 
*/
long Element_clientTop(const Element *self);

/**
 * @brief Gets the `clientLeft` property. 
*/
long Element_clientLeft(const Element *self);

/**
 * @brief Gets the `clientWidth` property. 
*/
long Element_clientWidth(const Element *self);

/**
 * @brief Gets the `clientHeight` property. 
*/
long Element_clientHeight(const Element *self);

/**
 * @brief Gets the `currentCSSZoom` property. 
*/
double Element_currentCSSZoom(const Element *self);

/**
 * @brief Gets the `elementTiming` property. 
*/
jb_String Element_elementTiming(const Element *self);

/**
 * @brief Sets the `elementTiming` property. 
*/
void Element_set_elementTiming(Element* self, jb_String * value);

/**
 * @brief Calls the `requestFullscreen` method. 
*/
jb_Promise Element_requestFullscreen0(Element* self );

/**
 * @brief Calls the `requestFullscreen` method. 
*/
jb_Promise Element_requestFullscreen1(Element* self , FullscreenOptions * options);

/**
 * @brief Gets the `onfullscreenchange` property. 
*/
jb_Any Element_onfullscreenchange(const Element *self);

/**
 * @brief Sets the `onfullscreenchange` property. 
*/
void Element_set_onfullscreenchange(Element* self, jb_Any * value);

/**
 * @brief Gets the `onfullscreenerror` property. 
*/
jb_Any Element_onfullscreenerror(const Element *self);

/**
 * @brief Sets the `onfullscreenerror` property. 
*/
void Element_set_onfullscreenerror(Element* self, jb_Any * value);

/**
 * @brief Calls the `setHTMLUnsafe` method. 
*/
jb_Undefined Element_setHTMLUnsafe(Element* self , jb_Any * html);

/**
 * @brief Calls the `getHTML` method. 
*/
jb_String Element_getHTML0(Element* self );

/**
 * @brief Calls the `getHTML` method. 
*/
jb_String Element_getHTML1(Element* self , GetHTMLOptions * options);

/**
 * @brief Gets the `innerHTML` property. 
*/
jb_Any Element_innerHTML(const Element *self);

/**
 * @brief Sets the `innerHTML` property. 
*/
void Element_set_innerHTML(Element* self, jb_Any * value);

/**
 * @brief Gets the `outerHTML` property. 
*/
jb_Any Element_outerHTML(const Element *self);

/**
 * @brief Sets the `outerHTML` property. 
*/
void Element_set_outerHTML(Element* self, jb_Any * value);

/**
 * @brief Calls the `insertAdjacentHTML` method. 
*/
jb_Undefined Element_insertAdjacentHTML(Element* self , jb_String * position, jb_Any * string);

/**
 * @brief Calls the `setPointerCapture` method. 
*/
jb_Undefined Element_setPointerCapture(Element* self , long pointerId);

/**
 * @brief Calls the `releasePointerCapture` method. 
*/
jb_Undefined Element_releasePointerCapture(Element* self , long pointerId);

/**
 * @brief Calls the `hasPointerCapture` method. 
*/
bool Element_hasPointerCapture(Element* self , long pointerId);

/**
 * @brief Calls the `requestPointerLock` method. 
*/
jb_Promise Element_requestPointerLock0(Element* self );

/**
 * @brief Calls the `requestPointerLock` method. 
*/
jb_Promise Element_requestPointerLock1(Element* self , PointerLockOptions * options);

/**
 * @brief Gets the `regionOverset` property. 
*/
jb_String Element_regionOverset(const Element *self);

/**
 * @brief Calls the `getRegionFlowRanges` method. 
*/
jb_Array Element_getRegionFlowRanges(Element* self );

/**
 * @brief Calls the `getBoxQuads` method. 
*/
jb_Array Element_getBoxQuads0(Element* self );

/**
 * @brief Calls the `getBoxQuads` method. 
*/
jb_Array Element_getBoxQuads1(Element* self , BoxQuadOptions * options);

/**
 * @brief Calls the `convertQuadFromNode` method. 
*/
DOMQuad Element_convertQuadFromNode0(Element* self , DOMQuadInit * quad, jb_Any * from);

/**
 * @brief Calls the `convertQuadFromNode` method. 
*/
DOMQuad Element_convertQuadFromNode1(Element* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Calls the `convertRectFromNode` method. 
*/
DOMQuad Element_convertRectFromNode0(Element* self , DOMRectReadOnly * rect, jb_Any * from);

/**
 * @brief Calls the `convertRectFromNode` method. 
*/
DOMQuad Element_convertRectFromNode1(Element* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Calls the `convertPointFromNode` method. 
*/
DOMPoint Element_convertPointFromNode0(Element* self , DOMPointInit * point, jb_Any * from);

/**
 * @brief Calls the `convertPointFromNode` method. 
*/
DOMPoint Element_convertPointFromNode1(Element* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Gets the `children` property. 
*/
HTMLCollection Element_children(const Element *self);

/**
 * @brief Gets the `firstElementChild` property. 
*/
Element Element_firstElementChild(const Element *self);

/**
 * @brief Gets the `lastElementChild` property. 
*/
Element Element_lastElementChild(const Element *self);

/**
 * @brief Gets the `childElementCount` property. 
*/
unsigned long Element_childElementCount(const Element *self);

/**
 * @brief Calls the `prepend` method. 
*/
jb_Undefined Element_prepend(Element* self , jb_Any * nodes);

/**
 * @brief Calls the `append` method. 
*/
jb_Undefined Element_append(Element* self , jb_Any * nodes);

/**
 * @brief Calls the `replaceChildren` method. 
*/
jb_Undefined Element_replaceChildren(Element* self , jb_Any * nodes);

/**
 * @brief Calls the `moveBefore` method. 
*/
jb_Undefined Element_moveBefore(Element* self , Node * node, Node * child);

/**
 * @brief Calls the `querySelector` method. 
*/
Element Element_querySelector(Element* self , jb_String * selectors);

/**
 * @brief Calls the `querySelectorAll` method. 
*/
NodeList Element_querySelectorAll(Element* self , jb_String * selectors);

/**
 * @brief Gets the `previousElementSibling` property. 
*/
Element Element_previousElementSibling(const Element *self);

/**
 * @brief Gets the `nextElementSibling` property. 
*/
Element Element_nextElementSibling(const Element *self);

/**
 * @brief Calls the `before` method. 
*/
jb_Undefined Element_before(Element* self , jb_Any * nodes);

/**
 * @brief Calls the `after` method. 
*/
jb_Undefined Element_after(Element* self , jb_Any * nodes);

/**
 * @brief Calls the `replaceWith` method. 
*/
jb_Undefined Element_replaceWith(Element* self , jb_Any * nodes);

/**
 * @brief Calls the `remove` method. 
*/
jb_Undefined Element_remove(Element* self );

/**
 * @brief Gets the `assignedSlot` property. 
*/
HTMLSlotElement Element_assignedSlot(const Element *self);

/**
 * @brief Gets the `role` property. 
*/
jb_String Element_role(const Element *self);

/**
 * @brief Sets the `role` property. 
*/
void Element_set_role(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaActiveDescendantElement` property. 
*/
Element Element_ariaActiveDescendantElement(const Element *self);

/**
 * @brief Sets the `ariaActiveDescendantElement` property. 
*/
void Element_set_ariaActiveDescendantElement(Element* self, Element * value);

/**
 * @brief Gets the `ariaAtomic` property. 
*/
jb_String Element_ariaAtomic(const Element *self);

/**
 * @brief Sets the `ariaAtomic` property. 
*/
void Element_set_ariaAtomic(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaAutoComplete` property. 
*/
jb_String Element_ariaAutoComplete(const Element *self);

/**
 * @brief Sets the `ariaAutoComplete` property. 
*/
void Element_set_ariaAutoComplete(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaBrailleLabel` property. 
*/
jb_String Element_ariaBrailleLabel(const Element *self);

/**
 * @brief Sets the `ariaBrailleLabel` property. 
*/
void Element_set_ariaBrailleLabel(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaBrailleRoleDescription` property. 
*/
jb_String Element_ariaBrailleRoleDescription(const Element *self);

/**
 * @brief Sets the `ariaBrailleRoleDescription` property. 
*/
void Element_set_ariaBrailleRoleDescription(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaBusy` property. 
*/
jb_String Element_ariaBusy(const Element *self);

/**
 * @brief Sets the `ariaBusy` property. 
*/
void Element_set_ariaBusy(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaChecked` property. 
*/
jb_String Element_ariaChecked(const Element *self);

/**
 * @brief Sets the `ariaChecked` property. 
*/
void Element_set_ariaChecked(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaColCount` property. 
*/
jb_String Element_ariaColCount(const Element *self);

/**
 * @brief Sets the `ariaColCount` property. 
*/
void Element_set_ariaColCount(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaColIndex` property. 
*/
jb_String Element_ariaColIndex(const Element *self);

/**
 * @brief Sets the `ariaColIndex` property. 
*/
void Element_set_ariaColIndex(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaColIndexText` property. 
*/
jb_String Element_ariaColIndexText(const Element *self);

/**
 * @brief Sets the `ariaColIndexText` property. 
*/
void Element_set_ariaColIndexText(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaColSpan` property. 
*/
jb_String Element_ariaColSpan(const Element *self);

/**
 * @brief Sets the `ariaColSpan` property. 
*/
void Element_set_ariaColSpan(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaControlsElements` property. 
*/
jb_Array Element_ariaControlsElements(const Element *self);

/**
 * @brief Sets the `ariaControlsElements` property. 
*/
void Element_set_ariaControlsElements(Element* self, jb_Array * value);

/**
 * @brief Gets the `ariaCurrent` property. 
*/
jb_String Element_ariaCurrent(const Element *self);

/**
 * @brief Sets the `ariaCurrent` property. 
*/
void Element_set_ariaCurrent(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaDescribedByElements` property. 
*/
jb_Array Element_ariaDescribedByElements(const Element *self);

/**
 * @brief Sets the `ariaDescribedByElements` property. 
*/
void Element_set_ariaDescribedByElements(Element* self, jb_Array * value);

/**
 * @brief Gets the `ariaDescription` property. 
*/
jb_String Element_ariaDescription(const Element *self);

/**
 * @brief Sets the `ariaDescription` property. 
*/
void Element_set_ariaDescription(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaDetailsElements` property. 
*/
jb_Array Element_ariaDetailsElements(const Element *self);

/**
 * @brief Sets the `ariaDetailsElements` property. 
*/
void Element_set_ariaDetailsElements(Element* self, jb_Array * value);

/**
 * @brief Gets the `ariaDisabled` property. 
*/
jb_String Element_ariaDisabled(const Element *self);

/**
 * @brief Sets the `ariaDisabled` property. 
*/
void Element_set_ariaDisabled(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaErrorMessageElements` property. 
*/
jb_Array Element_ariaErrorMessageElements(const Element *self);

/**
 * @brief Sets the `ariaErrorMessageElements` property. 
*/
void Element_set_ariaErrorMessageElements(Element* self, jb_Array * value);

/**
 * @brief Gets the `ariaExpanded` property. 
*/
jb_String Element_ariaExpanded(const Element *self);

/**
 * @brief Sets the `ariaExpanded` property. 
*/
void Element_set_ariaExpanded(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaFlowToElements` property. 
*/
jb_Array Element_ariaFlowToElements(const Element *self);

/**
 * @brief Sets the `ariaFlowToElements` property. 
*/
void Element_set_ariaFlowToElements(Element* self, jb_Array * value);

/**
 * @brief Gets the `ariaHasPopup` property. 
*/
jb_String Element_ariaHasPopup(const Element *self);

/**
 * @brief Sets the `ariaHasPopup` property. 
*/
void Element_set_ariaHasPopup(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaHidden` property. 
*/
jb_String Element_ariaHidden(const Element *self);

/**
 * @brief Sets the `ariaHidden` property. 
*/
void Element_set_ariaHidden(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaInvalid` property. 
*/
jb_String Element_ariaInvalid(const Element *self);

/**
 * @brief Sets the `ariaInvalid` property. 
*/
void Element_set_ariaInvalid(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaKeyShortcuts` property. 
*/
jb_String Element_ariaKeyShortcuts(const Element *self);

/**
 * @brief Sets the `ariaKeyShortcuts` property. 
*/
void Element_set_ariaKeyShortcuts(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaLabel` property. 
*/
jb_String Element_ariaLabel(const Element *self);

/**
 * @brief Sets the `ariaLabel` property. 
*/
void Element_set_ariaLabel(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaLabelledByElements` property. 
*/
jb_Array Element_ariaLabelledByElements(const Element *self);

/**
 * @brief Sets the `ariaLabelledByElements` property. 
*/
void Element_set_ariaLabelledByElements(Element* self, jb_Array * value);

/**
 * @brief Gets the `ariaLevel` property. 
*/
jb_String Element_ariaLevel(const Element *self);

/**
 * @brief Sets the `ariaLevel` property. 
*/
void Element_set_ariaLevel(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaLive` property. 
*/
jb_String Element_ariaLive(const Element *self);

/**
 * @brief Sets the `ariaLive` property. 
*/
void Element_set_ariaLive(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaModal` property. 
*/
jb_String Element_ariaModal(const Element *self);

/**
 * @brief Sets the `ariaModal` property. 
*/
void Element_set_ariaModal(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaMultiLine` property. 
*/
jb_String Element_ariaMultiLine(const Element *self);

/**
 * @brief Sets the `ariaMultiLine` property. 
*/
void Element_set_ariaMultiLine(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaMultiSelectable` property. 
*/
jb_String Element_ariaMultiSelectable(const Element *self);

/**
 * @brief Sets the `ariaMultiSelectable` property. 
*/
void Element_set_ariaMultiSelectable(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaOrientation` property. 
*/
jb_String Element_ariaOrientation(const Element *self);

/**
 * @brief Sets the `ariaOrientation` property. 
*/
void Element_set_ariaOrientation(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaOwnsElements` property. 
*/
jb_Array Element_ariaOwnsElements(const Element *self);

/**
 * @brief Sets the `ariaOwnsElements` property. 
*/
void Element_set_ariaOwnsElements(Element* self, jb_Array * value);

/**
 * @brief Gets the `ariaPlaceholder` property. 
*/
jb_String Element_ariaPlaceholder(const Element *self);

/**
 * @brief Sets the `ariaPlaceholder` property. 
*/
void Element_set_ariaPlaceholder(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaPosInSet` property. 
*/
jb_String Element_ariaPosInSet(const Element *self);

/**
 * @brief Sets the `ariaPosInSet` property. 
*/
void Element_set_ariaPosInSet(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaPressed` property. 
*/
jb_String Element_ariaPressed(const Element *self);

/**
 * @brief Sets the `ariaPressed` property. 
*/
void Element_set_ariaPressed(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaReadOnly` property. 
*/
jb_String Element_ariaReadOnly(const Element *self);

/**
 * @brief Sets the `ariaReadOnly` property. 
*/
void Element_set_ariaReadOnly(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaRelevant` property. 
*/
jb_String Element_ariaRelevant(const Element *self);

/**
 * @brief Sets the `ariaRelevant` property. 
*/
void Element_set_ariaRelevant(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaRequired` property. 
*/
jb_String Element_ariaRequired(const Element *self);

/**
 * @brief Sets the `ariaRequired` property. 
*/
void Element_set_ariaRequired(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaRoleDescription` property. 
*/
jb_String Element_ariaRoleDescription(const Element *self);

/**
 * @brief Sets the `ariaRoleDescription` property. 
*/
void Element_set_ariaRoleDescription(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaRowCount` property. 
*/
jb_String Element_ariaRowCount(const Element *self);

/**
 * @brief Sets the `ariaRowCount` property. 
*/
void Element_set_ariaRowCount(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaRowIndex` property. 
*/
jb_String Element_ariaRowIndex(const Element *self);

/**
 * @brief Sets the `ariaRowIndex` property. 
*/
void Element_set_ariaRowIndex(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaRowIndexText` property. 
*/
jb_String Element_ariaRowIndexText(const Element *self);

/**
 * @brief Sets the `ariaRowIndexText` property. 
*/
void Element_set_ariaRowIndexText(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaRowSpan` property. 
*/
jb_String Element_ariaRowSpan(const Element *self);

/**
 * @brief Sets the `ariaRowSpan` property. 
*/
void Element_set_ariaRowSpan(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaSelected` property. 
*/
jb_String Element_ariaSelected(const Element *self);

/**
 * @brief Sets the `ariaSelected` property. 
*/
void Element_set_ariaSelected(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaSetSize` property. 
*/
jb_String Element_ariaSetSize(const Element *self);

/**
 * @brief Sets the `ariaSetSize` property. 
*/
void Element_set_ariaSetSize(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaSort` property. 
*/
jb_String Element_ariaSort(const Element *self);

/**
 * @brief Sets the `ariaSort` property. 
*/
void Element_set_ariaSort(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaValueMax` property. 
*/
jb_String Element_ariaValueMax(const Element *self);

/**
 * @brief Sets the `ariaValueMax` property. 
*/
void Element_set_ariaValueMax(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaValueMin` property. 
*/
jb_String Element_ariaValueMin(const Element *self);

/**
 * @brief Sets the `ariaValueMin` property. 
*/
void Element_set_ariaValueMin(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaValueNow` property. 
*/
jb_String Element_ariaValueNow(const Element *self);

/**
 * @brief Sets the `ariaValueNow` property. 
*/
void Element_set_ariaValueNow(Element* self, jb_String * value);

/**
 * @brief Gets the `ariaValueText` property. 
*/
jb_String Element_ariaValueText(const Element *self);

/**
 * @brief Sets the `ariaValueText` property. 
*/
void Element_set_ariaValueText(Element* self, jb_String * value);

/**
 * @brief Calls the `animate` method. 
*/
Animation Element_animate0(Element* self , jb_Object * keyframes);

/**
 * @brief Calls the `animate` method. 
*/
Animation Element_animate1(Element* self , jb_Object * keyframes, jb_Any * options);

/**
 * @brief Calls the `getAnimations` method. 
*/
jb_Array Element_getAnimations0(Element* self );

/**
 * @brief Calls the `getAnimations` method. 
*/
jb_Array Element_getAnimations1(Element* self , GetAnimationsOptions * options);

#ifdef __cplusplus
}
#endif
