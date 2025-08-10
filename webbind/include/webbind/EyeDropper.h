#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ColorSelectionResult ColorSelectionResult;
typedef struct ColorSelectionOptions ColorSelectionOptions;

DECLARE_EMLITE_TYPE(EyeDropper, em_Val);

EyeDropper EyeDropper_new();

jb_Promise EyeDropper_open0(EyeDropper* self );

jb_Promise EyeDropper_open1(EyeDropper* self , ColorSelectionOptions * options);

#ifdef __cplusplus
}
#endif
