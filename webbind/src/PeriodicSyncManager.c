#include <webbind/PeriodicSyncManager.h>


DEFINE_EMLITE_TYPE(BackgroundSyncOptions, em_Val);


long long BackgroundSyncOptions_minInterval(const BackgroundSyncOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minInterval")));
}


void BackgroundSyncOptions_set_minInterval(BackgroundSyncOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minInterval"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PeriodicSyncManager, em_Val);


jb_Promise PeriodicSyncManager_register_0(PeriodicSyncManager* self , jb_String * tag) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "register", em_Val_from(tag)));
}


jb_Promise PeriodicSyncManager_register_1(PeriodicSyncManager* self , jb_String * tag, BackgroundSyncOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "register", em_Val_from(tag), em_Val_from(options)));
}


jb_Promise PeriodicSyncManager_getTags(PeriodicSyncManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getTags"));
}


jb_Promise PeriodicSyncManager_unregister(PeriodicSyncManager* self , jb_String * tag) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "unregister", em_Val_from(tag)));
}

