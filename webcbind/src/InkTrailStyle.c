#include <webcbind/InkTrailStyle.h>

DEFINE_EMLITE_TYPE(InkTrailStyle, em_Val);


jb_String InkTrailStyle_color(const InkTrailStyle *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("color")));
}


void InkTrailStyle_set_color(InkTrailStyle* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("color"), em_Val_from(value));
}


double InkTrailStyle_diameter(const InkTrailStyle *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("diameter")));
}


void InkTrailStyle_set_diameter(InkTrailStyle* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("diameter"), em_Val_from(value));
}


InkTrailStyle InkTrailStyle_new() {
    em_Val obj = em_Val_object();
    return InkTrailStyle_from_val(&obj);
}

