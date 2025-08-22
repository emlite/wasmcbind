#include <webcbind/Lock.h>

DEFINE_EMLITE_TYPE(Lock, em_Val);


jb_String Lock_name(const Lock *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


LockMode Lock_mode(const Lock *self) {
    return em_Val_as(LockMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}

