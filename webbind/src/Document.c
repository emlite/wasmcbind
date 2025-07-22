#include <webbind/Document.h>
#include <webbind/DOMImplementation.h>
#include <webbind/DocumentType.h>
#include <webbind/Element.h>
#include <webbind/HTMLCollection.h>
#include <webbind/DocumentFragment.h>
#include <webbind/Text.h>
#include <webbind/CDATASection.h>
#include <webbind/Comment.h>
#include <webbind/ProcessingInstruction.h>
#include <webbind/Attr.h>
#include <webbind/Event.h>
#include <webbind/Range.h>
#include <webbind/NodeIterator.h>
#include <webbind/TreeWalker.h>
#include <webbind/SVGSVGElement.h>
#include <webbind/NamedFlowMap.h>
#include <webbind/ViewTransition.h>
#include <webbind/CaretPosition.h>
#include <webbind/FontMetrics.h>
#include <webbind/StylePropertyMapReadOnly.h>
#include <webbind/Location.h>
#include <webbind/HTMLElement.h>
#include <webbind/HTMLHeadElement.h>
#include <webbind/NodeList.h>
#include <webbind/HTMLAllCollection.h>
#include <webbind/PermissionsPolicy.h>
#include <webbind/FragmentDirective.h>
#include <webbind/Selection.h>
#include <webbind/DocumentTimeline.h>
#include <webbind/FontFaceSet.h>
#include <webbind/DOMQuad.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPoint.h>
#include <webbind/SVGGeometryElement.h>
#include <webbind/Animation.h>
#include <webbind/XPathExpression.h>
#include <webbind/XPathResult.h>


DEFINE_EMLITE_TYPE(CaretPositionFromPointOptions, em_Val);


jb_Sequence CaretPositionFromPointOptions_shadowRoots(const CaretPositionFromPointOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "shadowRoots"));
}


void CaretPositionFromPointOptions_set_shadowRoots(CaretPositionFromPointOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "shadowRoots", value);
}

DEFINE_EMLITE_TYPE(BoxQuadOptions, em_Val);


CSSBoxType BoxQuadOptions_box(const BoxQuadOptions *self) {
    return em_Val_as(CSSBoxType, em_Val_get(em_Val_as_val(self->inner), "box"));
}


void BoxQuadOptions_set_box(BoxQuadOptions* self, const CSSBoxType* value) {
    em_Val_set(em_Val_as_val(self->inner), "box", value);
}


jb_Any BoxQuadOptions_relativeTo(const BoxQuadOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "relativeTo"));
}


void BoxQuadOptions_set_relativeTo(BoxQuadOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "relativeTo", value);
}

DEFINE_EMLITE_TYPE(DOMQuadInit, em_Val);


DOMPointInit DOMQuadInit_p1(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), "p1"));
}


void DOMQuadInit_set_p1(DOMQuadInit* self, const DOMPointInit* value) {
    em_Val_set(em_Val_as_val(self->inner), "p1", value);
}


DOMPointInit DOMQuadInit_p2(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), "p2"));
}


void DOMQuadInit_set_p2(DOMQuadInit* self, const DOMPointInit* value) {
    em_Val_set(em_Val_as_val(self->inner), "p2", value);
}


DOMPointInit DOMQuadInit_p3(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), "p3"));
}


void DOMQuadInit_set_p3(DOMQuadInit* self, const DOMPointInit* value) {
    em_Val_set(em_Val_as_val(self->inner), "p3", value);
}


DOMPointInit DOMQuadInit_p4(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), "p4"));
}


void DOMQuadInit_set_p4(DOMQuadInit* self, const DOMPointInit* value) {
    em_Val_set(em_Val_as_val(self->inner), "p4", value);
}

DEFINE_EMLITE_TYPE(ConvertCoordinateOptions, em_Val);


CSSBoxType ConvertCoordinateOptions_fromBox(const ConvertCoordinateOptions *self) {
    return em_Val_as(CSSBoxType, em_Val_get(em_Val_as_val(self->inner), "fromBox"));
}


void ConvertCoordinateOptions_set_fromBox(ConvertCoordinateOptions* self, const CSSBoxType* value) {
    em_Val_set(em_Val_as_val(self->inner), "fromBox", value);
}


CSSBoxType ConvertCoordinateOptions_toBox(const ConvertCoordinateOptions *self) {
    return em_Val_as(CSSBoxType, em_Val_get(em_Val_as_val(self->inner), "toBox"));
}


