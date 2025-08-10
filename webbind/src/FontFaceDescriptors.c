#include <webbind/FontFaceDescriptors.h>

DEFINE_EMLITE_TYPE(FontFaceDescriptors, em_Val);


jb_String FontFaceDescriptors_style(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("style")));
}


void FontFaceDescriptors_set_style(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("style"), em_Val_from(value));
}


jb_String FontFaceDescriptors_weight(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("weight")));
}


void FontFaceDescriptors_set_weight(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("weight"), em_Val_from(value));
}


jb_String FontFaceDescriptors_stretch(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stretch")));
}


void FontFaceDescriptors_set_stretch(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stretch"), em_Val_from(value));
}


jb_String FontFaceDescriptors_unicodeRange(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unicodeRange")));
}


void FontFaceDescriptors_set_unicodeRange(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unicodeRange"), em_Val_from(value));
}


jb_String FontFaceDescriptors_featureSettings(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("featureSettings")));
}


void FontFaceDescriptors_set_featureSettings(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("featureSettings"), em_Val_from(value));
}


jb_String FontFaceDescriptors_variationSettings(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("variationSettings")));
}


void FontFaceDescriptors_set_variationSettings(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("variationSettings"), em_Val_from(value));
}


jb_String FontFaceDescriptors_display(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("display")));
}


void FontFaceDescriptors_set_display(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("display"), em_Val_from(value));
}


jb_String FontFaceDescriptors_ascentOverride(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ascentOverride")));
}


void FontFaceDescriptors_set_ascentOverride(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ascentOverride"), em_Val_from(value));
}


jb_String FontFaceDescriptors_descentOverride(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("descentOverride")));
}


void FontFaceDescriptors_set_descentOverride(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("descentOverride"), em_Val_from(value));
}


jb_String FontFaceDescriptors_lineGapOverride(const FontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineGapOverride")));
}


void FontFaceDescriptors_set_lineGapOverride(FontFaceDescriptors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineGapOverride"), em_Val_from(value));
}


FontFaceDescriptors FontFaceDescriptors_new() {
    em_Val obj = em_Val_object();
    return FontFaceDescriptors_from_val(&obj);
}

