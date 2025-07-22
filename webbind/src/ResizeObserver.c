#include <webbind/ResizeObserver.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(ResizeObserverOptions, em_Val);


ResizeObserverBoxOptions ResizeObserverOptions_box(const ResizeObserverOptions *self) {
    return em_Val_as(ResizeObserverBoxOptions, em_Val_get(em_Val_as_val(self->inner), "box"));
}


void ResizeObserverOptions_set_box(ResizeObserverOptions* self, const ResizeObserverBoxOptions* value) {
    em_Val_set(em_Val_as_val(self->inner), "box", value);
}

DEFINE_EMLITE_TYPE(ResizeObserver, em_Val);


ResizeObserver ResizeObserver_new(const jb_Function* callback) : em_Val(em_Val_global("ResizeObserver").new_(em_Val_from(callback))) {
        return ResizeObserver(em_Val_new(em_Val_global("ResizeObserver", em_Val_from(callback)));
      }


jb_Undefined ResizeObserver_observe(ResizeObserver* self , const Element* target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target)));
}


jb_Undefined ResizeObserver_observe(ResizeObserver* self , const Element* target, const ResizeObserverOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target), em_Val_from(options)));
}


jb_Undefined ResizeObserver_unobserve(ResizeObserver* self , const Element* target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unobserve", em_Val_from(target)));
}


jb_Undefined ResizeObserver_disconnect(ResizeObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}

