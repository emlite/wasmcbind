#include <webcbind/CustomEventInit.h>

DEFINE_EMLITE_TYPE(CustomEventInit, EventInit);


jb_Any CustomEventInit_detail(const CustomEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("detail")));
}


void CustomEventInit_set_detail(CustomEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("detail"), em_Val_from(value));
}


CustomEventInit CustomEventInit_new() {
    em_Val obj = em_Val_object();
    return CustomEventInit_from_val(&obj);
}

