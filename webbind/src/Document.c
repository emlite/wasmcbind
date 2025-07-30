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


jb_Array CaretPositionFromPointOptions_shadowRoots(const CaretPositionFromPointOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowRoots")));
}


void CaretPositionFromPointOptions_set_shadowRoots(CaretPositionFromPointOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowRoots"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(BoxQuadOptions, em_Val);


CSSBoxType BoxQuadOptions_box(const BoxQuadOptions *self) {
    return em_Val_as(CSSBoxType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("box")));
}


void BoxQuadOptions_set_box(BoxQuadOptions* self, CSSBoxType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("box"), em_Val_from(value));
}


jb_Any BoxQuadOptions_relativeTo(const BoxQuadOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("relativeTo")));
}


void BoxQuadOptions_set_relativeTo(BoxQuadOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("relativeTo"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(DOMQuadInit, em_Val);


DOMPointInit DOMQuadInit_p1(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p1")));
}


void DOMQuadInit_set_p1(DOMQuadInit* self, DOMPointInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("p1"), em_Val_from(value));
}


DOMPointInit DOMQuadInit_p2(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p2")));
}


void DOMQuadInit_set_p2(DOMQuadInit* self, DOMPointInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("p2"), em_Val_from(value));
}


DOMPointInit DOMQuadInit_p3(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p3")));
}


void DOMQuadInit_set_p3(DOMQuadInit* self, DOMPointInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("p3"), em_Val_from(value));
}


DOMPointInit DOMQuadInit_p4(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p4")));
}


void DOMQuadInit_set_p4(DOMQuadInit* self, DOMPointInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("p4"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ConvertCoordinateOptions, em_Val);


CSSBoxType ConvertCoordinateOptions_fromBox(const ConvertCoordinateOptions *self) {
    return em_Val_as(CSSBoxType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fromBox")));
}


void ConvertCoordinateOptions_set_fromBox(ConvertCoordinateOptions* self, CSSBoxType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fromBox"), em_Val_from(value));
}


CSSBoxType ConvertCoordinateOptions_toBox(const ConvertCoordinateOptions *self) {
    return em_Val_as(CSSBoxType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("toBox")));
}


void ConvertCoordinateOptions_set_toBox(ConvertCoordinateOptions* self, CSSBoxType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("toBox"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Document, Node);


Document Document_new() {
        em_Val vv = em_Val_new(em_Val_global("Document") );
        return Document_from_val(&vv);
      }


DOMImplementation Document_implementation(const Document *self) {
    return em_Val_as(DOMImplementation, em_Val_get(Node_as_val(self->inner), em_Val_from("implementation")));
}


jb_String Document_URL(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("URL")));
}


jb_String Document_documentURI(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("documentURI")));
}


jb_String Document_compatMode(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("compatMode")));
}


jb_String Document_characterSet(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("characterSet")));
}


jb_String Document_charset(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("charset")));
}


jb_String Document_inputEncoding(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("inputEncoding")));
}


jb_String Document_contentType(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("contentType")));
}


DocumentType Document_doctype(const Document *self) {
    return em_Val_as(DocumentType, em_Val_get(Node_as_val(self->inner), em_Val_from("doctype")));
}


Element Document_documentElement(const Document *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("documentElement")));
}


HTMLCollection Document_getElementsByTagName(Document* self , jb_String * qualifiedName) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByTagName", em_Val_from(qualifiedName)));
}


HTMLCollection Document_getElementsByTagNameNS(Document* self , jb_String * namespace_, jb_String * localName) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByTagNameNS", em_Val_from(namespace_), em_Val_from(localName)));
}


HTMLCollection Document_getElementsByClassName(Document* self , jb_String * classNames) {
    return em_Val_as(HTMLCollection, em_Val_call(Node_as_val(self->inner), "getElementsByClassName", em_Val_from(classNames)));
}


Element Document_createElement0(Document* self , jb_String * localName) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "createElement", em_Val_from(localName)));
}


