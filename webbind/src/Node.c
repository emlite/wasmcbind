#include <webbind/Node.h>
#include <webbind/Document.h>
#include <webbind/Element.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(GetRootNodeOptions, em_Val);


bool GetRootNodeOptions_composed(const GetRootNodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "composed"));
}


void GetRootNodeOptions_set_composed(GetRootNodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "composed", value);
}

DEFINE_EMLITE_TYPE(Node, EventTarget);


unsigned short Node_nodeType(const Node *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "nodeType"));
}


jb_DOMString Node_nodeName(const Node *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "nodeName"));
}


jb_USVString Node_baseURI(const Node *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "baseURI"));
}


bool Node_isConnected(const Node *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "isConnected"));
}


Document Node_ownerDocument(const Node *self) {
    return em_Val_as(Document, em_Val_get(EventTarget_as_val(self->inner), "ownerDocument"));
}


Node Node_getRootNode(Node* self ) {
    return em_Val_as(Node, em_Val_call(EventTarget_as_val(self->inner), "getRootNode"));
}


Node Node_getRootNode(Node* self , const GetRootNodeOptions* options) {
    return em_Val_as(Node, em_Val_call(EventTarget_as_val(self->inner), "getRootNode", em_Val_from(options)));
}


Node Node_parentNode(const Node *self) {
    return em_Val_as(Node, em_Val_get(EventTarget_as_val(self->inner), "parentNode"));
}


Element Node_parentElement(const Node *self) {
    return em_Val_as(Element, em_Val_get(EventTarget_as_val(self->inner), "parentElement"));
}


bool Node_hasChildNodes(Node* self ) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "hasChildNodes"));
}


NodeList Node_childNodes(const Node *self) {
    return em_Val_as(NodeList, em_Val_get(EventTarget_as_val(self->inner), "childNodes"));
}


Node Node_firstChild(const Node *self) {
    return em_Val_as(Node, em_Val_get(EventTarget_as_val(self->inner), "firstChild"));
}


Node Node_lastChild(const Node *self) {
    return em_Val_as(Node, em_Val_get(EventTarget_as_val(self->inner), "lastChild"));
}


Node Node_previousSibling(const Node *self) {
    return em_Val_as(Node, em_Val_get(EventTarget_as_val(self->inner), "previousSibling"));
}


Node Node_nextSibling(const Node *self) {
    return em_Val_as(Node, em_Val_get(EventTarget_as_val(self->inner), "nextSibling"));
}


jb_DOMString Node_nodeValue(const Node *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "nodeValue"));
}


void Node_set_nodeValue(Node* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "nodeValue", value);
}


jb_DOMString Node_textContent(const Node *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "textContent"));
}


void Node_set_textContent(Node* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "textContent", value);
}


jb_Undefined Node_normalize(Node* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "normalize"));
}


Node Node_cloneNode(Node* self ) {
    return em_Val_as(Node, em_Val_call(EventTarget_as_val(self->inner), "cloneNode"));
}


Node Node_cloneNode(Node* self , bool subtree) {
    return em_Val_as(Node, em_Val_call(EventTarget_as_val(self->inner), "cloneNode", em_Val_from(subtree)));
}


bool Node_isEqualNode(Node* self , const Node* otherNode) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "isEqualNode", em_Val_from(otherNode)));
}


bool Node_isSameNode(Node* self , const Node* otherNode) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "isSameNode", em_Val_from(otherNode)));
}


unsigned short Node_compareDocumentPosition(Node* self , const Node* other) {
    return em_Val_as(unsigned short, em_Val_call(EventTarget_as_val(self->inner), "compareDocumentPosition", em_Val_from(other)));
}


bool Node_contains(Node* self , const Node* other) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "contains", em_Val_from(other)));
}


jb_DOMString Node_lookupPrefix(Node* self , const jb_DOMString* namespace_) {
    return em_Val_as(jb_DOMString, em_Val_call(EventTarget_as_val(self->inner), "lookupPrefix", em_Val_from(namespace_)));
}


jb_DOMString Node_lookupNamespaceURI(Node* self , const jb_DOMString* prefix) {
    return em_Val_as(jb_DOMString, em_Val_call(EventTarget_as_val(self->inner), "lookupNamespaceURI", em_Val_from(prefix)));
}


bool Node_isDefaultNamespace(Node* self , const jb_DOMString* namespace_) {
    return em_Val_as(bool, em_Val_call(EventTarget_as_val(self->inner), "isDefaultNamespace", em_Val_from(namespace_)));
}


Node Node_insertBefore(Node* self , const Node* node, const Node* child) {
    return em_Val_as(Node, em_Val_call(EventTarget_as_val(self->inner), "insertBefore", em_Val_from(node), em_Val_from(child)));
}


Node Node_appendChild(Node* self , const Node* node) {
    return em_Val_as(Node, em_Val_call(EventTarget_as_val(self->inner), "appendChild", em_Val_from(node)));
}


Node Node_replaceChild(Node* self , const Node* node, const Node* child) {
    return em_Val_as(Node, em_Val_call(EventTarget_as_val(self->inner), "replaceChild", em_Val_from(node), em_Val_from(child)));
}


Node Node_removeChild(Node* self , const Node* child) {
    return em_Val_as(Node, em_Val_call(EventTarget_as_val(self->inner), "removeChild", em_Val_from(child)));
}

