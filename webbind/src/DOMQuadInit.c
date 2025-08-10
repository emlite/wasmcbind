#include <webbind/DOMQuadInit.h>

DEFINE_EMLITE_TYPE(DOMQuadInit, em_Val);


DOMPointInit DOMQuadInit_p1(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p1")));
}


void DOMQuadInit_set_p1(DOMQuadInit* self, DOMPointInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("p1"), em_Val_from(value));
}


DOMPointInit DOMQuadInit_p2(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p2")));
}


void DOMQuadInit_set_p2(DOMQuadInit* self, DOMPointInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("p2"), em_Val_from(value));
}


DOMPointInit DOMQuadInit_p3(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p3")));
}


void DOMQuadInit_set_p3(DOMQuadInit* self, DOMPointInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("p3"), em_Val_from(value));
}


DOMPointInit DOMQuadInit_p4(const DOMQuadInit *self) {
    return em_Val_as(DOMPointInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p4")));
}


void DOMQuadInit_set_p4(DOMQuadInit* self, DOMPointInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("p4"), em_Val_from(value));
}


DOMQuadInit DOMQuadInit_new() {
    em_Val obj = em_Val_object();
    return DOMQuadInit_from_val(&obj);
}

