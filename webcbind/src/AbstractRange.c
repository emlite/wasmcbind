#include <webcbind/AbstractRange.h>

#include <webcbind/Node.h>

DEFINE_EMLITE_TYPE(AbstractRange, em_Val);


Node AbstractRange_startContainer(const AbstractRange *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startContainer")));
}


unsigned long AbstractRange_startOffset(const AbstractRange *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startOffset")));
}


Node AbstractRange_endContainer(const AbstractRange *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endContainer")));
}


unsigned long AbstractRange_endOffset(const AbstractRange *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endOffset")));
}


bool AbstractRange_collapsed(const AbstractRange *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("collapsed")));
}