void ConvertCoordinateOptions_set_toBox(ConvertCoordinateOptions* self, const CSSBoxType* value) {
    em_Val_set(em_Val_as_val(self->inner), "toBox", value);
}

DEFINE_EMLITE_TYPE(Document, Node);


Document Document_new() : Node(em_Val_global("Document").new_()) {
        return Document(em_Val_new(em_Val_global("Document", ));
      }


DOMImplementation Document_implementation(const Document *self) {
    return em_Val_as(DOMImplementation, em_Val_get(Node_as_val(self->inner), "implementation"));
}


jb_USVString Document_URL(const Document *self) {
    return em_Val_as(jb_USVString, em_Val_get(Node_as_val(self->inner), "URL"));
}


jb_USVString Document_documentURI(const Document *self) {
    return em_Val_as(jb_USVString, em_Val_get(Node_as_val(self->inner), "documentURI"));
}


jb_DOMString Document_compatMode(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "compatMode"));
}


jb_DOMString Document_characterSet(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "characterSet"));
}


jb_DOMString Document_charset(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "charset"));
}


jb_DOMString Document_inputEncoding(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "inputEncoding"));
}


jb_DOMString Document_contentType(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "contentType"));
}


DocumentType Document_doctype(const Document *self) {
    return em_Val_as(DocumentType, em_Val_get(Node_as_val(self->inner), "doctype"));
}


Element Document_documentElement(const Document *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "documentElement"));
}


HTMLCollection Document_getElementsByTagName(Document* self , const jb_DOMString* qualifiedName) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByTagName", em_Val_from(qualifiedName)));
}


HTMLCollection Document_getElementsByTagNameNS(Document* self , const jb_DOMString* namespace_, const jb_DOMString* localName) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByTagNameNS", em_Val_from(namespace_), em_Val_from(localName)));
}


HTMLCollection Document_getElementsByClassName(Document* self , const jb_DOMString* classNames) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByClassName", em_Val_from(classNames)));
}


Element Document_createElement(Document* self , const jb_DOMString* localName) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "createElement", em_Val_from(localName)));
}


Element Document_createElement(Document* self , const jb_DOMString* localName, const jb_Any* options) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "createElement", em_Val_from(localName), em_Val_from(options)));
}


Element Document_createElementNS(Document* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "createElementNS", em_Val_from(namespace_), em_Val_from(qualifiedName)));
}


Element Document_createElementNS(Document* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName, const jb_Any* options) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "createElementNS", em_Val_from(namespace_), em_Val_from(qualifiedName), em_Val_from(options)));
}


DocumentFragment Document_createDocumentFragment(Document* self ) {
    return em_Val_as(DocumentFragment, em_Val_call(Node_as_val(self->inner), "createDocumentFragment"));
}


Text Document_createTextNode(Document* self , const jb_DOMString* data) {
    return em_Val_as(Text, em_Val_call(Node_as_val(self->inner), "createTextNode", em_Val_from(data)));
}


CDATASection Document_createCDATASection(Document* self , const jb_DOMString* data) {
    return em_Val_as(CDATASection, em_Val_call(Node_as_val(self->inner), "createCDATASection", em_Val_from(data)));
}


Comment Document_createComment(Document* self , const jb_DOMString* data) {
    return em_Val_as(Comment, em_Val_call(Node_as_val(self->inner), "createComment", em_Val_from(data)));
}


ProcessingInstruction Document_createProcessingInstruction(Document* self , const jb_DOMString* target, const jb_DOMString* data) {
    return em_Val_as(ProcessingInstruction, em_Val_call(Node_as_val(self->inner), "createProcessingInstruction", em_Val_from(target), em_Val_from(data)));
}


Node Document_importNode(Document* self , const Node* node) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "importNode", em_Val_from(node)));
}


Node Document_importNode(Document* self , const Node* node, const jb_Any* options) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "importNode", em_Val_from(node), em_Val_from(options)));
}


Node Document_adoptNode(Document* self , const Node* node) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "adoptNode", em_Val_from(node)));
}


Attr Document_createAttribute(Document* self , const jb_DOMString* localName) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "createAttribute", em_Val_from(localName)));
}


Attr Document_createAttributeNS(Document* self , const jb_DOMString* namespace_, const jb_DOMString* qualifiedName) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "createAttributeNS", em_Val_from(namespace_), em_Val_from(qualifiedName)));
}


Event Document_createEvent(Document* self , const jb_DOMString* interface) {
    return em_Val_as(Event, em_Val_call(Node_as_val(self->inner), "createEvent", em_Val_from(interface)));
}


