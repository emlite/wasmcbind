#include <webbind/SyncManager.h>


DEFINE_EMLITE_TYPE(SyncManager, em_Val);


jb_Promise SyncManager_register_(SyncManager* self , jb_String * tag) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "register", em_Val_from(tag)));
}


jb_Promise SyncManager_getTags(SyncManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getTags"));
}

