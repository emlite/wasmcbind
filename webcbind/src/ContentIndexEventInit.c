#include <webcbind/ContentIndexEventInit.h>

DEFINE_EMLITE_TYPE(ContentIndexEventInit, ExtendableEventInit);


jb_String ContentIndexEventInit_id(const ContentIndexEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("id")));
}


void ContentIndexEventInit_set_id(ContentIndexEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


ContentIndexEventInit ContentIndexEventInit_new() {
    em_Val obj = em_Val_object();
    return ContentIndexEventInit_from_val(&obj);
}

