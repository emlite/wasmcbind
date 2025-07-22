#include <webbind/SharedStorageWorkletNavigator.h>
#include <webbind/LockManager.h>


DEFINE_EMLITE_TYPE(SharedStorageWorkletNavigator, em_Val);


LockManager SharedStorageWorkletNavigator_locks(const SharedStorageWorkletNavigator *self) {
    return em_Val_as(LockManager, em_Val_get(em_Val_as_val(self->inner), "locks"));
}

