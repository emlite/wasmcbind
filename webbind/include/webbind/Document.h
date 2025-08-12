#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Node.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMImplementation DOMImplementation;
typedef struct DocumentType DocumentType;
typedef struct Element Element;
typedef struct HTMLCollection HTMLCollection;
typedef struct DocumentFragment DocumentFragment;
typedef struct Text Text;
typedef struct CDATASection CDATASection;
typedef struct Comment Comment;
typedef struct ProcessingInstruction ProcessingInstruction;
typedef struct Attr Attr;
typedef struct Event Event;
typedef struct Range Range;
typedef struct NodeIterator NodeIterator;
typedef struct TreeWalker TreeWalker;
typedef struct SVGSVGElement SVGSVGElement;
typedef struct NamedFlowMap NamedFlowMap;
typedef struct ViewTransition ViewTransition;
typedef struct CaretPosition CaretPosition;
typedef struct CaretPositionFromPointOptions CaretPositionFromPointOptions;
typedef struct FontMetrics FontMetrics;
typedef struct StylePropertyMapReadOnly StylePropertyMapReadOnly;
typedef struct Location Location;
typedef struct HTMLElement HTMLElement;
typedef struct HTMLHeadElement HTMLHeadElement;
typedef struct NodeList NodeList;
typedef struct HTMLAllCollection HTMLAllCollection;
typedef struct PermissionsPolicy PermissionsPolicy;
typedef struct FragmentDirective FragmentDirective;
typedef struct Selection Selection;
typedef struct DocumentTimeline DocumentTimeline;
typedef struct FontFaceSet FontFaceSet;
typedef struct DOMQuad DOMQuad;
typedef struct BoxQuadOptions BoxQuadOptions;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct ConvertCoordinateOptions ConvertCoordinateOptions;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct DOMPointInit DOMPointInit;
typedef struct Animation Animation;
typedef struct XPathExpression XPathExpression;
typedef struct XPathResult XPathResult;


/**
 * @brief Interface Document
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Document)
 */
DECLARE_EMLITE_TYPE(Document, Node);

/**
 * @brief Creates a new `Document` object. 
*/
Document Document_new();

/**
 * @brief Gets the `implementation` property. 
*/
DOMImplementation Document_implementation(const Document *self);

/**
 * @brief Gets the `URL` property. 
*/
jb_String Document_URL(const Document *self);

/**
 * @brief Gets the `documentURI` property. 
*/
jb_String Document_documentURI(const Document *self);

/**
 * @brief Gets the `compatMode` property. 
*/
jb_String Document_compatMode(const Document *self);

/**
 * @brief Gets the `characterSet` property. 
*/
jb_String Document_characterSet(const Document *self);

/**
 * @brief Gets the `charset` property. 
*/
jb_String Document_charset(const Document *self);

/**
 * @brief Gets the `inputEncoding` property. 
*/
jb_String Document_inputEncoding(const Document *self);

/**
 * @brief Gets the `contentType` property. 
*/
jb_String Document_contentType(const Document *self);

/**
 * @brief Gets the `doctype` property. 
*/
DocumentType Document_doctype(const Document *self);

/**
 * @brief Gets the `documentElement` property. 
*/
Element Document_documentElement(const Document *self);

/**
 * @brief Calls the `getElementsByTagName` method. 
*/
HTMLCollection Document_getElementsByTagName(Document* self , jb_String * qualifiedName);

/**
 * @brief Calls the `getElementsByTagNameNS` method. 
*/
HTMLCollection Document_getElementsByTagNameNS(Document* self , jb_String * namespace_, jb_String * localName);

/**
 * @brief Calls the `getElementsByClassName` method. 
*/
HTMLCollection Document_getElementsByClassName(Document* self , jb_String * classNames);

/**
 * @brief Calls the `createElement` method. 
*/
Element Document_createElement0(Document* self , jb_String * localName);

/**
 * @brief Calls the `createElement` method. 
*/
Element Document_createElement1(Document* self , jb_String * localName, jb_Any * options);

