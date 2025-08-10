#include <webbind/IntersectionObserverEntry.h>

#include <webbind/IntersectionObserverEntryInit.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(IntersectionObserverEntry, em_Val);


IntersectionObserverEntry IntersectionObserverEntry_new(IntersectionObserverEntryInit * intersectionObserverEntryInit) {
        em_Val vv = em_Val_new(em_Val_global("IntersectionObserverEntry") , em_Val_from(intersectionObserverEntryInit));
        return IntersectionObserverEntry_from_val(&vv);
      }


jb_Any IntersectionObserverEntry_time(const IntersectionObserverEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("time")));
}


DOMRectReadOnly IntersectionObserverEntry_rootBounds(const IntersectionObserverEntry *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rootBounds")));
}


DOMRectReadOnly IntersectionObserverEntry_boundingClientRect(const IntersectionObserverEntry *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingClientRect")));
}


DOMRectReadOnly IntersectionObserverEntry_intersectionRect(const IntersectionObserverEntry *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("intersectionRect")));
}


bool IntersectionObserverEntry_isIntersecting(const IntersectionObserverEntry *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isIntersecting")));
}


bool IntersectionObserverEntry_isVisible(const IntersectionObserverEntry *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isVisible")));
}


double IntersectionObserverEntry_intersectionRatio(const IntersectionObserverEntry *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("intersectionRatio")));
}


Element IntersectionObserverEntry_target(const IntersectionObserverEntry *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("target")));
}

