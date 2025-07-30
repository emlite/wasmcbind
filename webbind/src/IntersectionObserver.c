#include <webbind/IntersectionObserver.h>
#include <webbind/Element.h>
#include <webbind/IntersectionObserverEntry.h>


DEFINE_EMLITE_TYPE(IntersectionObserver, em_Val);


IntersectionObserver IntersectionObserver_new0(jb_Function * callback) {
        em_Val vv = em_Val_new(em_Val_global("IntersectionObserver") , em_Val_from(callback));
        return IntersectionObserver_from_val(&vv);
      }


IntersectionObserver IntersectionObserver_new1(jb_Function * callback, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("IntersectionObserver") , em_Val_from(callback), em_Val_from(options));
        return IntersectionObserver_from_val(&vv);
      }


jb_Any IntersectionObserver_root(const IntersectionObserver *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("root")));
}


jb_String IntersectionObserver_rootMargin(const IntersectionObserver *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rootMargin")));
}


jb_String IntersectionObserver_scrollMargin(const IntersectionObserver *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scrollMargin")));
}


jb_Array IntersectionObserver_thresholds(const IntersectionObserver *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("thresholds")));
}


long IntersectionObserver_delay(const IntersectionObserver *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("delay")));
}


bool IntersectionObserver_trackVisibility(const IntersectionObserver *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trackVisibility")));
}


jb_Undefined IntersectionObserver_observe(IntersectionObserver* self , Element * target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target)));
}


jb_Undefined IntersectionObserver_unobserve(IntersectionObserver* self , Element * target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unobserve", em_Val_from(target)));
}


jb_Undefined IntersectionObserver_disconnect(IntersectionObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Array IntersectionObserver_takeRecords(IntersectionObserver* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}

