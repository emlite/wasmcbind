#include <webbind/IntersectionObserverEntry.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(IntersectionObserverEntry, em_Val);


IntersectionObserverEntry IntersectionObserverEntry_new(const jb_Any* intersectionObserverEntryInit) : em_Val(em_Val_global("IntersectionObserverEntry").new_(em_Val_from(intersectionObserverEntryInit))) {
        return IntersectionObserverEntry(em_Val_new(em_Val_global("IntersectionObserverEntry", em_Val_from(intersectionObserverEntryInit)));
      }


jb_Any IntersectionObserverEntry_time(const IntersectionObserverEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "time"));
}


DOMRectReadOnly IntersectionObserverEntry_rootBounds(const IntersectionObserverEntry *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "rootBounds"));
}


DOMRectReadOnly IntersectionObserverEntry_boundingClientRect(const IntersectionObserverEntry *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "boundingClientRect"));
}


DOMRectReadOnly IntersectionObserverEntry_intersectionRect(const IntersectionObserverEntry *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "intersectionRect"));
}


bool IntersectionObserverEntry_isIntersecting(const IntersectionObserverEntry *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "isIntersecting"));
}


bool IntersectionObserverEntry_isVisible(const IntersectionObserverEntry *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "isVisible"));
}


double IntersectionObserverEntry_intersectionRatio(const IntersectionObserverEntry *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "intersectionRatio"));
}


Element IntersectionObserverEntry_target(const IntersectionObserverEntry *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), "target"));
}

