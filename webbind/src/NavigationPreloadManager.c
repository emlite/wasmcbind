#include <webbind/NavigationPreloadManager.h>


DEFINE_EMLITE_TYPE(NavigationPreloadState, em_Val);


bool NavigationPreloadState_enabled(const NavigationPreloadState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "enabled"));
}


void NavigationPreloadState_set_enabled(NavigationPreloadState* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "enabled", value);
}


jb_ByteString NavigationPreloadState_headerValue(const NavigationPreloadState *self) {
    return em_Val_as(jb_ByteString, em_Val_get(em_Val_as_val(self->inner), "headerValue"));
}


void NavigationPreloadState_set_headerValue(NavigationPreloadState* self, const jb_ByteString* value) {
    em_Val_set(em_Val_as_val(self->inner), "headerValue", value);
}

DEFINE_EMLITE_TYPE(NavigationPreloadManager, em_Val);


jb_Promise NavigationPreloadManager_enable(NavigationPreloadManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "enable"));
}


jb_Promise NavigationPreloadManager_disable(NavigationPreloadManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "disable"));
}


jb_Promise NavigationPreloadManager_setHeaderValue(NavigationPreloadManager* self , const jb_ByteString* value) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setHeaderValue", em_Val_from(value)));
}


jb_Promise NavigationPreloadManager_getState(NavigationPreloadManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getState"));
}