Element Document_createElement1(Document* self , jb_String * localName, jb_Any * options) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "createElement", em_Val_from(localName), em_Val_from(options)));
}


Element Document_createElementNS0(Document* self , jb_String * namespace_, jb_String * qualifiedName) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "createElementNS", em_Val_from(namespace_), em_Val_from(qualifiedName)));
}


Element Document_createElementNS1(Document* self , jb_String * namespace_, jb_String * qualifiedName, jb_Any * options) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "createElementNS", em_Val_from(namespace_), em_Val_from(qualifiedName), em_Val_from(options)));
}


DocumentFragment Document_createDocumentFragment(Document* self ) {
    return em_Val_as(DocumentFragment, em_Val_call(Node_as_val(self->inner), "createDocumentFragment"));
}


Text Document_createTextNode(Document* self , jb_String * data) {
    return em_Val_as(Text, em_Val_call(Node_as_val(self->inner), "createTextNode", em_Val_from(data)));
}


CDATASection Document_createCDATASection(Document* self , jb_String * data) {
    return em_Val_as(CDATASection, em_Val_call(Node_as_val(self->inner), "createCDATASection", em_Val_from(data)));
}


Comment Document_createComment(Document* self , jb_String * data) {
    return em_Val_as(Comment, em_Val_call(Node_as_val(self->inner), "createComment", em_Val_from(data)));
}


ProcessingInstruction Document_createProcessingInstruction(Document* self , jb_String * target, jb_String * data) {
    return em_Val_as(ProcessingInstruction, em_Val_call(Node_as_val(self->inner), "createProcessingInstruction", em_Val_from(target), em_Val_from(data)));
}


Node Document_importNode0(Document* self , Node * node) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "importNode", em_Val_from(node)));
}


Node Document_importNode1(Document* self , Node * node, jb_Any * options) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "importNode", em_Val_from(node), em_Val_from(options)));
}


Node Document_adoptNode(Document* self , Node * node) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "adoptNode", em_Val_from(node)));
}


Attr Document_createAttribute(Document* self , jb_String * localName) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "createAttribute", em_Val_from(localName)));
}


Attr Document_createAttributeNS(Document* self , jb_String * namespace_, jb_String * qualifiedName) {
    return em_Val_as(Attr, em_Val_call(Node_as_val(self->inner), "createAttributeNS", em_Val_from(namespace_), em_Val_from(qualifiedName)));
}


Event Document_createEvent(Document* self , jb_String * interface) {
    return em_Val_as(Event, em_Val_call(Node_as_val(self->inner), "createEvent", em_Val_from(interface)));
}


Range Document_createRange(Document* self ) {
    return em_Val_as(Range, em_Val_call(Node_as_val(self->inner), "createRange"));
}


NodeIterator Document_createNodeIterator0(Document* self , Node * root) {
    return em_Val_as(NodeIterator, em_Val_call(Node_as_val(self->inner), "createNodeIterator", em_Val_from(root)));
}


NodeIterator Document_createNodeIterator1(Document* self , Node * root, unsigned long whatToShow) {
    return em_Val_as(NodeIterator, em_Val_call(Node_as_val(self->inner), "createNodeIterator", em_Val_from(root), em_Val_from(whatToShow)));
}


NodeIterator Document_createNodeIterator2(Document* self , Node * root, unsigned long whatToShow, jb_Function * filter) {
    return em_Val_as(NodeIterator, em_Val_call(Node_as_val(self->inner), "createNodeIterator", em_Val_from(root), em_Val_from(whatToShow), em_Val_from(filter)));
}


TreeWalker Document_createTreeWalker0(Document* self , Node * root) {
    return em_Val_as(TreeWalker, em_Val_call(Node_as_val(self->inner), "createTreeWalker", em_Val_from(root)));
}


TreeWalker Document_createTreeWalker1(Document* self , Node * root, unsigned long whatToShow) {
    return em_Val_as(TreeWalker, em_Val_call(Node_as_val(self->inner), "createTreeWalker", em_Val_from(root), em_Val_from(whatToShow)));
}


