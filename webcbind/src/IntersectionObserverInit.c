#include <webcbind/IntersectionObserverInit.h>

DEFINE_EMLITE_TYPE(IntersectionObserverInit, em_Val);


jb_Any IntersectionObserverInit_root(const IntersectionObserverInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("root")));
}


void IntersectionObserverInit_set_root(IntersectionObserverInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("root"), em_Val_from(value));
}


jb_String IntersectionObserverInit_rootMargin(const IntersectionObserverInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rootMargin")));
}


void IntersectionObserverInit_set_rootMargin(IntersectionObserverInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rootMargin"), em_Val_from(value));
}


jb_String IntersectionObserverInit_scrollMargin(const IntersectionObserverInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scrollMargin")));
}


void IntersectionObserverInit_set_scrollMargin(IntersectionObserverInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scrollMargin"), em_Val_from(value));
}


jb_Any IntersectionObserverInit_threshold(const IntersectionObserverInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("threshold")));
}


void IntersectionObserverInit_set_threshold(IntersectionObserverInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("threshold"), em_Val_from(value));
}


long IntersectionObserverInit_delay(const IntersectionObserverInit *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("delay")));
}


void IntersectionObserverInit_set_delay(IntersectionObserverInit* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("delay"), em_Val_from(value));
}


bool IntersectionObserverInit_trackVisibility(const IntersectionObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trackVisibility")));
}


void IntersectionObserverInit_set_trackVisibility(IntersectionObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("trackVisibility"), em_Val_from(value));
}


IntersectionObserverInit IntersectionObserverInit_new() {
    em_Val obj = em_Val_object();
    return IntersectionObserverInit_from_val(&obj);
}

