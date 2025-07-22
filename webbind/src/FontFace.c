#include <webbind/FontFace.h>
#include <webbind/FontFaceFeatures.h>
#include <webbind/FontFaceVariations.h>
#include <webbind/FontFacePalettes.h>


DEFINE_EMLITE_TYPE(FontFace, em_Val);


FontFace FontFace_new(const jb_CSSOMString* family, const jb_Any* source) : em_Val(em_Val_global("FontFace").new_(em_Val_from(family), em_Val_from(source))) {
        return FontFace(em_Val_new(em_Val_global("FontFace", em_Val_from(family), em_Val_from(source)));
      }


FontFace FontFace_new(const jb_CSSOMString* family, const jb_Any* source, const jb_Any* descriptors) : em_Val(em_Val_global("FontFace").new_(em_Val_from(family), em_Val_from(source), em_Val_from(descriptors))) {
        return FontFace(em_Val_new(em_Val_global("FontFace", em_Val_from(family), em_Val_from(source), em_Val_from(descriptors)));
      }


jb_CSSOMString FontFace_family(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "family"));
}


void FontFace_set_family(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "family", value);
}


jb_CSSOMString FontFace_style(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "style"));
}


void FontFace_set_style(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "style", value);
}


jb_CSSOMString FontFace_weight(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "weight"));
}


void FontFace_set_weight(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "weight", value);
}


jb_CSSOMString FontFace_stretch(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "stretch"));
}


void FontFace_set_stretch(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "stretch", value);
}


jb_CSSOMString FontFace_unicodeRange(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "unicodeRange"));
}


void FontFace_set_unicodeRange(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "unicodeRange", value);
}


jb_CSSOMString FontFace_featureSettings(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "featureSettings"));
}


void FontFace_set_featureSettings(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "featureSettings", value);
}


jb_CSSOMString FontFace_variationSettings(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "variationSettings"));
}


void FontFace_set_variationSettings(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "variationSettings", value);
}


jb_CSSOMString FontFace_display(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "display"));
}


void FontFace_set_display(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "display", value);
}


jb_CSSOMString FontFace_ascentOverride(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "ascentOverride"));
}


void FontFace_set_ascentOverride(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "ascentOverride", value);
}


jb_CSSOMString FontFace_descentOverride(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "descentOverride"));
}


void FontFace_set_descentOverride(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "descentOverride", value);
}


jb_CSSOMString FontFace_lineGapOverride(const FontFace *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(em_Val_as_val(self->inner), "lineGapOverride"));
}


void FontFace_set_lineGapOverride(FontFace* self, const jb_CSSOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "lineGapOverride", value);
}


FontFaceLoadStatus FontFace_status(const FontFace *self) {
    return em_Val_as(FontFaceLoadStatus, em_Val_get(em_Val_as_val(self->inner), "status"));
}


jb_Promise FontFace_load(FontFace* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "load"));
}


jb_Promise FontFace_loaded(const FontFace *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "loaded"));
}


FontFaceFeatures FontFace_features(const FontFace *self) {
    return em_Val_as(FontFaceFeatures, em_Val_get(em_Val_as_val(self->inner), "features"));
}


FontFaceVariations FontFace_variations(const FontFace *self) {
    return em_Val_as(FontFaceVariations, em_Val_get(em_Val_as_val(self->inner), "variations"));
}


FontFacePalettes FontFace_palettes(const FontFace *self) {
    return em_Val_as(FontFacePalettes, em_Val_get(em_Val_as_val(self->inner), "palettes"));
}