/**
 * @brief Calls the `createElementNS` method. 
*/
Element Document_createElementNS0(Document* self , jb_String * namespace_, jb_String * qualifiedName);

/**
 * @brief Calls the `createElementNS` method. 
*/
Element Document_createElementNS1(Document* self , jb_String * namespace_, jb_String * qualifiedName, jb_Any * options);

/**
 * @brief Calls the `createDocumentFragment` method. 
*/
DocumentFragment Document_createDocumentFragment(Document* self );

/**
 * @brief Calls the `createTextNode` method. 
*/
Text Document_createTextNode(Document* self , jb_String * data);

/**
 * @brief Calls the `createCDATASection` method. 
*/
CDATASection Document_createCDATASection(Document* self , jb_String * data);

/**
 * @brief Calls the `createComment` method. 
*/
Comment Document_createComment(Document* self , jb_String * data);

/**
 * @brief Calls the `createProcessingInstruction` method. 
*/
ProcessingInstruction Document_createProcessingInstruction(Document* self , jb_String * target, jb_String * data);

/**
 * @brief Calls the `importNode` method. 
*/
Node Document_importNode0(Document* self , Node * node);

/**
 * @brief Calls the `importNode` method. 
*/
Node Document_importNode1(Document* self , Node * node, jb_Any * options);

/**
 * @brief Calls the `adoptNode` method. 
*/
Node Document_adoptNode(Document* self , Node * node);

/**
 * @brief Calls the `createAttribute` method. 
*/
Attr Document_createAttribute(Document* self , jb_String * localName);

/**
 * @brief Calls the `createAttributeNS` method. 
*/
Attr Document_createAttributeNS(Document* self , jb_String * namespace_, jb_String * qualifiedName);

/**
 * @brief Calls the `createEvent` method. 
*/
Event Document_createEvent(Document* self , jb_String * interface);

/**
 * @brief Calls the `createRange` method. 
*/
Range Document_createRange(Document* self );

/**
 * @brief Calls the `createNodeIterator` method. 
*/
NodeIterator Document_createNodeIterator0(Document* self , Node * root);

/**
 * @brief Calls the `createNodeIterator` method. 
*/
NodeIterator Document_createNodeIterator1(Document* self , Node * root, unsigned long whatToShow);

/**
 * @brief Calls the `createNodeIterator` method. 
*/
NodeIterator Document_createNodeIterator2(Document* self , Node * root, unsigned long whatToShow, jb_Function * filter);

/**
 * @brief Calls the `createTreeWalker` method. 
*/
TreeWalker Document_createTreeWalker0(Document* self , Node * root);

/**
 * @brief Calls the `createTreeWalker` method. 
*/
TreeWalker Document_createTreeWalker1(Document* self , Node * root, unsigned long whatToShow);

/**
 * @brief Calls the `createTreeWalker` method. 
*/
TreeWalker Document_createTreeWalker2(Document* self , Node * root, unsigned long whatToShow, jb_Function * filter);

/**
 * @brief Gets the `rootElement` property. 
*/
SVGSVGElement Document_rootElement(const Document *self);

/**
 * @brief Gets the `namedFlows` property. 
*/
NamedFlowMap Document_namedFlows(const Document *self);

/**
 * @brief Calls the `startViewTransition` method. 
*/
ViewTransition Document_startViewTransition0(Document* self );

/**
 * @brief Calls the `startViewTransition` method. 
*/
ViewTransition Document_startViewTransition1(Document* self , jb_Any * callbackOptions);

/**
 * @brief Calls the `elementFromPoint` method. 
*/
Element Document_elementFromPoint(Document* self , double x, double y);

/**
 * @brief Calls the `elementsFromPoint` method. 
*/
jb_Array Document_elementsFromPoint(Document* self , double x, double y);

/**
 * @brief Calls the `caretPositionFromPoint` method. 
*/
CaretPosition Document_caretPositionFromPoint0(Document* self , double x, double y);

