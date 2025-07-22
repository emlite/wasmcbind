#include <webbind/IntersectionObserver.h>
#include <webbind/Element.h>
#include <webbind/IntersectionObserverEntry.h>


DEFINE_EMLITE_TYPE(IntersectionObserver, em_Val);


IntersectionObserver IntersectionObserver_new(const jb_Function* callback) : em_Val(em_Val_global("IntersectionObserver").new_(em_Val_from(callback))) {
        return IntersectionObserver(em_Val_new(em_Val_global("IntersectionObserver", em_Val_from(callback)));
      }


IntersectionObserver IntersectionObserver_new(const jb_Function* callback, const jb_Any* options) : em_Val(em_Val_global("IntersectionObserver").new_(em_Val_from(callback), em_Val_from(options))) {
        return IntersectionObserver(em_Val_new(em_Val_global("IntersectionObserver", em_Val_from(callback), em_Val_from(options)));
      }


jb_Any IntersectionObserver_root(const IntersectionObserver *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "root"));
}


jb_DOMString IntersectionObserver_rootMargin(const IntersectionObserver *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "rootMargin"));
}


jb_DOMString IntersectionObserver_scrollMargin(const IntersectionObserver *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "scrollMargin"));
}


jb_FrozenArray IntersectionObserver_thresholds(const IntersectionObserver *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "thresholds"));
}


long IntersectionObserver_delay(const IntersectionObserver *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "delay"));
}


bool IntersectionObserver_trackVisibility(const IntersectionObserver *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "trackVisibility"));
}


jb_Undefined IntersectionObserver_observe(IntersectionObserver* self , const Element* target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target)));
}


jb_Undefined IntersectionObserver_unobserve(IntersectionObserver* self , const Element* target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unobserve", em_Val_from(target)));
}


jb_Undefined IntersectionObserver_disconnect(IntersectionObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Sequence IntersectionObserver_takeRecords(IntersectionObserver* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}

