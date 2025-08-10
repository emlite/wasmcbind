#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

DECLARE_EMLITE_TYPE(CropTarget, em_Val);

jb_Promise CropTarget_fromElement(CropTarget* self , Element * element);

#ifdef __cplusplus
}
#endif
