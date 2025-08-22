#include <webcbind/LockManager.h>

#include <webcbind/LockOptions.h>
#include <webcbind/LockManagerSnapshot.h>

DEFINE_EMLITE_TYPE(LockManager, em_Val);


jb_Promise LockManager_request(LockManager* self , jb_String * name, LockOptions * options, jb_Function * callback) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "request", em_Val_from(name), em_Val_from(options), em_Val_from(callback)));
}


jb_Promise LockManager_query(LockManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "query"));
}

