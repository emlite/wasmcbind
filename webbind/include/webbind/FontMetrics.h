#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Baseline Baseline;
typedef struct Font Font;


DECLARE_EMLITE_TYPE(FontMetrics, em_Val);

double FontMetrics_width( const FontMetrics *self);

jb_FrozenArray FontMetrics_advances( const FontMetrics *self);

double FontMetrics_boundingBoxLeft( const FontMetrics *self);

double FontMetrics_boundingBoxRight( const FontMetrics *self);

double FontMetrics_height( const FontMetrics *self);

double FontMetrics_emHeightAscent( const FontMetrics *self);

double FontMetrics_emHeightDescent( const FontMetrics *self);

double FontMetrics_boundingBoxAscent( const FontMetrics *self);

double FontMetrics_boundingBoxDescent( const FontMetrics *self);

double FontMetrics_fontBoundingBoxAscent( const FontMetrics *self);

double FontMetrics_fontBoundingBoxDescent( const FontMetrics *self);

Baseline FontMetrics_dominantBaseline( const FontMetrics *self);

jb_FrozenArray FontMetrics_baselines( const FontMetrics *self);

jb_FrozenArray FontMetrics_fonts( const FontMetrics *self);
