#include <webbind/LockManagerSnapshot.h>

DEFINE_EMLITE_TYPE(LockManagerSnapshot, em_Val);


jb_Array LockManagerSnapshot_held(const LockManagerSnapshot *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("held")));
}


void LockManagerSnapshot_set_held(LockManagerSnapshot* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("held"), em_Val_from(value));
}


jb_Array LockManagerSnapshot_pending(const LockManagerSnapshot *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pending")));
}


void LockManagerSnapshot_set_pending(LockManagerSnapshot* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pending"), em_Val_from(value));
}


LockManagerSnapshot LockManagerSnapshot_new() {
    em_Val obj = em_Val_object();
    return LockManagerSnapshot_from_val(&obj);
}

