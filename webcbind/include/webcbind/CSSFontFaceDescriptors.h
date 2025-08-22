#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSStyleDeclaration.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSFontFaceDescriptors
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceDescriptors)
 */
DECLARE_EMLITE_TYPE(CSSFontFaceDescriptors, CSSStyleDeclaration);

/**
 * @brief Gets the `src` property. 
*/
jb_String CSSFontFaceDescriptors_src(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `src` property. 
*/
void CSSFontFaceDescriptors_set_src(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontFamily` property. 
*/
jb_String CSSFontFaceDescriptors_fontFamily(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontFamily` property. 
*/
void CSSFontFaceDescriptors_set_fontFamily(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-family` property. 
*/
jb_String CSSFontFaceDescriptors_font_family(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-family` property. 
*/
void CSSFontFaceDescriptors_set_font_family(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontStyle` property. 
*/
jb_String CSSFontFaceDescriptors_fontStyle(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontStyle` property. 
*/
void CSSFontFaceDescriptors_set_fontStyle(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-style` property. 
*/
jb_String CSSFontFaceDescriptors_font_style(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-style` property. 
*/
void CSSFontFaceDescriptors_set_font_style(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontWeight` property. 
*/
jb_String CSSFontFaceDescriptors_fontWeight(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontWeight` property. 
*/
void CSSFontFaceDescriptors_set_fontWeight(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-weight` property. 
*/
jb_String CSSFontFaceDescriptors_font_weight(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-weight` property. 
*/
void CSSFontFaceDescriptors_set_font_weight(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontStretch` property. 
*/
jb_String CSSFontFaceDescriptors_fontStretch(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontStretch` property. 
*/
void CSSFontFaceDescriptors_set_fontStretch(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-stretch` property. 
*/
jb_String CSSFontFaceDescriptors_font_stretch(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-stretch` property. 
*/
void CSSFontFaceDescriptors_set_font_stretch(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontWidth` property. 
*/
jb_String CSSFontFaceDescriptors_fontWidth(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontWidth` property. 
*/
void CSSFontFaceDescriptors_set_fontWidth(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-width` property. 
*/
jb_String CSSFontFaceDescriptors_font_width(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-width` property. 
*/
void CSSFontFaceDescriptors_set_font_width(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontSize` property. 
*/
jb_String CSSFontFaceDescriptors_fontSize(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontSize` property. 
*/
void CSSFontFaceDescriptors_set_fontSize(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-size` property. 
*/
jb_String CSSFontFaceDescriptors_font_size(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-size` property. 
*/
void CSSFontFaceDescriptors_set_font_size(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `sizeAdjust` property. 
*/
jb_String CSSFontFaceDescriptors_sizeAdjust(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `sizeAdjust` property. 
*/
void CSSFontFaceDescriptors_set_sizeAdjust(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `size-adjust` property. 
*/
jb_String CSSFontFaceDescriptors_size_adjust(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `size-adjust` property. 
*/
void CSSFontFaceDescriptors_set_size_adjust(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `unicodeRange` property. 
*/
jb_String CSSFontFaceDescriptors_unicodeRange(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `unicodeRange` property. 
*/
void CSSFontFaceDescriptors_set_unicodeRange(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `unicode-range` property. 
*/
jb_String CSSFontFaceDescriptors_unicode_range(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `unicode-range` property. 
*/
void CSSFontFaceDescriptors_set_unicode_range(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontFeatureSettings` property. 
*/
jb_String CSSFontFaceDescriptors_fontFeatureSettings(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontFeatureSettings` property. 
*/
void CSSFontFaceDescriptors_set_fontFeatureSettings(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-feature-settings` property. 
*/
jb_String CSSFontFaceDescriptors_font_feature_settings(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-feature-settings` property. 
*/
void CSSFontFaceDescriptors_set_font_feature_settings(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontVariationSettings` property. 
*/
jb_String CSSFontFaceDescriptors_fontVariationSettings(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontVariationSettings` property. 
*/
void CSSFontFaceDescriptors_set_fontVariationSettings(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-variation-settings` property. 
*/
jb_String CSSFontFaceDescriptors_font_variation_settings(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-variation-settings` property. 
*/
void CSSFontFaceDescriptors_set_font_variation_settings(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontNamedInstance` property. 
*/
jb_String CSSFontFaceDescriptors_fontNamedInstance(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontNamedInstance` property. 
*/
void CSSFontFaceDescriptors_set_fontNamedInstance(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-named-instance` property. 
*/
jb_String CSSFontFaceDescriptors_font_named_instance(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-named-instance` property. 
*/
void CSSFontFaceDescriptors_set_font_named_instance(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontDisplay` property. 
*/
jb_String CSSFontFaceDescriptors_fontDisplay(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontDisplay` property. 
*/
void CSSFontFaceDescriptors_set_fontDisplay(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-display` property. 
*/
jb_String CSSFontFaceDescriptors_font_display(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-display` property. 
*/
void CSSFontFaceDescriptors_set_font_display(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `fontLanguageOverride` property. 
*/
jb_String CSSFontFaceDescriptors_fontLanguageOverride(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `fontLanguageOverride` property. 
*/
void CSSFontFaceDescriptors_set_fontLanguageOverride(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `font-language-override` property. 
*/
jb_String CSSFontFaceDescriptors_font_language_override(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `font-language-override` property. 
*/
void CSSFontFaceDescriptors_set_font_language_override(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `ascentOverride` property. 
*/
jb_String CSSFontFaceDescriptors_ascentOverride(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `ascentOverride` property. 
*/
void CSSFontFaceDescriptors_set_ascentOverride(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `ascent-override` property. 
*/
jb_String CSSFontFaceDescriptors_ascent_override(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `ascent-override` property. 
*/
void CSSFontFaceDescriptors_set_ascent_override(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `descentOverride` property. 
*/
jb_String CSSFontFaceDescriptors_descentOverride(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `descentOverride` property. 
*/
void CSSFontFaceDescriptors_set_descentOverride(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `descent-override` property. 
*/
jb_String CSSFontFaceDescriptors_descent_override(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `descent-override` property. 
*/
void CSSFontFaceDescriptors_set_descent_override(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `lineGapOverride` property. 
*/
jb_String CSSFontFaceDescriptors_lineGapOverride(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `lineGapOverride` property. 
*/
void CSSFontFaceDescriptors_set_lineGapOverride(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `line-gap-override` property. 
*/
jb_String CSSFontFaceDescriptors_line_gap_override(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `line-gap-override` property. 
*/
void CSSFontFaceDescriptors_set_line_gap_override(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `superscriptPositionOverride` property. 
*/
jb_String CSSFontFaceDescriptors_superscriptPositionOverride(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `superscriptPositionOverride` property. 
*/
void CSSFontFaceDescriptors_set_superscriptPositionOverride(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `superscript-position-override` property. 
*/
jb_String CSSFontFaceDescriptors_superscript_position_override(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `superscript-position-override` property. 
*/
void CSSFontFaceDescriptors_set_superscript_position_override(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `subscriptPositionOverride` property. 
*/
jb_String CSSFontFaceDescriptors_subscriptPositionOverride(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `subscriptPositionOverride` property. 
*/
void CSSFontFaceDescriptors_set_subscriptPositionOverride(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `subscript-position-override` property. 
*/
jb_String CSSFontFaceDescriptors_subscript_position_override(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `subscript-position-override` property. 
*/
void CSSFontFaceDescriptors_set_subscript_position_override(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `superscriptSizeOverride` property. 
*/
jb_String CSSFontFaceDescriptors_superscriptSizeOverride(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `superscriptSizeOverride` property. 
*/
void CSSFontFaceDescriptors_set_superscriptSizeOverride(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `superscript-size-override` property. 
*/
jb_String CSSFontFaceDescriptors_superscript_size_override(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `superscript-size-override` property. 
*/
void CSSFontFaceDescriptors_set_superscript_size_override(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `subscriptSizeOverride` property. 
*/
jb_String CSSFontFaceDescriptors_subscriptSizeOverride(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `subscriptSizeOverride` property. 
*/
void CSSFontFaceDescriptors_set_subscriptSizeOverride(CSSFontFaceDescriptors* self, jb_String * value);

/**
 * @brief Gets the `subscript-size-override` property. 
*/
jb_String CSSFontFaceDescriptors_subscript_size_override(const CSSFontFaceDescriptors *self);

/**
 * @brief Sets the `subscript-size-override` property. 
*/
void CSSFontFaceDescriptors_set_subscript_size_override(CSSFontFaceDescriptors* self, jb_String * value);

#ifdef __cplusplus
}
#endif
