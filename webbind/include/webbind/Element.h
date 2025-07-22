#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

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
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct NodeList NodeList;
typedef struct HTMLSlotElement HTMLSlotElement;
typedef struct Animation Animation;
typedef struct GetAnimationsOptions GetAnimationsOptions;
typedef struct ScreenDetailed ScreenDetailed;
typedef struct ConvertCoordinateOptions ConvertCoordinateOptions;
typedef struct DOMPointInit DOMPointInit;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct BoxQuadOptions BoxQuadOptions;


typedef struct {
  em_Val inner;
} ShadowRootInit;


DECLARE_EMLITE_TYPE(ShadowRootInit, em_Val);

ShadowRootMode ShadowRootInit_mode( const ShadowRootInit *self);

void ShadowRootInit_set_mode(ShadowRootInit* self, const ShadowRootMode* value);

bool ShadowRootInit_delegatesFocus( const ShadowRootInit *self);

void ShadowRootInit_set_delegatesFocus(ShadowRootInit* self, bool value);

SlotAssignmentMode ShadowRootInit_slotAssignment( const ShadowRootInit *self);

void ShadowRootInit_set_slotAssignment(ShadowRootInit* self, const SlotAssignmentMode* value);

bool ShadowRootInit_clonable( const ShadowRootInit *self);

void ShadowRootInit_set_clonable(ShadowRootInit* self, bool value);

bool ShadowRootInit_serializable( const ShadowRootInit *self);

void ShadowRootInit_set_serializable(ShadowRootInit* self, bool value);

CustomElementRegistry ShadowRootInit_customElementRegistry( const ShadowRootInit *self);

void ShadowRootInit_set_customElementRegistry(ShadowRootInit* self, const CustomElementRegistry* value);
typedef struct {
  em_Val inner;
} FocusableAreasOption;


DECLARE_EMLITE_TYPE(FocusableAreasOption, em_Val);

FocusableAreaSearchMode FocusableAreasOption_mode( const FocusableAreasOption *self);

void FocusableAreasOption_set_mode(FocusableAreasOption* self, const FocusableAreaSearchMode* value);
typedef struct {
  em_Val inner;
} SpatialNavigationSearchOptions;


DECLARE_EMLITE_TYPE(SpatialNavigationSearchOptions, em_Val);

jb_Sequence SpatialNavigationSearchOptions_candidates( const SpatialNavigationSearchOptions *self);

void SpatialNavigationSearchOptions_set_candidates(SpatialNavigationSearchOptions* self, const jb_Sequence* value);

Node SpatialNavigationSearchOptions_container( const SpatialNavigationSearchOptions *self);

void SpatialNavigationSearchOptions_set_container(SpatialNavigationSearchOptions* self, const Node* value);
typedef struct {
  em_Val inner;
} CheckVisibilityOptions;


DECLARE_EMLITE_TYPE(CheckVisibilityOptions, em_Val);

