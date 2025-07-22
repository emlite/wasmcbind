#include <webbind/HTMLMarqueeElement.h>


DEFINE_EMLITE_TYPE(HTMLMarqueeElement, HTMLElement);


HTMLMarqueeElement HTMLMarqueeElement_new() : HTMLElement(em_Val_global("HTMLMarqueeElement").new_()) {
        return HTMLMarqueeElement(em_Val_new(em_Val_global("HTMLMarqueeElement", ));
      }


jb_DOMString HTMLMarqueeElement_behavior(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "behavior"));
}


void HTMLMarqueeElement_set_behavior(HTMLMarqueeElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "behavior", value);
}


jb_DOMString HTMLMarqueeElement_bgColor(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "bgColor"));
}


void HTMLMarqueeElement_set_bgColor(HTMLMarqueeElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "bgColor", value);
}


jb_DOMString HTMLMarqueeElement_direction(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "direction"));
}


void HTMLMarqueeElement_set_direction(HTMLMarqueeElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "direction", value);
}


jb_DOMString HTMLMarqueeElement_height(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLMarqueeElement_set_height(HTMLMarqueeElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}


unsigned long HTMLMarqueeElement_hspace(const HTMLMarqueeElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "hspace"));
}


void HTMLMarqueeElement_set_hspace(HTMLMarqueeElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "hspace", value);
}


long HTMLMarqueeElement_loop(const HTMLMarqueeElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "loop"));
}


void HTMLMarqueeElement_set_loop(HTMLMarqueeElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "loop", value);
}


unsigned long HTMLMarqueeElement_scrollAmount(const HTMLMarqueeElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "scrollAmount"));
}


void HTMLMarqueeElement_set_scrollAmount(HTMLMarqueeElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "scrollAmount", value);
}


unsigned long HTMLMarqueeElement_scrollDelay(const HTMLMarqueeElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "scrollDelay"));
}


void HTMLMarqueeElement_set_scrollDelay(HTMLMarqueeElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "scrollDelay", value);
}


bool HTMLMarqueeElement_trueSpeed(const HTMLMarqueeElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "trueSpeed"));
}


void HTMLMarqueeElement_set_trueSpeed(HTMLMarqueeElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "trueSpeed", value);
}


unsigned long HTMLMarqueeElement_vspace(const HTMLMarqueeElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "vspace"));
}


void HTMLMarqueeElement_set_vspace(HTMLMarqueeElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "vspace", value);
}


jb_DOMString HTMLMarqueeElement_width(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLMarqueeElement_set_width(HTMLMarqueeElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


jb_Undefined HTMLMarqueeElement_start(HTMLMarqueeElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "start"));
}


jb_Undefined HTMLMarqueeElement_stop(HTMLMarqueeElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stop"));
}

