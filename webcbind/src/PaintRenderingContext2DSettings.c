#include <webcbind/PaintRenderingContext2DSettings.h>

DEFINE_EMLITE_TYPE(PaintRenderingContext2DSettings, em_Val);


bool PaintRenderingContext2DSettings_alpha(const PaintRenderingContext2DSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void PaintRenderingContext2DSettings_set_alpha(PaintRenderingContext2DSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


PaintRenderingContext2DSettings PaintRenderingContext2DSettings_new() {
    em_Val obj = em_Val_object();
    return PaintRenderingContext2DSettings_from_val(&obj);
}