Range Document_createRange(Document* self ) {
    return em_Val_as(Range, em_Val_call(Node_as_val(self->inner), "createRange"));
}


NodeIterator Document_createNodeIterator(Document* self , const Node* root) {
    return em_Val_as(NodeIterator, em_Val_call(Node_as_val(self->inner), "createNodeIterator", em_Val_from(root)));
}


NodeIterator Document_createNodeIterator(Document* self , const Node* root, unsigned long whatToShow) {
    return em_Val_as(NodeIterator, em_Val_call(Node_as_val(self->inner), "createNodeIterator", em_Val_from(root), em_Val_from(whatToShow)));
}


NodeIterator Document_createNodeIterator(Document* self , const Node* root, unsigned long whatToShow, const jb_Function* filter) {
    return em_Val_as(NodeIterator, em_Val_call(Node_as_val(self->inner), "createNodeIterator", em_Val_from(root), em_Val_from(whatToShow), em_Val_from(filter)));
}


TreeWalker Document_createTreeWalker(Document* self , const Node* root) {
    return em_Val_as(TreeWalker, em_Val_call(Node_as_val(self->inner), "createTreeWalker", em_Val_from(root)));
}


TreeWalker Document_createTreeWalker(Document* self , const Node* root, unsigned long whatToShow) {
    return em_Val_as(TreeWalker, em_Val_call(Node_as_val(self->inner), "createTreeWalker", em_Val_from(root), em_Val_from(whatToShow)));
}


TreeWalker Document_createTreeWalker(Document* self , const Node* root, unsigned long whatToShow, const jb_Function* filter) {
    return em_Val_as(TreeWalker, em_Val_call(Node_as_val(self->inner), "createTreeWalker", em_Val_from(root), em_Val_from(whatToShow), em_Val_from(filter)));
}


SVGSVGElement Document_rootElement(const Document *self) {
    return em_Val_as(SVGSVGElement, em_Val_get(Node_as_val(self->inner), "rootElement"));
}


NamedFlowMap Document_namedFlows(const Document *self) {
    return em_Val_as(NamedFlowMap, em_Val_get(Node_as_val(self->inner), "namedFlows"));
}


ViewTransition Document_startViewTransition(Document* self ) {
    return em_Val_as(ViewTransition, em_Val_call(Node_as_val(self->inner), "startViewTransition"));
}


ViewTransition Document_startViewTransition(Document* self , const jb_Any* callbackOptions) {
    return em_Val_as(ViewTransition, em_Val_call(Node_as_val(self->inner), "startViewTransition", em_Val_from(callbackOptions)));
}


Element Document_elementFromPoint(Document* self , double x, double y) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "elementFromPoint", em_Val_from(x), em_Val_from(y)));
}


jb_Sequence Document_elementsFromPoint(Document* self , double x, double y) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "elementsFromPoint", em_Val_from(x), em_Val_from(y)));
}


CaretPosition Document_caretPositionFromPoint(Document* self , double x, double y) {
    return em_Val_as(CaretPosition, em_Val_call(Node_as_val(self->inner), "caretPositionFromPoint", em_Val_from(x), em_Val_from(y)));
}


CaretPosition Document_caretPositionFromPoint(Document* self , double x, double y, const CaretPositionFromPointOptions* options) {
    return em_Val_as(CaretPosition, em_Val_call(Node_as_val(self->inner), "caretPositionFromPoint", em_Val_from(x), em_Val_from(y), em_Val_from(options)));
}


Element Document_scrollingElement(const Document *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "scrollingElement"));
}


FontMetrics Document_measureElement(Document* self , const Element* element) {
    return em_Val_as(FontMetrics, em_Val_call(Node_as_val(self->inner), "measureElement", em_Val_from(element)));
}


FontMetrics Document_measureText(Document* self , const jb_DOMString* text, const StylePropertyMapReadOnly* styleMap) {
    return em_Val_as(FontMetrics, em_Val_call(Node_as_val(self->inner), "measureText", em_Val_from(text), em_Val_from(styleMap)));
}


bool Document_fullscreenEnabled(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), "fullscreenEnabled"));
}


bool Document_fullscreen(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), "fullscreen"));
}


jb_Promise Document_exitFullscreen(Document* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "exitFullscreen"));
}


jb_Any Document_onfullscreenchange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onfullscreenchange"));
}


void Document_set_onfullscreenchange(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onfullscreenchange", value);
}


