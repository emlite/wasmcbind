#include <webbind/DocumentFragment.h>
#include <webbind/Element.h>
#include <webbind/HTMLCollection.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(DocumentFragment, Node);


DocumentFragment DocumentFragment_new() : Node(em_Val_global("DocumentFragment").new_()) {
        return DocumentFragment(em_Val_new(em_Val_global("DocumentFragment", ));
      }


Element DocumentFragment_getElementById(DocumentFragment* self , const jb_DOMString* elementId) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "getElementById", em_Val_from(elementId)));
}


HTMLCollection DocumentFragment_children(const DocumentFragment *self) {
    return em_Val_as(HTMLCollection, em_Val_get(Node_as_val(self->inner), "children"));
}


Element DocumentFragment_firstElementChild(const DocumentFragment *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "firstElementChild"));
}


Element DocumentFragment_lastElementChild(const DocumentFragment *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "lastElementChild"));
}


unsigned long DocumentFragment_childElementCount(const DocumentFragment *self) {
    return em_Val_as(unsigned long, em_Val_get(Node_as_val(self->inner), "childElementCount"));
}


jb_Undefined DocumentFragment_prepend(DocumentFragment* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "prepend", em_Val_from(nodes)));
}


jb_Undefined DocumentFragment_append(DocumentFragment* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "append", em_Val_from(nodes)));
}


jb_Undefined DocumentFragment_replaceChildren(DocumentFragment* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceChildren", em_Val_from(nodes)));
}


jb_Undefined DocumentFragment_moveBefore(DocumentFragment* self , const Node* node, const Node* child) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "moveBefore", em_Val_from(node), em_Val_from(child)));
}


Element DocumentFragment_querySelector(DocumentFragment* self , const jb_DOMString* selectors) {
    return em_Val_as(Element, em_Val_call(Node_as_val(self->inner), "querySelector", em_Val_from(selectors)));
}


NodeList DocumentFragment_querySelectorAll(DocumentFragment* self , const jb_DOMString* selectors) {
    return em_Val_as(NodeList, em_Val_call(Node_as_val(self->inner), "querySelectorAll", em_Val_from(selectors)));
}