bool CheckVisibilityOptions_checkOpacity( const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_checkOpacity(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_checkVisibilityCSS( const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_checkVisibilityCSS(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_contentVisibilityAuto( const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_contentVisibilityAuto(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_opacityProperty( const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_opacityProperty(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_visibilityProperty( const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_visibilityProperty(CheckVisibilityOptions* self, bool value);
typedef struct {
  em_Val inner;
} FullscreenOptions;


DECLARE_EMLITE_TYPE(FullscreenOptions, em_Val);

ScreenDetailed FullscreenOptions_screen( const FullscreenOptions *self);

void FullscreenOptions_set_screen(FullscreenOptions* self, const ScreenDetailed* value);
typedef struct {
  em_Val inner;
} GetHTMLOptions;


DECLARE_EMLITE_TYPE(GetHTMLOptions, em_Val);

bool GetHTMLOptions_serializableShadowRoots( const GetHTMLOptions *self);

void GetHTMLOptions_set_serializableShadowRoots(GetHTMLOptions* self, bool value);

jb_Sequence GetHTMLOptions_shadowRoots( const GetHTMLOptions *self);

void GetHTMLOptions_set_shadowRoots(GetHTMLOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} PointerLockOptions;


DECLARE_EMLITE_TYPE(PointerLockOptions, em_Val);

bool PointerLockOptions_unadjustedMovement( const PointerLockOptions *self);

void PointerLockOptions_set_unadjustedMovement(PointerLockOptions* self, bool value);
typedef struct {
  em_Val inner;
} GetAnimationsOptions;


DECLARE_EMLITE_TYPE(GetAnimationsOptions, em_Val);

bool GetAnimationsOptions_subtree( const GetAnimationsOptions *self);

void GetAnimationsOptions_set_subtree(GetAnimationsOptions* self, bool value);

jb_CSSOMString GetAnimationsOptions_pseudoElement( const GetAnimationsOptions *self);

void GetAnimationsOptions_set_pseudoElement(GetAnimationsOptions* self, const jb_CSSOMString* value);
typedef struct {
  Node inner;
} Element;


DECLARE_EMLITE_TYPE(Element, Node);

jb_DOMString Element_namespaceURI( const Element *self);

jb_DOMString Element_prefix( const Element *self);

jb_DOMString Element_localName( const Element *self);

jb_DOMString Element_tagName( const Element *self);

jb_DOMString Element_id( const Element *self);

void Element_set_id(Element* self, const jb_DOMString* value);

jb_DOMString Element_className( const Element *self);

void Element_set_className(Element* self, const jb_DOMString* value);

DOMTokenList Element_classList( const Element *self);

jb_DOMString Element_slot( const Element *self);

void Element_set_slot(Element* self, const jb_DOMString* value);

bool Element_hasAttributes(Element* self );

NamedNodeMap Element_attributes( const Element *self);

jb_Sequence Element_getAttributeNames(Element* self );

jb_DOMString Element_getAttribute(Element* self , const jb_DOMString* qualifiedName);

jb_DOMString Element_getAttributeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName);

jb_Undefined Element_setAttribute(Element* self , const jb_DOMString* qualifiedName, const jb_DOMString* value);

jb_Undefined Element_setAttributeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName, const jb_DOMString* value);

jb_Undefined Element_removeAttribute(Element* self , const jb_DOMString* qualifiedName);

jb_Undefined Element_removeAttributeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName);

bool Element_toggleAttribute(Element* self , const jb_DOMString* qualifiedName);

bool Element_toggleAttribute(Element* self , const jb_DOMString* qualifiedName, bool force);

bool Element_hasAttribute(Element* self , const jb_DOMString* qualifiedName);

bool Element_hasAttributeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName);

Attr Element_getAttributeNode(Element* self , const jb_DOMString* qualifiedName);

Attr Element_getAttributeNodeNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName);

Attr Element_setAttributeNode(Element* self , const Attr* attr);

Attr Element_setAttributeNodeNS(Element* self , const Attr* attr);

Attr Element_removeAttributeNode(Element* self , const Attr* attr);

ShadowRoot Element_attachShadow(Element* self , const ShadowRootInit* init);

ShadowRoot Element_shadowRoot( const Element *self);

CustomElementRegistry Element_customElementRegistry( const Element *self);

Element Element_closest(Element* self , const jb_DOMString* selectors);

bool Element_matches(Element* self , const jb_DOMString* selectors);

bool Element_webkitMatchesSelector(Element* self , const jb_DOMString* selectors);

HTMLCollection Element_getElementsByTagName(Element* self , const jb_DOMString* qualifiedName);

HTMLCollection Element_getElementsByTagNameNS(Element* self , const jb_DOMString* namespace_, const jb_DOMString* localName);

HTMLCollection Element_getElementsByClassName(Element* self , const jb_DOMString* classNames);

Element Element_insertAdjacentElement(Element* self , const jb_DOMString* where, const Element* element);

jb_Undefined Element_insertAdjacentText(Element* self , const jb_DOMString* where, const jb_DOMString* data);

Node Element_getSpatialNavigationContainer(Element* self );

jb_Sequence Element_focusableAreas(Element* self );

jb_Sequence Element_focusableAreas(Element* self , const FocusableAreasOption* option);

Node Element_spatialNavigationSearch(Element* self , const SpatialNavigationDirection* dir);

Node Element_spatialNavigationSearch(Element* self , const SpatialNavigationDirection* dir, const SpatialNavigationSearchOptions* options);

CSSPseudoElement Element_pseudo(Element* self , const jb_CSSOMString* type);

DOMTokenList Element_part( const Element *self);

StylePropertyMapReadOnly Element_computedStyleMap(Element* self );

DOMRectList Element_getClientRects(Element* self );

DOMRect Element_getBoundingClientRect(Element* self );

bool Element_checkVisibility(Element* self );

bool Element_checkVisibility(Element* self , const CheckVisibilityOptions* options);

jb_Undefined Element_scrollIntoView(Element* self );

jb_Undefined Element_scrollIntoView(Element* self , const jb_Any* arg);

jb_Undefined Element_scroll(Element* self , double x, double y);

jb_Undefined Element_scrollTo(Element* self , double x, double y);

jb_Undefined Element_scrollBy(Element* self , double x, double y);

double Element_scrollTop( const Element *self);

void Element_set_scrollTop(Element* self, double value);

double Element_scrollLeft( const Element *self);

void Element_set_scrollLeft(Element* self, double value);

long Element_scrollWidth( const Element *self);

long Element_scrollHeight( const Element *self);

long Element_clientTop( const Element *self);

long Element_clientLeft( const Element *self);

long Element_clientWidth( const Element *self);

long Element_clientHeight( const Element *self);

double Element_currentCSSZoom( const Element *self);

jb_DOMString Element_elementTiming( const Element *self);

void Element_set_elementTiming(Element* self, const jb_DOMString* value);

jb_Promise Element_requestFullscreen(Element* self );

jb_Promise Element_requestFullscreen(Element* self , const FullscreenOptions* options);

jb_Any Element_onfullscreenchange( const Element *self);

void Element_set_onfullscreenchange(Element* self, const jb_Any* value);

jb_Any Element_onfullscreenerror( const Element *self);

void Element_set_onfullscreenerror(Element* self, const jb_Any* value);

jb_Undefined Element_setHTMLUnsafe(Element* self , const jb_Any* html);

jb_DOMString Element_getHTML(Element* self );

jb_DOMString Element_getHTML(Element* self , const GetHTMLOptions* options);

jb_Any Element_innerHTML( const Element *self);

void Element_set_innerHTML(Element* self, const jb_Any* value);

jb_Any Element_outerHTML( const Element *self);

void Element_set_outerHTML(Element* self, const jb_Any* value);

jb_Undefined Element_insertAdjacentHTML(Element* self , const jb_DOMString* position, const jb_Any* string);

jb_Undefined Element_setPointerCapture(Element* self , long pointerId);

jb_Undefined Element_releasePointerCapture(Element* self , long pointerId);

bool Element_hasPointerCapture(Element* self , long pointerId);

jb_Promise Element_requestPointerLock(Element* self );

jb_Promise Element_requestPointerLock(Element* self , const PointerLockOptions* options);

jb_CSSOMString Element_regionOverset( const Element *self);

jb_Sequence Element_getRegionFlowRanges(Element* self );

jb_Sequence Element_getBoxQuads(Element* self );

jb_Sequence Element_getBoxQuads(Element* self , const BoxQuadOptions* options);

DOMQuad Element_convertQuadFromNode(Element* self , const DOMQuadInit* quad, const jb_Any* from);

DOMQuad Element_convertQuadFromNode(Element* self , const DOMQuadInit* quad, const jb_Any* from, const ConvertCoordinateOptions* options);

DOMQuad Element_convertRectFromNode(Element* self , const DOMRectReadOnly* rect, const jb_Any* from);

DOMQuad Element_convertRectFromNode(Element* self , const DOMRectReadOnly* rect, const jb_Any* from, const ConvertCoordinateOptions* options);

DOMPoint Element_convertPointFromNode(Element* self , const DOMPointInit* point, const jb_Any* from);

DOMPoint Element_convertPointFromNode(Element* self , const DOMPointInit* point, const jb_Any* from, const ConvertCoordinateOptions* options);

HTMLCollection Element_children( const Element *self);

Element Element_firstElementChild( const Element *self);

Element Element_lastElementChild( const Element *self);

unsigned long Element_childElementCount( const Element *self);

jb_Undefined Element_prepend(Element* self , const jb_Any* nodes);

jb_Undefined Element_append(Element* self , const jb_Any* nodes);

jb_Undefined Element_replaceChildren(Element* self , const jb_Any* nodes);

jb_Undefined Element_moveBefore(Element* self , const Node* node, const Node* child);

Element Element_querySelector(Element* self , const jb_DOMString* selectors);

NodeList Element_querySelectorAll(Element* self , const jb_DOMString* selectors);

Element Element_previousElementSibling( const Element *self);

Element Element_nextElementSibling( const Element *self);

jb_Undefined Element_before(Element* self , const jb_Any* nodes);

jb_Undefined Element_after(Element* self , const jb_Any* nodes);

jb_Undefined Element_replaceWith(Element* self , const jb_Any* nodes);

jb_Undefined Element_remove(Element* self );

HTMLSlotElement Element_assignedSlot( const Element *self);

jb_DOMString Element_role( const Element *self);

void Element_set_role(Element* self, const jb_DOMString* value);

Element Element_ariaActiveDescendantElement( const Element *self);

void Element_set_ariaActiveDescendantElement(Element* self, const Element* value);

jb_DOMString Element_ariaAtomic( const Element *self);

void Element_set_ariaAtomic(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaAutoComplete( const Element *self);

void Element_set_ariaAutoComplete(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaBrailleLabel( const Element *self);

void Element_set_ariaBrailleLabel(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaBrailleRoleDescription( const Element *self);

void Element_set_ariaBrailleRoleDescription(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaBusy( const Element *self);

void Element_set_ariaBusy(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaChecked( const Element *self);

void Element_set_ariaChecked(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaColCount( const Element *self);

void Element_set_ariaColCount(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaColIndex( const Element *self);

void Element_set_ariaColIndex(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaColIndexText( const Element *self);

void Element_set_ariaColIndexText(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaColSpan( const Element *self);

void Element_set_ariaColSpan(Element* self, const jb_DOMString* value);

jb_FrozenArray Element_ariaControlsElements( const Element *self);

void Element_set_ariaControlsElements(Element* self, const jb_FrozenArray* value);

jb_DOMString Element_ariaCurrent( const Element *self);

void Element_set_ariaCurrent(Element* self, const jb_DOMString* value);

jb_FrozenArray Element_ariaDescribedByElements( const Element *self);

void Element_set_ariaDescribedByElements(Element* self, const jb_FrozenArray* value);

jb_DOMString Element_ariaDescription( const Element *self);

void Element_set_ariaDescription(Element* self, const jb_DOMString* value);

jb_FrozenArray Element_ariaDetailsElements( const Element *self);

void Element_set_ariaDetailsElements(Element* self, const jb_FrozenArray* value);

jb_DOMString Element_ariaDisabled( const Element *self);

void Element_set_ariaDisabled(Element* self, const jb_DOMString* value);

jb_FrozenArray Element_ariaErrorMessageElements( const Element *self);

void Element_set_ariaErrorMessageElements(Element* self, const jb_FrozenArray* value);

jb_DOMString Element_ariaExpanded( const Element *self);

void Element_set_ariaExpanded(Element* self, const jb_DOMString* value);

jb_FrozenArray Element_ariaFlowToElements( const Element *self);

void Element_set_ariaFlowToElements(Element* self, const jb_FrozenArray* value);

jb_DOMString Element_ariaHasPopup( const Element *self);

void Element_set_ariaHasPopup(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaHidden( const Element *self);

void Element_set_ariaHidden(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaInvalid( const Element *self);

void Element_set_ariaInvalid(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaKeyShortcuts( const Element *self);

void Element_set_ariaKeyShortcuts(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaLabel( const Element *self);

void Element_set_ariaLabel(Element* self, const jb_DOMString* value);

jb_FrozenArray Element_ariaLabelledByElements( const Element *self);

void Element_set_ariaLabelledByElements(Element* self, const jb_FrozenArray* value);

jb_DOMString Element_ariaLevel( const Element *self);

void Element_set_ariaLevel(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaLive( const Element *self);

void Element_set_ariaLive(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaModal( const Element *self);

void Element_set_ariaModal(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaMultiLine( const Element *self);

void Element_set_ariaMultiLine(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaMultiSelectable( const Element *self);

void Element_set_ariaMultiSelectable(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaOrientation( const Element *self);

void Element_set_ariaOrientation(Element* self, const jb_DOMString* value);

jb_FrozenArray Element_ariaOwnsElements( const Element *self);

void Element_set_ariaOwnsElements(Element* self, const jb_FrozenArray* value);

jb_DOMString Element_ariaPlaceholder( const Element *self);

void Element_set_ariaPlaceholder(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaPosInSet( const Element *self);

void Element_set_ariaPosInSet(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaPressed( const Element *self);

void Element_set_ariaPressed(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaReadOnly( const Element *self);

void Element_set_ariaReadOnly(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaRelevant( const Element *self);

void Element_set_ariaRelevant(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaRequired( const Element *self);

void Element_set_ariaRequired(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaRoleDescription( const Element *self);

void Element_set_ariaRoleDescription(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaRowCount( const Element *self);

void Element_set_ariaRowCount(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaRowIndex( const Element *self);

void Element_set_ariaRowIndex(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaRowIndexText( const Element *self);

void Element_set_ariaRowIndexText(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaRowSpan( const Element *self);

void Element_set_ariaRowSpan(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaSelected( const Element *self);

void Element_set_ariaSelected(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaSetSize( const Element *self);

void Element_set_ariaSetSize(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaSort( const Element *self);

void Element_set_ariaSort(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaValueMax( const Element *self);

void Element_set_ariaValueMax(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaValueMin( const Element *self);

void Element_set_ariaValueMin(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaValueNow( const Element *self);

void Element_set_ariaValueNow(Element* self, const jb_DOMString* value);

jb_DOMString Element_ariaValueText( const Element *self);

void Element_set_ariaValueText(Element* self, const jb_DOMString* value);

Animation Element_animate(Element* self , const jb_Object* keyframes);

Animation Element_animate(Element* self , const jb_Object* keyframes, const jb_Any* options);

jb_Sequence Element_getAnimations(Element* self );

jb_Sequence Element_getAnimations(Element* self , const GetAnimationsOptions* options);
