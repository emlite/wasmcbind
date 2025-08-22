#include <webcbind/NavigationPreloadManager.h>

#include <webcbind/NavigationPreloadState.h>

DEFINE_EMLITE_TYPE(NavigationPreloadManager, em_Val);


jb_Promise NavigationPreloadManager_enable(NavigationPreloadManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "enable"));
}


jb_Promise NavigationPreloadManager_disable(NavigationPreloadManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "disable"));
}


jb_Promise NavigationPreloadManager_setHeaderValue(NavigationPreloadManager* self , jb_String * value) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setHeaderValue", em_Val_from(value)));
}


jb_Promise NavigationPreloadManager_getState(NavigationPreloadManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getState"));
}

