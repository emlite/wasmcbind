#include <webcbind/ResizeObserver.h>

#include <webcbind/Element.h>
#include <webcbind/ResizeObserverOptions.h>

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

