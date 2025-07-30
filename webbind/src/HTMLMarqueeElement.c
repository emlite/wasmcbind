#include <webbind/HTMLMarqueeElement.h>


DEFINE_EMLITE_TYPE(HTMLMarqueeElement, HTMLElement);


HTMLMarqueeElement HTMLMarqueeElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLMarqueeElement") );
        return HTMLMarqueeElement_from_val(&vv);
      }


jb_String HTMLMarqueeElement_behavior(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("behavior")));
}


void HTMLMarqueeElement_set_behavior(HTMLMarqueeElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("behavior"), em_Val_from(value));
}


jb_String HTMLMarqueeElement_bgColor(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("bgColor")));
}


void HTMLMarqueeElement_set_bgColor(HTMLMarqueeElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("bgColor"), em_Val_from(value));
}


jb_String HTMLMarqueeElement_direction(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("direction")));
}


void HTMLMarqueeElement_set_direction(HTMLMarqueeElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


jb_String HTMLMarqueeElement_height(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLMarqueeElement_set_height(HTMLMarqueeElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


unsigned long HTMLMarqueeElement_hspace(const HTMLMarqueeElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("hspace")));
}


void HTMLMarqueeElement_set_hspace(HTMLMarqueeElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("hspace"), em_Val_from(value));
}


long HTMLMarqueeElement_loop(const HTMLMarqueeElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("loop")));
}


void HTMLMarqueeElement_set_loop(HTMLMarqueeElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("loop"), em_Val_from(value));
}


unsigned long HTMLMarqueeElement_scrollAmount(const HTMLMarqueeElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("scrollAmount")));
}


void HTMLMarqueeElement_set_scrollAmount(HTMLMarqueeElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("scrollAmount"), em_Val_from(value));
}


unsigned long HTMLMarqueeElement_scrollDelay(const HTMLMarqueeElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("scrollDelay")));
}


void HTMLMarqueeElement_set_scrollDelay(HTMLMarqueeElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("scrollDelay"), em_Val_from(value));
}


bool HTMLMarqueeElement_trueSpeed(const HTMLMarqueeElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("trueSpeed")));
}


void HTMLMarqueeElement_set_trueSpeed(HTMLMarqueeElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("trueSpeed"), em_Val_from(value));
}


unsigned long HTMLMarqueeElement_vspace(const HTMLMarqueeElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("vspace")));
}


void HTMLMarqueeElement_set_vspace(HTMLMarqueeElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("vspace"), em_Val_from(value));
}


jb_String HTMLMarqueeElement_width(const HTMLMarqueeElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLMarqueeElement_set_width(HTMLMarqueeElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_Undefined HTMLMarqueeElement_start(HTMLMarqueeElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "start"));
}


jb_Undefined HTMLMarqueeElement_stop(HTMLMarqueeElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stop"));
}

