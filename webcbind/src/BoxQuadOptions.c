#include <webcbind/BoxQuadOptions.h>

DEFINE_EMLITE_TYPE(BoxQuadOptions, em_Val);


CSSBoxType BoxQuadOptions_box(const BoxQuadOptions *self) {
    return em_Val_as(CSSBoxType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("box")));
}


void BoxQuadOptions_set_box(BoxQuadOptions* self, CSSBoxType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("box"), em_Val_from(value));
}


jb_Any BoxQuadOptions_relativeTo(const BoxQuadOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("relativeTo")));
}


void BoxQuadOptions_set_relativeTo(BoxQuadOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("relativeTo"), em_Val_from(value));
}


BoxQuadOptions BoxQuadOptions_new() {
    em_Val obj = em_Val_object();
    return BoxQuadOptions_from_val(&obj);
}

