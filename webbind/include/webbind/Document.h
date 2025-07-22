#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

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
typedef struct Document Document;
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
typedef struct Animation Animation;
typedef struct XPathExpression XPathExpression;
typedef struct XPathResult XPathResult;
typedef struct ShadowRoot ShadowRoot;
typedef struct DOMPointInit DOMPointInit;
typedef struct DOMQuadInit DOMQuadInit;


typedef struct {
  em_Val inner;
} CaretPositionFromPointOptions;


DECLARE_EMLITE_TYPE(CaretPositionFromPointOptions, em_Val);

jb_Sequence CaretPositionFromPointOptions_shadowRoots( const CaretPositionFromPointOptions *self);

void CaretPositionFromPointOptions_set_shadowRoots(CaretPositionFromPointOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} BoxQuadOptions;


DECLARE_EMLITE_TYPE(BoxQuadOptions, em_Val);

CSSBoxType BoxQuadOptions_box( const BoxQuadOptions *self);

void BoxQuadOptions_set_box(BoxQuadOptions* self, const CSSBoxType* value);

jb_Any BoxQuadOptions_relativeTo( const BoxQuadOptions *self);

void BoxQuadOptions_set_relativeTo(BoxQuadOptions* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} DOMQuadInit;


DECLARE_EMLITE_TYPE(DOMQuadInit, em_Val);

DOMPointInit DOMQuadInit_p1( const DOMQuadInit *self);

void DOMQuadInit_set_p1(DOMQuadInit* self, const DOMPointInit* value);

DOMPointInit DOMQuadInit_p2( const DOMQuadInit *self);

void DOMQuadInit_set_p2(DOMQuadInit* self, const DOMPointInit* value);

DOMPointInit DOMQuadInit_p3( const DOMQuadInit *self);

void DOMQuadInit_set_p3(DOMQuadInit* self, const DOMPointInit* value);

DOMPointInit DOMQuadInit_p4( const DOMQuadInit *self);

void DOMQuadInit_set_p4(DOMQuadInit* self, const DOMPointInit* value);
typedef struct {
  em_Val inner;
} ConvertCoordinateOptions;


DECLARE_EMLITE_TYPE(ConvertCoordinateOptions, em_Val);

CSSBoxType ConvertCoordinateOptions_fromBox( const ConvertCoordinateOptions *self);

void ConvertCoordinateOptions_set_fromBox(ConvertCoordinateOptions* self, const CSSBoxType* value);

CSSBoxType ConvertCoordinateOptions_toBox( const ConvertCoordinateOptions *self);

void ConvertCoordinateOptions_set_toBox(ConvertCoordinateOptions* self, const CSSBoxType* value);
typedef struct {
  Node inner;
} Document;


DECLARE_EMLITE_TYPE(Document, Node);

Document Document_new();

DOMImplementation Document_implementation( const Document *self);

jb_USVString Document_URL( const Document *self);

jb_USVString Document_documentURI( const Document *self);

jb_DOMString Document_compatMode( const Document *self);

jb_DOMString Document_characterSet( const Document *self);

jb_DOMString Document_charset( const Document *self);

jb_DOMString Document_inputEncoding( const Document *self);

jb_DOMString Document_contentType( const Document *self);

DocumentType Document_doctype( const Document *self);

Element Document_documentElement( const Document *self);

HTMLCollection Document_getElementsByTagName(Document* self , const jb_DOMString* qualifiedName);

HTMLCollection Document_getElementsByTagNameNS(Document* self , const jb_DOMString* namespace_, const jb_DOMString* localName);

HTMLCollection Document_getElementsByClassName(Document* self , const jb_DOMString* classNames);

Element Document_createElement(Document* self , const jb_DOMString* localName);

Element Document_createElement(Document* self , const jb_DOMString* localName, const jb_Any* options);

Element Document_createElementNS(Document* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName);

Element Document_createElementNS(Document* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName, const jb_Any* options);

DocumentFragment Document_createDocumentFragment(Document* self );

Text Document_createTextNode(Document* self , const jb_DOMString* data);

CDATASection Document_createCDATASection(Document* self , const jb_DOMString* data);

Comment Document_createComment(Document* self , const jb_DOMString* data);

ProcessingInstruction Document_createProcessingInstruction(Document* self , const jb_DOMString* target, const jb_DOMString* data);

Node Document_importNode(Document* self , const Node* node);

Node Document_importNode(Document* self , const Node* node, const jb_Any* options);

Node Document_adoptNode(Document* self , const Node* node);

Attr Document_createAttribute(Document* self , const jb_DOMString* localName);

Attr Document_createAttributeNS(Document* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName);

Event Document_createEvent(Document* self , const jb_DOMString* interface);

Range Document_createRange(Document* self );

NodeIterator Document_createNodeIterator(Document* self , const Node* root);

NodeIterator Document_createNodeIterator(Document* self , const Node* root, unsigned long whatToShow);

