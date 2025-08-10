#include <webbind/Point2D.h>

DEFINE_EMLITE_TYPE(Point2D, em_Val);


double Point2D_x(const Point2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


void Point2D_set_x(Point2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


double Point2D_y(const Point2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


void Point2D_set_y(Point2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


Point2D Point2D_new() {
    em_Val obj = em_Val_object();
    return Point2D_from_val(&obj);
}

