#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct FontFace FontFace;
typedef struct FontFaceFeatures FontFaceFeatures;
typedef struct FontFaceVariations FontFaceVariations;
typedef struct FontFacePalettes FontFacePalettes;


typedef struct {
  em_Val inner;
} FontFace;


DECLARE_EMLITE_TYPE(FontFace, em_Val);

FontFace FontFace_new(const jb_CSSOMString* family, const jb_Any* source);

FontFace FontFace_new(const jb_CSSOMString* family, const jb_Any* source, const jb_Any* descriptors);

jb_CSSOMString FontFace_family( const FontFace *self);

void FontFace_set_family(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_style( const FontFace *self);

void FontFace_set_style(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_weight( const FontFace *self);

void FontFace_set_weight(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_stretch( const FontFace *self);

void FontFace_set_stretch(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_unicodeRange( const FontFace *self);

void FontFace_set_unicodeRange(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_featureSettings( const FontFace *self);

void FontFace_set_featureSettings(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_variationSettings( const FontFace *self);

void FontFace_set_variationSettings(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_display( const FontFace *self);

void FontFace_set_display(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_ascentOverride( const FontFace *self);

void FontFace_set_ascentOverride(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_descentOverride( const FontFace *self);

void FontFace_set_descentOverride(FontFace* self, const jb_CSSOMString* value);

jb_CSSOMString FontFace_lineGapOverride( const FontFace *self);

void FontFace_set_lineGapOverride(FontFace* self, const jb_CSSOMString* value);

FontFaceLoadStatus FontFace_status( const FontFace *self);

jb_Promise FontFace_load(FontFace* self );

jb_Promise FontFace_loaded( const FontFace *self);

FontFaceFeatures FontFace_features( const FontFace *self);

FontFaceVariations FontFace_variations( const FontFace *self);

FontFacePalettes FontFace_palettes( const FontFace *self);