NodeIterator Document_createNodeIterator(Document* self , const Node* root, unsigned long whatToShow, const jb_Function* filter);

TreeWalker Document_createTreeWalker(Document* self , const Node* root);

TreeWalker Document_createTreeWalker(Document* self , const Node* root, unsigned long whatToShow);

TreeWalker Document_createTreeWalker(Document* self , const Node* root, unsigned long whatToShow, const jb_Function* filter);

SVGSVGElement Document_rootElement( const Document *self);

NamedFlowMap Document_namedFlows( const Document *self);

ViewTransition Document_startViewTransition(Document* self );

ViewTransition Document_startViewTransition(Document* self , const jb_Any* callbackOptions);

Element Document_elementFromPoint(Document* self , double x, double y);

jb_Sequence Document_elementsFromPoint(Document* self , double x, double y);

CaretPosition Document_caretPositionFromPoint(Document* self , double x, double y);

CaretPosition Document_caretPositionFromPoint(Document* self , double x, double y, const CaretPositionFromPointOptions* options);

Element Document_scrollingElement( const Document *self);

FontMetrics Document_measureElement(Document* self , const Element* element);

FontMetrics Document_measureText(Document* self , const jb_DOMString* text, const StylePropertyMapReadOnly* styleMap);

bool Document_fullscreenEnabled( const Document *self);

bool Document_fullscreen( const Document *self);

jb_Promise Document_exitFullscreen(Document* self );

jb_Any Document_onfullscreenchange( const Document *self);

void Document_set_onfullscreenchange(Document* self, const jb_Any* value);

jb_Any Document_onfullscreenerror( const Document *self);

void Document_set_onfullscreenerror(Document* self, const jb_Any* value);

Document Document_parseHTMLUnsafe(Document* self , const jb_Any* html);

jb_Any Document_location( const Document *self);

jb_USVString Document_domain( const Document *self);

void Document_set_domain(Document* self, const jb_USVString* value);

jb_USVString Document_referrer( const Document *self);

jb_USVString Document_cookie( const Document *self);

void Document_set_cookie(Document* self, const jb_USVString* value);

jb_DOMString Document_lastModified( const Document *self);

DocumentReadyState Document_readyState( const Document *self);

jb_DOMString Document_title( const Document *self);

void Document_set_title(Document* self, const jb_DOMString* value);

jb_DOMString Document_dir( const Document *self);

void Document_set_dir(Document* self, const jb_DOMString* value);

HTMLElement Document_body( const Document *self);

void Document_set_body(Document* self, const HTMLElement* value);

HTMLHeadElement Document_head( const Document *self);

HTMLCollection Document_images( const Document *self);

HTMLCollection Document_embeds( const Document *self);

HTMLCollection Document_plugins( const Document *self);

HTMLCollection Document_links( const Document *self);

HTMLCollection Document_forms( const Document *self);

HTMLCollection Document_scripts( const Document *self);

NodeList Document_getElementsByName(Document* self , const jb_DOMString* elementName);

jb_Any Document_currentScript( const Document *self);

jb_Any Document_open(Document* self , const jb_USVString* url, const jb_DOMString* name, const jb_DOMString* features);

jb_Undefined Document_close(Document* self );

jb_Undefined Document_write(Document* self , const jb_Any* text);

jb_Undefined Document_writeln(Document* self , const jb_Any* text);

jb_Any Document_defaultView( const Document *self);

bool Document_hasFocus(Document* self );

jb_DOMString Document_designMode( const Document *self);

void Document_set_designMode(Document* self, const jb_DOMString* value);

bool Document_execCommand(Document* self , const jb_DOMString* commandId);

bool Document_execCommand(Document* self , const jb_DOMString* commandId, bool showUI);

bool Document_execCommand(Document* self , const jb_DOMString* commandId, bool showUI, const jb_DOMString* value);

bool Document_queryCommandEnabled(Document* self , const jb_DOMString* commandId);

bool Document_queryCommandIndeterm(Document* self , const jb_DOMString* commandId);

bool Document_queryCommandState(Document* self , const jb_DOMString* commandId);

bool Document_queryCommandSupported(Document* self , const jb_DOMString* commandId);

jb_DOMString Document_queryCommandValue(Document* self , const jb_DOMString* commandId);

bool Document_hidden( const Document *self);

DocumentVisibilityState Document_visibilityState( const Document *self);

jb_Any Document_onreadystatechange( const Document *self);

void Document_set_onreadystatechange(Document* self, const jb_Any* value);

jb_Any Document_onvisibilitychange( const Document *self);

void Document_set_onvisibilitychange(Document* self, const jb_Any* value);

jb_DOMString Document_fgColor( const Document *self);

void Document_set_fgColor(Document* self, const jb_DOMString* value);

jb_DOMString Document_linkColor( const Document *self);

void Document_set_linkColor(Document* self, const jb_DOMString* value);

