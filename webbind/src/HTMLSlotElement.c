#include <webbind/HTMLSlotElement.h>
#include <webbind/Node.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(AssignedNodesOptions, em_Val);


bool AssignedNodesOptions_flatten(const AssignedNodesOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "flatten"));
}


void AssignedNodesOptions_set_flatten(AssignedNodesOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "flatten", value);
}

DEFINE_EMLITE_TYPE(HTMLSlotElement, HTMLElement);


HTMLSlotElement HTMLSlotElement_new() : HTMLElement(em_Val_global("HTMLSlotElement").new_()) {
        return HTMLSlotElement(em_Val_new(em_Val_global("HTMLSlotElement", ));
      }


jb_DOMString HTMLSlotElement_name(const HTMLSlotElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLSlotElement_set_name(HTMLSlotElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_Sequence HTMLSlotElement_assignedNodes(HTMLSlotElement* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(HTMLElement_as_val(self->inner), "assignedNodes"));
}


jb_Sequence HTMLSlotElement_assignedNodes(HTMLSlotElement* self , const AssignedNodesOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(HTMLElement_as_val(self->inner), "assignedNodes", em_Val_from(options)));
}


jb_Sequence HTMLSlotElement_assignedElements(HTMLSlotElement* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(HTMLElement_as_val(self->inner), "assignedElements"));
}


jb_Sequence HTMLSlotElement_assignedElements(HTMLSlotElement* self , const AssignedNodesOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(HTMLElement_as_val(self->inner), "assignedElements", em_Val_from(options)));
}


jb_Undefined HTMLSlotElement_assign(HTMLSlotElement* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "assign", em_Val_from(nodes)));
}

