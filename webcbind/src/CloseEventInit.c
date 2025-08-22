#include <webcbind/CloseEventInit.h>

DEFINE_EMLITE_TYPE(CloseEventInit, EventInit);


bool CloseEventInit_wasClean(const CloseEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("wasClean")));
}


void CloseEventInit_set_wasClean(CloseEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("wasClean"), em_Val_from(value));
}


unsigned short CloseEventInit_code(const CloseEventInit *self) {
    return em_Val_as(unsigned short, em_Val_get(EventInit_as_val(self->inner), em_Val_from("code")));
}


void CloseEventInit_set_code(CloseEventInit* self, unsigned short value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("code"), em_Val_from(value));
}


jb_String CloseEventInit_reason(const CloseEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("reason")));
}


void CloseEventInit_set_reason(CloseEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("reason"), em_Val_from(value));
}


CloseEventInit CloseEventInit_new() {
    em_Val obj = em_Val_object();
    return CloseEventInit_from_val(&obj);
}

