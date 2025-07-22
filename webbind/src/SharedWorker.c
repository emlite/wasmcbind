#include <webbind/SharedWorker.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(SharedWorker, EventTarget);


SharedWorker SharedWorker_new0(jb_Any * scriptURL) {
        em_Val vv = em_Val_new(em_Val_global("SharedWorker") , em_Val_from(scriptURL));
        return SharedWorker_from_val(&vv);
      }


SharedWorker SharedWorker_new1(jb_Any * scriptURL, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("SharedWorker") , em_Val_from(scriptURL), em_Val_from(options));
        return SharedWorker_from_val(&vv);
      }


jb_Any SharedWorker_port(const SharedWorker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("port")));
}


jb_Any SharedWorker_onerror(const SharedWorker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void SharedWorker_set_onerror(SharedWorker* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}

