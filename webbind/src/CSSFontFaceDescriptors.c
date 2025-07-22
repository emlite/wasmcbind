#include <webbind/CSSFontFaceDescriptors.h>


DEFINE_EMLITE_TYPE(CSSFontFaceDescriptors, CSSStyleDeclaration);


jb_CSSOMString CSSFontFaceDescriptors_src(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "src"));
}


void CSSFontFaceDescriptors_set_src(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "src", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontFamily(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontFamily"));
}


void CSSFontFaceDescriptors_set_fontFamily(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontFamily", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_family(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-family"));
}


void CSSFontFaceDescriptors_set_font_family(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-family", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontStyle(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontStyle"));
}


void CSSFontFaceDescriptors_set_fontStyle(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontStyle", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_style(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-style"));
}


void CSSFontFaceDescriptors_set_font_style(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-style", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontWeight(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontWeight"));
}


void CSSFontFaceDescriptors_set_fontWeight(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontWeight", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_weight(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-weight"));
}


void CSSFontFaceDescriptors_set_font_weight(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-weight", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontStretch(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontStretch"));
}


void CSSFontFaceDescriptors_set_fontStretch(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontStretch", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_stretch(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-stretch"));
}


void CSSFontFaceDescriptors_set_font_stretch(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-stretch", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontWidth(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontWidth"));
}


void CSSFontFaceDescriptors_set_fontWidth(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontWidth", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_width(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-width"));
}


void CSSFontFaceDescriptors_set_font_width(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-width", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontSize(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontSize"));
}


void CSSFontFaceDescriptors_set_fontSize(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontSize", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_size(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-size"));
}


void CSSFontFaceDescriptors_set_font_size(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-size", value);
}


jb_CSSOMString CSSFontFaceDescriptors_sizeAdjust(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "sizeAdjust"));
}


void CSSFontFaceDescriptors_set_sizeAdjust(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "sizeAdjust", value);
}


jb_CSSOMString CSSFontFaceDescriptors_size_adjust(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "size-adjust"));
}


void CSSFontFaceDescriptors_set_size_adjust(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "size-adjust", value);
}


jb_CSSOMString CSSFontFaceDescriptors_unicodeRange(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "unicodeRange"));
}


void CSSFontFaceDescriptors_set_unicodeRange(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "unicodeRange", value);
}


jb_CSSOMString CSSFontFaceDescriptors_unicode_range(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "unicode-range"));
}


void CSSFontFaceDescriptors_set_unicode_range(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "unicode-range", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontFeatureSettings(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontFeatureSettings"));
}


void CSSFontFaceDescriptors_set_fontFeatureSettings(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontFeatureSettings", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_feature_settings(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-feature-settings"));
}


void CSSFontFaceDescriptors_set_font_feature_settings(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-feature-settings", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontVariationSettings(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontVariationSettings"));
}


void CSSFontFaceDescriptors_set_fontVariationSettings(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontVariationSettings", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_variation_settings(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-variation-settings"));
}


void CSSFontFaceDescriptors_set_font_variation_settings(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-variation-settings", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontNamedInstance(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontNamedInstance"));
}


void CSSFontFaceDescriptors_set_fontNamedInstance(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontNamedInstance", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_named_instance(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-named-instance"));
}


void CSSFontFaceDescriptors_set_font_named_instance(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-named-instance", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontDisplay(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontDisplay"));
}


void CSSFontFaceDescriptors_set_fontDisplay(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontDisplay", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_display(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-display"));
}


void CSSFontFaceDescriptors_set_font_display(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-display", value);
}


jb_CSSOMString CSSFontFaceDescriptors_fontLanguageOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "fontLanguageOverride"));
}


void CSSFontFaceDescriptors_set_fontLanguageOverride(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "fontLanguageOverride", value);
}


jb_CSSOMString CSSFontFaceDescriptors_font_language_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "font-language-override"));
}


void CSSFontFaceDescriptors_set_font_language_override(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "font-language-override", value);
}


jb_CSSOMString CSSFontFaceDescriptors_ascentOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "ascentOverride"));
}


void CSSFontFaceDescriptors_set_ascentOverride(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "ascentOverride", value);
}


jb_CSSOMString CSSFontFaceDescriptors_ascent_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "ascent-override"));
}


void CSSFontFaceDescriptors_set_ascent_override(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "ascent-override", value);
}


jb_CSSOMString CSSFontFaceDescriptors_descentOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "descentOverride"));
}


void CSSFontFaceDescriptors_set_descentOverride(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "descentOverride", value);
}


jb_CSSOMString CSSFontFaceDescriptors_descent_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "descent-override"));
}


void CSSFontFaceDescriptors_set_descent_override(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "descent-override", value);
}


jb_CSSOMString CSSFontFaceDescriptors_lineGapOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "lineGapOverride"));
}


void CSSFontFaceDescriptors_set_lineGapOverride(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "lineGapOverride", value);
}


jb_CSSOMString CSSFontFaceDescriptors_line_gap_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "line-gap-override"));
}


void CSSFontFaceDescriptors_set_line_gap_override(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "line-gap-override", value);
}


jb_CSSOMString CSSFontFaceDescriptors_superscriptPositionOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "superscriptPositionOverride"));
}


void CSSFontFaceDescriptors_set_superscriptPositionOverride(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "superscriptPositionOverride", value);
}


jb_CSSOMString CSSFontFaceDescriptors_superscript_position_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "superscript-position-override"));
}


void CSSFontFaceDescriptors_set_superscript_position_override(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "superscript-position-override", value);
}


jb_CSSOMString CSSFontFaceDescriptors_subscriptPositionOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "subscriptPositionOverride"));
}


void CSSFontFaceDescriptors_set_subscriptPositionOverride(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "subscriptPositionOverride", value);
}


jb_CSSOMString CSSFontFaceDescriptors_subscript_position_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "subscript-position-override"));
}


void CSSFontFaceDescriptors_set_subscript_position_override(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "subscript-position-override", value);
}


jb_CSSOMString CSSFontFaceDescriptors_superscriptSizeOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "superscriptSizeOverride"));
}


void CSSFontFaceDescriptors_set_superscriptSizeOverride(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "superscriptSizeOverride", value);
}


jb_CSSOMString CSSFontFaceDescriptors_superscript_size_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "superscript-size-override"));
}


void CSSFontFaceDescriptors_set_superscript_size_override(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "superscript-size-override", value);
}


jb_CSSOMString CSSFontFaceDescriptors_subscriptSizeOverride(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "subscriptSizeOverride"));
}


void CSSFontFaceDescriptors_set_subscriptSizeOverride(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "subscriptSizeOverride", value);
}


jb_CSSOMString CSSFontFaceDescriptors_subscript_size_override(const CSSFontFaceDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "subscript-size-override"));
}


void CSSFontFaceDescriptors_set_subscript_size_override(CSSFontFaceDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "subscript-size-override", value);
}