TreeWalker Document_createTreeWalker2(Document* self , Node * root, unsigned long whatToShow, jb_Function * filter) {
    return em_Val_as(TreeWalker, em_Val_call(Node_as_val(self->inner), "createTreeWalker", em_Val_from(root), em_Val_from(whatToShow), em_Val_from(filter)));
}


SVGSVGElement Document_rootElement(const Document *self) {
    return em_Val_as(SVGSVGElement, em_Val_get(Node_as_val(self->inner), em_Val_from("rootElement")));
}


NamedFlowMap Document_namedFlows(const Document *self) {
    return em_Val_as(NamedFlowMap, em_Val_get(Node_as_val(self->inner), em_Val_from("namedFlows")));
}


ViewTransition Document_startViewTransition0(Document* self ) {
    return em_Val_as(ViewTransition, em_Val_call(Node_as_val(self->inner), "startViewTransition"));
}


ViewTransition Document_startViewTransition1(Document* self , jb_Any * callbackOptions) {
    return em_Val_as(ViewTransition, em_Val_call(Node_as_val(self->inner), "startViewTransition", em_Val_from(callbackOptions)));
}


Element Document_elementFromPoint(Document* self , double x, double y) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "elementFromPoint", em_Val_from(x), em_Val_from(y)));
}


jb_Array Document_elementsFromPoint(Document* self , double x, double y) {
    return em_Val_as(jb_Array, em_Val_call(Node_as_val(self->inner), "elementsFromPoint", em_Val_from(x), em_Val_from(y)));
}


CaretPosition Document_caretPositionFromPoint0(Document* self , double x, double y) {
    return em_Val_as(CaretPosition, em_Val_call(Node_as_val(self->inner), "caretPositionFromPoint", em_Val_from(x), em_Val_from(y)));
}


CaretPosition Document_caretPositionFromPoint1(Document* self , double x, double y, CaretPositionFromPointOptions * options) {
    return em_Val_as(CaretPosition, em_Val_call(Node_as_val(self->inner), "caretPositionFromPoint", em_Val_from(x), em_Val_from(y), em_Val_from(options)));
}


Element Document_scrollingElement(const Document *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("scrollingElement")));
}


FontMetrics Document_measureElement(Document* self , Element * element) {
    return em_Val_as(FontMetrics, em_Val_call(Node_as_val(self->inner), "measureElement", em_Val_from(element)));
}


FontMetrics Document_measureText(Document* self , jb_String * text, StylePropertyMapReadOnly * styleMap) {
    return em_Val_as(FontMetrics, em_Val_call(Node_as_val(self->inner), "measureText", em_Val_from(text), em_Val_from(styleMap)));
}


bool Document_fullscreenEnabled(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), em_Val_from("fullscreenEnabled")));
}


bool Document_fullscreen(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), em_Val_from("fullscreen")));
}


jb_Promise Document_exitFullscreen(Document* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "exitFullscreen"));
}


jb_Any Document_onfullscreenchange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onfullscreenchange")));
}


void Document_set_onfullscreenchange(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onfullscreenchange"), em_Val_from(value));
}


jb_Any Document_onfullscreenerror(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onfullscreenerror")));
}


void Document_set_onfullscreenerror(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onfullscreenerror"), em_Val_from(value));
}


Document Document_parseHTMLUnsafe(Document* self , jb_Any * html) {
    return em_Val_as(Document, em_Val_call(em_Val_global("document"), "parseHTMLUnsafe", em_Val_from(html)));
}


jb_Any Document_location(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("location")));
}


jb_String Document_domain(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("domain")));
}


void Document_set_domain(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("domain"), em_Val_from(value));
}


jb_String Document_referrer(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("referrer")));
}


jb_String Document_cookie(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("cookie")));
}


void Document_set_cookie(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("cookie"), em_Val_from(value));
}


jb_String Document_lastModified(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("lastModified")));
}


DocumentReadyState Document_readyState(const Document *self) {
    return em_Val_as(DocumentReadyState, em_Val_get(Node_as_val(self->inner), em_Val_from("readyState")));
}


