#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ColorSelectionResult ColorSelectionResult;
typedef struct ColorSelectionOptions ColorSelectionOptions;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(ColorSelectionResult, em_Val);

jb_DOMString ColorSelectionResult_sRGBHex( const ColorSelectionResult *self);

void ColorSelectionResult_set_sRGBHex(ColorSelectionResult* self, jb_DOMString * value);
DECLARE_EMLITE_TYPE(ColorSelectionOptions, em_Val);

AbortSignal ColorSelectionOptions_signal( const ColorSelectionOptions *self);

void ColorSelectionOptions_set_signal(ColorSelectionOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(EyeDropper, em_Val);

EyeDropper EyeDropper_new();

jb_Promise EyeDropper_open0(EyeDropper* self );

jb_Promise EyeDropper_open1(EyeDropper* self , ColorSelectionOptions * options);
