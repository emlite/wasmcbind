#include <webbind/SharedWorker.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(SharedWorker, EventTarget);


SharedWorker SharedWorker_new(const jb_Any* scriptURL) : EventTarget(em_Val_global("SharedWorker").new_(em_Val_from(scriptURL))) {
        return SharedWorker(em_Val_new(em_Val_global("SharedWorker", em_Val_from(scriptURL)));
      }


SharedWorker SharedWorker_new(const jb_Any* scriptURL, const jb_Any* options) : EventTarget(em_Val_global("SharedWorker").new_(em_Val_from(scriptURL), em_Val_from(options))) {
        return SharedWorker(em_Val_new(em_Val_global("SharedWorker", em_Val_from(scriptURL), em_Val_from(options)));
      }


jb_Any SharedWorker_port(const SharedWorker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "port"));
}


jb_Any SharedWorker_onerror(const SharedWorker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void SharedWorker_set_onerror(SharedWorker* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}

