#include <webcbind/PlaneLayout.h>

DEFINE_EMLITE_TYPE(PlaneLayout, em_Val);


unsigned long PlaneLayout_offset(const PlaneLayout *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void PlaneLayout_set_offset(PlaneLayout* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


unsigned long PlaneLayout_stride(const PlaneLayout *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stride")));
}


void PlaneLayout_set_stride(PlaneLayout* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stride"), em_Val_from(value));
}


PlaneLayout PlaneLayout_new() {
    em_Val obj = em_Val_object();
    return PlaneLayout_from_val(&obj);
}

