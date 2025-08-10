#include <webbind/WheelEventInit.h>

DEFINE_EMLITE_TYPE(WheelEventInit, MouseEventInit);


double WheelEventInit_deltaX(const WheelEventInit *self) {
    return em_Val_as(double, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("deltaX")));
}


void WheelEventInit_set_deltaX(WheelEventInit* self, double value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("deltaX"), em_Val_from(value));
}


double WheelEventInit_deltaY(const WheelEventInit *self) {
    return em_Val_as(double, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("deltaY")));
}


void WheelEventInit_set_deltaY(WheelEventInit* self, double value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("deltaY"), em_Val_from(value));
}


double WheelEventInit_deltaZ(const WheelEventInit *self) {
    return em_Val_as(double, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("deltaZ")));
}


void WheelEventInit_set_deltaZ(WheelEventInit* self, double value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("deltaZ"), em_Val_from(value));
}


unsigned long WheelEventInit_deltaMode(const WheelEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(MouseEventInit_as_val(self->inner), em_Val_from("deltaMode")));
}


void WheelEventInit_set_deltaMode(WheelEventInit* self, unsigned long value) {
    em_Val_set(MouseEventInit_as_val(self->inner), em_Val_from("deltaMode"), em_Val_from(value));
}


WheelEventInit WheelEventInit_new() {
    em_Val obj = em_Val_object();
    return WheelEventInit_from_val(&obj);
}

