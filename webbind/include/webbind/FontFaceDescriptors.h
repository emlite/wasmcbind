#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FontFaceDescriptors */
DECLARE_EMLITE_TYPE(FontFaceDescriptors, em_Val);

/** @brief Getter of the style property */
jb_String FontFaceDescriptors_style(const FontFaceDescriptors *self);

/** @brief Setter of the style property */
void FontFaceDescriptors_set_style(FontFaceDescriptors* self, jb_String * value);

/** @brief Getter of the weight property */
jb_String FontFaceDescriptors_weight(const FontFaceDescriptors *self);

/** @brief Setter of the weight property */
void FontFaceDescriptors_set_weight(FontFaceDescriptors* self, jb_String * value);

/** @brief Getter of the stretch property */
jb_String FontFaceDescriptors_stretch(const FontFaceDescriptors *self);

/** @brief Setter of the stretch property */
void FontFaceDescriptors_set_stretch(FontFaceDescriptors* self, jb_String * value);

/** @brief Getter of the unicodeRange property */
jb_String FontFaceDescriptors_unicodeRange(const FontFaceDescriptors *self);

/** @brief Setter of the unicodeRange property */
void FontFaceDescriptors_set_unicodeRange(FontFaceDescriptors* self, jb_String * value);

/** @brief Getter of the featureSettings property */
jb_String FontFaceDescriptors_featureSettings(const FontFaceDescriptors *self);

/** @brief Setter of the featureSettings property */
void FontFaceDescriptors_set_featureSettings(FontFaceDescriptors* self, jb_String * value);

/** @brief Getter of the variationSettings property */
jb_String FontFaceDescriptors_variationSettings(const FontFaceDescriptors *self);

/** @brief Setter of the variationSettings property */
void FontFaceDescriptors_set_variationSettings(FontFaceDescriptors* self, jb_String * value);

/** @brief Getter of the display property */
jb_String FontFaceDescriptors_display(const FontFaceDescriptors *self);

/** @brief Setter of the display property */
void FontFaceDescriptors_set_display(FontFaceDescriptors* self, jb_String * value);

/** @brief Getter of the ascentOverride property */
jb_String FontFaceDescriptors_ascentOverride(const FontFaceDescriptors *self);

/** @brief Setter of the ascentOverride property */
void FontFaceDescriptors_set_ascentOverride(FontFaceDescriptors* self, jb_String * value);

/** @brief Getter of the descentOverride property */
jb_String FontFaceDescriptors_descentOverride(const FontFaceDescriptors *self);

/** @brief Setter of the descentOverride property */
void FontFaceDescriptors_set_descentOverride(FontFaceDescriptors* self, jb_String * value);

/** @brief Getter of the lineGapOverride property */
jb_String FontFaceDescriptors_lineGapOverride(const FontFaceDescriptors *self);

/** @brief Setter of the lineGapOverride property */
void FontFaceDescriptors_set_lineGapOverride(FontFaceDescriptors* self, jb_String * value);

/** @brief Constructor of the FontFaceDescriptors dictionary type */
FontFaceDescriptors FontFaceDescriptors_new();

#ifdef __cplusplus
}
#endif
