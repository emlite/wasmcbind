#include <webbind/DocumentFragment.h>
#include <webbind/Element.h>
#include <webbind/HTMLCollection.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(DocumentFragment, Node);


DocumentFragment DocumentFragment_new() {
        em_Val vv = em_Val_new(em_Val_global("DocumentFragment") );
        return DocumentFragment_from_val(&vv);
      }


Element DocumentFragment_getElementById(DocumentFragment* self , jb_DOMString * elementId) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "getElementById", em_Val_from(elementId)));
}


HTMLCollection DocumentFragment_children(const DocumentFragment *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), em_Val_from("children")));
}


Element DocumentFragment_firstElementChild(const DocumentFragment *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("firstElementChild")));
}


Element DocumentFragment_lastElementChild(const DocumentFragment *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("lastElementChild")));
}


unsigned long DocumentFragment_childElementCount(const DocumentFragment *self) {
    return em_Val_as(unsigned long, em_Val_get(Node_as_val(self->inner), em_Val_from("childElementCount")));
}


jb_Undefined DocumentFragment_prepend(DocumentFragment* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "prepend", em_Val_from(nodes)));
}


jb_Undefined DocumentFragment_append(DocumentFragment* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "append", em_Val_from(nodes)));
}


jb_Undefined DocumentFragment_replaceChildren(DocumentFragment* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceChildren", em_Val_from(nodes)));
}


jb_Undefined DocumentFragment_moveBefore(DocumentFragment* self , Node * node, Node * child) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "moveBefore", em_Val_from(node), em_Val_from(child)));
}


Element DocumentFragment_querySelector(DocumentFragment* self , jb_DOMString * selectors) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "querySelector", em_Val_from(selectors)));
}


NodeList DocumentFragment_querySelectorAll(DocumentFragment* self , jb_DOMString * selectors) {
    return em_Val_as(NodeList, em_Val_call(Node_as_val(self->inner), "querySelectorAll", em_Val_from(selectors)));
}