jb_DOMString Document_vlinkColor( const Document *self);

void Document_set_vlinkColor(Document* self, const jb_DOMString* value);

jb_DOMString Document_alinkColor( const Document *self);

void Document_set_alinkColor(Document* self, const jb_DOMString* value);

jb_DOMString Document_bgColor( const Document *self);

void Document_set_bgColor(Document* self, const jb_DOMString* value);

HTMLCollection Document_anchors( const Document *self);

HTMLCollection Document_applets( const Document *self);

jb_Undefined Document_clear(Document* self );

jb_Undefined Document_captureEvents(Document* self );

jb_Undefined Document_releaseEvents(Document* self );

HTMLAllCollection Document_all( const Document *self);

jb_Any Document_onfreeze( const Document *self);

void Document_set_onfreeze(Document* self, const jb_Any* value);

jb_Any Document_onresume( const Document *self);

void Document_set_onresume(Document* self, const jb_Any* value);

bool Document_wasDiscarded( const Document *self);

PermissionsPolicy Document_permissionsPolicy( const Document *self);

bool Document_pictureInPictureEnabled( const Document *self);

jb_Promise Document_exitPictureInPicture(Document* self );

jb_Any Document_onpointerlockchange( const Document *self);

void Document_set_onpointerlockchange(Document* self, const jb_Any* value);

jb_Any Document_onpointerlockerror( const Document *self);

void Document_set_onpointerlockerror(Document* self, const jb_Any* value);

jb_Undefined Document_exitPointerLock(Document* self );

bool Document_prerendering( const Document *self);

jb_Any Document_onprerenderingchange( const Document *self);

void Document_set_onprerenderingchange(Document* self, const jb_Any* value);

jb_Promise Document_requestStorageAccessFor(Document* self , const jb_USVString* requestedOrigin);

jb_Promise Document_hasUnpartitionedCookieAccess(Document* self );

FragmentDirective Document_fragmentDirective( const Document *self);

Selection Document_getSelection(Document* self );

jb_Promise Document_hasStorageAccess(Document* self );

jb_Promise Document_requestStorageAccess(Document* self );

jb_Promise Document_hasPrivateToken(Document* self , const jb_USVString* issuer);

jb_Promise Document_hasRedemptionRecord(Document* self , const jb_USVString* issuer);

DocumentTimeline Document_timeline( const Document *self);

FontFaceSet Document_fonts( const Document *self);

jb_Sequence Document_getBoxQuads(Document* self );

jb_Sequence Document_getBoxQuads(Document* self , const BoxQuadOptions* options);

DOMQuad Document_convertQuadFromNode(Document* self , const DOMQuadInit* quad, const jb_Any* from);

DOMQuad Document_convertQuadFromNode(Document* self , const DOMQuadInit* quad, const jb_Any* from, const ConvertCoordinateOptions* options);

DOMQuad Document_convertRectFromNode(Document* self , const DOMRectReadOnly* rect, const jb_Any* from);

DOMQuad Document_convertRectFromNode(Document* self , const DOMRectReadOnly* rect, const jb_Any* from, const ConvertCoordinateOptions* options);

DOMPoint Document_convertPointFromNode(Document* self , const DOMPointInit* point, const jb_Any* from);

DOMPoint Document_convertPointFromNode(Document* self , const DOMPointInit* point, const jb_Any* from, const ConvertCoordinateOptions* options);

Element Document_getElementById(Document* self , const jb_DOMString* elementId);

jb_Sequence Document_getAnimations(Document* self );

HTMLCollection Document_children( const Document *self);

Element Document_firstElementChild( const Document *self);

Element Document_lastElementChild( const Document *self);

unsigned long Document_childElementCount( const Document *self);

jb_Undefined Document_prepend(Document* self , const jb_Any* nodes);

jb_Undefined Document_append(Document* self , const jb_Any* nodes);

jb_Undefined Document_replaceChildren(Document* self , const jb_Any* nodes);

jb_Undefined Document_moveBefore(Document* self , const Node* node, const Node* child);

Element Document_querySelector(Document* self , const jb_DOMString* selectors);

NodeList Document_querySelectorAll(Document* self , const jb_DOMString* selectors);

XPathExpression Document_createExpression(Document* self , const jb_DOMString* expression);

XPathExpression Document_createExpression(Document* self , const jb_DOMString* expression, const jb_Function* resolver);

Node Document_createNSResolver(Document* self , const Node* nodeResolver);

XPathResult Document_evaluate(Document* self , const jb_DOMString* expression, const Node* contextNode);

XPathResult Document_evaluate(Document* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver);

XPathResult Document_evaluate(Document* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver, unsigned short type);

XPathResult Document_evaluate(Document* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver, unsigned short type, const XPathResult* result);

jb_Any Document_onbeforexrselect( const Document *self);

void Document_set_onbeforexrselect(Document* self, const jb_Any* value);