jb_String Document_title(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("title")));
}


void Document_set_title(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_String Document_dir(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("dir")));
}


void Document_set_dir(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("dir"), em_Val_from(value));
}


HTMLElement Document_body(const Document *self) {
    return em_Val_as(HTMLElement, em_Val_get(Node_as_val(self->inner), em_Val_from("body")));
}


void Document_set_body(Document* self, HTMLElement * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("body"), em_Val_from(value));
}


HTMLHeadElement Document_head(const Document *self) {
    return em_Val_as(HTMLHeadElement, em_Val_get(Node_as_val(self->inner), em_Val_from("head")));
}


HTMLCollection Document_images(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("images")));
}


HTMLCollection Document_embeds(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("embeds")));
}


HTMLCollection Document_plugins(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("plugins")));
}


HTMLCollection Document_links(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("links")));
}


HTMLCollection Document_forms(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("forms")));
}


HTMLCollection Document_scripts(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("scripts")));
}


NodeList Document_getElementsByName(Document* self , jb_String * elementName) {
    return em_Val_as(NodeList, em_Val_call(Node_as_val(self->inner), "getElementsByName", em_Val_from(elementName)));
}


jb_Any Document_currentScript(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("currentScript")));
}


jb_Any Document_open(Document* self , jb_String * url, jb_String * name, jb_String * features) {
    return em_Val_as(jb_Any, em_Val_call(Node_as_val(self->inner), "open", em_Val_from(url), em_Val_from(name), em_Val_from(features)));
}


jb_Undefined Document_close(Document* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "close"));
}


jb_Undefined Document_write(Document* self , jb_Any * text) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "write", em_Val_from(text)));
}


jb_Undefined Document_writeln(Document* self , jb_Any * text) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "writeln", em_Val_from(text)));
}


jb_Any Document_defaultView(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("defaultView")));
}


bool Document_hasFocus(Document* self ) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "hasFocus"));
}


jb_String Document_designMode(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("designMode")));
}


void Document_set_designMode(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("designMode"), em_Val_from(value));
}


bool Document_execCommand0(Document* self , jb_String * commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "execCommand", em_Val_from(commandId)));
}


bool Document_execCommand1(Document* self , jb_String * commandId, bool showUI) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "execCommand", em_Val_from(commandId), em_Val_from(showUI)));
}


bool Document_execCommand2(Document* self , jb_String * commandId, bool showUI, jb_String * value) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "execCommand", em_Val_from(commandId), em_Val_from(showUI), em_Val_from(value)));
}


bool Document_queryCommandEnabled(Document* self , jb_String * commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "queryCommandEnabled", em_Val_from(commandId)));
}


bool Document_queryCommandIndeterm(Document* self , jb_String * commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "queryCommandIndeterm", em_Val_from(commandId)));
}


bool Document_queryCommandState(Document* self , jb_String * commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "queryCommandState", em_Val_from(commandId)));
}


bool Document_queryCommandSupported(Document* self , jb_String * commandId) {
    return em_Val_as(bool, em_Val_call(Node_as_val(self->inner), "queryCommandSupported", em_Val_from(commandId)));
}


jb_String Document_queryCommandValue(Document* self , jb_String * commandId) {
    return em_Val_as(jb_String, em_Val_call(Node_as_val(self->inner), "queryCommandValue", em_Val_from(commandId)));
}


bool Document_hidden(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), em_Val_from("hidden")));
}


DocumentVisibilityState Document_visibilityState(const Document *self) {
    return em_Val_as(DocumentVisibilityState, em_Val_get(Node_as_val(self->inner), em_Val_from("visibilityState")));
}


jb_Any Document_onreadystatechange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onreadystatechange")));
}


void Document_set_onreadystatechange(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onreadystatechange"), em_Val_from(value));
}


jb_Any Document_onvisibilitychange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onvisibilitychange")));
}


void Document_set_onvisibilitychange(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onvisibilitychange"), em_Val_from(value));
}


jb_String Document_fgColor(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("fgColor")));
}


