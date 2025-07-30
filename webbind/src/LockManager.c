#include <webbind/LockManager.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(LockOptions, em_Val);


LockMode LockOptions_mode(const LockOptions *self) {
    return em_Val_as(LockMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void LockOptions_set_mode(LockOptions* self, LockMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


bool LockOptions_ifAvailable(const LockOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ifAvailable")));
}


void LockOptions_set_ifAvailable(LockOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ifAvailable"), em_Val_from(value));
}


bool LockOptions_steal(const LockOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("steal")));
}


void LockOptions_set_steal(LockOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("steal"), em_Val_from(value));
}


AbortSignal LockOptions_signal(const LockOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void LockOptions_set_signal(LockOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

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

DEFINE_EMLITE_TYPE(LockManager, em_Val);


jb_Promise LockManager_request(LockManager* self , jb_String * name, LockOptions * options, jb_Function * callback) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "request", em_Val_from(name), em_Val_from(options), em_Val_from(callback)));
}


jb_Promise LockManager_query(LockManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "query"));
}

