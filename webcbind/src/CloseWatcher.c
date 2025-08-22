#include <webcbind/CloseWatcher.h>

#include <webcbind/CloseWatcherOptions.h>

DEFINE_EMLITE_TYPE(CloseWatcher, EventTarget);


CloseWatcher CloseWatcher_new0() {
        em_Val vv = em_Val_new(em_Val_global("CloseWatcher") );
        return CloseWatcher_from_val(&vv);
      }


CloseWatcher CloseWatcher_new1(CloseWatcherOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("CloseWatcher") , em_Val_from(options));
        return CloseWatcher_from_val(&vv);
      }


jb_Undefined CloseWatcher_requestClose(CloseWatcher* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "requestClose"));
}


jb_Undefined CloseWatcher_close(CloseWatcher* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Undefined CloseWatcher_destroy(CloseWatcher* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "destroy"));
}


jb_Any CloseWatcher_oncancel(const CloseWatcher *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncancel")));
}


void CloseWatcher_set_oncancel(CloseWatcher* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncancel"), em_Val_from(value));
}


jb_Any CloseWatcher_onclose(const CloseWatcher *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onclose")));
}


void CloseWatcher_set_onclose(CloseWatcher* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onclose"), em_Val_from(value));
}