jb_Any Document_onfullscreenerror(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onfullscreenerror"));
}


void Document_set_onfullscreenerror(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onfullscreenerror", value);
}


Document Document_parseHTMLUnsafe(Document* self , const jb_Any* html) {
    return em_Val_as(Document, em_Val_call(em_Val_global("document"), "parseHTMLUnsafe", em_Val_from(html)));
}


jb_Any Document_location(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "location"));
}


jb_USVString Document_domain(const Document *self) {
    return em_Val_as(jb_USVString, em_Val_get(Node_as_val(self->inner), "domain"));
}


void Document_set_domain(Document* self, const jb_USVString* value) {
    em_Val_set(Node_as_val(self->inner), "domain", value);
}


jb_USVString Document_referrer(const Document *self) {
    return em_Val_as(jb_USVString, em_Val_get(Node_as_val(self->inner), "referrer"));
}


jb_USVString Document_cookie(const Document *self) {
    return em_Val_as(jb_USVString, em_Val_get(Node_as_val(self->inner), "cookie"));
}


void Document_set_cookie(Document* self, const jb_USVString* value) {
    em_Val_set(Node_as_val(self->inner), "cookie", value);
}


jb_DOMString Document_lastModified(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "lastModified"));
}


DocumentReadyState Document_readyState(const Document *self) {
    return em_Val_as(DocumentReadyState, em_Val_get(Node_as_val(self->inner), "readyState"));
}


jb_DOMString Document_title(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "title"));
}


void Document_set_title(Document* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "title", value);
}


jb_DOMString Document_dir(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "dir"));
}


void Document_set_dir(Document* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "dir", value);
}


HTMLElement Document_body(const Document *self) {
    return em_Val_as(HTMLElement, em_Val_get(Node_as_val(self->inner), "body"));
}


void Document_set_body(Document* self, const HTMLElement* value) {
    em_Val_set(Node_as_val(self->inner), "body", value);
}


HTMLHeadElement Document_head(const Document *self) {
    return em_Val_as(HTMLHeadElement, em_Val_get(Node_as_val(self->inner), "head"));
}


HTMLCollection Document_images(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "images"));
}


HTMLCollection Document_embeds(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "embeds"));
}


HTMLCollection Document_plugins(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "plugins"));
}


HTMLCollection Document_links(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "links"));
}


HTMLCollection Document_forms(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "forms"));
}


HTMLCollection Document_scripts(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "scripts"));
}


NodeList Document_getElementsByName(Document* self , const jb_DOMString* elementName) {
    return em_Val_as(NodeList, em_Val_call(Node_as_val(self->inner), "getElementsByName", em_Val_from(elementName)));
}


jb_Any Document_currentScript(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "currentScript"));
}


jb_Any Document_open(Document* self , const jb_USVString* url, const jb_DOMString* name, const jb_DOMString* features) {
    return em_Val_as(jb_Any, em_Val_call(Node_as_val(self->inner), "open", em_Val_from(url), em_Val_from(name), em_Val_from(features)));
}


jb_Undefined Document_close(Document* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "close"));
}


jb_Undefined Document_write(Document* self , const jb_Any* text) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "write", em_Val_from(text)));
}


jb_Undefined Document_writeln(Document* self , const jb_Any* text) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "writeln", em_Val_from(text)));
}


jb_Any Document_defaultView(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "defaultView"));
}


bool Document_hasFocus(Document* self ) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "hasFocus"));
}


jb_DOMString Document_designMode(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "designMode"));
}


void Document_set_designMode(Document* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "designMode", value);
}


bool Document_execCommand(Document* self , const jb_DOMString* commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "execCommand", em_Val_from(commandId)));
}


bool Document_execCommand(Document* self , const jb_DOMString* commandId, bool showUI) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "execCommand", em_Val_from(commandId), em_Val_from(showUI)));
}


bool Document_execCommand(Document* self , const jb_DOMString* commandId, bool showUI, const jb_DOMString* value) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "execCommand", em_Val_from(commandId), em_Val_from(showUI), em_Val_from(value)));
}


bool Document_queryCommandEnabled(Document* self , const jb_DOMString* commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "queryCommandEnabled", em_Val_from(commandId)));
}


bool Document_queryCommandIndeterm(Document* self , const jb_DOMString* commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "queryCommandIndeterm", em_Val_from(commandId)));
}


bool Document_queryCommandState(Document* self , const jb_DOMString* commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "queryCommandState", em_Val_from(commandId)));
}