/**
 * @brief Calls the `caretPositionFromPoint` method. 
*/
CaretPosition Document_caretPositionFromPoint1(Document* self , double x, double y, CaretPositionFromPointOptions * options);

/**
 * @brief Gets the `scrollingElement` property. 
*/
Element Document_scrollingElement(const Document *self);

/**
 * @brief Calls the `measureElement` method. 
*/
FontMetrics Document_measureElement(Document* self , Element * element);

/**
 * @brief Calls the `measureText` method. 
*/
FontMetrics Document_measureText(Document* self , jb_String * text, StylePropertyMapReadOnly * styleMap);

/**
 * @brief Gets the `fullscreenEnabled` property. 
*/
bool Document_fullscreenEnabled(const Document *self);

/**
 * @brief Gets the `fullscreen` property. 
*/
bool Document_fullscreen(const Document *self);

/**
 * @brief Calls the `exitFullscreen` method. 
*/
jb_Promise Document_exitFullscreen(Document* self );

/**
 * @brief Gets the `onfullscreenchange` property. 
*/
jb_Any Document_onfullscreenchange(const Document *self);

/**
 * @brief Sets the `onfullscreenchange` property. 
*/
void Document_set_onfullscreenchange(Document* self, jb_Any * value);

/**
 * @brief Gets the `onfullscreenerror` property. 
*/
jb_Any Document_onfullscreenerror(const Document *self);

/**
 * @brief Sets the `onfullscreenerror` property. 
*/
void Document_set_onfullscreenerror(Document* self, jb_Any * value);

/**
 * @brief Calls the `parseHTMLUnsafe` method. 
*/
Document Document_parseHTMLUnsafe(Document* self , jb_Any * html);

/**
 * @brief Gets the `location` property. 
*/
Location Document_location(const Document *self);

/**
 * @brief Gets the `domain` property. 
*/
jb_String Document_domain(const Document *self);

/**
 * @brief Sets the `domain` property. 
*/
void Document_set_domain(Document* self, jb_String * value);

/**
 * @brief Gets the `referrer` property. 
*/
jb_String Document_referrer(const Document *self);

/**
 * @brief Gets the `cookie` property. 
*/
jb_String Document_cookie(const Document *self);

/**
 * @brief Sets the `cookie` property. 
*/
void Document_set_cookie(Document* self, jb_String * value);

/**
 * @brief Gets the `lastModified` property. 
*/
jb_String Document_lastModified(const Document *self);

/**
 * @brief Gets the `readyState` property. 
*/
DocumentReadyState Document_readyState(const Document *self);

/**
 * @brief Gets the `title` property. 
*/
jb_String Document_title(const Document *self);

/**
 * @brief Sets the `title` property. 
*/
void Document_set_title(Document* self, jb_String * value);

/**
 * @brief Gets the `dir` property. 
*/
jb_String Document_dir(const Document *self);

/**
 * @brief Sets the `dir` property. 
*/
void Document_set_dir(Document* self, jb_String * value);

/**
 * @brief Gets the `body` property. 
*/
HTMLElement Document_body(const Document *self);

/**
 * @brief Sets the `body` property. 
*/
void Document_set_body(Document* self, HTMLElement * value);

/**
 * @brief Gets the `head` property. 
*/
HTMLHeadElement Document_head(const Document *self);

/**
 * @brief Gets the `images` property. 
*/
HTMLCollection Document_images(const Document *self);

/**
 * @brief Gets the `embeds` property. 
*/
HTMLCollection Document_embeds(const Document *self);

/**
 * @brief Gets the `plugins` property. 
*/
HTMLCollection Document_plugins(const Document *self);

/**
 * @brief Gets the `links` property. 
*/
HTMLCollection Document_links(const Document *self);

/**
 * @brief Gets the `forms` property. 
*/
HTMLCollection Document_forms(const Document *self);

/**
 * @brief Gets the `scripts` property. 
*/
HTMLCollection Document_scripts(const Document *self);

/**
 * @brief Calls the `getElementsByName` method. 
*/
NodeList Document_getElementsByName(Document* self , jb_String * elementName);

