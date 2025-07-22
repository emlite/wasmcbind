#include <webbind/NodeIterator.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(NodeIterator, em_Val);


Node NodeIterator_root(const NodeIterator *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("root")));
}


Node NodeIterator_referenceNode(const NodeIterator *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("referenceNode")));
}


bool NodeIterator_pointerBeforeReferenceNode(const NodeIterator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pointerBeforeReferenceNode")));
}


unsigned long NodeIterator_whatToShow(const NodeIterator *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("whatToShow")));
}


jb_Function NodeIterator_filter(const NodeIterator *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filter")));
}


Node NodeIterator_nextNode(NodeIterator* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "nextNode"));
}


Node NodeIterator_previousNode(NodeIterator* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "previousNode"));
}


jb_Undefined NodeIterator_detach(NodeIterator* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "detach"));
}

