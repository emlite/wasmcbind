#include <webbind/MutationRecord.h>
#include <webbind/Node.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(MutationRecord, em_Val);


jb_String MutationRecord_type(const MutationRecord *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


Node MutationRecord_target(const MutationRecord *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("target")));
}


NodeList MutationRecord_addedNodes(const MutationRecord *self) {
    return em_Val_as(NodeList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("addedNodes")));
}


NodeList MutationRecord_removedNodes(const MutationRecord *self) {
    return em_Val_as(NodeList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("removedNodes")));
}


Node MutationRecord_previousSibling(const MutationRecord *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("previousSibling")));
}


Node MutationRecord_nextSibling(const MutationRecord *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("nextSibling")));
}


jb_String MutationRecord_attributeName(const MutationRecord *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributeName")));
}


jb_String MutationRecord_attributeNamespace(const MutationRecord *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributeNamespace")));
}


jb_String MutationRecord_oldValue(const MutationRecord *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("oldValue")));
}

