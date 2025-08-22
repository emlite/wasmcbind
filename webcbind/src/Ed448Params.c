#include <webcbind/Ed448Params.h>

DEFINE_EMLITE_TYPE(Ed448Params, Algorithm);


jb_Any Ed448Params_context(const Ed448Params *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("context")));
}


void Ed448Params_set_context(Ed448Params* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("context"), em_Val_from(value));
}


Ed448Params Ed448Params_new() {
    em_Val obj = em_Val_object();
    return Ed448Params_from_val(&obj);
}