bool Document_queryCommandSupported(Document* self , const jb_DOMString* commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "queryCommandSupported", em_Val_from(commandId)));
}


jb_DOMString Document_queryCommandValue(Document* self , const jb_DOMString* commandId) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "queryCommandValue", em_Val_from(commandId)));
}


bool Document_hidden(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), "hidden"));
}


DocumentVisibilityState Document_visibilityState(const Document *self) {
    return em_Val_as(DocumentVisibilityState, em_Val_get(Node_as_val(self->inner), "visibilityState"));
}


jb_Any Document_onreadystatechange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onreadystatechange"));
}


void Document_set_onreadystatechange(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onreadystatechange", value);
}


jb_Any Document_onvisibilitychange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onvisibilitychange"));
}


void Document_set_onvisibilitychange(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onvisibilitychange", value);
}


jb_DOMString Document_fgColor(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "fgColor"));
}


void Document_set_fgColor(Document* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "fgColor", value);
}


jb_DOMString Document_linkColor(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "linkColor"));
}


void Document_set_linkColor(Document* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "linkColor", value);
}


jb_DOMString Document_vlinkColor(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "vlinkColor"));
}


void Document_set_vlinkColor(Document* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "vlinkColor", value);
}


jb_DOMString Document_alinkColor(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "alinkColor"));
}


void Document_set_alinkColor(Document* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "alinkColor", value);
}


jb_DOMString Document_bgColor(const Document *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "bgColor"));
}


void Document_set_bgColor(Document* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "bgColor", value);
}


HTMLCollection Document_anchors(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "anchors"));
}


HTMLCollection Document_applets(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "applets"));
}


jb_Undefined Document_clear(Document* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "clear"));
}


jb_Undefined Document_captureEvents(Document* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "captureEvents"));
}


jb_Undefined Document_releaseEvents(Document* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "releaseEvents"));
}


HTMLAllCollection Document_all(const Document *self) {
    return em_Val_as(HTMLAllCollection, em_Val_get(Node_as_val(self->inner), "all"));
}


jb_Any Document_onfreeze(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onfreeze"));
}


void Document_set_onfreeze(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onfreeze", value);
}


jb_Any Document_onresume(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onresume"));
}


void Document_set_onresume(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onresume", value);
}


bool Document_wasDiscarded(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), "wasDiscarded"));
}


PermissionsPolicy Document_permissionsPolicy(const Document *self) {
    return em_Val_as(PermissionsPolicy, em_Val_get(Node_as_val(self->inner), "permissionsPolicy"));
}


bool Document_pictureInPictureEnabled(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), "pictureInPictureEnabled"));
}


jb_Promise Document_exitPictureInPicture(Document* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "exitPictureInPicture"));
}


jb_Any Document_onpointerlockchange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onpointerlockchange"));
}


void Document_set_onpointerlockchange(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onpointerlockchange", value);
}


jb_Any Document_onpointerlockerror(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onpointerlockerror"));
}


void Document_set_onpointerlockerror(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onpointerlockerror", value);
}


jb_Undefined Document_exitPointerLock(Document* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "exitPointerLock"));
}


bool Document_prerendering(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), "prerendering"));
}


jb_Any Document_onprerenderingchange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onprerenderingchange"));
}


void Document_set_onprerenderingchange(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onprerenderingchange", value);
}


jb_Promise Document_requestStorageAccessFor(Document* self , const jb_USVString* requestedOrigin) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestStorageAccessFor", em_Val_from(requestedOrigin)));
}


jb_Promise Document_hasUnpartitionedCookieAccess(Document* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "hasUnpartitionedCookieAccess"));
}


FragmentDirective Document_fragmentDirective(const Document *self) {
    return em_Val_as(FragmentDirective, em_Val_get(Node_as_val(self->inner), "fragmentDirective"));
}


Selection Document_getSelection(Document* self ) {
    return em_Val_as(Selection, em_Val_call(Node_as_val(self->inner), "getSelection"));
}


jb_Promise Document_hasStorageAccess(Document* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "hasStorageAccess"));
}


jb_Promise Document_requestStorageAccess(Document* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestStorageAccess"));
}


jb_Promise Document_hasPrivateToken(Document* self , const jb_USVString* issuer) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "hasPrivateToken", em_Val_from(issuer)));
}


jb_Promise Document_hasRedemptionRecord(Document* self , const jb_USVString* issuer) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "hasRedemptionRecord", em_Val_from(issuer)));
}