void Document_set_fgColor(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("fgColor"), em_Val_from(value));
}


jb_String Document_linkColor(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("linkColor")));
}


void Document_set_linkColor(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("linkColor"), em_Val_from(value));
}


jb_String Document_vlinkColor(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("vlinkColor")));
}


void Document_set_vlinkColor(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("vlinkColor"), em_Val_from(value));
}


jb_String Document_alinkColor(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("alinkColor")));
}


void Document_set_alinkColor(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("alinkColor"), em_Val_from(value));
}


jb_String Document_bgColor(const Document *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("bgColor")));
}


void Document_set_bgColor(Document* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("bgColor"), em_Val_from(value));
}


HTMLCollection Document_anchors(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("anchors")));
}


HTMLCollection Document_applets(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("applets")));
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
    return em_Val_as(HTMLAllCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("all")));
}


jb_Any Document_onfreeze(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onfreeze")));
}


void Document_set_onfreeze(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onfreeze"), em_Val_from(value));
}


jb_Any Document_onresume(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onresume")));
}


void Document_set_onresume(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onresume"), em_Val_from(value));
}


bool Document_wasDiscarded(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), em_Val_from("wasDiscarded")));
}


PermissionsPolicy Document_permissionsPolicy(const Document *self) {
    return em_Val_as(PermissionsPolicy, em_Val_get(Node_as_val(self->inner), em_Val_from("permissionsPolicy")));
}


bool Document_pictureInPictureEnabled(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), em_Val_from("pictureInPictureEnabled")));
}


jb_Promise Document_exitPictureInPicture(Document* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "exitPictureInPicture"));
}


jb_Any Document_onpointerlockchange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onpointerlockchange")));
}


void Document_set_onpointerlockchange(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onpointerlockchange"), em_Val_from(value));
}


jb_Any Document_onpointerlockerror(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onpointerlockerror")));
}


void Document_set_onpointerlockerror(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onpointerlockerror"), em_Val_from(value));
}


jb_Undefined Document_exitPointerLock(Document* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "exitPointerLock"));
}


bool Document_prerendering(const Document *self) {
    return em_Val_as(bool, em_Val_get(Node_as_val(self->inner), em_Val_from("prerendering")));
}


jb_Any Document_onprerenderingchange(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onprerenderingchange")));
}


void Document_set_onprerenderingchange(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onprerenderingchange"), em_Val_from(value));
}


jb_Promise Document_requestStorageAccessFor(Document* self , jb_String * requestedOrigin) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "requestStorageAccessFor", em_Val_from(requestedOrigin)));
}


jb_Promise Document_hasUnpartitionedCookieAccess(Document* self ) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "hasUnpartitionedCookieAccess"));
}


FragmentDirective Document_fragmentDirective(const Document *self) {
    return em_Val_as(FragmentDirective, em_Val_get(Node_as_val(self->inner), em_Val_from("fragmentDirective")));
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


jb_Promise Document_hasPrivateToken(Document* self , jb_String * issuer) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "hasPrivateToken", em_Val_from(issuer)));
}


jb_Promise Document_hasRedemptionRecord(Document* self , jb_String * issuer) {
    return em_Val_as(jb_Promise, em_Val_call(Node_as_val(self->inner), "hasRedemptionRecord", em_Val_from(issuer)));
}


DocumentTimeline Document_timeline(const Document *self) {
    return em_Val_as(DocumentTimeline, em_Val_get(Node_as_val(self->inner), em_Val_from("timeline")));
}


FontFaceSet Document_fonts(const Document *self) {
    return em_Val_as(FontFaceSet, em_Val_get(Node_as_val(self->inner), em_Val_from("fonts")));
}


jb_Array Document_getBoxQuads0(Document* self ) {
    return em_Val_as(jb_Array, em_Val_call(Node_as_val(self->inner), "getBoxQuads"));
}


jb_Array Document_getBoxQuads1(Document* self , BoxQuadOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(Node_as_val(self->inner), "getBoxQuads", em_Val_from(options)));
}


