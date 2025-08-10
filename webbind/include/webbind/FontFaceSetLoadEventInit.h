#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FontFace FontFace;

DECLARE_EMLITE_TYPE(FontFaceSetLoadEventInit, EventInit);

jb_Array FontFaceSetLoadEventInit_fontfaces(const FontFaceSetLoadEventInit *self);

void FontFaceSetLoadEventInit_set_fontfaces(FontFaceSetLoadEventInit* self, jb_Array * value);

FontFaceSetLoadEventInit FontFaceSetLoadEventInit_new();

#ifdef __cplusplus
}
#endif
