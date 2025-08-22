#include <webcbind/SnapEventInit.h>

#include <webcbind/Node.h>

DEFINE_EMLITE_TYPE(SnapEventInit, EventInit);


Node SnapEventInit_snapTargetBlock(const SnapEventInit *self) {
    return em_Val_as(Node, em_Val_get(EventInit_as_val(self->inner), em_Val_from("snapTargetBlock")));
}


void SnapEventInit_set_snapTargetBlock(SnapEventInit* self, Node * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("snapTargetBlock"), em_Val_from(value));
}


Node SnapEventInit_snapTargetInline(const SnapEventInit *self) {
    return em_Val_as(Node, em_Val_get(EventInit_as_val(self->inner), em_Val_from("snapTargetInline")));
}


void SnapEventInit_set_snapTargetInline(SnapEventInit* self, Node * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("snapTargetInline"), em_Val_from(value));
}


SnapEventInit SnapEventInit_new() {
    em_Val obj = em_Val_object();
    return SnapEventInit_from_val(&obj);
}

