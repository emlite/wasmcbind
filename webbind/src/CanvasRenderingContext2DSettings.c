#include <webbind/CanvasRenderingContext2DSettings.h>

DEFINE_EMLITE_TYPE(CanvasRenderingContext2DSettings, em_Val);


bool CanvasRenderingContext2DSettings_alpha(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void CanvasRenderingContext2DSettings_set_alpha(CanvasRenderingContext2DSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


bool CanvasRenderingContext2DSettings_desynchronized(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("desynchronized")));
}


void CanvasRenderingContext2DSettings_set_desynchronized(CanvasRenderingContext2DSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("desynchronized"), em_Val_from(value));
}


PredefinedColorSpace CanvasRenderingContext2DSettings_colorSpace(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


void CanvasRenderingContext2DSettings_set_colorSpace(CanvasRenderingContext2DSettings* self, PredefinedColorSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


CanvasColorType CanvasRenderingContext2DSettings_colorType(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(CanvasColorType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorType")));
}


void CanvasRenderingContext2DSettings_set_colorType(CanvasRenderingContext2DSettings* self, CanvasColorType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorType"), em_Val_from(value));
}


bool CanvasRenderingContext2DSettings_willReadFrequently(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("willReadFrequently")));
}


void CanvasRenderingContext2DSettings_set_willReadFrequently(CanvasRenderingContext2DSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("willReadFrequently"), em_Val_from(value));
}


CanvasRenderingContext2DSettings CanvasRenderingContext2DSettings_new() {
    em_Val obj = em_Val_object();
    return CanvasRenderingContext2DSettings_from_val(&obj);
}

