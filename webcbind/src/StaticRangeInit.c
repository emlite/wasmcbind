#include <webcbind/StaticRangeInit.h>

#include <webcbind/Node.h>

DEFINE_EMLITE_TYPE(StaticRangeInit, em_Val);


Node StaticRangeInit_startContainer(const StaticRangeInit *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startContainer")));
}


void StaticRangeInit_set_startContainer(StaticRangeInit* self, Node * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("startContainer"), em_Val_from(value));
}


unsigned long StaticRangeInit_startOffset(const StaticRangeInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startOffset")));
}


void StaticRangeInit_set_startOffset(StaticRangeInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("startOffset"), em_Val_from(value));
}


Node StaticRangeInit_endContainer(const StaticRangeInit *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endContainer")));
}


void StaticRangeInit_set_endContainer(StaticRangeInit* self, Node * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("endContainer"), em_Val_from(value));
}


unsigned long StaticRangeInit_endOffset(const StaticRangeInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endOffset")));
}


void StaticRangeInit_set_endOffset(StaticRangeInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("endOffset"), em_Val_from(value));
}


StaticRangeInit StaticRangeInit_new() {
    em_Val obj = em_Val_object();
    return StaticRangeInit_from_val(&obj);
}

