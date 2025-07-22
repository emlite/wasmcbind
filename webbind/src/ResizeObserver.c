#include <webbind/ResizeObserver.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(ResizeObserverOptions, em_Val);


ResizeObserverBoxOptions ResizeObserverOptions_box(const ResizeObserverOptions *self) {
    return em_Val_as(ResizeObserverBoxOptions, em_Val_get(em_Val_as_val(self->inner), em_Val_from("box")));
}


void ResizeObserverOptions_set_box(ResizeObserverOptions* self, ResizeObserverBoxOptions * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("box"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ResizeObserver, em_Val);


ResizeObserver ResizeObserver_new(jb_Function * callback) {
        em_Val vv = em_Val_new(em_Val_global("ResizeObserver") , em_Val_from(callback));
        return ResizeObserver_from_val(&vv);
      }


jb_Undefined ResizeObserver_observe0(ResizeObserver* self , Element * target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target)));
}


jb_Undefined ResizeObserver_observe1(ResizeObserver* self , Element * target, ResizeObserverOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target), em_Val_from(options)));
}


jb_Undefined ResizeObserver_unobserve(ResizeObserver* self , Element * target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unobserve", em_Val_from(target)));
}


jb_Undefined ResizeObserver_disconnect(ResizeObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}

