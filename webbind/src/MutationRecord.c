#include <webbind/MutationRecord.h>
#include <webbind/Node.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(MutationRecord, em_Val);


jb_DOMString MutationRecord_type(const MutationRecord *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "type"));
}


Node MutationRecord_target(const MutationRecord *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), "target"));
}


NodeList MutationRecord_addedNodes(const MutationRecord *self) {
    return em_Val_as(NodeList, em_Val_get(em_Val_as_val(self->inner), "addedNodes"));
}


NodeList MutationRecord_removedNodes(const MutationRecord *self) {
    return em_Val_as(NodeList, em_Val_get(em_Val_as_val(self->inner), "removedNodes"));
}


Node MutationRecord_previousSibling(const MutationRecord *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), "previousSibling"));
}


Node MutationRecord_nextSibling(const MutationRecord *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), "nextSibling"));
}


jb_DOMString MutationRecord_attributeName(const MutationRecord *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "attributeName"));
}


jb_DOMString MutationRecord_attributeNamespace(const MutationRecord *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "attributeNamespace"));
}


jb_DOMString MutationRecord_oldValue(const MutationRecord *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "oldValue"));
}

