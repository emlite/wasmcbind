#include <webcbind/CollectedClientData.h>

DEFINE_EMLITE_TYPE(CollectedClientData, em_Val);


jb_String CollectedClientData_type(const CollectedClientData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void CollectedClientData_set_type(CollectedClientData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String CollectedClientData_challenge(const CollectedClientData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void CollectedClientData_set_challenge(CollectedClientData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


jb_String CollectedClientData_origin(const CollectedClientData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


void CollectedClientData_set_origin(CollectedClientData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


bool CollectedClientData_crossOrigin(const CollectedClientData *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("crossOrigin")));
}


void CollectedClientData_set_crossOrigin(CollectedClientData* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("crossOrigin"), em_Val_from(value));
}


jb_String CollectedClientData_topOrigin(const CollectedClientData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("topOrigin")));
}


void CollectedClientData_set_topOrigin(CollectedClientData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("topOrigin"), em_Val_from(value));
}


CollectedClientData CollectedClientData_new() {
    em_Val obj = em_Val_object();
    return CollectedClientData_from_val(&obj);
}

