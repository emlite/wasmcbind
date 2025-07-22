#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ColorSelectionResult ColorSelectionResult;
typedef struct ColorSelectionOptions ColorSelectionOptions;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} ColorSelectionResult;


DECLARE_EMLITE_TYPE(ColorSelectionResult, em_Val);

jb_DOMString ColorSelectionResult_sRGBHex( const ColorSelectionResult *self);

void ColorSelectionResult_set_sRGBHex(ColorSelectionResult* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} ColorSelectionOptions;


DECLARE_EMLITE_TYPE(ColorSelectionOptions, em_Val);

AbortSignal ColorSelectionOptions_signal( const ColorSelectionOptions *self);

void ColorSelectionOptions_set_signal(ColorSelectionOptions* self, const AbortSignal* value);
typedef struct {
  em_Val inner;
} EyeDropper;


DECLARE_EMLITE_TYPE(EyeDropper, em_Val);

EyeDropper EyeDropper_new();

jb_Promise EyeDropper_open(EyeDropper* self );

jb_Promise EyeDropper_open(EyeDropper* self , const ColorSelectionOptions* options);