/**
 * @brief Gets the `currentScript` property. 
*/
jb_Any Document_currentScript(const Document *self);

/**
 * @brief Calls the `open` method. 
*/
jb_Any Document_open(Document* self , jb_String * url, jb_String * name, jb_String * features);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined Document_close(Document* self );

/**
 * @brief Calls the `write` method. 
*/
jb_Undefined Document_write(Document* self , jb_Any * text);

/**
 * @brief Calls the `writeln` method. 
*/
jb_Undefined Document_writeln(Document* self , jb_Any * text);

/**
 * @brief Gets the `defaultView` property. 
*/
jb_Any Document_defaultView(const Document *self);

/**
 * @brief Calls the `hasFocus` method. 
*/
bool Document_hasFocus(Document* self );

/**
 * @brief Gets the `designMode` property. 
*/
jb_String Document_designMode(const Document *self);

/**
 * @brief Sets the `designMode` property. 
*/
void Document_set_designMode(Document* self, jb_String * value);

/**
 * @brief Calls the `execCommand` method. 
*/
bool Document_execCommand0(Document* self , jb_String * commandId);

/**
 * @brief Calls the `execCommand` method. 
*/
bool Document_execCommand1(Document* self , jb_String * commandId, bool showUI);

/**
 * @brief Calls the `execCommand` method. 
*/
bool Document_execCommand2(Document* self , jb_String * commandId, bool showUI, jb_String * value);

/**
 * @brief Calls the `queryCommandEnabled` method. 
*/
bool Document_queryCommandEnabled(Document* self , jb_String * commandId);

/**
 * @brief Calls the `queryCommandIndeterm` method. 
*/
bool Document_queryCommandIndeterm(Document* self , jb_String * commandId);

/**
 * @brief Calls the `queryCommandState` method. 
*/
bool Document_queryCommandState(Document* self , jb_String * commandId);

/**
 * @brief Calls the `queryCommandSupported` method. 
*/
bool Document_queryCommandSupported(Document* self , jb_String * commandId);

/**
 * @brief Calls the `queryCommandValue` method. 
*/
jb_String Document_queryCommandValue(Document* self , jb_String * commandId);

/**
 * @brief Gets the `hidden` property. 
*/
bool Document_hidden(const Document *self);

/**
 * @brief Gets the `visibilityState` property. 
*/
DocumentVisibilityState Document_visibilityState(const Document *self);

/**
 * @brief Gets the `onreadystatechange` property. 
*/
jb_Any Document_onreadystatechange(const Document *self);

/**
 * @brief Sets the `onreadystatechange` property. 
*/
void Document_set_onreadystatechange(Document* self, jb_Any * value);

/**
 * @brief Gets the `onvisibilitychange` property. 
*/
jb_Any Document_onvisibilitychange(const Document *self);

/**
 * @brief Sets the `onvisibilitychange` property. 
*/
void Document_set_onvisibilitychange(Document* self, jb_Any * value);

/**
 * @brief Gets the `fgColor` property. 
*/
jb_String Document_fgColor(const Document *self);

/**
 * @brief Sets the `fgColor` property. 
*/
void Document_set_fgColor(Document* self, jb_String * value);

/**
 * @brief Gets the `linkColor` property. 
*/
jb_String Document_linkColor(const Document *self);

/**
 * @brief Sets the `linkColor` property. 
*/
void Document_set_linkColor(Document* self, jb_String * value);

/**
 * @brief Gets the `vlinkColor` property. 
*/
jb_String Document_vlinkColor(const Document *self);

/**
 * @brief Sets the `vlinkColor` property. 
*/
void Document_set_vlinkColor(Document* self, jb_String * value);

/**
 * @brief Gets the `alinkColor` property. 
*/
jb_String Document_alinkColor(const Document *self);

/**
 * @brief Sets the `alinkColor` property. 
*/
void Document_set_alinkColor(Document* self, jb_String * value);

/**
 * @brief Gets the `bgColor` property. 
*/
jb_String Document_bgColor(const Document *self);

