#include <webbind/TreeWalker.h>
#include <webbind/Node.h>


DEFINE_EMLITE_TYPE(TreeWalker, em_Val);


Node TreeWalker_root(const TreeWalker *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), "root"));
}


unsigned long TreeWalker_whatToShow(const TreeWalker *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "whatToShow"));
}


jb_Function TreeWalker_filter(const TreeWalker *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), "filter"));
}


Node TreeWalker_currentNode(const TreeWalker *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), "currentNode"));
}


void TreeWalker_set_currentNode(TreeWalker* self, const Node* value) {
    em_Val_set(em_Val_as_val(self->inner), "currentNode", value);
}


Node TreeWalker_parentNode(TreeWalker* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "parentNode"));
}


Node TreeWalker_firstChild(TreeWalker* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "firstChild"));
}


Node TreeWalker_lastChild(TreeWalker* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "lastChild"));
}


Node TreeWalker_previousSibling(TreeWalker* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "previousSibling"));
}


Node TreeWalker_nextSibling(TreeWalker* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "nextSibling"));
}


Node TreeWalker_previousNode(TreeWalker* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "previousNode"));
}


Node TreeWalker_nextNode(TreeWalker* self ) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "nextNode"));
}

