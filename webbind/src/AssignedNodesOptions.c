#include <webbind/AssignedNodesOptions.h>

DEFINE_EMLITE_TYPE(AssignedNodesOptions, em_Val);


bool AssignedNodesOptions_flatten(const AssignedNodesOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flatten")));
}


void AssignedNodesOptions_set_flatten(AssignedNodesOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flatten"), em_Val_from(value));
}


AssignedNodesOptions AssignedNodesOptions_new() {
    em_Val obj = em_Val_object();
    return AssignedNodesOptions_from_val(&obj);
}