/**
 * @brief Sets the `bgColor` property. 
*/
void Document_set_bgColor(Document* self, jb_String * value);

/**
 * @brief Gets the `anchors` property. 
*/
HTMLCollection Document_anchors(const Document *self);

/**
 * @brief Gets the `applets` property. 
*/
HTMLCollection Document_applets(const Document *self);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined Document_clear(Document* self );

/**
 * @brief Calls the `captureEvents` method. 
*/
jb_Undefined Document_captureEvents(Document* self );

/**
 * @brief Calls the `releaseEvents` method. 
*/
jb_Undefined Document_releaseEvents(Document* self );

/**
 * @brief Gets the `all` property. 
*/
HTMLAllCollection Document_all(const Document *self);

/**
 * @brief Gets the `onfreeze` property. 
*/
jb_Any Document_onfreeze(const Document *self);

/**
 * @brief Sets the `onfreeze` property. 
*/
void Document_set_onfreeze(Document* self, jb_Any * value);

/**
 * @brief Gets the `onresume` property. 
*/
jb_Any Document_onresume(const Document *self);

/**
 * @brief Sets the `onresume` property. 
*/
void Document_set_onresume(Document* self, jb_Any * value);

/**
 * @brief Gets the `wasDiscarded` property. 
*/
bool Document_wasDiscarded(const Document *self);

/**
 * @brief Gets the `permissionsPolicy` property. 
*/
PermissionsPolicy Document_permissionsPolicy(const Document *self);

/**
 * @brief Gets the `pictureInPictureEnabled` property. 
*/
bool Document_pictureInPictureEnabled(const Document *self);

/**
 * @brief Calls the `exitPictureInPicture` method. 
*/
jb_Promise Document_exitPictureInPicture(Document* self );

/**
 * @brief Gets the `onpointerlockchange` property. 
*/
jb_Any Document_onpointerlockchange(const Document *self);

/**
 * @brief Sets the `onpointerlockchange` property. 
*/
void Document_set_onpointerlockchange(Document* self, jb_Any * value);

/**
 * @brief Gets the `onpointerlockerror` property. 
*/
jb_Any Document_onpointerlockerror(const Document *self);

/**
 * @brief Sets the `onpointerlockerror` property. 
*/
void Document_set_onpointerlockerror(Document* self, jb_Any * value);

/**
 * @brief Calls the `exitPointerLock` method. 
*/
jb_Undefined Document_exitPointerLock(Document* self );

/**
 * @brief Gets the `prerendering` property. 
*/
bool Document_prerendering(const Document *self);

/**
 * @brief Gets the `onprerenderingchange` property. 
*/
jb_Any Document_onprerenderingchange(const Document *self);

/**
 * @brief Sets the `onprerenderingchange` property. 
*/
void Document_set_onprerenderingchange(Document* self, jb_Any * value);

/**
 * @brief Calls the `requestStorageAccessFor` method. 
*/
jb_Promise Document_requestStorageAccessFor(Document* self , jb_String * requestedOrigin);

/**
 * @brief Calls the `hasUnpartitionedCookieAccess` method. 
*/
jb_Promise Document_hasUnpartitionedCookieAccess(Document* self );

/**
 * @brief Gets the `fragmentDirective` property. 
*/
FragmentDirective Document_fragmentDirective(const Document *self);

/**
 * @brief Calls the `getSelection` method. 
*/
Selection Document_getSelection(Document* self );

/**
 * @brief Calls the `hasStorageAccess` method. 
*/
jb_Promise Document_hasStorageAccess(Document* self );

/**
 * @brief Calls the `requestStorageAccess` method. 
*/
jb_Promise Document_requestStorageAccess(Document* self );

/**
 * @brief Calls the `hasPrivateToken` method. 
*/
jb_Promise Document_hasPrivateToken(Document* self , jb_String * issuer);

/**
 * @brief Calls the `hasRedemptionRecord` method. 
*/
jb_Promise Document_hasRedemptionRecord(Document* self , jb_String * issuer);

