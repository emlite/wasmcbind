#include <webbind/ResizeObserverEntry.h>
#include <webbind/Element.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/ResizeObserverSize.h>


DEFINE_EMLITE_TYPE(ResizeObserverEntry, em_Val);


Element ResizeObserverEntry_target(const ResizeObserverEntry *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), "target"));
}


DOMRectReadOnly ResizeObserverEntry_contentRect(const ResizeObserverEntry *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), "contentRect"));
}


jb_FrozenArray ResizeObserverEntry_borderBoxSize(const ResizeObserverEntry *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "borderBoxSize"));
}


jb_FrozenArray ResizeObserverEntry_contentBoxSize(const ResizeObserverEntry *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "contentBoxSize"));
}


jb_FrozenArray ResizeObserverEntry_devicePixelContentBoxSize(const ResizeObserverEntry *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "devicePixelContentBoxSize"));
}

