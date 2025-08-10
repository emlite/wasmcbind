#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FontFaceDescriptors, em_Val);

jb_String FontFaceDescriptors_style(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_style(FontFaceDescriptors* self, jb_String * value);

jb_String FontFaceDescriptors_weight(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_weight(FontFaceDescriptors* self, jb_String * value);

jb_String FontFaceDescriptors_stretch(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_stretch(FontFaceDescriptors* self, jb_String * value);

jb_String FontFaceDescriptors_unicodeRange(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_unicodeRange(FontFaceDescriptors* self, jb_String * value);

jb_String FontFaceDescriptors_featureSettings(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_featureSettings(FontFaceDescriptors* self, jb_String * value);

jb_String FontFaceDescriptors_variationSettings(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_variationSettings(FontFaceDescriptors* self, jb_String * value);

jb_String FontFaceDescriptors_display(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_display(FontFaceDescriptors* self, jb_String * value);

jb_String FontFaceDescriptors_ascentOverride(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_ascentOverride(FontFaceDescriptors* self, jb_String * value);

jb_String FontFaceDescriptors_descentOverride(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_descentOverride(FontFaceDescriptors* self, jb_String * value);

jb_String FontFaceDescriptors_lineGapOverride(const FontFaceDescriptors *self);

void FontFaceDescriptors_set_lineGapOverride(FontFaceDescriptors* self, jb_String * value);

FontFaceDescriptors FontFaceDescriptors_new();

#ifdef __cplusplus
}
#endif