/**
 * @brief Gets the `timeline` property. 
*/
DocumentTimeline Document_timeline(const Document *self);

/**
 * @brief Gets the `fonts` property. 
*/
FontFaceSet Document_fonts(const Document *self);

/**
 * @brief Calls the `getBoxQuads` method. 
*/
jb_Array Document_getBoxQuads0(Document* self );

/**
 * @brief Calls the `getBoxQuads` method. 
*/
jb_Array Document_getBoxQuads1(Document* self , BoxQuadOptions * options);

/**
 * @brief Calls the `convertQuadFromNode` method. 
*/
DOMQuad Document_convertQuadFromNode0(Document* self , DOMQuadInit * quad, jb_Any * from);

/**
 * @brief Calls the `convertQuadFromNode` method. 
*/
DOMQuad Document_convertQuadFromNode1(Document* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Calls the `convertRectFromNode` method. 
*/
DOMQuad Document_convertRectFromNode0(Document* self , DOMRectReadOnly * rect, jb_Any * from);

/**
 * @brief Calls the `convertRectFromNode` method. 
*/
DOMQuad Document_convertRectFromNode1(Document* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Calls the `convertPointFromNode` method. 
*/
DOMPoint Document_convertPointFromNode0(Document* self , DOMPointInit * point, jb_Any * from);

/**
 * @brief Calls the `convertPointFromNode` method. 
*/
DOMPoint Document_convertPointFromNode1(Document* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Calls the `getElementById` method. 
*/
Element Document_getElementById(Document* self , jb_String * elementId);

/**
 * @brief Calls the `getAnimations` method. 
*/
jb_Array Document_getAnimations(Document* self );

/**
 * @brief Gets the `children` property. 
*/
HTMLCollection Document_children(const Document *self);

/**
 * @brief Gets the `firstElementChild` property. 
*/
Element Document_firstElementChild(const Document *self);

/**
 * @brief Gets the `lastElementChild` property. 
*/
Element Document_lastElementChild(const Document *self);

/**
 * @brief Gets the `childElementCount` property. 
*/
unsigned long Document_childElementCount(const Document *self);

/**
 * @brief Calls the `prepend` method. 
*/
jb_Undefined Document_prepend(Document* self , jb_Any * nodes);

/**
 * @brief Calls the `append` method. 
*/
jb_Undefined Document_append(Document* self , jb_Any * nodes);

/**
 * @brief Calls the `replaceChildren` method. 
*/
jb_Undefined Document_replaceChildren(Document* self , jb_Any * nodes);

/**
 * @brief Calls the `moveBefore` method. 
*/
jb_Undefined Document_moveBefore(Document* self , Node * node, Node * child);

/**
 * @brief Calls the `querySelector` method. 
*/
Element Document_querySelector(Document* self , jb_String * selectors);

/**
 * @brief Calls the `querySelectorAll` method. 
*/
NodeList Document_querySelectorAll(Document* self , jb_String * selectors);

/**
 * @brief Calls the `createExpression` method. 
*/
XPathExpression Document_createExpression0(Document* self , jb_String * expression);

/**
 * @brief Calls the `createExpression` method. 
*/
XPathExpression Document_createExpression1(Document* self , jb_String * expression, jb_Function * resolver);

/**
 * @brief Calls the `createNSResolver` method. 
*/
Node Document_createNSResolver(Document* self , Node * nodeResolver);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult Document_evaluate0(Document* self , jb_String * expression, Node * contextNode);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult Document_evaluate1(Document* self , jb_String * expression, Node * contextNode, jb_Function * resolver);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult Document_evaluate2(Document* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type);

/**
 * @brief Calls the `evaluate` method. 
*/
XPathResult Document_evaluate3(Document* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type, XPathResult * result);

/**
 * @brief Gets the `onbeforexrselect` property. 
*/
jb_Any Document_onbeforexrselect(const Document *self);

/**
 * @brief Sets the `onbeforexrselect` property. 
*/
void Document_set_onbeforexrselect(Document* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
