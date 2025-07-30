#include <webbind/CSSFontFaceDescriptors.h>


DEFINE_EMLITE_TYPE(CSSFontFaceDescriptors, CSSStyleDeclaration);


jb_String CSSFontFaceDescriptors_src(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("src")));
}


void CSSFontFaceDescriptors_set_src(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontFamily(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontFamily")));
}


void CSSFontFaceDescriptors_set_fontFamily(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontFamily"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_family(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-family")));
}


void CSSFontFaceDescriptors_set_font_family(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-family"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontStyle(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontStyle")));
}


void CSSFontFaceDescriptors_set_fontStyle(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontStyle"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_style(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-style")));
}


void CSSFontFaceDescriptors_set_font_style(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-style"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontWeight(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontWeight")));
}


void CSSFontFaceDescriptors_set_fontWeight(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontWeight"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_weight(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-weight")));
}


void CSSFontFaceDescriptors_set_font_weight(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-weight"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontStretch(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontStretch")));
}


void CSSFontFaceDescriptors_set_fontStretch(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontStretch"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_stretch(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-stretch")));
}


void CSSFontFaceDescriptors_set_font_stretch(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-stretch"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontWidth(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontWidth")));
}


void CSSFontFaceDescriptors_set_fontWidth(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontWidth"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_width(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-width")));
}


void CSSFontFaceDescriptors_set_font_width(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-width"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontSize(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontSize")));
}


void CSSFontFaceDescriptors_set_fontSize(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontSize"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_size(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-size")));
}


void CSSFontFaceDescriptors_set_font_size(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-size"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_sizeAdjust(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("sizeAdjust")));
}


void CSSFontFaceDescriptors_set_sizeAdjust(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("sizeAdjust"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_size_adjust(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("size-adjust")));
}


void CSSFontFaceDescriptors_set_size_adjust(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("size-adjust"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_unicodeRange(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("unicodeRange")));
}


void CSSFontFaceDescriptors_set_unicodeRange(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("unicodeRange"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_unicode_range(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("unicode-range")));
}


void CSSFontFaceDescriptors_set_unicode_range(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("unicode-range"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontFeatureSettings(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontFeatureSettings")));
}


void CSSFontFaceDescriptors_set_fontFeatureSettings(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontFeatureSettings"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_feature_settings(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-feature-settings")));
}


void CSSFontFaceDescriptors_set_font_feature_settings(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-feature-settings"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontVariationSettings(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontVariationSettings")));
}


void CSSFontFaceDescriptors_set_fontVariationSettings(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontVariationSettings"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_variation_settings(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-variation-settings")));
}


void CSSFontFaceDescriptors_set_font_variation_settings(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-variation-settings"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontNamedInstance(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontNamedInstance")));
}


void CSSFontFaceDescriptors_set_fontNamedInstance(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontNamedInstance"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_named_instance(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-named-instance")));
}


void CSSFontFaceDescriptors_set_font_named_instance(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-named-instance"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontDisplay(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontDisplay")));
}


void CSSFontFaceDescriptors_set_fontDisplay(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontDisplay"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_display(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-display")));
}


void CSSFontFaceDescriptors_set_font_display(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-display"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_fontLanguageOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontLanguageOverride")));
}


void CSSFontFaceDescriptors_set_fontLanguageOverride(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("fontLanguageOverride"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_font_language_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-language-override")));
}


void CSSFontFaceDescriptors_set_font_language_override(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("font-language-override"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_ascentOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("ascentOverride")));
}


void CSSFontFaceDescriptors_set_ascentOverride(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("ascentOverride"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_ascent_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("ascent-override")));
}


void CSSFontFaceDescriptors_set_ascent_override(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("ascent-override"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_descentOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("descentOverride")));
}


void CSSFontFaceDescriptors_set_descentOverride(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("descentOverride"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_descent_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("descent-override")));
}


void CSSFontFaceDescriptors_set_descent_override(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("descent-override"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_lineGapOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("lineGapOverride")));
}


void CSSFontFaceDescriptors_set_lineGapOverride(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("lineGapOverride"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_line_gap_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("line-gap-override")));
}


void CSSFontFaceDescriptors_set_line_gap_override(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("line-gap-override"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_superscriptPositionOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("superscriptPositionOverride")));
}


void CSSFontFaceDescriptors_set_superscriptPositionOverride(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("superscriptPositionOverride"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_superscript_position_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("superscript-position-override")));
}


void CSSFontFaceDescriptors_set_superscript_position_override(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("superscript-position-override"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_subscriptPositionOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("subscriptPositionOverride")));
}


void CSSFontFaceDescriptors_set_subscriptPositionOverride(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("subscriptPositionOverride"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_subscript_position_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("subscript-position-override")));
}


void CSSFontFaceDescriptors_set_subscript_position_override(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("subscript-position-override"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_superscriptSizeOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("superscriptSizeOverride")));
}


void CSSFontFaceDescriptors_set_superscriptSizeOverride(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("superscriptSizeOverride"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_superscript_size_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("superscript-size-override")));
}


void CSSFontFaceDescriptors_set_superscript_size_override(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("superscript-size-override"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_subscriptSizeOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("subscriptSizeOverride")));
}


void CSSFontFaceDescriptors_set_subscriptSizeOverride(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("subscriptSizeOverride"), em_Val_from(value));
}


jb_String CSSFontFaceDescriptors_subscript_size_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("subscript-size-override")));
}


void CSSFontFaceDescriptors_set_subscript_size_override(CSSFontFaceDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("subscript-size-override"), em_Val_from(value));
}

