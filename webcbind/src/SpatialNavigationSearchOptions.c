#include <webcbind/SpatialNavigationSearchOptions.h>

#include <webcbind/Node.h>

DEFINE_EMLITE_TYPE(SpatialNavigationSearchOptions, em_Val);


jb_Array SpatialNavigationSearchOptions_candidates(const SpatialNavigationSearchOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("candidates")));
}


void SpatialNavigationSearchOptions_set_candidates(SpatialNavigationSearchOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("candidates"), em_Val_from(value));
}


Node SpatialNavigationSearchOptions_container(const SpatialNavigationSearchOptions *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("container")));
}


void SpatialNavigationSearchOptions_set_container(SpatialNavigationSearchOptions* self, Node * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("container"), em_Val_from(value));
}


SpatialNavigationSearchOptions SpatialNavigationSearchOptions_new() {
    em_Val obj = em_Val_object();
    return SpatialNavigationSearchOptions_from_val(&obj);
}

