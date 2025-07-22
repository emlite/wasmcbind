#include <webbind/CloseWatcher.h>


DEFINE_EMLITE_TYPE(CloseWatcher, EventTarget);


CloseWatcher CloseWatcher_new() : EventTarget(em_Val_global("CloseWatcher").new_()) {
        return CloseWatcher(em_Val_new(em_Val_global("CloseWatcher", ));
      }


CloseWatcher CloseWatcher_new(const jb_Any* options) : EventTarget(em_Val_global("CloseWatcher").new_(em_Val_from(options))) {
        return CloseWatcher(em_Val_new(em_Val_global("CloseWatcher", em_Val_from(options)));
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
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncancel"));
}


void CloseWatcher_set_oncancel(CloseWatcher* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncancel", value);
}


jb_Any CloseWatcher_onclose(const CloseWatcher *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onclose"));
}


void CloseWatcher_set_onclose(CloseWatcher* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onclose", value);
}

