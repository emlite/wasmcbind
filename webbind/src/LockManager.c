#include <webbind/LockManager.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(LockOptions, em_Val);


LockMode LockOptions_mode(const LockOptions *self) {
    return em_Val_as(LockMode, em_Val_get(em_Val_as_val(self->inner), "mode"));
}


void LockOptions_set_mode(LockOptions* self, const LockMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "mode", value);
}


bool LockOptions_ifAvailable(const LockOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "ifAvailable"));
}


void LockOptions_set_ifAvailable(LockOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "ifAvailable", value);
}


bool LockOptions_steal(const LockOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "steal"));
}


void LockOptions_set_steal(LockOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "steal", value);
}


AbortSignal LockOptions_signal(const LockOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void LockOptions_set_signal(LockOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(LockManagerSnapshot, em_Val);


jb_Sequence LockManagerSnapshot_held(const LockManagerSnapshot *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "held"));
}


void LockManagerSnapshot_set_held(LockManagerSnapshot* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "held", value);
}


jb_Sequence LockManagerSnapshot_pending(const LockManagerSnapshot *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "pending"));
}


void LockManagerSnapshot_set_pending(LockManagerSnapshot* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "pending", value);
}

DEFINE_EMLITE_TYPE(LockManager, em_Val);


jb_Promise LockManager_request(LockManager* self , const jb_DOMString* name, const LockOptions* options, const jb_Function* callback) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "request", em_Val_from(name), em_Val_from(options), em_Val_from(callback)));
}


jb_Promise LockManager_query(LockManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "query"));
}

