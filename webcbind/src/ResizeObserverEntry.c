#include <webcbind/ResizeObserverEntry.h>

#include <webcbind/Element.h>
#include <webcbind/DOMRectReadOnly.h>
#include <webcbind/ResizeObserverSize.h>

DEFINE_EMLITE_TYPE(ResizeObserverEntry, em_Val);


Element ResizeObserverEntry_target(const ResizeObserverEntry *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("target")));
}


DOMRectReadOnly ResizeObserverEntry_contentRect(const ResizeObserverEntry *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contentRect")));
}


jb_Array ResizeObserverEntry_borderBoxSize(const ResizeObserverEntry *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("borderBoxSize")));
}


jb_Array ResizeObserverEntry_contentBoxSize(const ResizeObserverEntry *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contentBoxSize")));
}


jb_Array ResizeObserverEntry_devicePixelContentBoxSize(const ResizeObserverEntry *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("devicePixelContentBoxSize")));
}

