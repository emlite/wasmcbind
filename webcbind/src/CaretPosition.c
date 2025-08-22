#include <webcbind/CaretPosition.h>

#include <webcbind/Node.h>
#include <webcbind/DOMRect.h>

DEFINE_EMLITE_TYPE(CaretPosition, em_Val);


Node CaretPosition_offsetNode(const CaretPosition *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offsetNode")));
}


unsigned long CaretPosition_offset(const CaretPosition *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


DOMRect CaretPosition_getClientRect(CaretPosition* self ) {
    return em_Val_as(DOMRect, em_Val_call(em_Val_as_val(self->inner), "getClientRect"));
}

