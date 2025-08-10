#include <webbind/HTMLSlotElement.h>

#include <webbind/Node.h>
#include <webbind/AssignedNodesOptions.h>
#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(HTMLSlotElement, HTMLElement);


HTMLSlotElement HTMLSlotElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLSlotElement") );
        return HTMLSlotElement_from_val(&vv);
      }


jb_String HTMLSlotElement_name(const HTMLSlotElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLSlotElement_set_name(HTMLSlotElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_Array HTMLSlotElement_assignedNodes0(HTMLSlotElement* self ) {
    return em_Val_as(jb_Array, em_Val_call(HTMLElement_as_val(self->inner), "assignedNodes"));
}


jb_Array HTMLSlotElement_assignedNodes1(HTMLSlotElement* self , AssignedNodesOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(HTMLElement_as_val(self->inner), "assignedNodes", em_Val_from(options)));
}


jb_Array HTMLSlotElement_assignedElements0(HTMLSlotElement* self ) {
    return em_Val_as(jb_Array, em_Val_call(HTMLElement_as_val(self->inner), "assignedElements"));
}


jb_Array HTMLSlotElement_assignedElements1(HTMLSlotElement* self , AssignedNodesOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(HTMLElement_as_val(self->inner), "assignedElements", em_Val_from(options)));
}


jb_Undefined HTMLSlotElement_assign(HTMLSlotElement* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "assign", em_Val_from(nodes)));
}