DOMQuad Document_convertQuadFromNode0(Document* self , DOMQuadInit * quad, jb_Any * from) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from)));
}


DOMQuad Document_convertQuadFromNode1(Document* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from), em_Val_from(options)));
}


DOMQuad Document_convertRectFromNode0(Document* self , DOMRectReadOnly * rect, jb_Any * from) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from)));
}


DOMQuad Document_convertRectFromNode1(Document* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMQuad, em_Val_call(Node_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from), em_Val_from(options)));
}


DOMPoint Document_convertPointFromNode0(Document* self , DOMPointInit * point, jb_Any * from) {
    return em_Val_as(DOMPoint, em_Val_call(Node_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from)));
}


DOMPoint Document_convertPointFromNode1(Document* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMPoint, em_Val_call(Node_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from), em_Val_from(options)));
}


Element Document_getElementById(Document* self , jb_String * elementId) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "getElementById", em_Val_from(elementId)));
}


jb_Array Document_getAnimations(Document* self ) {
    return em_Val_as(jb_Array, em_Val_call(Node_as_val(self->inner), "getAnimations"));
}


HTMLCollection Document_children(const Document *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("children")));
}


Element Document_firstElementChild(const Document *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("firstElementChild")));
}


Element Document_lastElementChild(const Document *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("lastElementChild")));
}


unsigned long Document_childElementCount(const Document *self) {
    return em_Val_as(unsigned long, em_Val_get(Node_as_val(self->inner), em_Val_from("childElementCount")));
}


jb_Undefined Document_prepend(Document* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "prepend", em_Val_from(nodes)));
}


jb_Undefined Document_append(Document* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "append", em_Val_from(nodes)));
}


jb_Undefined Document_replaceChildren(Document* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceChildren", em_Val_from(nodes)));
}


jb_Undefined Document_moveBefore(Document* self , Node * node, Node * child) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "moveBefore", em_Val_from(node), em_Val_from(child)));
}


Element Document_querySelector(Document* self , jb_String * selectors) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "querySelector", em_Val_from(selectors)));
}


NodeList Document_querySelectorAll(Document* self , jb_String * selectors) {
    return em_Val_as(NodeList, em_Val_call(Node_as_val(self->inner), "querySelectorAll", em_Val_from(selectors)));
}


XPathExpression Document_createExpression0(Document* self , jb_String * expression) {
    return em_Val_as(XPathExpression, em_Val_call(Node_as_val(self->inner), "createExpression", em_Val_from(expression)));
}


XPathExpression Document_createExpression1(Document* self , jb_String * expression, jb_Function * resolver) {
    return em_Val_as(XPathExpression, em_Val_call(Node_as_val(self->inner), "createExpression", em_Val_from(expression), em_Val_from(resolver)));
}


Node Document_createNSResolver(Document* self , Node * nodeResolver) {
    return em_Val_as(Node, em_Val_call(Node_as_val(self->inner), "createNSResolver", em_Val_from(nodeResolver)));
}


XPathResult Document_evaluate0(Document* self , jb_String * expression, Node * contextNode) {
    return em_Val_as(XPathResult, em_Val_call(Node_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode)));
}


XPathResult Document_evaluate1(Document* self , jb_String * expression, Node * contextNode, jb_Function * resolver) {
    return em_Val_as(XPathResult, em_Val_call(Node_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver)));
}


XPathResult Document_evaluate2(Document* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type) {
    return em_Val_as(XPathResult, em_Val_call(Node_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver), em_Val_from(type)));
}


XPathResult Document_evaluate3(Document* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type, XPathResult * result) {
    return em_Val_as(XPathResult, em_Val_call(Node_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver), em_Val_from(type), em_Val_from(result)));
}


jb_Any Document_onbeforexrselect(const Document *self) {
    return em_Val_as(jb_Any, em_Val_get(Node_as_val(self->inner), em_Val_from("onbeforexrselect")));
}


void Document_set_onbeforexrselect(Document* self, jb_Any * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("onbeforexrselect"), em_Val_from(value));
}

