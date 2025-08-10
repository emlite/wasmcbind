#include <webbind/IntersectionObserverEntryInit.h>

#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(IntersectionObserverEntryInit, em_Val);


jb_Any IntersectionObserverEntryInit_time(const IntersectionObserverEntryInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("time")));
}


void IntersectionObserverEntryInit_set_time(IntersectionObserverEntryInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("time"), em_Val_from(value));
}


DOMRectInit IntersectionObserverEntryInit_rootBounds(const IntersectionObserverEntryInit *self) {
    return em_Val_as(DOMRectInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rootBounds")));
}


void IntersectionObserverEntryInit_set_rootBounds(IntersectionObserverEntryInit* self, DOMRectInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rootBounds"), em_Val_from(value));
}


DOMRectInit IntersectionObserverEntryInit_boundingClientRect(const IntersectionObserverEntryInit *self) {
    return em_Val_as(DOMRectInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingClientRect")));
}


void IntersectionObserverEntryInit_set_boundingClientRect(IntersectionObserverEntryInit* self, DOMRectInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("boundingClientRect"), em_Val_from(value));
}


DOMRectInit IntersectionObserverEntryInit_intersectionRect(const IntersectionObserverEntryInit *self) {
    return em_Val_as(DOMRectInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("intersectionRect")));
}


void IntersectionObserverEntryInit_set_intersectionRect(IntersectionObserverEntryInit* self, DOMRectInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("intersectionRect"), em_Val_from(value));
}


bool IntersectionObserverEntryInit_isIntersecting(const IntersectionObserverEntryInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isIntersecting")));
}


void IntersectionObserverEntryInit_set_isIntersecting(IntersectionObserverEntryInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isIntersecting"), em_Val_from(value));
}


bool IntersectionObserverEntryInit_isVisible(const IntersectionObserverEntryInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isVisible")));
}


void IntersectionObserverEntryInit_set_isVisible(IntersectionObserverEntryInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isVisible"), em_Val_from(value));
}


double IntersectionObserverEntryInit_intersectionRatio(const IntersectionObserverEntryInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("intersectionRatio")));
}


void IntersectionObserverEntryInit_set_intersectionRatio(IntersectionObserverEntryInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("intersectionRatio"), em_Val_from(value));
}


Element IntersectionObserverEntryInit_target(const IntersectionObserverEntryInit *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("target")));
}


void IntersectionObserverEntryInit_set_target(IntersectionObserverEntryInit* self, Element * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("target"), em_Val_from(value));
}


IntersectionObserverEntryInit IntersectionObserverEntryInit_new() {
    em_Val obj = em_Val_object();
    return IntersectionObserverEntryInit_from_val(&obj);
}

