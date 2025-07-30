#include <webbind/FontFace.h>
#include <webbind/FontFaceFeatures.h>
#include <webbind/FontFaceVariations.h>
#include <webbind/FontFacePalettes.h>


DEFINE_EMLITE_TYPE(FontFace, em_Val);


FontFace FontFace_new0(jb_String * family, jb_Any * source) {
        em_Val vv = em_Val_new(em_Val_global("FontFace") , em_Val_from(family), em_Val_from(source));
        return FontFace_from_val(&vv);
      }


FontFace FontFace_new1(jb_String * family, jb_Any * source, jb_Any * descriptors) {
        em_Val vv = em_Val_new(em_Val_global("FontFace") , em_Val_from(family), em_Val_from(source), em_Val_from(descriptors));
        return FontFace_from_val(&vv);
      }


jb_String FontFace_family(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("family")));
}


void FontFace_set_family(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("family"), em_Val_from(value));
}


jb_String FontFace_style(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("style")));
}


void FontFace_set_style(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("style"), em_Val_from(value));
}


jb_String FontFace_weight(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("weight")));
}


void FontFace_set_weight(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("weight"), em_Val_from(value));
}


jb_String FontFace_stretch(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stretch")));
}


void FontFace_set_stretch(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stretch"), em_Val_from(value));
}


jb_String FontFace_unicodeRange(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unicodeRange")));
}


void FontFace_set_unicodeRange(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unicodeRange"), em_Val_from(value));
}


jb_String FontFace_featureSettings(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("featureSettings")));
}


void FontFace_set_featureSettings(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("featureSettings"), em_Val_from(value));
}


jb_String FontFace_variationSettings(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("variationSettings")));
}


void FontFace_set_variationSettings(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("variationSettings"), em_Val_from(value));
}


jb_String FontFace_display(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("display")));
}


void FontFace_set_display(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("display"), em_Val_from(value));
}


jb_String FontFace_ascentOverride(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ascentOverride")));
}


void FontFace_set_ascentOverride(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ascentOverride"), em_Val_from(value));
}


jb_String FontFace_descentOverride(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("descentOverride")));
}


void FontFace_set_descentOverride(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("descentOverride"), em_Val_from(value));
}


jb_String FontFace_lineGapOverride(const FontFace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineGapOverride")));
}


void FontFace_set_lineGapOverride(FontFace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineGapOverride"), em_Val_from(value));
}


FontFaceLoadStatus FontFace_status(const FontFace *self) {
    return em_Val_as(FontFaceLoadStatus, em_Val_get(em_Val_as_val(self->inner), em_Val_from("status")));
}


jb_Promise FontFace_load(FontFace* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "load"));
}


jb_Promise FontFace_loaded(const FontFace *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("loaded")));
}


FontFaceFeatures FontFace_features(const FontFace *self) {
    return em_Val_as(FontFaceFeatures, em_Val_get(em_Val_as_val(self->inner), em_Val_from("features")));
}


FontFaceVariations FontFace_variations(const FontFace *self) {
    return em_Val_as(FontFaceVariations, em_Val_get(em_Val_as_val(self->inner), em_Val_from("variations")));
}


FontFacePalettes FontFace_palettes(const FontFace *self) {
    return em_Val_as(FontFacePalettes, em_Val_get(em_Val_as_val(self->inner), em_Val_from("palettes")));
}