DocumentTimeline Document_timeline(const Document *self) {
    return em_Val_as(DocumentTimeline, em_Val_get(Node_as_val(self->inner), "timeline"));
}


FontFaceSet Document_fonts(const Document *self) {
    return em_Val_as(FontFaceSet, em_Val_get(Node_as_val(self->inner), "fonts"));
}


jb_Sequence Document_getBoxQuads(Document* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getBoxQuads"));
}


jb_Sequence Document_getBoxQuads(Document* self , const BoxQuadOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getBoxQuads", em_Val_from(options)));
}


DOMQuad Document_convertQuadFromNode(Document* self , const DOMQuadInit* quad, const jb_Any* from) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from)));
}


DOMQuad Document_convertQuadFromNode(Document* self , const DOMQuadInit* quad, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from), em_Val_from(options)));
}


DOMQuad Document_convertRectFromNode(Document* self , const DOMRectReadOnly* rect, const jb_Any* from) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from)));
}


DOMQuad Document_convertRectFromNode(Document* self , const DOMRectReadOnly* rect, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from), em_Val_from(options)));
}


DOMPoint Document_convertPointFromNode(Document* self , const DOMPointInit* point, const jb_Any* from) {
    return em_Val_as(DOMPoint, em_Val_call(Node_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from)));
}


DOMPoint Document_convertPointFromNode(Document* self , const DOMPointInit* point, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMPoint, em_Val_call(Node_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from), em_Val_from(options)));
}


Element Document_getElementById(Document* self , const jb_DOMString* elementId) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "getElementById", em_Val_from(elementId)));
}


jb_Sequence Document_getAnimations(Document* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(Node_as_val(self->inner), "getAnimations"));
}


HTMLCollection Document_children(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "children"));
}


Element Document_firstElementChild(const Document *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "firstElementChild"));
}


Element Document_lastElementChild(const Document *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "lastElementChild"));
}


unsigned long Document_childElementCount(const Document *self) {
    return em_Val_as(unsigned long, em_Val_get(Node_as_val(self->inner), "childElementCount"));
}


jb_Undefined Document_prepend(Document* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "prepend", em_Val_from(nodes)));
}


jb_Undefined Document_append(Document* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "append", em_Val_from(nodes)));
}


jb_Undefined Document_replaceChildren(Document* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceChildren", em_Val_from(nodes)));
}


jb_Undefined Document_moveBefore(Document* self , const Node* node, const Node* child) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "moveBefore", em_Val_from(node), em_Val_from(child)));
}


Element Document_querySelector(Document* self , const jb_DOMString* selectors) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "querySelector", em_Val_from(selectors)));
}


NodeList Document_querySelectorAll(Document* self , const jb_DOMString* selectors) {
    return em_Val_as(NodeList, em_Val_call(Node_as_val(self->inner), "querySelectorAll", em_Val_from(selectors)));
}


XPathExpression Document_createExpression(Document* self , const jb_DOMString* expression) {
    return em_Val_as(XPathExpression, em_Val_call(Node_as_val(self->inner), "createExpression", em_Val_from(expression)));
}


XPathExpression Document_createExpression(Document* self , const jb_DOMString* expression, const jb_Function* resolver) {
    return em_Val_as(XPathExpression, em_Val_call(Node_as_val(self->inner), "createExpression", em_Val_from(expression), em_Val_from(resolver)));
}


Node Document_createNSResolver(Document* self , const Node* nodeResolver) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "createNSResolver", em_Val_from(nodeResolver)));
}


XPathResult Document_evaluate(Document* self , const jb_DOMString* expression, const Node* contextNode) {
    return em_Val_as(XPathResult, em_Val_call(Node_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode)));
}


XPathResult Document_evaluate(Document* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver) {
    return em_Val_as(XPathResult, em_Val_call(Node_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver)));
}


XPathResult Document_evaluate(Document* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver, unsigned short type) {
    return em_Val_as(XPathResult, em_Val_call(Node_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver), em_Val_from(type)));
}


XPathResult Document_evaluate(Document* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver, unsigned short type, const XPathResult* result) {
    return em_Val_as(XPathResult, em_Val_call(Node_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver), em_Val_from(type), em_Val_from(result)));
}


jb_Any Document_onbeforexrselect(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), "onbeforexrselect"));
}


void Document_set_onbeforexrselect(Document* self, const jb_Any* value) {
    em_Val_set(Node_as_val(self->inner), "onbeforexrselect", value);
}

