#include <webcbind/NodeList.h>

#include <webcbind/Node.h>

DEFINE_EMLITE_TYPE(NodeList, em_Val);


Node NodeList_item(NodeList* self , unsigned long index) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


unsigned long NodeList_length(const NodeList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}

